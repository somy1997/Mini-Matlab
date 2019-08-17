%{
    #include "ass4_15CS30044_translator.h"
    void yyerror(const char*);
    extern int yylex(void);
    using namespace std;
%}


%union{
    basic_value value;
    matrix_row *rowval;
    string *str;
    arglistStr argsl; //to define the argumnets list
    int instr;  // to defin the type used by M->(epsilon)
    expresn expon;   // to define the structure of expression
    list *nextlist;  //to define the nextlist type for N->(epsilon)
    bool isPointer;
    vector< expresn > *symlist;
    char charval; 
}

%token BREAK CASE CHAR CONTINUE DEFAULT DO DOUBLE ELSE
%token FLOAT FOR GOTO IF INT LONG RETURN SHORT SIGNED SWITCH
%token UNSIGNED VOID WHILE BOOL MATRIX
%token POINTER INCREMENT DECREMENT LEFT_SHIFT RIGHT_SHIFT LESS_EQUALS GREATER_EQUALS EQUALS NOT_EQUALS
%token AND OR MULTIPLY_ASSIGN DIVIDE_ASSIGN MODULO_ASSIGN ADD_ASSIGN SUBTRACT_ASSIGN
%token LEFT_SHIFT_ASSIGN RIGHT_SHIFT_ASSIGN AND_ASSIGN XOR_ASSIGN OR_ASSIGN SINGLE_LINE_COMMENT MULTI_LINE_COMMENT DASH
%token <str> IDENTIFIER  
%token <value> INTEGER_CONSTANT FLOATING_CONSTANT CHAR_CONST
%token <strval> STRING_LITERAL

%type <expon> primary_expression postfix_expression unary_expression cast_expression multiplicative_expression additive_expression shift_expression relational_expression equality_expression AND_expression exclusive_OR_expression inclusive_OR_expression logical_AND_expression logical_OR_expression conditional_expression assignment_expression_opt assignment_expression constant_expression expression expression_statement expression_opt declarator direct_declarator initializer initializer_row_list declaration init_declarator_list init_declarator_list_opt init_declarator selection_expression selection_expression_opt parameter_declaration
%type <nextlist> block_item_list block_item statement labeled_statement compound_statement selection_statement iteration_statement jump_statement block_item_list_opt
%type <argsl> argument_expression_list argument_expression_list_opt
%type <rowval> initializer_row
%type <instr>       M
%type <nextlist>    N
%type <charval>     unary_operator
%type <isPointer>	pointer pointer_opt
%type <symlist>		parameter_list parameter_type_list

%start translation_unit

%left '+' '-'
%left '*' '/' '%'
%nonassoc UNARY

%%
M:
{
    $$ = next_instr;
};

N:
{
    $$ = makelist(next_instr);
    glob_quad.emit(Q_GOTO, "-1");
};

/*Expressions*/
primary_expression:             IDENTIFIER 
								{
		                                //Check whether its a function
		                                symdata * check_func = glob_st->search(*$1);
		                                if(check_func == NULL)
		                                {
		                                    $$.loc  =  curr_st->search(*$1);
		                                    if($$.loc == NULL)
		                                    {
		                                    	printf("ERROR : Using variable %s without declaration",$1->c_str());
		                                    	exit(-1);
		                                    }
		                                }
		                                else
		                                {
		                                    // It is a function
		                                    $$.loc = check_func;
		                                }
                                }|
                                INTEGER_CONSTANT 
                                {
		                                // Declare and initialize the value of the temporary variable with the integer
		                                $$.loc  = curr_st->gentemp(tp_int);         
		                                $$.loc->setbasic($1);
		                                glob_quad.emit(Q_ASSIGN, $1.i, $$.loc->name);
                				}|
                                FLOATING_CONSTANT 
                                {
		                                // Declare and initialize the value of the temporary variable with the floatval
		                                $$.loc  = curr_st->gentemp(tp_double);         
		                                $$.loc->setbasic($1);
		                                glob_quad.emit(Q_ASSIGN, $1.d, $$.loc->name);
                                }|
                                CHAR_CONST 
                                {
		                            	// Declare and initialize the value of the temporary variable with the character
		                            	$$.loc  = curr_st->gentemp(tp_char);         
		                                $$.loc->setbasic($1);
		                                glob_quad.emit(Q_ASSIGN, $1.c, $$.loc->name);
                                }|
                                STRING_LITERAL 
                                {
                                
                                }|
                                '(' expression ')' 
                                {
                                		$$ = $2;
                                };


postfix_expression :            primary_expression {
                                                         $$ = $1;
                                                    } |
                                postfix_expression '[' expression ']' '[' expression ']' {                                  // handle matrices
                                                                        //Explanation of Array handling
                                                                        if($1.loc->tp != tp_matrix)
                                                                        {
                                                                        	printf("ERROR : %s is not a matrix",$1.loc->name.c_str());
                                                                        	exit(-1);
                                                                        }
                                                                        else if($3.loc->init.i >= $1.loc->mat->number_rows || $6.loc->init.i >= $1.loc->mat->number_cols)
                                                                        {
                                                                        	printf("ERROR : Matrix index out of bounds");
                                                                        	exit(-1);
                                                                        }
                                        								symdata *ncols = curr_st->gentemp(tp_int);
                                        								symdata *t = curr_st->gentemp(tp_int);
                                                                        glob_quad.emit(Q_RINDEX,$1.loc->name,str_of_int,ncols->name);
                                                                        glob_quad.emit(Q_MULT,ncols->name,$3.loc->name,t->name);
                                                                        glob_quad.emit(Q_PLUS,t->name,$6.loc->name,t->name);
                                                                        glob_quad.emit(Q_MULT,t->name,str_of_double,t->name);
                                                                        glob_quad.emit(Q_PLUS,t->name,str_of_2_int,t->name);
                                        								$1.do_indexing = true;
                                        								$1.sym_index = t;
                                        								$$ = $1;
                                                                        //$$.arr->tp_n has the full type of the arr which will be used for size calculations
                                                                     } |
                                postfix_expression '(' argument_expression_list_opt ')' {
                                                                                            if($1.loc->tp != tp_func)
                                                                                            {
                                                                                            	printf("ERROR : %s is not a function",$1.loc->name.c_str());
                                                                                            	exit(-1);
                                                                                            }
                                                                                            //Explanation of Function Handling
                                                                                            symdata *ret = $1.loc->nest_tab->symbol_tab[0];
                                                                                            $$.loc = curr_st->gentemp(ret->tp,ret->tp_of_ptr);
                                                                                            //temporary is created 
                                                                                            char str[10];
                                                                                            if($3.arguments == NULL)
                                                                                            {
                                                                                                //No function Parameters
                                                                                                sprintf(str,"0");
                                                                                                glob_quad.emit(Q_CALL,$1.loc->name,str,$$.loc->name);
                                                                                            }
                                                                                            else
                                                                                            {
                                                                                                for(int i=0;i<$3.arguments->size();i++)
                                                                                                {
                                                                                                    // To print the parameters 
                                                                                                    glob_quad.emit(Q_PARAM,(*$3.arguments)[i]->loc->name);
                                                                    							}
                                                                                                sprintf(str,"%ld",$3.arguments->size());
                                                                                                glob_quad.emit(Q_CALL,$1.loc->name,str,$$.loc->name);
                                                                                            }

                                                                                   		} |
                                postfix_expression INCREMENT {
                                                                if($1.do_indexing == true)
                                                                {
                                                                	$1.do_indexing =false;
                                                                	$$.loc = curr_st->gentemp(tp_double);
                                                                	glob_quad.emit(Q_RINDEX,$1.loc->name,$1.sym_index->name,$$.loc->name);
                                                                	symdata *t = curr_st->gentemp(tp_double);
                                                                	glob_quad.emit(Q_PLUS,$$.loc->name,"1",t->name);
                                                                	glob_quad.emit(Q_LINDEX,$1.sym_index->name,t->name,$1.loc->name);
                                                                	$1.sym_index = NULL;
                                                               	}
                                                                else
                                                                {
		                                                            $$.loc = curr_st->gentemp($1.loc->tp,$1.loc->tp_of_ptr);
		                                                            //post increment of an simple element
		                                                            glob_quad.emit(Q_ASSIGN,$1.loc->name,$$.loc->name);
		                                                            glob_quad.emit(Q_PLUS,$1.loc->name,"1",$1.loc->name);
		                                                        }    
                                                             } |
                                postfix_expression DECREMENT {
                                                                if($1.do_indexing == true)
                                                                {
                                                                	$1.do_indexing =false;
                                                                	$$.loc = curr_st->gentemp(tp_double);
                                                                	glob_quad.emit(Q_RINDEX,$1.loc->name,$1.sym_index->name,$$.loc->name);
                                                                	symdata *t = curr_st->gentemp(tp_double);
                                                                	glob_quad.emit(Q_MINUS,$$.loc->name,"1",t->name);
                                                                	glob_quad.emit(Q_LINDEX,$1.sym_index->name,t->name,$1.loc->name);
                                                                	$1.sym_index = NULL;
                                                               	}
                                                               	else
                                                               	{
		                                                            $$.loc = curr_st->gentemp($1.loc->tp,$1.loc->tp_of_ptr);
		                                                            //post decrement of an simple element
		                                                            glob_quad.emit(Q_ASSIGN,$1.loc->name,$$.loc->name);
		                                                            glob_quad.emit(Q_MINUS,$1.loc->name,"1",$1.loc->name);
                                                              	}
                                                              } |
                                postfix_expression DASH {
                                                                if($1.loc->tp == tp_matrix)
                                                                {
                                                                	matrix *op = $1.loc->mat;
                                                                	matrix *t = new matrix;
                                                                	t->number_rows = op->number_cols;
                                                                	t->number_cols = op->number_rows;
                                                                	$$.loc = curr_st -> gentemp(tp_matrix);
                                                                	$$.loc->mat = t;
                                                                	symdata *rows = curr_st -> gentemp(tp_int);
                                                                	symdata *cols = curr_st -> gentemp(tp_int);
                                                                	symdata *t1 = curr_st -> gentemp(tp_int);
                                                                	symdata *t2 = curr_st -> gentemp(tp_int);
                                                                	symdata *t3 = curr_st -> gentemp(tp_double);
                                                                	symdata *i = curr_st -> gentemp(tp_int);
                                                                	symdata *j = curr_st -> gentemp(tp_int);
                                                                	glob_quad.emit(Q_RINDEX,$1.loc->name,"0",rows->name);
                                                                	glob_quad.emit(Q_RINDEX,$1.loc->name,str_of_int,cols->name);
                                                                	glob_quad.emit(Q_LINDEX,"0",cols->name,$$.loc->name);
                                                                	glob_quad.emit(Q_LINDEX,str_of_int,rows->name,$$.loc->name);
                                                                	glob_quad.emit(Q_ASSIGN,2*size_of_int,t1->name);
                                                                	glob_quad.emit(Q_ASSIGN,0,i->name);
                                                                	int dest1 = next_instr;
                                                                	glob_quad.emit(Q_ASSIGN,0,j->name);
                                                                	int dest2 = next_instr;
                                                                	glob_quad.emit(Q_MULT,j->name,rows->name,t2->name);
                                                                	glob_quad.emit(Q_PLUS,t2->name,i->name,t2->name);
                                                                	glob_quad.emit(Q_MULT,t2->name,str_of_double,t2->name);
                                                                	glob_quad.emit(Q_PLUS,t2->name,str_of_2_int,t2->name);
                                                                	glob_quad.emit(Q_RINDEX,$1.loc->name,t1->name,t3->name);
                                                                	glob_quad.emit(Q_LINDEX,t2->name,t3->name,$$.loc->name);
                                                                	glob_quad.emit(Q_PLUS,t1->name,str_of_double,t1->name);
                                                                	glob_quad.emit(Q_PLUS,j->name,"1",j->name);
                                                                	char str[20];
                                                                	int2str(dest2,str);
                                                                	glob_quad.emit(Q_IF_LESS,j->name,cols->name,str);
                                                                	glob_quad.emit(Q_PLUS,i->name,"1",i->name);
                                                                	int2str(dest1,str);
                                                                	glob_quad.emit(Q_IF_LESS,i->name,rows->name,str);                                                                	
                                                                }
                                                                else
														        {
														        	printf("ERROR : %s is not a matrix",$1.loc->name.c_str());
														        	exit(-1);
														       	}
                                                              }; 

