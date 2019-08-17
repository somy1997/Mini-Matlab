#include <stdio.h>

#define FL1			10
#define FL2			11
#define WHL			12
#define DECL		13
#define ARR			14
#define IF			19
#define UNOP		15
#define SW			16
#define MAT			17
#define BINOP		18

#define KW			32

#define ID			33

#define C			34

#define SL			38

#define Punc		39
		
#define MlCom		86
#define SlCom		87

#define WS			88

#define ERR			89

int main()
{
	int token;
	while(token = yylex())
	{
		switch (token)
		{
			case FL1: printf("<FOR_LOOP_1>\n"); break;
			case FL2: printf("<FOR_LOOP_2>\n"); break;
			case WHL: printf("<WHILE_LOOP>\n"); break;
			case DECL: printf("<DECLARATION>\n"); break;
			case ARR: printf("<ARRAY_ACCESS>\n"); break;
			case IF: printf("<IF_CONDITION>\n"); break;
			case UNOP: printf("<UNARY_OP>\n"); break;
			case SW: printf("<SWITCH>\n"); break;
			case MAT: printf("<MATRIX>\n"); break;
			case BINOP: printf("<BINARY_OP>\n"); break;
			
			case KW: printf("<KEYWORD>\n"); break;

			case ID: printf("<IDENTIFIER>\n"); break;

			case C: printf("<CONSTANT>\n"); break;
			
			case SL: printf("<STRING>\n"); break;
			
			case Punc: printf("<PUNCTUATOR>\n"); break;
			
			case MlCom: break;
			case SlCom: break;

			case WS: break;

			case ERR: printf("LEXING FAILED!!!\n"); return 0;
		}
	}
	return 0;
}