argument_expression_list:       assignment_expression {
                                                        $$.arguments = new vector<expresn*>;
                                                        expresn * tex = new expresn($1);
                                                        $$.arguments->push_back(tex);
                                                     }|
                                argument_expression_list ',' assignment_expression {
                                                                                        expresn * tex = new expresn($3);
                                                                                        $$.arguments->push_back(tex);
                                                                                    };

argument_expression_list_opt:   argument_expression_list {
                                                            $$ = $1;
                                                          }|
                                /*epsilon*/ {
                                                $$.arguments = NULL;
                                            };

unary_expression:               postfix_expression {
                                                        $$ = $1;
                                                   }|
                                INCREMENT unary_expression {
                                								if($2.do_indexing == true)
                                                                {
                                                                	$2.do_indexing =false;
                                                                	$$.loc = curr_st->gentemp(tp_double);
                                                                	glob_quad.emit(Q_RINDEX,$2.loc->name,$2.sym_index->name,$$.loc->name);
                                                                	glob_quad.emit(Q_PLUS,$$.loc->name,"1",$$.loc->name);
                                                                	glob_quad.emit(Q_LINDEX,$2.sym_index->name,$$.loc->name,$2.loc->name);
                                                                	$2.sym_index = NULL;
                                                               	}
                                								else
                                								{
		                                                            if($2.do_dereference == true)
		                            								{
		                            									$2.do_dereference=false;
		                            									symdata *temp = curr_st->gentemp($2.loc->tp_of_ptr); //incomplete, what if it is pointer to pointer
		                            									glob_quad.emit(Q_RDEREF,$2.loc->name,temp->name);
		                            									$2.loc = temp;
		                            								}
		                                                            $$.loc = curr_st->gentemp($2.loc->tp,$2.loc->tp_of_ptr);
		                                                            // pre increment
		                                                            glob_quad.emit(Q_PLUS,$2.loc->name,"1",$2.loc->name);
		                                                            glob_quad.emit(Q_ASSIGN,$2.loc->name,$$.loc->name);
		                                                        }
                                                        	}|
                                DECREMENT unary_expression {
                                								if($2.do_indexing == true)
                                                                {
                                                                	$2.do_indexing =false;
                                                                	$$.loc = curr_st->gentemp(tp_double);
                                                                	glob_quad.emit(Q_RINDEX,$2.loc->name,$2.sym_index->name,$$.loc->name);
                                                                	glob_quad.emit(Q_MINUS,$$.loc->name,"1",$$.loc->name);
                                                                	glob_quad.emit(Q_LINDEX,$2.sym_index->name,$$.loc->name,$2.loc->name);
                                                                	$2.sym_index = NULL;
                                                               	}
                                                               	else
                                                               	{
		                            								if($2.do_dereference == true)
		                            								{
		                            									$2.do_dereference=false;
		                            									symdata *temp = curr_st->gentemp($2.loc->tp_of_ptr); //incomplete, what if it is pointer to pointer
		                            									glob_quad.emit(Q_RDEREF,$2.loc->name,temp->name);
		                            									$2.loc = temp;
		                            								}
		                                                            $$.loc = curr_st->gentemp($2.loc->tp,$2.loc->tp_of_ptr);
		                                                            // pre decrement
		                                                            glob_quad.emit(Q_MINUS,$2.loc->name,"1",$2.loc->name);
		                                                            glob_quad.emit(Q_ASSIGN,$2.loc->name,$$.loc->name);
		                                                       	}
                                                            }|
                                unary_operator cast_expression
                                                                {
                                                                    //type_n * temp_type;
                                                                    switch($1)
                                                                    {
                                                                        case '&':
                                                                            //create a temporary type store the type
                                                                            $$.loc = curr_st->gentemp(tp_ptr,$2.loc->tp);   //incomplete   
                                                                            glob_quad.emit(Q_ADDR,$2.loc->name,$$.loc->name);
                                                                            break;
                                                                        case '*':
                                                                            //incomplete
                                                                            $2.do_dereference = true;
                                                                            $$ = $2;
                                                                            break;
                                                                        case '+':
                                                                            $$.loc = curr_st->gentemp($2.loc->tp,$2.loc->tp_of_ptr);
                                                                            glob_quad.emit(Q_ASSIGN,$2.loc->name,$$.loc->name);
                                                                            break;
                                                                        case '-':
                                                                            $$.loc = curr_st->gentemp($2.loc->tp,$2.loc->tp_of_ptr);
                                                                            glob_quad.emit(Q_UNARY_MINUS,$2.loc->name,$$.loc->name);
                                                                            break;
                                                                        case '~':
                                                                            /*Bitwise Not to be implemented Later on*/
                                                                            $$.loc = curr_st->gentemp($2.loc->tp,$2.loc->tp_of_ptr);
                                                                            glob_quad.emit(Q_COMPLEMENT,$2.loc->name,$$.loc->name);
                                                                            break;
                                                                        case '!':
                                                                            $$.loc = curr_st->gentemp($2.loc->tp,$2.loc->tp_of_ptr);
                                                                            glob_quad.emit(Q_NOT,$2.loc->name,$$.loc->name);
                                                                            $$.truelist = $2.falselist;
                                                                            $$.falselist = $2.truelist;
                                                                            break;
                                                                        default:
                                                                            break;
                                                                    }
                                                                };

unary_operator  :               '&' {
                                        $$ = '&';
                                    }|
                                '*' {
                                        $$ = '*';
                                    }|
                                '+' {
                                        $$ = '+';
                                    }|
                                '-' {
                                        $$ = '-';
                                    }|
                                '~' {
                                        $$ = '~';
                                    }|
                                '!' {
                                        $$ = '!';
                                    };

cast_expression :               unary_expression {
                                                    if($1.do_indexing == true)
                                                    {
                                                    	$1.do_indexing =false;
                                                    	symdata *temp = curr_st->gentemp(tp_double);
                                                    	glob_quad.emit(Q_RINDEX,$1.loc->name,$1.sym_index->name,temp->name);
                                                    	$1.sym_index = NULL;
                                                    	$1.loc = temp;
                                                   	}
                                                    else if($1.do_dereference == true)
                    								{
                    									$1.do_dereference=false;
                    									symdata *temp = curr_st->gentemp($1.loc->tp_of_ptr); //incomplete, what if it is pointer to pointer
                    									glob_quad.emit(Q_RDEREF,$1.loc->name,temp->name);
                    									$1.loc = temp;
                    								}
                                                    $$ = $1;
                                                };

multiplicative_expression:      cast_expression {
                                                    $$ = $1;
                                                }|
                                multiplicative_expression '*' cast_expression {
                                                                                   	if($1.loc->tp == tp_matrix && $3.loc->tp == tp_matrix)
                                                                                    {
                                                                                    	matrix *op1 = $1.loc->mat;
                                                                                    	matrix *op2 = $3.loc->mat;
                                                                                    	matrix *t = new matrix;
                                                                                    	if(op1->number_cols != op2->number_rows)
                                                                                    	{
                                                                                    		printf("ERROR : Matrices are not dimensionally compatible for multiplication");
                                                                                    		exit(-1);
                                                                                    	}
                                                                                    	t->number_rows = op1->number_rows;
                                                                                    	t->number_cols = op2->number_cols;
                                                                                    	$$.loc = curr_st -> gentemp(tp_matrix);
                                                                                    	$$.loc->mat = t;                                         //size not updated
                                                                                    	symdata *rows = curr_st -> gentemp(tp_int);
                                                                                    	symdata *cols = curr_st -> gentemp(tp_int);
                                                                                    	symdata *cells = curr_st ->gentemp(tp_int);
                                                                                    	symdata *i = curr_st -> gentemp(tp_int);
                                                                                    	symdata *j = curr_st -> gentemp(tp_int);
                                                                                    	symdata *k = curr_st -> gentemp(tp_int);
                                                                                    	symdata *t1 = curr_st -> gentemp(tp_int);
                                                                                    	symdata *t2 = curr_st -> gentemp(tp_int);
                                                                                    	symdata *t3 = curr_st -> gentemp(tp_int);
                                                                                    	symdata *t4 = curr_st -> gentemp(tp_double);
                                                                                    	symdata *t5 = curr_st -> gentemp(tp_double);
                                                                                    	
                                                                                    	glob_quad.emit(Q_RINDEX,$1.loc->name,"0",rows->name);
                                                                                    	glob_quad.emit(Q_LINDEX,"0",rows->name,$$.loc->name);
                                                                                    	glob_quad.emit(Q_RINDEX,$3.loc->name,str_of_int,cols->name);
                                                                                    	glob_quad.emit(Q_LINDEX,str_of_int,cols->name,$$.loc->name);
                                                                                    	glob_quad.emit(Q_RINDEX,$1.loc->name,str_of_int,cells->name);
                                                                                    	glob_quad.emit(Q_ASSIGN,0,i->name);
                                                                                    	int dest1 = next_instr;
                                                                                    	glob_quad.emit(Q_ASSIGN,0,j->name);
                                                                                    	int dest2 = next_instr;
                                                                                    	
                                                                                    	glob_quad.emit(Q_MULT,i->name,cols->name,t1->name);
                                                                                    	glob_quad.emit(Q_PLUS,t1->name,j->name,t1->name);
                                                                                    	glob_quad.emit(Q_MULT,t1->name,str_of_double,t1->name);
                                                                                    	glob_quad.emit(Q_PLUS,t1->name,str_of_2_int,t1->name);
                                                                                    	glob_quad.emit(Q_LINDEX,t1->name,"0",$$.loc->name);
                                                                                    	glob_quad.emit(Q_ASSIGN,0,k->name);
                                                                                    	int dest3 = next_instr;
                                                                                    	
                                                                                    	glob_quad.emit(Q_MULT,i->name,cells->name,t2->name);
                                                                                    	glob_quad.emit(Q_PLUS,t2->name,k->name,t2->name);
                                                                                    	glob_quad.emit(Q_MULT,t2->name,str_of_double,t2->name);
                                                                                    	glob_quad.emit(Q_PLUS,t2->name,str_of_2_int,t2->name);
                                                                                    	
                                                                                    	glob_quad.emit(Q_MULT,k->name,cols->name,t3->name);
                                                                                    	glob_quad.emit(Q_PLUS,t3->name,j->name,t3->name);
                                                                                    	glob_quad.emit(Q_MULT,t3->name,str_of_double,t3->name);
                                                                                    	glob_quad.emit(Q_PLUS,t3->name,str_of_2_int,t3->name);
                                                                                    	
                                                                                    	glob_quad.emit(Q_RINDEX,$1.loc->name,t2->name,t4->name);
                                                                                    	glob_quad.emit(Q_RINDEX,$3.loc->name,t3->name,t5->name);
                                                                                    	glob_quad.emit(Q_MULT,t4->name,t5->name,t4->name);
                                                                                    	glob_quad.emit(Q_RINDEX,$$.loc->name,t1->name,t5->name);
                                                                                    	glob_quad.emit(Q_PLUS,t4->name,t5->name,t4->name);
                                                                                    	glob_quad.emit(Q_LINDEX,t1->name,t4->name,$$.loc->name);
                                                                                    	
                                                                                    	char str[20];
                                                                                    	glob_quad.emit(Q_PLUS,k->name,"1",k->name);
                                                                                    	int2str(dest3,str);
                                                                                    	glob_quad.emit(Q_IF_LESS,k->name,cells->name,str);
                                                                                    	
                                                                                    	glob_quad.emit(Q_PLUS,j->name,"1",j->name);
                                                                                    	int2str(dest2,str);
                                                                                    	glob_quad.emit(Q_IF_LESS,j->name,cols->name,str);
                                                                                    	
                                                                                    	glob_quad.emit(Q_PLUS,i->name,"1",i->name);
                                                                                    	int2str(dest1,str);
                                                                                    	glob_quad.emit(Q_IF_LESS,i->name,rows->name,str);
                                                                                    }
                                                                                   	else if($1.loc->tp == tp_matrix && $3.loc->tp != tp_matrix)
                                                                                    {
                                                                                    	matrix *op = $1.loc->mat;
                                                                                    	matrix *t = new matrix;
                                                                                    	t->number_rows = op->number_rows;
                                                                                    	t->number_cols = op->number_cols;
                                                                                    	$$.loc = curr_st -> gentemp(tp_matrix);
                                                                                    	$$.loc->mat = t;
                                                                                    	symdata *rows = curr_st -> gentemp(tp_int);
                                                                                    	symdata *cols = curr_st -> gentemp(tp_int);
                                                                                    	symdata *t1 = curr_st -> gentemp(tp_int);
                                                                                    	symdata *t2 = curr_st -> gentemp(tp_int);
                                                                                    	symdata *t3 = curr_st -> gentemp(tp_int);
                                                                                    	symdata *t4 = curr_st -> gentemp(tp_double);
                                                                                    	glob_quad.emit(Q_RINDEX,$1.loc->name,"0",rows->name);
                                                                                    	glob_quad.emit(Q_LINDEX,"0",rows->name,$$.loc->name);
                                                                                    	glob_quad.emit(Q_RINDEX,$1.loc->name,str_of_int,cols->name);
                                                                                    	glob_quad.emit(Q_LINDEX,str_of_int,cols->name,$$.loc->name);
                                                                                    	glob_quad.emit(Q_ASSIGN,2*size_of_int,t1->name);
                                                                                    	glob_quad.emit(Q_MULT,rows->name,cols->name,t2->name);
                                                                                    	glob_quad.emit(Q_ASSIGN,0,t3->name);
                                                                                    	int dest = next_instr;
                                                                                    	glob_quad.emit(Q_RINDEX,$1.loc->name,t1->name,t4->name);
                                                                                    	glob_quad.emit(Q_MULT,t4->name,$3.loc->name,t4->name);
                                                                                    	glob_quad.emit(Q_LINDEX,t1->name,t4->name,$$.loc->name);
                                                                                    	glob_quad.emit(Q_PLUS,t3->name,"1",t3->name);
                                                                                    	glob_quad.emit(Q_PLUS,t1->name,str_of_double,t1->name);
                                                                                    	char str[20];
                                                                                    	int2str(dest,str);
                                                                                    	glob_quad.emit(Q_IF_LESS,t3->name,t2->name,str);
                                                                                    }
                                                                                    else
                                                                                    {
		                                                                                typecheck(&$1,&$3);
		                                                                                $$.loc = curr_st->gentemp($1.loc->tp,$1.loc->tp_of_ptr);
		                                                                                glob_quad.emit(Q_MULT,$1.loc->name,$3.loc->name,$$.loc->name);
                                                                                    }
                                                                              }|
                                multiplicative_expression '/' cast_expression {
		                                                                            if($1.loc->tp == tp_matrix && $3.loc->tp != tp_matrix)
                                                                                    {
                                                                                    	matrix *op = $1.loc->mat;
                                                                                    	matrix *t = new matrix;
                                                                                    	t->number_rows = op->number_rows;
                                                                                    	t->number_cols = op->number_cols;
                                                                                    	$$.loc = curr_st -> gentemp(tp_matrix);
                                                                                    	$$.loc->mat = t;
                                                                                    	symdata *rows = curr_st -> gentemp(tp_int);
                                                                                    	symdata *cols = curr_st -> gentemp(tp_int);
                                                                                    	symdata *t1 = curr_st -> gentemp(tp_int);
                                                                                    	symdata *t2 = curr_st -> gentemp(tp_int);
                                                                                    	symdata *t3 = curr_st -> gentemp(tp_int);
                                                                                    	symdata *t4 = curr_st -> gentemp(tp_double);
                                                                                    	glob_quad.emit(Q_RINDEX,$1.loc->name,"0",rows->name);
                                                                                    	glob_quad.emit(Q_LINDEX,"0",rows->name,$$.loc->name);
                                                                                    	glob_quad.emit(Q_RINDEX,$1.loc->name,str_of_int,cols->name);
                                                                                    	glob_quad.emit(Q_LINDEX,str_of_int,cols->name,$$.loc->name);
                                                                                    	glob_quad.emit(Q_ASSIGN,2*size_of_int,t1->name);
                                                                                    	glob_quad.emit(Q_MULT,rows->name,cols->name,t2->name);
                                                                                    	glob_quad.emit(Q_ASSIGN,0,t3->name);
                                                                                    	int dest = next_instr;
                                                                                    	glob_quad.emit(Q_RINDEX,$1.loc->name,t1->name,t4->name);
                                                                                    	glob_quad.emit(Q_DIVIDE,t4->name,$3.loc->name,t4->name);
                                                                                    	glob_quad.emit(Q_LINDEX,t1->name,t4->name,$$.loc->name);
                                                                                    	glob_quad.emit(Q_PLUS,t3->name,"1",t3->name);
                                                                                    	glob_quad.emit(Q_PLUS,t1->name,str_of_double,t1->name);
                                                                                    	char str[20];
                                                                                    	int2str(dest,str);
                                                                                    	glob_quad.emit(Q_IF_LESS,t3->name,t2->name,str);
                                                                                    }
		                                                                            else
		                                                                            {
		                                                                                typecheck(&$1,&$3);
		                                                                                $$.loc = curr_st->gentemp($1.loc->tp,$1.loc->tp_of_ptr);
		                                                                                glob_quad.emit(Q_DIVIDE,$1.loc->name,$3.loc->name,$$.loc->name);
		                                                                            }
                                                                              }|
                                multiplicative_expression '%' cast_expression{
		                                                                            if($1.loc->tp == tp_matrix && $3.loc->tp != tp_matrix)
                                                                                    {
                                                                                    	matrix *op = $1.loc->mat;
                                                                                    	matrix *t = new matrix;
                                                                                    	t->number_rows = op->number_rows;
                                                                                    	t->number_cols = op->number_cols;
                                                                                    	$$.loc = curr_st -> gentemp(tp_matrix);
                                                                                    	$$.loc->mat = t;
                                                                                    	symdata *rows = curr_st -> gentemp(tp_int);
                                                                                    	symdata *cols = curr_st -> gentemp(tp_int);
                                                                                    	symdata *t1 = curr_st -> gentemp(tp_int);
                                                                                    	symdata *t2 = curr_st -> gentemp(tp_int);
                                                                                    	symdata *t3 = curr_st -> gentemp(tp_int);
                                                                                    	symdata *t4 = curr_st -> gentemp(tp_double);
                                                                                    	glob_quad.emit(Q_RINDEX,$1.loc->name,"0",rows->name);
                                                                                    	glob_quad.emit(Q_LINDEX,"0",rows->name,$$.loc->name);
                                                                                    	glob_quad.emit(Q_RINDEX,$1.loc->name,str_of_int,cols->name);
                                                                                    	glob_quad.emit(Q_LINDEX,str_of_int,cols->name,$$.loc->name);
                                                                                    	glob_quad.emit(Q_ASSIGN,2*size_of_int,t1->name);
                                                                                    	glob_quad.emit(Q_MULT,rows->name,cols->name,t2->name);
                                                                                    	glob_quad.emit(Q_ASSIGN,0,t3->name);
                                                                                    	int dest = next_instr;
                                                                                    	glob_quad.emit(Q_RINDEX,$1.loc->name,t1->name,t4->name);
                                                                                    	glob_quad.emit(Q_MODULO,t4->name,$3.loc->name,t4->name);
                                                                                    	glob_quad.emit(Q_LINDEX,t1->name,t4->name,$$.loc->name);
                                                                                    	glob_quad.emit(Q_PLUS,t3->name,"1",t3->name);
                                                                                    	glob_quad.emit(Q_PLUS,t1->name,str_of_double,t1->name);
                                                                                    	char str[20];
                                                                                    	int2str(dest,str);
                                                                                    	glob_quad.emit(Q_IF_LESS,t3->name,t2->name,str);
                                                                                    }
		                                                                            else
		                                                                            {
		                                                                                typecheck(&$1,&$3);
		                                                                                $$.loc = curr_st->gentemp($1.loc->tp,$1.loc->tp_of_ptr);
		                                                                                glob_quad.emit(Q_MODULO,$1.loc->name,$3.loc->name,$$.loc->name);
                                                                                    }
                                                                             };

additive_expression :           multiplicative_expression {
                                                                $$ = $1;
                                                          }|
                                additive_expression '+' multiplicative_expression {
                                                                                        if($1.loc->tp == tp_matrix && $3.loc->tp == tp_matrix)
                                                                                        {
                                                                                        	matrix *op1 = $1.loc->mat;
                                                                                        	matrix *op2 = $3.loc->mat;
                                                                                        	matrix *t = new matrix;
                                                                                        	if(op1->number_rows != op2->number_rows)
                                                                                        	{
                                                                                        		printf("ERROR : Matrices are not dimensionally compatible for addition");
                                                                                        		exit(-1);
                                                                                        	}
                                                                                        	if(op1->number_cols != op2->number_cols)
                                                                                        	{
                                                                                        		printf("ERROR : Matrices are not dimensionally compatible for addition");
                                                                                        		exit(-1);
                                                                                        	}
                                                                                        	t->number_rows = op1->number_rows;
                                                                                        	t->number_cols = op1->number_cols;
                                                                                        	$$.loc = curr_st -> gentemp(tp_matrix);
                                                                                        	$$.loc->mat = t;
                                                                                        	symdata *rows = curr_st -> gentemp(tp_int);
                                                                                        	symdata *cols = curr_st -> gentemp(tp_int);
                                                                                        	symdata *t1 = curr_st -> gentemp(tp_int);
                                                                                        	symdata *t2 = curr_st -> gentemp(tp_int);
                                                                                        	symdata *t3 = curr_st -> gentemp(tp_int);
                                                                                        	symdata *t4 = curr_st -> gentemp(tp_double);
                                                                                        	symdata *t5 = curr_st -> gentemp(tp_double);
                                                                                        	glob_quad.emit(Q_RINDEX,$1.loc->name,"0",rows->name);
                                                                                        	glob_quad.emit(Q_LINDEX,"0",rows->name,$$.loc->name);
                                                                                        	glob_quad.emit(Q_RINDEX,$1.loc->name,str_of_int,cols->name);
                                                                                        	glob_quad.emit(Q_LINDEX,str_of_int,cols->name,$$.loc->name);
                                                                                        	glob_quad.emit(Q_ASSIGN,2*size_of_int,t1->name);
                                                                                        	glob_quad.emit(Q_MULT,rows->name,cols->name,t2->name);
                                                                                        	glob_quad.emit(Q_ASSIGN,0,t3->name);
                                                                                        	int dest = next_instr;
                                                                                        	glob_quad.emit(Q_RINDEX,$1.loc->name,t1->name,t4->name);
                                                                                        	glob_quad.emit(Q_RINDEX,$3.loc->name,t1->name,t5->name);
                                                                                        	glob_quad.emit(Q_PLUS,t4->name,t5->name,t4->name);
                                                                                        	glob_quad.emit(Q_LINDEX,t1->name,t4->name,$$.loc->name);
                                                                                        	glob_quad.emit(Q_PLUS,t3->name,"1",t3->name);
                                                                                        	glob_quad.emit(Q_PLUS,t1->name,str_of_double,t1->name);
                                                                                        	char str[20];
                                                                                        	int2str(dest,str);
                                                                                        	glob_quad.emit(Q_IF_LESS,t3->name,t2->name,str);
                                                                                        }
                                                                                        else
                                                                                        {
		                                                                                    typecheck(&$1,&$3);
		                                                                                    $$.loc = curr_st->gentemp($1.loc->tp,$1.loc->tp_of_ptr);
		                                                                                	glob_quad.emit(Q_PLUS,$1.loc->name,$3.loc->name,$$.loc->name);
		                                                                                }
                                                                                  }|
                                additive_expression '-' multiplicative_expression {
                                														if($1.loc->tp == tp_matrix && $3.loc->tp == tp_matrix)
                                                                                        {
                                                                                        	matrix *op1 = $1.loc->mat;
                                                                                        	matrix *op2 = $3.loc->mat;
                                                                                        	matrix *t = new matrix;
                                                                                        	if(op1->number_rows != op2->number_rows)
                                                                                        	{
                                                                                        		printf("ERROR : Matrices are not dimensionally compatible for subtraction");
                                                                                        		exit(-1);
                                                                                        	}
                                                                                        	if(op1->number_cols != op2->number_cols)
                                                                                        	{
                                                                                        		printf("ERROR : Matrices are not dimensionally compatible for subtraction");
                                                                                        		exit(-1);
                                                                                        	}
                                                                                        	t->number_rows = op1->number_rows;
                                                                                        	t->number_cols = op1->number_cols;
                                                                                        	$$.loc = curr_st -> gentemp(tp_matrix);
                                                                                        	$$.loc->mat = t;
                                                                                        	symdata *rows = curr_st -> gentemp(tp_int);
                                                                                        	symdata *cols = curr_st -> gentemp(tp_int);
                                                                                        	symdata *t1 = curr_st -> gentemp(tp_int);
                                                                                        	symdata *t2 = curr_st -> gentemp(tp_int);
                                                                                        	symdata *t3 = curr_st -> gentemp(tp_int);
                                                                                        	symdata *t4 = curr_st -> gentemp(tp_double);
                                                                                        	symdata *t5 = curr_st -> gentemp(tp_double);
                                                                                        	glob_quad.emit(Q_RINDEX,$1.loc->name,"0",rows->name);
                                                                                        	glob_quad.emit(Q_LINDEX,"0",rows->name,$$.loc->name);
                                                                                        	glob_quad.emit(Q_RINDEX,$1.loc->name,str_of_int,cols->name);
                                                                                        	glob_quad.emit(Q_LINDEX,str_of_int,cols->name,$$.loc->name);
                                                                                        	glob_quad.emit(Q_ASSIGN,2*size_of_int,t1->name);
                                                                                        	glob_quad.emit(Q_MULT,rows->name,cols->name,t2->name);
                                                                                        	glob_quad.emit(Q_ASSIGN,0,t3->name);
                                                                                        	int dest = next_instr;
                                                                                        	glob_quad.emit(Q_RINDEX,$1.loc->name,t1->name,t4->name);
                                                                                        	glob_quad.emit(Q_RINDEX,$3.loc->name,t1->name,t5->name);
                                                                                        	glob_quad.emit(Q_MINUS,t4->name,t5->name,t4->name);
                                                                                        	glob_quad.emit(Q_LINDEX,t1->name,t4->name,$$.loc->name);
                                                                                        	glob_quad.emit(Q_PLUS,t3->name,"1",t3->name);
                                                                                        	glob_quad.emit(Q_PLUS,t1->name,str_of_double,t1->name);
                                                                                        	char str[20];
                                                                                        	int2str(dest,str);
                                                                                        	glob_quad.emit(Q_IF_LESS,t3->name,t2->name,str);
                                                                                        }
                                                                                        else
                                                                                        {
		                                                                                    typecheck(&$1,&$3);
		                                                                                    $$.loc = curr_st->gentemp($1.loc->tp,$1.loc->tp_of_ptr);
		                                                                                    glob_quad.emit(Q_MINUS,$1.loc->name,$3.loc->name,$$.loc->name);
                                                                                        }
                                                                                  };

shift_expression:               additive_expression {
                                                        $$ = $1;
                                                    }|
                                shift_expression LEFT_SHIFT additive_expression {
                                                                                    if($3.loc->tp != tp_int)
                                                                                    {
                                                                                    	printf("ERROR : Number of shifts is not an integer");
                                                                                    	exit(-1);
                                                                                    }
                                                                                    $$.loc = curr_st->gentemp($1.loc->tp,$1.loc->tp_of_ptr);
                                                                                    glob_quad.emit(Q_LEFT_OP,$1.loc->name,$3.loc->name,$$.loc->name);
                                                                                }|
                                shift_expression RIGHT_SHIFT additive_expression{
                                                                                    if($3.loc->tp != tp_int)
                                                                                    {
                                                                                    	printf("ERROR : Number of shifts is not an integer");
                                                                                    	exit(-1);
                                                                                    }
                                                                                    $$.loc = curr_st->gentemp($1.loc->tp,$1.loc->tp_of_ptr);
                                                                                    glob_quad.emit(Q_RIGHT_OP,$1.loc->name,$3.loc->name,$$.loc->name);
                                                                                };

relational_expression:          shift_expression {
                                                        $$ = $1;
                                                 }|
                                relational_expression '<' shift_expression {
                                                                                typecheck(&$1,&$3);
                                                                                $$.loc = curr_st->gentemp(tp_bool);
                                                                                glob_quad.emit(Q_LESS,$1.loc->name,$3.loc->name,$$.loc->name);
                                                                                $$.truelist = makelist(next_instr);
                                                                                $$.falselist = makelist(next_instr+1);
                                                                                glob_quad.emit(Q_IF_LESS,$1.loc->name,$3.loc->name,"-1");
                                                                                glob_quad.emit(Q_GOTO,"-1");
                                                                           }|
                                relational_expression '>' shift_expression {
                                                                                typecheck(&$1,&$3);
                                                                                $$.loc = curr_st->gentemp(tp_bool);
                                                                                glob_quad.emit(Q_GREATER,$1.loc->name,$3.loc->name,$$.loc->name);
                                                                                $$.truelist = makelist(next_instr);
                                                                                $$.falselist = makelist(next_instr+1);
                                                                                glob_quad.emit(Q_IF_GREATER,$1.loc->name,$3.loc->name,"-1");
                                                                                glob_quad.emit(Q_GOTO,"-1");
                                                                           }|
                                relational_expression LESS_EQUALS shift_expression {
                                                                                        typecheck(&$1,&$3);
                                                                                        $$.loc = curr_st->gentemp(tp_bool);
                                                                                		glob_quad.emit(Q_LESS_OR_EQUAL,$1.loc->name,$3.loc->name,$$.loc->name);
                                                                                		$$.truelist = makelist(next_instr);
                                                                                        $$.falselist = makelist(next_instr+1);
                                                                                        glob_quad.emit(Q_IF_LESS_OR_EQUAL,$1.loc->name,$3.loc->name,"-1");
                                                                                        glob_quad.emit(Q_GOTO,"-1");
                                                                                    }|
                                relational_expression GREATER_EQUALS shift_expression {
                                                                                            typecheck(&$1,&$3);
                                                                                            $$.loc = curr_st->gentemp(tp_bool);
                                                                                			glob_quad.emit(Q_GREATER_OR_EQUAL,$1.loc->name,$3.loc->name,$$.loc->name);
                                                                                			$$.truelist = makelist(next_instr);
                                                                                            $$.falselist = makelist(next_instr+1);
                                                                                            glob_quad.emit(Q_IF_GREATER_OR_EQUAL,$1.loc->name,$3.loc->name,"-1");
                                                                                            glob_quad.emit(Q_GOTO,"-1");
                                                                                      };

equality_expression:            relational_expression {
                                                            $$ = $1;
                                                      }|
                                equality_expression EQUALS relational_expression {
                                                                                        typecheck(&$1,&$3);
                                                                                        $$.loc = curr_st->gentemp(tp_bool);
                                                                                		glob_quad.emit(Q_EQUAL,$1.loc->name,$3.loc->name,$$.loc->name);
                                                                                		$$.truelist = makelist(next_instr);
                                                                                        $$.falselist = makelist(next_instr+1);
                                                                                        glob_quad.emit(Q_IF_EQUAL,$1.loc->name,$3.loc->name,"-1");
                                                                                        glob_quad.emit(Q_GOTO,"-1");
                                                                                 }|
                                equality_expression NOT_EQUALS relational_expression {
                                                                                            typecheck(&$1,&$3);
                                                                                            $$.loc = curr_st->gentemp(tp_bool);
                                                                                			glob_quad.emit(Q_NOT_EQUAL,$1.loc->name,$3.loc->name,$$.loc->name);
                                                                                			$$.truelist = makelist(next_instr);
                                                                                            $$.falselist = makelist(next_instr+1);
                                                                                            glob_quad.emit(Q_IF_NOT_EQUAL,$1.loc->name,$3.loc->name,"-1");
                                                                                            glob_quad.emit(Q_GOTO,"-1");
                                                                                     };

AND_expression :                equality_expression {
                                                        $$ = $1;
                                                    }|
                                AND_expression '&' equality_expression {
                                                                            $$.loc = curr_st->gentemp(tp_bool);
                                                                            glob_quad.emit(Q_AND,$1.loc->name,$3.loc->name,$$.loc->name);
                                                                        };

exclusive_OR_expression:        AND_expression {
                                                    $$ = $1;
                                               }|
                                exclusive_OR_expression '^' AND_expression {
                                                                                $$.loc = curr_st->gentemp(tp_bool);
                                                                                glob_quad.emit(Q_XOR,$1.loc->name,$3.loc->name,$$.loc->name);
                                                                           };

inclusive_OR_expression:        exclusive_OR_expression {
                                                            $$ = $1;
                                                        }|
                                inclusive_OR_expression '|' exclusive_OR_expression {
                                                                                        $$.loc = curr_st->gentemp(tp_bool);
                                                                                        glob_quad.emit(Q_OR,$1.loc->name,$3.loc->name,$$.loc->name);
                                                                                    };

logical_AND_expression:         inclusive_OR_expression {
                                                            $$ = $1;
                                                        }|
                                logical_AND_expression AND M inclusive_OR_expression {
                                                                                        backpatch($1.truelist,$3);
                                                                                        $$.falselist = merge($1.falselist,$4.falselist);
                                                                                        $$.truelist = $4.truelist;
                                                                                        $$.loc = curr_st->gentemp(tp_bool);
                                                                                        glob_quad.emit(Q_LOG_AND,$1.loc->name,$4.loc->name,$$.loc->name);
                                                                                    };

logical_OR_expression:          logical_AND_expression {
                                                            $$ = $1;
                                                       }|
                                logical_OR_expression OR M logical_AND_expression   {
                                                                                        backpatch($1.falselist,$3);
                                                                                        $$.truelist = merge($1.truelist,$4.truelist);
                                                                                        $$.falselist = $4.falselist;
                                                                                    	$$.loc = curr_st->gentemp(tp_bool);
                                                                                        glob_quad.emit(Q_LOG_OR,$1.loc->name,$4.loc->name,$$.loc->name);
                                                                                    };

/*It is assumed that type of expression and conditional expression are same*/
conditional_expression:         logical_OR_expression {
                                                            $$ = $1;
                                                      }|
                                logical_OR_expression '?' M expression N ':' M conditional_expression {
                                                                                                            backpatch($1.truelist,$3);
                                                                                                            backpatch($1.falselist,$7);
                                                                                                            backpatch($5,next_instr);
                                                                                                            typecheck(&$4,&$8);
                                                                                        					$$.loc = curr_st->gentemp($4.loc->tp,$4.loc->tp_of_ptr);
                                                                                        					list *temp1 = makelist(next_instr);
                                                                                        					glob_quad.emit(Q_IF_EXPRESSION,$1.loc->name,"-1");
                                                                                        					glob_quad.emit(Q_ASSIGN,$8.loc->name,$$.loc->name);
                                                                                        					list *temp2 = makelist(next_instr);
                                                                                        					glob_quad.emit(Q_GOTO,"-1");
                                                                                        					backpatch(temp1,next_instr);
                                                                                        					glob_quad.emit(Q_ASSIGN,$4.loc->name,$$.loc->name);
                                                                                        					backpatch(temp2,next_instr);
                                                                                                        };

assignment_operator:            '='                                                     |
                                MULTIPLY_ASSIGN                                         |
                                DIVIDE_ASSIGN                                           |
                                MODULO_ASSIGN                                           |
                                ADD_ASSIGN                                              |
                                SUBTRACT_ASSIGN                                         |
                                LEFT_SHIFT_ASSIGN                                       |
                                RIGHT_SHIFT_ASSIGN                                      |
                                AND_ASSIGN                                              |
                                XOR_ASSIGN                                              |
                                OR_ASSIGN                                               ;

assignment_expression:          conditional_expression {
                                                            $$ = $1;
                                                        }|
                                unary_expression assignment_operator assignment_expression {
                                                                                                if($1.loc->tp == tp_matrix && $3.loc->tp == tp_matrix)
				                                                                                {
				                                                                                	matrix *op1 = $1.loc->mat;
				                                                                                	matrix *op2 = $3.loc->mat;
				                                                                                	if(op1->number_rows != -1 && op1->number_rows != op2->number_rows)
				                                                                                	{
				                                                                                		printf("ERROR : Matrices are not dimensionally compatible for assignment");
				                                                                                		exit(-1);
				                                                                                	}
				                                                                                	if(op1->number_cols != -1 && op1->number_cols != op2->number_cols)
				                                                                                	{
				                                                                                		printf("ERROR : Matrices are not dimensionally compatible for assignment");
				                                                                                		exit(-1);
				                                                                                	}
				                                                                                	op1->number_rows = op2->number_rows;
				                                                                                	op1->number_cols = op2->number_cols;
				                                                                                	symdata *rows = curr_st -> gentemp(tp_int);
				                                                                                	symdata *cols = curr_st -> gentemp(tp_int);
				                                                                                	symdata *t1 = curr_st -> gentemp(tp_int);
				                                                                                	symdata *t2 = curr_st -> gentemp(tp_int);
				                                                                                	symdata *t3 = curr_st -> gentemp(tp_int);
				                                                                                	symdata *t4 = curr_st -> gentemp(tp_double);
				                                                                                	glob_quad.emit(Q_RINDEX,$1.loc->name,"0",rows->name);
				                                                                                	glob_quad.emit(Q_RINDEX,$1.loc->name,str_of_int,cols->name);
				                                                                                	glob_quad.emit(Q_ASSIGN,2*size_of_int,t1->name);
				                                                                                	glob_quad.emit(Q_MULT,rows->name,cols->name,t2->name);
				                                                                                	glob_quad.emit(Q_ASSIGN,0,t3->name);
				                                                                                	int dest = next_instr;
				                                                                                	glob_quad.emit(Q_RINDEX,$3.loc->name,t1->name,t4->name);
				                                                                                	glob_quad.emit(Q_LINDEX,t1->name,t4->name,$1.loc->name);
				                                                                                	glob_quad.emit(Q_PLUS,t3->name,"1",t3->name);
				                                                                                	glob_quad.emit(Q_PLUS,t1->name,str_of_double,t1->name);
				                                                                                	char str[20];
                                                                                        			int2str(dest,str);
				                                                                                	glob_quad.emit(Q_IF_LESS,t3->name,t2->name,str);
				                                                                                }
                                                                                                else if($1.do_indexing == true)
																						        {
																						        	$1.do_indexing =false;
																						        	glob_quad.emit(Q_LINDEX,$1.sym_index->name,$3.loc->name,$1.loc->name);
																						        	$1.sym_index = NULL;
																						       	}
                                                                                                //LDereferencing
                                                                                                else if($1.do_dereference == true)
																								{
																									$1.do_dereference=false;             //incomplete, what if it is pointer to pointer
																									glob_quad.emit(Q_LDEREF,$3.loc->name,$1.loc->name);
																								}
																								else
																								{
                                                                                                	typecheck(&$1,&$3,true);
                                                                                                    glob_quad.emit(Q_ASSIGN,$3.loc->name,$1.loc->name);
                                                                                                }
                                                                                                $$ = $3;
                                                                                            };

/*A constant value of this expression exists*/
constant_expression:            conditional_expression {
                                                            $$ = $1;
                                                       };

expression :                    assignment_expression {
                                                            $$ = $1;
                                                      }|
                                expression ',' assignment_expression {
                                                                        $$ = $3;
                                                                     };

/*Declarations*/ 

declaration:                    declaration_specifiers init_declarator_list_opt ';' {
                                                                                        if($2.loc != NULL && $2.loc->tp == tp_func)
                                                                                        {
                                                                                            //Delete curr_st as function declaration need not be supported
                                                                                            curr_st = new symtab();
                                                                                        }
                                                                                    };

init_declarator_list_opt:       init_declarator_list {
                                                        if($1.loc != NULL && $1.loc->tp == tp_func)
                                                        {
                                                            $$ = $1;
                                                        }
                                                        else
                                                        {
                                                        	$$.loc = NULL;
						                                    $$.truelist = NULL;
						                                    $$.falselist = NULL;
                                                        }
                                                     }|
                                /*epsilon*/ {
                                                $$.loc = NULL;
                                                $$.truelist = NULL;
                                                $$.falselist = NULL;
                                            };

declaration_specifiers:         type_specifier declaration_specifiers_opt;

declaration_specifiers_opt:     declaration_specifiers                                  |
                                /*epsilon*/                                             ;

init_declarator_list:           init_declarator {
                                                    /*Expecting only function declaration*/
                                                    $$ = $1;
                                                }|
                                init_declarator_list ',' init_declarator  {
		                                            $$.loc = NULL;
		                                            $$.truelist = NULL;
		                                            $$.falselist = NULL;
                                            	};

init_declarator:                declarator {
                                                /*Nothing to be done here*/
                                                if($1.loc->tp == tp_func)
                                                {
                                                    $$ = $1;
                                                }
                                                else
                                                {
                                                    //its not a function
                                                    //if its a matrix
                                                    if($1.loc->tp == tp_matrix)
                                                    {
                                                    	if($1.loc->mat->number_rows == -1 || $1.loc->mat->number_cols == -1)
                                                    	{
                                                    		printf("ERROR : matrix size not defined");
                                                    		exit(-1);
                                                    	}
                                                    	//initialising each value to 0
                                                    	int i,j;
                                                    	matrix *temp1 = $1.loc->mat;
                                                    	for(i=0; i < temp1->number_rows; i++)
                                                    	{	
                                                    		vector<double> row;
                                                    		for(j=0; j < temp1->number_cols; j++)
                                                    		{
                                                    			row.push_back(0);
                                                    		}
                                                    		temp1->mat.push_back(row);
                                                    	}
                                                    	char str[20],str_off[20];
                                                    	int offset = 0;
                                                    	sprintf(str, "%d", temp1->number_rows);
                                                    	sprintf(str_off, "%d", offset);
                                                    	glob_quad.emit(Q_LINDEX,str_off,str,$1.loc->name);
                                                    	offset += size_of_int;
                                                    	sprintf(str, "%d", temp1->number_cols);
                                                    	sprintf(str_off, "%d", offset);
                                                    	glob_quad.emit(Q_LINDEX,str_off,str,$1.loc->name);
                                                    }
                                                    $1.loc->isInitialized = false;                                  //explicitly putting this value even though unnecessary
                                                    curr_st->lookup($1.loc);
                                                }
                                            }|
                                declarator '=' initializer {
                                                                if($1.loc->tp == tp_func)
												                {
                                                                    printf("ERROR : Wrong declaration");
                                                                    exit(-1);
                                                                }
                                                                $1.loc->isInitialized = true;
                                                                //initializations of declarators
                                                                if($1.loc->tp == tp_matrix)
                                                                {
                                                                	if($3.loc->mat == NULL)
                                                                	{
                                                                		printf("Types compatibility not defined");
                                                                		exit(-1);
                                                                	}
                                                                	matrix *temp1 = $1.loc->mat;
                                                                	matrix *temp2 = $3.loc->mat;
                                                                	if(temp1->number_rows != -1 && temp1->number_rows != temp2->number_rows)
                                                                	{
                                                                		printf("ERROR : number of rows do not match during initialization");
                                                                		exit(-1);
                                                                	}
                                                                	if(temp1->number_cols != -1 && temp1->number_cols != temp2->number_cols)
                                                                	{
                                                                		printf("ERROR : number of cols do not match during initialization");
                                                                		exit(-1);
                                                                	}
                                                                	char str[20],str_off[20];
                                                                	int offset=0,i,j;
																	sprintf(str, "%d", temp2->number_rows);
																	sprintf(str_off, "%d", offset);
                                                                	glob_quad.emit(Q_LINDEX,str_off,str,$1.loc->name);
                                                                	offset += size_of_int;
                                                                	sprintf(str, "%d", temp2->number_cols);
                                                                	sprintf(str_off, "%d", offset);
                                                                	glob_quad.emit(Q_LINDEX,str_off,str,$1.loc->name);
                                                                	offset += size_of_int;
                                                                	for(i=0; i < temp2->mat.size(); i++)
                                                                	{
                                                                		for(j=0; j < temp2->mat[i].size(); j++)
                                                                		{
                                                                			sprintf(str_off, "%d", offset);
                                                                			sprintf(str, "%lf", temp2->mat[i][j]);
                                                                			glob_quad.emit(Q_LINDEX,str_off,str,$1.loc->name);
                                                                			offset += size_of_double;
                                                                		}
                                                                	}
                                                                }
                                                                else
                                                                {
                                                                	typecheck(&$1,&$3,true);    //typecheck should not change $1 on initialization
                                                                	glob_quad.emit(Q_ASSIGN,$3.loc->name,$1.loc->name);
                                                                }
                                                                curr_st->lookup($1.loc);
                                                                switch($1.loc->tp)
                                                                {
                                                                	case tp_char: 
                                                                	case tp_int: 
                                                                	case tp_double: $1.loc->init=$3.loc->init;
                                                                				 break;
                                                                	case tp_matrix: delete $1.loc->mat;
                                                                					$1.loc->mat = $3.loc->mat;
                                                                }
                                                            };

type_specifier:                 VOID {
                                        glob_type = tp_void;
                                    }|
                                CHAR {
                                        glob_type = tp_char;
                                    }|
                                SHORT {}|
                                INT {
                                        glob_type = tp_int;
                                    }|
                                LONG {}|
                                FLOAT {}|
                                DOUBLE {
                                            glob_type = tp_double;
                                        }|
                                SIGNED {}|
                                UNSIGNED {}|
                                BOOL {}|
                                MATRIX{
                                	glob_type = tp_matrix;
                                	};



declarator :                    pointer_opt direct_declarator {
                                                                if($1 == true)
                                                                {
                                                                    if($2.loc->tp == tp_func)
                                                                    {
                                                                    	symdata *ret = curr_st->symbol_tab[0];
                                                                    	ret->tp_of_ptr = ret->tp;
                                                                    	ret->tp = tp_ptr;
                                                                    	if(ret->mat != NULL)
                                                                    		delete ret->mat;
                                                                    }
                                                                    else
                                                                    {
		                                                                $2.loc->tp_of_ptr = $2.loc->tp;
		                                                                $2.loc->tp = tp_ptr;
		                                                                if($2.loc->mat != NULL)
		                                                                	delete $2.loc->mat;
	                                                                }
                                                                }
                                                                $$ = $2;
                                                            };

pointer_opt:                    pointer {
                                            $$ = $1;
                                        }|
                                /*epsilon*/ {
                                                $$ = false;
                                            };

direct_declarator:              IDENTIFIER {
													$$.loc = curr_st->search(*$1);
													if($$.loc != NULL)
													{
														printf("\n\nERROR: Redeclaration of %s",$1->c_str());
														exit(-1);
													}
													$$.loc = new symdata(*$1,-1,"local",glob_type);
                                            }|
                                '(' declarator ')' {
                                                        $$ = $2;
                                                    }|
                                direct_declarator '[' assignment_expression_opt ']' '[' assignment_expression_opt ']' {
                                							                                                    matrix *temp = $1.loc->mat;
                                							                                                    if ($3.loc != NULL)
                                							                                                    {
                                							                                                    	temp->number_rows = $3.loc->init.i;          //incomplete convert to integer
                                							                                                    }
                                							                                                    if ($6.loc != NULL)
                                							                                                    {
                                							                                                    	temp->number_cols = $6.loc->init.i;          //incomplete convert to integer
                                							                                                    }
                                							                                                    $$ = $1;
                                                                                                            }|
                                direct_declarator '(' parameter_type_list ')' {
                                                                                    symdata *checkfnexists = glob_st->search($1.loc->name);
                                                                                    //printf("Hello1\n");
                                                                                    if(checkfnexists == NULL)
                                                                                    {
                                                                                    	//For temporary variables that were created during parameter declaration
                                                                                    	symtab *temp_st = curr_st;
                                                                                    	curr_st = new symtab();     //created a new symbol table
                                                                                    	//setting name of curr_st
                                                                                    	curr_st->name = $1.loc->name;
                                                                                    	//setting return type in new symbol table;
                                                                                    	symdata *ret = new symdata("retVal",-1,"return",$1.loc->tp,$1.loc->tp_of_ptr);
                                                                                    	curr_st->lookup(ret);
                                                                                    	//change $1(function) type to tp_func
                                                                                    	$1.loc->tp = tp_func;
                                                                                    	$1.loc->tp_of_ptr = tp_not_set;
                                                                                    	$1.loc->var_type = "func";
                                                                                    	//set nest_tab of function to curr_st
                                                                                    	$1.loc->nest_tab = curr_st;
                                                                                    	glob_st->lookup($1.loc);
                                                                                    	//adding parameters from parameter list to the current symbol table and setting var_type as "param"
                                                                                    	vector<expresn> paramlist = *$3;
                                                                                    	for(int i=0; i<paramlist.size() ; i++)
                                                                                    	{
                                                                                    		paramlist[i].loc->var_type = "param";
                                                                                    		curr_st->lookup(paramlist[i].loc);
                                                                                    	}
                                                                                    	for(int i=0; i < temp_st->symbol_tab.size(); i++)
									                                                	{
									                                                		curr_st->lookup(temp_st->symbol_tab[i]);
																						}
																						delete temp_st;
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        printf("ERROR : Function already exists");
                                                                                        exit(-1);
                                                                                    }
                                                                                    $$ = $1;
                                                                                }|
                                direct_declarator '(' identifier_list_opt ')' {
                                                                                	//functions with void parameter list come here
                                                                                	symdata *checkfnexists = glob_st->search($1.loc->name);
                                                                                    //printf("Hello1\n");
                                                                                    if(checkfnexists == NULL)
                                                                                    {
                                                                                    	symtab *temp_st = curr_st;
                                                                                    	curr_st = new symtab();     //created a new symbol table
                                                                                    	//setting name of curr_st
                                                                                    	curr_st->name = $1.loc->name;
                                                                                    	//setting return type in new symbol table;
                                                                                    	symdata *ret = new symdata("retVal",-1,"return",$1.loc->tp,$1.loc->tp_of_ptr);
                                                                                    	curr_st->lookup(ret);
                                                                                    	//change $1(function) type to tp_func
                                                                                    	$1.loc->tp = tp_func;
                                                                                    	$1.loc->tp_of_ptr = tp_not_set;
                                                                                    	$1.loc->var_type = "func";
                                                                                    	//set nest_tab of function to curr_st
                                                                                    	$1.loc->nest_tab = curr_st;
                                                                                    	glob_st->lookup($1.loc);
                                                                                    	for(int i=0; i < temp_st->symbol_tab.size(); i++)
									                                                	{
									                                                		curr_st->lookup(temp_st->symbol_tab[i]);
																						}
																						delete temp_st;
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        printf("ERROR : Function already exists");
                                                                                        exit(-1);
                                                                                    }
                                                                                    $$ = $1;
                                                                            };

assignment_expression_opt:      assignment_expression {
                                                            $$ = $1;
                                                        }|
                                /*epsilon*/ {
                                                $$.loc = NULL;
                                                $$.truelist = NULL;
                                                $$.falselist = NULL;
                                            };

identifier_list_opt:            identifier_list                                         |
                                /*epsilon*/                                             ;

pointer:                        '*' {
                                                                $$ = true;
                                    }|
                                '*' pointer {
                                                                $$ = true;
                                            };

parameter_type_list:            parameter_list {
                                                    $$ = $1;
                                                };

parameter_list:                 parameter_declaration {
                                                         $$ = new vector<expresn>;
                                                         $$->push_back($1);   
                                                      }|
                                parameter_list ',' parameter_declaration {
                                                                            $$ = $1;
                                                                            $$->push_back($3);
                                                                        };

parameter_declaration:          declaration_specifiers declarator {
                                                                        $$ = $2;
                                                                  }|
                                declaration_specifiers {};

identifier_list :               IDENTIFIER                                              |
                                identifier_list ',' IDENTIFIER                          ;

initializer:                    assignment_expression {
                                    $$ = $1;
                                }|
                                '{' initializer_row_list '}' {
                                	$$ = $2;
                                };
                                
initializer_row_list:           initializer_row {
									$$.loc = new symdata();
									$$.loc->tp = tp_matrix;
									$$.loc->mat = new matrix();
									matrix *temp = $$.loc->mat;
									temp->number_cols = $1->matrow.size();
									temp->number_rows = 1;
									temp->mat.push_back($1->matrow);
								}|
								initializer_row_list ';' initializer_row {
									matrix *temp = $1.loc->mat;
									if(temp->number_cols != $3->matrow.size())
									{
										printf("ERROR: row size don't match");
										exit(-1);
									}
									temp->mat.push_back($3->matrow);
									temp->number_rows++;
									$$ = $1;
								};
								
initializer_row:				designation_opt initializer {
									$$ = new matrix_row;
									$$->matrow.push_back($2.loc->init.d);
								}|
								initializer_row ',' designation_opt initializer {
									$1->matrow.push_back($4.loc->init.d);
									$$ = $1;
								};


designation_opt:                designation                                             |
                                /*Epslion*/                                             ;

designation:                    designator_list '='                                     ;

designator_list:                designator                                              |
                                designator_list designator                              ;

designator:                     '[' constant_expression ']'                             |
                                '.' IDENTIFIER {};

/*Statements*/
statement:                      labeled_statement {/*Switch Case*/}|
                                compound_statement {
                                                        $$ = $1;
                                                    }|
                                expression_statement {
                                                        $$ = NULL;
                                                    }|
                                selection_statement {
                                                        $$ = $1;
                                                    }|
                                iteration_statement {
                                                        $$ = $1;
                                                    }|
                                jump_statement {
                                                    $$ = $1;
                                                };

labeled_statement:              IDENTIFIER ':' statement {}|
                                CASE constant_expression ':' statement {}|
                                DEFAULT ':' statement {};

compound_statement:             '{' block_item_list_opt '}' {
                                                                $$ = $2;
                                                            };

block_item_list_opt:            block_item_list {
                                                    $$ = $1;
                                                }|  
                                /*Epslion*/ {
                                                $$ = NULL;
                                            };

block_item_list:                block_item {
                                                $$ = $1;
                                            }|
                                block_item_list M block_item {
                                                                    backpatch($1,$2);
                                                                    $$ = $3;
                                                             };

block_item:                     declaration {
                                                $$ = NULL;
                                            }|
                                statement {
                                                $$ = $1;
                                          };

expression_statement:           expression_opt ';'{
                                                        $$ = $1;
                                                  };

expression_opt:                 expression {
                                                $$ = $1;
                                           }|
                                /*Epslion*/ {
                                                /*Initialize Expression to NULL*/
                                                $$.loc = NULL;
                                                $$.truelist = NULL;
                                                $$.falselist = NULL;
                                            };
                                            
                                            //added grammar selection_expression for converting non bool type expression to bool type expression and adding extra value based if expressions for safety
                                            //selection expression only has truelist and falselist component, it has no loc component
selection_expression_opt:		selection_expression {
                                                $$ = $1;
                                           }|
                                /*Epslion*/ {
                                                /*Initialize Expression to NULL*/
                                                $$.truelist = NULL;
                                                $$.falselist = NULL;
                                                $$.loc = NULL;
                                            };                                            
                                            
selection_expression:			expression	{
												$$ = $1;   //copying to copy the lists
												$$.loc = NULL;
												list *temp1=makelist(next_instr);
												list *temp2=makelist(next_instr+1);
												glob_quad.emit(Q_IF_EXPRESSION,$1.loc->name,"-1");
												glob_quad.emit(Q_IF_FALSE_EXPRESSION,$1.loc->name,"-1");
												$$.truelist = merge($$.truelist,temp1);
												$$.falselist = merge($$.falselist,temp2);
											};

selection_statement:            IF '(' selection_expression ')' M statement N ELSE M statement {
                                                                                            backpatch($3.truelist,$5);
                                                                                            backpatch($3.falselist,$9);
                                                                                            list *temp = merge($6,$7);
                                                                                            $$ = merge( temp, $10);
                                                                                        }|
                                IF '(' selection_expression ')' M statement {
                                                                        backpatch($3.truelist,$5);
                                                                        $$ = merge($3.falselist,$6);
                                                                    }|
                                SWITCH '(' selection_expression ')' statement {};

iteration_statement:            WHILE '(' M selection_expression ')' M statement {
                                                                            backpatch($7,$3);
                                                                            backpatch($4.truelist,$6);
                                                                            $$ = $4.falselist;
                                                                            glob_quad.emit(Q_GOTO,$3);
                                                                        }|
                                DO M statement  WHILE '(' M selection_expression ')' ';' {  
                                                                                    backpatch($3,$6);
                                                                                    backpatch($7.truelist,$2);
                                                                                    $$ = $7.falselist;
                                                                                }|
                           //   1    2         3        4  5              6            7  8  9             10 11 12   13   
                                FOR '(' expression_opt ';' M selection_expression_opt ';' M expression_opt N ')' M statement {
                                                                                                                        backpatch($6.truelist,$12);
                                                                                                                        $$ = $6.falselist;
                                                                                                                        backpatch($13,$8);
                                                                                                                        glob_quad.emit(Q_GOTO,$8);
                                                                                                                        backpatch($10,$5);
                                                                                                                    }|
                                FOR '(' declaration expression_opt ';' expression_opt ')' statement {};

jump_statement:                 GOTO IDENTIFIER ';' {}|
                                CONTINUE ';' {}|
                                BREAK ';' {}|
                                RETURN expression_opt ';' {
                                                                if($2.loc == NULL)
                                                                {
                                                                    glob_quad.emit(Q_RETURN);
                                                                }
                                                                else
                                                                {
                                                                    expresn * dummy = new expresn();
                                                                    dummy->loc = curr_st->symbol_tab[0];
                                                                    typecheck(dummy,&$2,true);
                                                                    glob_quad.emit(Q_ASSIGN,$2.loc->name,dummy->loc->name);
                                                                    glob_quad.emit(Q_RETURN,dummy->loc->name);
                                                                    delete dummy;
                                                                }
                                                                $$ = NULL;
                                                          };

/*External Definitions*/
translation_unit:               external_declaration                                    |
                                translation_unit external_declaration                   ;

external_declaration:           function_definition                                     |
                                declaration                                             ;

function_definition:    declaration_specifiers declarator declaration_list_opt compound_statement {
                                                                                                    glob_quad.arr[start_instr].result = curr_st->name;
                                                                                                    //glob_quad.print();
                                                                                                    backpatch($4,next_instr);
                                                                                                    glob_quad.emit(Q_RETURN);
                                                                                                    curr_st->offset = 0;
														                                        	for(int i=0; i < curr_st->symbol_tab.size(); i++)
														                                        	{
														                                        		curr_st->symbol_tab[i]->offset = curr_st->offset;
																										curr_st->symbol_tab[i]->setsize();
																										curr_st->offset += curr_st->symbol_tab[i]->getsize();
														                                        	}
                                                                                                    //Create a new Current Symbol Table
                                                                                                    start_instr = next_instr;
                                                                                                    glob_quad.emit(Q_START,"-1");
                                                                                                    curr_st = new symtab();
                                                                                                };

declaration_list_opt:           declaration_list                                        |
                                /*epsilon*/                                             ;

declaration_list:               declaration                                             |
                                declaration_list declaration                            ;

%%
void yyerror(const char*s)
{
    printf("%s",s);
}
