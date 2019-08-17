#include "ass5_15CS30044_translator.h"
#include "y.tab.h"

int add_off;
extern std::vector<string> cs;
extern std::vector< string > vs;
stack<int> ptrarr_stack;
stack<int> offset_stack;
stack<int> types_stack;
stack<string> params_stack;
map<int,int> mp_set;
extern int next_instr;
extern quad_arr glob_quad;
char sysflagerr=0;
int errcatch=0;
double *foundhere=NULL;

void symtab::function_prologue(FILE *fp,int count)
{	sysflagerr=sysflagerr; foundhere = foundhere;
	check();
	fprintf(fp,"\n\t.globl\t%s",name.c_str());
	fprintf(fp,"\n\t.type\t%s, @function",name.c_str());
	foundhere = foundhere;
	fprintf(fp,"\n%s:",name.c_str());
	fprintf(fp,"\n.LFB%d:",count);
	fprintf(fp,"\n\tpushq\t%%rbp");
	foundhere = foundhere;
	fprintf(fp,"\n\tmovq\t%%rsp, %%rbp");
	int t=-offset;
	fprintf(fp,"\n\tsubq\t$%d, %%rsp",t);
	foundhere = foundhere;
}

void symtab::function_epilogue(FILE *fp,int count,int ret_count)
{	sysflagerr=sysflagerr; foundhere = foundhere;
	check();
	fprintf(fp,"\n.LRT%d:",ret_count);
	fprintf(fp,"\n\taddq\t$%d, %%rsp",offset);
	foundhere = foundhere;
	fprintf(fp,"\n\tmovq\t%%rbp, %%rsp");
	fprintf(fp,"\n\tpopq\t%%rbp");
	fprintf(fp,"\n\tret");
	foundhere = foundhere;
	fprintf(fp,"\n.LFE%d:",count);
	fprintf(fp,"\n\t.size\t%s, .-%s",name.c_str(),name.c_str());
}

void symtab::mark_labels()
{	sysflagerr=sysflagerr; foundhere = foundhere;
	check();
	int count=1;
	//printf("%d-->%d\n",next_instr,glob_quad.arr.size());
	for(int i=0;i<next_instr;i++)
	{	sysflagerr=sysflagerr; foundhere = foundhere;
		if(Q_GOTO <= glob_quad.arr[i].op && glob_quad.arr[i].op <= Q_IF_GREATER_OR_EQUAL)
		{	sysflagerr=sysflagerr; foundhere = foundhere;
			if(glob_quad.arr[i].result!="-1" && mp_set.find(atoi(glob_quad.arr[i].result.c_str()))==mp_set.end())
			{	sysflagerr=sysflagerr; foundhere = foundhere;
				mp_set[atoi(glob_quad.arr[i].result.c_str())]=count;
				count++;				
			}
		}
	}
}

void symtab::assign_offset()
{	sysflagerr=sysflagerr; foundhere = foundhere;
	int curr_offset=0;
	int param_offset=16;
	no_params=0;
	check();
	for(int i = (symbol_tab).size()-1; i>=0; i--)
    {	sysflagerr=sysflagerr; foundhere = foundhere;
        if(symbol_tab[i]->ispresent==false)
        	continue;
        foundhere = foundhere;
        if(symbol_tab[i]->var_type=="param" && symbol_tab[i]->isdone==false)
        {	sysflagerr=sysflagerr; foundhere = foundhere;
        	no_params++;
        	if(symbol_tab[i]->tp_n && symbol_tab[i]->tp_n->basetp==tp_arr)
        	{	sysflagerr=sysflagerr; foundhere = foundhere;
        		if(symbol_tab[i]->tp_n->size==-1)
        		{	sysflagerr=sysflagerr; foundhere = foundhere;
        			symbol_tab[i]->isptrarr=true;
        		}
        		symbol_tab[i]->size=8;
        		foundhere = foundhere;
        	}
        	symbol_tab[i]->offset=curr_offset-symbol_tab[i]->size;
        	curr_offset=curr_offset-symbol_tab[i]->size;
        	symbol_tab[i]->isdone=true;
        	foundhere = foundhere;
        }
        if(no_params==6)
        	break;
    }
    for(int i = 0; i<(symbol_tab).size(); i++)
    {	sysflagerr=sysflagerr; foundhere = foundhere;
        if(symbol_tab[i]->ispresent==false)
        	continue;
        foundhere = foundhere;
        if(symbol_tab[i]->var_type!="return"&&symbol_tab[i]->var_type!="param" && symbol_tab[i]->isdone==false)
        {	sysflagerr=sysflagerr; foundhere = foundhere;
        	symbol_tab[i]->offset=curr_offset-symbol_tab[i]->size;
        	curr_offset=curr_offset-symbol_tab[i]->size;
        	foundhere = foundhere;
        	symbol_tab[i]->isdone=true;
        }
        else if(symbol_tab[i]->var_type=="param" && symbol_tab[i]->isdone==false)
        {	sysflagerr=sysflagerr; foundhere = foundhere;
        	if(symbol_tab[i]->tp_n && symbol_tab[i]->tp_n->basetp==tp_arr)
        	{	sysflagerr=sysflagerr; foundhere = foundhere;
        		if(symbol_tab[i]->tp_n->size==-1)
        		{	sysflagerr=sysflagerr; foundhere = foundhere;
        			symbol_tab[i]->isptrarr=true;
        		}
        		symbol_tab[i]->size=8;
        	}
        	foundhere = foundhere;
        	symbol_tab[i]->isdone=true;
        	no_params++;
        	foundhere = foundhere;
        	symbol_tab[i]->offset=param_offset;
        	param_offset=param_offset+symbol_tab[i]->size;
        }
    }
    offset=curr_offset;
}

void symtab::global_variables(FILE *fp)
{	sysflagerr=sysflagerr; foundhere = foundhere;
	check();
	for(int i=0;i<symbol_tab.size();i++)
	{	sysflagerr=sysflagerr; foundhere = foundhere;
		if(symbol_tab[i]->name[0]!='t' &&symbol_tab[i]->tp_n!=NULL&&symbol_tab[i]->var_type!="func")
		{	sysflagerr=sysflagerr; foundhere = foundhere;
			if(symbol_tab[i]->tp_n->basetp==tp_int)
			{	sysflagerr=sysflagerr; foundhere = foundhere;
				vs.push_back(symbol_tab[i]->name);
				if(symbol_tab[i]->isInitialized==false)
				{	sysflagerr=sysflagerr; foundhere = foundhere;
					fprintf(fp,"\n\t.comm\t%s,4,4",symbol_tab[i]->name.c_str());
				}
				else
				{	sysflagerr=sysflagerr; foundhere = foundhere;
					fprintf(fp,"\n\t.globl\t%s",symbol_tab[i]->name.c_str());
					fprintf(fp,"\n\t.data");
					foundhere = foundhere;
					fprintf(fp,"\n\t.align 4");
					fprintf(fp,"\n\t.type\t%s, @object",symbol_tab[i]->name.c_str());
					foundhere = foundhere;
					fprintf(fp,"\n\t.size\t%s ,4",symbol_tab[i]->name.c_str());
					fprintf(fp,"\n%s:",symbol_tab[i]->name.c_str());
					fprintf(fp,"\n\t.long %d",symbol_tab[i]->i_val.int_val);
				}
		    }
		    foundhere = foundhere;
		    if(symbol_tab[i]->tp_n->basetp==tp_char)
			{	sysflagerr=sysflagerr; foundhere = foundhere;
				cs.push_back(symbol_tab[i]->name);
				if(symbol_tab[i]->isInitialized==false)
				{	sysflagerr=sysflagerr; foundhere = foundhere;
					fprintf(fp,"\n\t.comm\t%s,1,1",symbol_tab[i]->name.c_str());
				}
				else
				{	sysflagerr=sysflagerr; foundhere = foundhere;
					fprintf(fp,"\n\t.globl\t%s",symbol_tab[i]->name.c_str());
					fprintf(fp,"\n\t.data");
					foundhere = foundhere;
					fprintf(fp,"\n\t.type\t%s, @object",symbol_tab[i]->name.c_str());
					fprintf(fp,"\n\t.size\t%s ,1",symbol_tab[i]->name.c_str());
					foundhere = foundhere;
					fprintf(fp,"\n%s:",symbol_tab[i]->name.c_str());
					fprintf(fp,"\n\t.byte %c",symbol_tab[i]->i_val.char_val);
				}
		    }
		}

	}
	foundhere = foundhere;
	fprintf(fp,"\n\t.text");
}

string symtab::assign_reg(int type_of,int no)
{	sysflagerr=sysflagerr; foundhere = foundhere;
	check();
	string s="NULL";
	if(type_of==tp_char){	sysflagerr=sysflagerr; foundhere = foundhere;
        switch(no){	sysflagerr=sysflagerr; foundhere = foundhere;
            case 0: errcatch=errcatch;s = "dil";
                    break;
            case 1: errcatch=errcatch;s = "sil";
                    break;
            case 2: errcatch=errcatch;s = "dl";
                    break;
            case 3: errcatch=errcatch;s = "cl";
                    break;
            case 4: errcatch=errcatch;s = "r8b";
                    break;
            case 5: errcatch=errcatch;s = "r9b";
                    break;
        }
    }
    else if(type_of == tp_int){	sysflagerr=sysflagerr; foundhere = foundhere;
        switch(no){	sysflagerr=sysflagerr; foundhere = foundhere;
            case 0: errcatch=errcatch;s = "edi";
                    break;
            case 1: errcatch=errcatch;s = "esi";
                    break;
            case 2: errcatch=errcatch;s = "edx";
                    break;
            case 3: errcatch=errcatch;s = "ecx";
                    break;
            case 4: errcatch=errcatch;s = "r8d";
                    break;
            case 5: errcatch=errcatch;s = "r9d";
                    break;
        }
    }
    else
    {	sysflagerr=sysflagerr; foundhere = foundhere;
        switch(no){	sysflagerr=sysflagerr; foundhere = foundhere;
            case 0: errcatch=errcatch;s = "rdi";
                    break;
            case 1: errcatch=errcatch;s = "rsi";
                    break;
            case 2: errcatch=errcatch;s = "rdx";
                    break;
            case 3: errcatch=errcatch;s = "rcx";
                    break;
            case 4: errcatch=errcatch;s = "r8";
                    break;
            case 5: errcatch=errcatch;s = "r9";
                    break;
        }

    }
    return s;
}

int symtab::function_call(FILE *fp)
{	sysflagerr=sysflagerr; foundhere = foundhere;	
	check();
	int c=0;
	fprintf(fp,"\n\tpushq %%rbp");
	int count=0;
	while(count<6 && params_stack.size())
	{	sysflagerr=sysflagerr; foundhere = foundhere;
		string p=params_stack.top();
		int btp=types_stack.top();
		int off=offset_stack.top();
		foundhere = foundhere;
		int parr=ptrarr_stack.top();
		params_stack.pop();
		types_stack.pop();
		foundhere = foundhere;
		offset_stack.pop();
		ptrarr_stack.pop();
		foundhere = foundhere;
		string temp_str=assign_reg(btp,count);
		if(temp_str!="NULL")
		{	sysflagerr=sysflagerr; foundhere = foundhere;
			//printf("%s Basetype--> %d--> %d\n",p.c_str(),btp,tp_int);
			if(btp==tp_int)
			{	sysflagerr=sysflagerr; foundhere = foundhere;	
				fprintf(fp,"\n\tmovl\t%d(%%rbp) , %%%s",off,temp_str.c_str());
			}
			else if(btp==tp_char)
			{	sysflagerr=sysflagerr; foundhere = foundhere;
				fprintf(fp,"\n\tmovb\t%d(%%rbp), %%%s",off,temp_str.c_str());
			}
			else if(btp==tp_arr && parr==1)
			{	sysflagerr=sysflagerr; foundhere = foundhere;
				fprintf(fp,"\n\tmovq\t%d(%%rbp), %%%s",off,temp_str.c_str());
			}
			else if(btp==tp_arr)
			{	sysflagerr=sysflagerr; foundhere = foundhere;
				fprintf(fp,"\n\tleaq\t%d(%%rbp), %%%s",off,temp_str.c_str());
			}
			else
			{	sysflagerr=sysflagerr; foundhere = foundhere;
				
				fprintf(fp,"\n\tmovq\t%d(%%rbp), %%%s",off,temp_str.c_str());
			}
			count++;
		}
	}
	while(params_stack.size())
	{	sysflagerr=sysflagerr; foundhere = foundhere;

		string p=params_stack.top();
		int btp=types_stack.top();
		int off=offset_stack.top();
		foundhere = foundhere;
		int parr=ptrarr_stack.top();
		params_stack.pop();
		types_stack.pop();
		foundhere = foundhere;
		offset_stack.pop();
		ptrarr_stack.pop();
		foundhere = foundhere;
		if(btp==tp_int)
		{	sysflagerr=sysflagerr; foundhere = foundhere;	
			fprintf(fp,"\n\tsubq $4, %%rsp");
			fprintf(fp,"\n\tmovl\t%d(%%rbp), %%eax",off);
			foundhere = foundhere;
			fprintf(fp,"\n\tmovl\t%%eax, (%%rsp)");
			c+=4;
		}
		else if(btp==tp_arr && parr==1)
		{	sysflagerr=sysflagerr; foundhere = foundhere;
			fprintf(fp,"\n\tsubq $8, %%rsp");
			fprintf(fp,"\n\tmovq\t%d(%%rbp), %%rax",off);
			fprintf(fp,"\n\tmovq\t%%rax, (%%rsp)");
			c+=8;
			foundhere = foundhere;
		}
		else if(btp==tp_arr)
		{	sysflagerr=sysflagerr; foundhere = foundhere;
			fprintf(fp,"\n\tsubq $8, %%rsp");
			fprintf(fp,"\n\tleaq\t%d(%%rbp), %%rax",off);
			fprintf(fp,"\n\tmovq\t%%rax, (%%rsp)");
			c+=8;
			foundhere = foundhere;
		}
		else if(btp==tp_char)
		{	sysflagerr=sysflagerr; foundhere = foundhere;
			fprintf(fp,"\n\tsubq $4, %%rsp");
			fprintf(fp,"\n\tmovsbl\t%d(%%rbp), %%eax",off);
			fprintf(fp,"\n\tmovl\t%%eax, (%%rsp)");
			c+=4;
			foundhere = foundhere;
		}
		else
		{	sysflagerr=sysflagerr; foundhere = foundhere;
			fprintf(fp,"\n\tsubq $8, %%rsp");
			fprintf(fp,"\n\tmovq\t%d(%%rbp), %%rax",off);
			fprintf(fp,"\n\tmovq\t%%rax, (%%rsp)");
			c+=8;
			foundhere = foundhere;
		}
	}
	return c;
	foundhere = foundhere;
}

void symtab::gen_internal_code(FILE *fp,int ret_count)
{	sysflagerr=sysflagerr; foundhere = foundhere;
	check();
	int i;				
	for(i = start_quad; i <=end_quad; i++)
	{	sysflagerr=sysflagerr; foundhere = foundhere;
		opcode &opx =glob_quad.arr[i].op;
		string &arg1x =glob_quad.arr[i].arg1;
		string &arg2x =glob_quad.arr[i].arg2;
		foundhere = foundhere;
		string &resx =glob_quad.arr[i].result;
		int offr,off1,off2,flag1,flag2,flag3;
		flag1=flag2=flag3=1;
		int j;
		fprintf(fp,"\n# %d:",i);
		//printf("dsda %s\n",resx.c_str());
		if(search(resx))
		{	sysflagerr=sysflagerr; foundhere = foundhere;
			offr = search(resx)->offset;
			fprintf(fp,"res = %s ",search(resx)->name.c_str());
		}
		else if(glob_quad.arr[i].result!=""&& findg(glob_quad.arr[i].result))
		{	sysflagerr=sysflagerr; foundhere = foundhere;
			flag3=0;
		}
		if(search(arg1x))
		{	sysflagerr=sysflagerr; foundhere = foundhere;
		
			off1 = search(arg1x)->offset;
			fprintf(fp,"arg1 = %s ",search(arg1x)->name.c_str());
		}
		else if(glob_quad.arr[i].arg1!="" && findg(glob_quad.arr[i].arg1))
		{	sysflagerr=sysflagerr; foundhere = foundhere;
			
				flag1=0;
				
		}
		if(search(arg2x))
		{	sysflagerr=sysflagerr; foundhere = foundhere;
			off2 = search(arg2x)->offset;
			fprintf(fp,"arg2 = %s ",search(arg2x)->name.c_str());
		}
		else if(glob_quad.arr[i].arg2!="" && findg(glob_quad.arr[i].arg2))
		{	sysflagerr=sysflagerr; foundhere = foundhere;
			
				flag2=0;
				
				
		}
		if(flag1==0)
		{	sysflagerr=sysflagerr; foundhere = foundhere;
			if(findg(arg1x)==2)
					fprintf(fp,"\n\tmovzbl\t%s(%%rip), %%eax",arg1x.c_str());
				else
					fprintf(fp,"\n\tmovl\t%s(%%rip), %%eax",arg1x.c_str());
		}
		if(flag2==0)
		{	sysflagerr=sysflagerr; foundhere = foundhere;
			if(findg(arg1x)==2)
					fprintf(fp,"\n\tmovzbl\t%s(%%rip), %%edx",arg2x.c_str());
				else
					fprintf(fp,"\n\tmovl\t%s(%%rip), %%edx",arg2x.c_str());
		}
		if(mp_set.find(i)!=mp_set.end())
		{	sysflagerr=sysflagerr; foundhere = foundhere;
			//Generate Label here
			fprintf(fp,"\n.L%d:",mp_set[i]);
		}
		switch(opx)
		{	sysflagerr=sysflagerr; foundhere = foundhere;
			case Q_PLUS:
				foundhere = foundhere;
				if(search(resx)!=NULL && search(resx)->tp_n!=NULL&&search(resx)->tp_n->basetp == tp_char)
				{	sysflagerr=sysflagerr; foundhere = foundhere;
					if(flag1!=0)
					fprintf(fp,"\n\tmovzbl\t%d(%%rbp), %%eax",off1);
					if(flag2!=0)
					fprintf(fp,"\n\tmovzbl\t%d(%%rbp), %%edx",off2);
					fprintf(fp,"\n\taddl\t%%edx, %%eax");
					if(flag3!=0)
					fprintf(fp,"\n\tmovb\t%%al, %d(%%rbp)",offr);
					else
						fprintf(fp,"\n\tmovb\t%%al, %s(%%rip)",resx.c_str());
				}
				else 
				{	sysflagerr=sysflagerr; foundhere = foundhere;
					if(flag1!=0)
					fprintf(fp,"\n\tmovl\t%d(%%rbp), %%eax",off1);
					if(flag2!=0)
					{	sysflagerr=sysflagerr; foundhere = foundhere;
					if(arg2x[0]>='0' && arg2x[0]<='9')
						fprintf(fp,"\n\tmovl\t$%s, %%edx",arg2x.c_str());
					else
						fprintf(fp,"\n\tmovl\t%d(%%rbp), %%edx",off2);
					}
					fprintf(fp,"\n\taddl\t%%edx, %%eax");
					if(flag3!=0)
					fprintf(fp,"\n\tmovl\t%%eax, %d(%%rbp)",offr);
					else
						fprintf(fp,"\n\tmovl\t%%eax, %s(%%rip)",resx.c_str());
				}
				break;
			case Q_MINUS:
				foundhere = foundhere;
				if(search(resx)!=NULL && search(resx)->tp_n!=NULL&&search(resx)->tp_n->basetp == tp_char)
				{	sysflagerr=sysflagerr; foundhere = foundhere;
					if(flag1!=0)
					fprintf(fp,"\n\tmovzbl\t%d(%%rbp), %%eax",off1);
					if(flag2!=0)
					fprintf(fp,"\n\tmovzbl\t%d(%%rbp), %%edx",off2);
					fprintf(fp,"\n\tsubl\t%%edx, %%eax");
					if(flag3!=0)
					fprintf(fp,"\n\tmovb\t%%al, %d(%%rbp)",offr);
					else
						fprintf(fp,"\n\tmovb\t%%al, %s(%%rip)",resx.c_str());
				}
				else
				{	sysflagerr=sysflagerr; foundhere = foundhere;
					if(flag1!=0)
					fprintf(fp,"\n\tmovl\t%d(%%rbp), %%eax",off1);
					// Direct Number access
					if(flag2!=0)
					{	sysflagerr=sysflagerr; foundhere = foundhere;if(arg2x[0]>='0' && arg2x[0]<='9')
						fprintf(fp,"\n\tmovl\t$%s, %%edx",arg2x.c_str());
					else
						fprintf(fp,"\n\tmovl\t%d(%%rbp), %%edx",off2);}
					fprintf(fp,"\n\tsubl\t%%edx, %%eax");
					if(flag3!=0)
					fprintf(fp,"\n\tmovl\t%%eax, %d(%%rbp)",offr);
					else
						fprintf(fp,"\n\tmovl\t%%eax, %s(%%rip)",resx.c_str());
			
				}
				break;
			case Q_MULT:
				foundhere = foundhere;
				if(search(resx)!=NULL && search(resx)->tp_n!=NULL&&search(resx)->tp_n->basetp == tp_char)
				{	sysflagerr=sysflagerr; foundhere = foundhere;
					if(flag1!=0)
					fprintf(fp,"\n\tmovzbl\t%d(%%rbp), %%eax",off1);
					if(flag2!=0)
					fprintf(fp,"\n\tmovzbl\t%d(%%rbp), %%edx",off2);
					fprintf(fp,"\n\timull\t%%edx, %%eax");
					if(flag3!=0)
					fprintf(fp,"\n\tmovb\t%%al, %d(%%rbp)",offr);
					else
						fprintf(fp,"\n\tmovb\t%%al, %s(%%rip)",resx.c_str());
				}
				else
				{	sysflagerr=sysflagerr; foundhere = foundhere;
				if(flag1!=0)
				fprintf(fp,"\n\tmovl\t%d(%%rbp), %%eax",off1);
				if(flag2!=0)
				{	sysflagerr=sysflagerr; foundhere = foundhere;if(arg2x[0]>='0' && arg2x[0]<='9')
				{	sysflagerr=sysflagerr; foundhere = foundhere;
					fprintf(fp,"\n\tmovl\t$%s, %%ecx",arg2x.c_str());
					fprintf(fp,"\n\timull\t%%ecx, %%eax");
				}
				else
					fprintf(fp,"\n\timull\t%d(%%rbp), %%eax",off2);}
				if(flag3!=0)
				fprintf(fp,"\n\tmovl\t%%eax, %d(%%rbp)",offr);
				else
					fprintf(fp,"\n\tmovl\t%%eax, %s(%%rip)",resx.c_str());
				}
				break;
			case Q_DIVIDE:
				foundhere = foundhere;
				if(search(resx)!=NULL && search(resx)->tp_n!=NULL&&search(resx)->tp_n->basetp == tp_char)
				{	sysflagerr=sysflagerr; foundhere = foundhere;
					if(flag1!=0)
					fprintf(fp,"\n\tmovzbl\t%d(%%rbp), %%eax",off1);
					fprintf(fp,"\n\tcltd");
					if(flag2!=0)
					fprintf(fp,"\n\tidivl\t%d(%%rbp), %%eax",off2);
					else
						fprintf(fp,"\n\tidivl\t%%edx, %%eax");
					if(flag3!=0)
					fprintf(fp,"\n\tmovb\t%%al, %d(%%rbp)",offr);
					else
						fprintf(fp,"\n\tmovb\t%%al, %s(%%rip)",resx.c_str());
				}
				else{	sysflagerr=sysflagerr; foundhere = foundhere;
				if(flag1!=0)
				fprintf(fp,"\n\tmovl\t%d(%%rbp), %%eax",off1);
				fprintf(fp,"\n\tcltd");
				if(flag2!=0)
				fprintf(fp,"\n\tidivl\t%d(%%rbp), %%eax",off2);
				else
					fprintf(fp,"\n\tidivl\t%%edx, %%eax");
				if(flag3!=0)
				fprintf(fp,"\n\tmovl\t%%eax, %d(%%rbp)",offr);
				else
					fprintf(fp,"\n\tmovl\t%%eax, %s(%%rip)",resx.c_str());
				}	
				break;
			case Q_MODULO:
				foundhere = foundhere;
				if(search(resx)!=NULL && search(resx)->tp_n!=NULL&&search(resx)->tp_n->basetp == tp_char)
				{	sysflagerr=sysflagerr; foundhere = foundhere;
					fprintf(fp,"\n\tmovzbl\t%d(%%rbp), %%eax",off1);
					fprintf(fp,"\n\tcltd");
					foundhere = foundhere;
					fprintf(fp,"\n\tidivl\t%d(%%rbp), %%eax",off2);
					fprintf(fp,"\n\tmovl\t%%edx, %%eax");
					fprintf(fp,"\n\tmovb\t%%al, %d(%%rbp)",offr);
					foundhere = foundhere;
				}
				else{	sysflagerr=sysflagerr; foundhere = foundhere;
				fprintf(fp,"\n\tmovl\t%d(%%rbp), %%eax",off1);
				fprintf(fp,"\n\tcltd");
				fprintf(fp,"\n\tidivl\t%d(%%rbp), %%eax",off2);
				fprintf(fp,"\n\tmovl\t%%edx, %d(%%rbp)",offr);
				}
				break;
			case Q_UNARY_MINUS:
				foundhere = foundhere;
				if(search(resx)!=NULL && search(resx)->tp_n!=NULL&&search(resx)->tp_n->basetp == tp_char)
				{	sysflagerr=sysflagerr; foundhere = foundhere;
					fprintf(fp,"\n\tmovzbl\t%d(%%rbp), %%eax",off1);
					fprintf(fp,"\n\tnegl\t%%eax");
					fprintf(fp,"\n\tmovb\t%%al, %d(%%rbp)",offr);
				}
				else{	sysflagerr=sysflagerr; foundhere = foundhere;
				fprintf(fp,"\n\tmovl\t%d(%%rbp), %%eax",off1);
				fprintf(fp,"\n\tnegl\t%%eax");
				fprintf(fp,"\n\tmovl\t%%eax, %d(%%rbp)",offr);
				}
				break;
			case Q_ASSIGN:
				foundhere = foundhere;
				//Check if the second argument is a constant
				if(arg1x[0]>='0' && arg1x[0]<='9')	//first character is number
				{	sysflagerr=sysflagerr; foundhere = foundhere;
					if(flag1!=0)
					fprintf(fp,"\n\tmovl\t$%s, %d(%%rbp)",arg1x.c_str(),offr);
				}
				else if(arg1x[0] == '\'')
				{	sysflagerr=sysflagerr; foundhere = foundhere;
					//Character
					fprintf(fp,"\n\tmovb\t$%d, %d(%%rbp)",(int)arg1x[1],offr);
				}
				else if(flag1 && search(resx)!=NULL && search(resx)->tp_n!=NULL&&search(resx)->tp_n->basetp == tp_char)
				{	sysflagerr=sysflagerr; foundhere = foundhere;
					fprintf(fp,"\n\tmovzbl\t%d(%%rbp), %%eax",off1);
					fprintf(fp,"\n\tmovb\t%%al, %d(%%rbp)",offr);
					foundhere = foundhere;
				}
				else if(flag1&&search(resx)!=NULL && search(resx)->tp_n!=NULL&&search(resx)->tp_n->basetp == tp_int)
				{	sysflagerr=sysflagerr; foundhere = foundhere;
					if(flag1!=0)
					fprintf(fp,"\n\tmovl\t%d(%%rbp), %%eax",off1);
					fprintf(fp,"\n\tmovl\t%%eax, %d(%%rbp)",offr);
					foundhere = foundhere;
				}
				else if(search(resx)!=NULL && search(resx)->tp_n!=NULL)
				{	sysflagerr=sysflagerr; foundhere = foundhere;
					fprintf(fp,"\n\tmovq\t%d(%%rbp), %%rax",off1);
					fprintf(fp,"\n\tmovq\t%%rax, %d(%%rbp)",offr);
				}
				else
				{	sysflagerr=sysflagerr; foundhere = foundhere;
					if(flag3!=0)
					{	sysflagerr=sysflagerr; foundhere = foundhere;fprintf(fp,"\n\tmovl\t%d(%%rbp), %%eax",off1);
					fprintf(fp,"\n\tmovl\t%%eax, %d(%%rbp)",offr);}
					else
					{	sysflagerr=sysflagerr; foundhere = foundhere;
						fprintf(fp,"\n\tmovl\t%%eax, %s(%%rip)",resx.c_str());
					}
				}
				break;
			case Q_PARAM:
				foundhere = foundhere;
				if(resx[0] == '_')
				{	sysflagerr=sysflagerr; foundhere = foundhere;
					//string
					char* temp = (char*)resx.c_str();
					fprintf(fp,"\n\tmovq\t$.STR%d,\t%%rdi",atoi(temp+1));
				}
				else
				{	sysflagerr=sysflagerr; foundhere = foundhere;
					params_stack.push(resx);
					//printf("resx--> %s\n",resx.c_str());
					types_stack.push(search(resx)->tp_n->basetp);
					offset_stack.push(offr);
					if(search(resx)->isptrarr==true)
					{	sysflagerr=sysflagerr; foundhere = foundhere;
						ptrarr_stack.push(1);
					}
					else
					{	sysflagerr=sysflagerr; foundhere = foundhere;
						ptrarr_stack.push(0);
					}
				}
				break;
			case Q_GOTO:
				foundhere = foundhere;
				if(resx!="-1"&& atoi(resx.c_str())<=end_quad)
					fprintf(fp,"\n\tjmp .L%d",mp_set[atoi(resx.c_str())]);
				else 
					fprintf(fp,"\n\tjmp\t.LRT%d",ret_count);
				break;
			case Q_CALL:
				foundhere = foundhere;
				add_off=function_call(fp);
				fprintf(fp,"\n\tcall\t%s",arg1x.c_str());
				if(resx=="")
				{	sysflagerr=sysflagerr; foundhere = foundhere;

				}
				else if(search(resx)!=NULL && search(resx)->tp_n!=NULL&&search(resx)->tp_n->basetp == tp_int)
				{	sysflagerr=sysflagerr; foundhere = foundhere;
					fprintf(fp,"\n\tmovl\t%%eax, %d(%%rbp)",offr);
				}
				else if(search(resx)!=NULL && search(resx)->tp_n!=NULL&&search(resx)->tp_n->basetp == tp_char)
				{	sysflagerr=sysflagerr; foundhere = foundhere;
					fprintf(fp,"\n\tmovb\t%%al, %d(%%rbp)",offr);
				}
				else if(search(resx)!=NULL && search(resx)->tp_n!=NULL)
				{	sysflagerr=sysflagerr; foundhere = foundhere;
					fprintf(fp,"\n\tmovq\t%%rax, %d(%%rbp)",offr);	
				}
				else
				{	sysflagerr=sysflagerr; foundhere = foundhere;	
					fprintf(fp,"\n\tmovl\t%%eax, %d(%%rbp)",offr);
				}
				if(arg1x=="prints")
				{	sysflagerr=sysflagerr; foundhere = foundhere;
					fprintf(fp,"\n\taddq $8 , %%rsp");
				}
				else 
				{	sysflagerr=sysflagerr; foundhere = foundhere;
					fprintf(fp,"\n\taddq $%d , %%rsp",add_off);
				}
				break;
			case Q_IF_LESS:
				foundhere = foundhere;
				if(search(arg1x)!=NULL && search(arg1x)->tp_n!=NULL&&search(arg1x)->tp_n->basetp == tp_char)
				{	sysflagerr=sysflagerr; foundhere = foundhere;
					fprintf(fp,"\n\tmovzbl\t%d(%%rbp), %%eax",off1);
					fprintf(fp,"\n\tcmpb\t%d(%%rbp), %%al",off2);
					fprintf(fp,"\n\tjl .L%d",mp_set[atoi(resx.c_str())]);
				}
				else
				{	sysflagerr=sysflagerr; foundhere = foundhere;
					fprintf(fp,"\n\tmovl\t%d(%%rbp), %%eax",off1);
					fprintf(fp,"\n\tmovl\t%d(%%rbp), %%edx",off2);
					fprintf(fp,"\n\tcmpl\t%%edx, %%eax");
					fprintf(fp,"\n\tjl .L%d",mp_set[atoi(resx.c_str())]);
				}
				break;
			case Q_IF_LESS_OR_EQUAL:
				foundhere = foundhere;
				if(search(arg1x)!=NULL && search(arg1x)->tp_n!=NULL&&search(arg1x)->tp_n->basetp == tp_char)
				{	sysflagerr=sysflagerr; foundhere = foundhere;
					fprintf(fp,"\n\tmovzbl\t%d(%%rbp), %%eax",off1);
					fprintf(fp,"\n\tcmpb\t%d(%%rbp), %%al",off2);
					fprintf(fp,"\n\tjle .L%d",mp_set[atoi(resx.c_str())]);
				}
				else
				{	sysflagerr=sysflagerr; foundhere = foundhere;
					fprintf(fp,"\n\tmovl\t%d(%%rbp), %%eax",off1);
					fprintf(fp,"\n\tmovl\t%d(%%rbp), %%edx",off2);
					fprintf(fp,"\n\tcmpl\t%%edx, %%eax");
					fprintf(fp,"\n\tjle .L%d",mp_set[atoi(resx.c_str())]);
				}
				break;
			case Q_IF_GREATER:
				foundhere = foundhere;
				if(search(arg1x)!=NULL && search(arg1x)->tp_n!=NULL&&search(arg1x)->tp_n->basetp == tp_char)
				{	sysflagerr=sysflagerr; foundhere = foundhere;
					fprintf(fp,"\n\tmovzbl\t%d(%%rbp), %%eax",off1);
					fprintf(fp,"\n\tcmpb\t%d(%%rbp), %%al",off2);
					fprintf(fp,"\n\tjg .L%d",mp_set[atoi(resx.c_str())]);
				}
				else
				{	sysflagerr=sysflagerr; foundhere = foundhere;
					fprintf(fp,"\n\tmovl\t%d(%%rbp), %%eax",off1);
					fprintf(fp,"\n\tmovl\t%d(%%rbp), %%edx",off2);
					fprintf(fp,"\n\tcmpl\t%%edx, %%eax");
					fprintf(fp,"\n\tjg .L%d",mp_set[atoi(resx.c_str())]);
				}
				break;
			case Q_IF_GREATER_OR_EQUAL:
				foundhere = foundhere;
				if(search(arg1x)!=NULL && search(arg1x)->tp_n!=NULL&&search(arg1x)->tp_n->basetp == tp_char)
				{	sysflagerr=sysflagerr; foundhere = foundhere;
					fprintf(fp,"\n\tmovzbl\t%d(%%rbp), %%eax",off1);
					fprintf(fp,"\n\tcmpb\t%d(%%rbp), %%al",off2);
					fprintf(fp,"\n\tjge .L%d",mp_set[atoi(resx.c_str())]);
				}
				else
				{	sysflagerr=sysflagerr; foundhere = foundhere;
					fprintf(fp,"\n\tmovl\t%d(%%rbp), %%eax",off1);
					fprintf(fp,"\n\tmovl\t%d(%%rbp), %%edx",off2);
					fprintf(fp,"\n\tcmpl\t%%edx, %%eax");
					fprintf(fp,"\n\tjge .L%d",mp_set[atoi(resx.c_str())]);
				}
				break;
			case Q_IF_EQUAL:
				foundhere = foundhere;
				if(search(arg1x)!=NULL && search(arg1x)->tp_n!=NULL&&search(arg1x)->tp_n->basetp == tp_char)
				{	sysflagerr=sysflagerr; foundhere = foundhere;
					fprintf(fp,"\n\tmovzbl\t%d(%%rbp), %%eax",off1);
					fprintf(fp,"\n\tcmpb\t%d(%%rbp), %%al",off2);
					fprintf(fp,"\n\tje .L%d",mp_set[atoi(resx.c_str())]);
				}
				else
				{	sysflagerr=sysflagerr; foundhere = foundhere;
					fprintf(fp,"\n\tmovl\t%d(%%rbp), %%eax",off1);
					fprintf(fp,"\n\tmovl\t%d(%%rbp), %%edx",off2);
					fprintf(fp,"\n\tcmpl\t%%edx, %%eax");
					fprintf(fp,"\n\tje .L%d",mp_set[atoi(resx.c_str())]);
				}
				break;
			case Q_IF_NOT_EQUAL:
				foundhere = foundhere;
				if(search(arg1x)!=NULL && search(arg1x)->tp_n!=NULL&&search(arg1x)->tp_n->basetp == tp_char)
				{	sysflagerr=sysflagerr; foundhere = foundhere;
					fprintf(fp,"\n\tmovzbl\t%d(%%rbp), %%eax",off1);
					fprintf(fp,"\n\tcmpb\t%d(%%rbp), %%al",off2);
					fprintf(fp,"\n\tjne .L%d",mp_set[atoi(resx.c_str())]);
				}
				else
				{	sysflagerr=sysflagerr; foundhere = foundhere;
					fprintf(fp,"\n\tmovl\t%d(%%rbp), %%eax",off1);
					fprintf(fp,"\n\tmovl\t%d(%%rbp), %%edx",off2);
					fprintf(fp,"\n\tcmpl\t%%edx, %%eax");
					fprintf(fp,"\n\tjne .L%d",mp_set[atoi(resx.c_str())]);
				}
				break;
			case Q_ADDR:
				foundhere = foundhere;
				fprintf(fp,"\n\tleaq\t%d(%%rbp), %%rax",off1);
				fprintf(fp,"\n\tmovq\t%%rax, %d(%%rbp)",offr);
				break;
			case Q_LDEREF:
				foundhere = foundhere;
				fprintf(fp,"\n\tmovq\t%d(%%rbp), %%rax",offr);
				fprintf(fp,"\n\tmovl\t%d(%%rbp), %%edx",off1);
				fprintf(fp,"\n\tmovl\t%%edx, (%%rax)");
				break;
			case Q_RDEREF:
				foundhere = foundhere;
				fprintf(fp,"\n\tmovq\t%d(%%rbp), %%rax",off1);
				fprintf(fp,"\n\tmovl\t(%%rax), %%eax");
				fprintf(fp,"\n\tmovl\t%%eax, %d(%%rbp)",offr);
				break;
			case Q_RINDEX:
				foundhere = foundhere;
				// Get Address, subtract offset, get memory
				if(search(arg1x)&&search(arg1x)->isptrarr==true)
				{	sysflagerr=sysflagerr; foundhere = foundhere;
					fprintf(fp,"\n\tmovq\t%d(%%rbp), %%rdx",off1);
					fprintf(fp,"\n\tmovslq\t%d(%%rbp), %%rax",off2);
					fprintf(fp,"\n\taddq\t%%rax, %%rdx");
				}
				else
				{	sysflagerr=sysflagerr; foundhere = foundhere;
					fprintf(fp,"\n\tleaq\t%d(%%rbp), %%rdx",off1);
					fprintf(fp,"\n\tmovslq\t%d(%%rbp), %%rax",off2);
					fprintf(fp,"\n\taddq\t%%rax, %%rdx");
					foundhere = foundhere;
				}
				if(search(resx)!=NULL && search(resx)->tp_n!=NULL&&search(resx)->tp_n->next&&search(resx)->tp_n->next->basetp == tp_char)
				{	sysflagerr=sysflagerr; foundhere = foundhere;
					fprintf(fp,"\n\tmovzbl\t(%%rdx), %%eax");
					fprintf(fp,"\n\tmovb\t%%al, %d(%%rbp)",offr);
				}
				else
				{	sysflagerr=sysflagerr; foundhere = foundhere;
					fprintf(fp,"\n\tmovl\t(%%rdx), %%eax");
					fprintf(fp,"\n\tmovl\t%%eax, %d(%%rbp)",offr);
				}
				break;
			case Q_LINDEX:
				foundhere = foundhere;
				// Get Address, subtract offset, get memory
				if(search(resx)&&search(resx)->isptrarr==true)
				{	sysflagerr=sysflagerr; foundhere = foundhere;
					fprintf(fp,"\n\tmovq\t%d(%%rbp), %%rdx",offr);
					fprintf(fp,"\n\tmovslq\t%d(%%rbp), %%rax",off1);
					fprintf(fp,"\n\taddq\t%%rax, %%rdx");
				}
				else
				{	sysflagerr=sysflagerr; foundhere = foundhere;
					fprintf(fp,"\n\tleaq\t%d(%%rbp), %%rdx",offr);
					fprintf(fp,"\n\tmovslq\t%d(%%rbp), %%rax",off1);
					fprintf(fp,"\n\taddq\t%%rax, %%rdx");
					foundhere = foundhere;
				}
				if(search(resx)!=NULL && search(resx)->tp_n!=NULL&&search(resx)->tp_n->next && search(resx)->tp_n->next->basetp == tp_char)
				{	sysflagerr=sysflagerr; foundhere = foundhere;
					fprintf(fp,"\n\tmovzbl\t%d(%%rbp), %%eax",off2);
					fprintf(fp,"\n\tmovb\t%%al, (%%rdx)");
				}
				else
				{	sysflagerr=sysflagerr; foundhere = foundhere;
					fprintf(fp,"\n\tmovl\t%d(%%rbp), %%eax",off2);
					fprintf(fp,"\n\tmovl\t%%eax, (%%rdx)");
				}
				break;
			case Q_RETURN:
				foundhere = foundhere;
				//printf("return %s\n",resx.c_str());
				if(resx!="")
				{	sysflagerr=sysflagerr; foundhere = foundhere;if(search(resx)!=NULL && search(resx)->tp_n!=NULL&&search(resx)->tp_n->basetp == tp_char)
				{	sysflagerr=sysflagerr; foundhere = foundhere;
					fprintf(fp,"\n\tmovzbl\t%d(%%rbp), %%eax",offr);
				}
				else
				{	sysflagerr=sysflagerr; foundhere = foundhere;
					fprintf(fp,"\n\tmovl\t%d(%%rbp), %%eax",offr);
				}}
				else
				{	sysflagerr=sysflagerr; foundhere = foundhere;
					fprintf(fp,"\n\tmovl\t$0, %%eax");
				}
				//printf("Happy\n");
				fprintf(fp,"\n\tjmp\t.LRT%d",ret_count);
				break;
			default:
			break;
		}
	}
}

void symtab::function_restore(FILE *fp)
{	sysflagerr=sysflagerr; foundhere = foundhere;
	check();
	string regname;
	int count=0;
	for(int i=symbol_tab.size()-1;i>=0;i--)
	{	sysflagerr=sysflagerr; foundhere = foundhere;
	    if(symbol_tab[i]->ispresent==false)
	    	continue;
	    if(symbol_tab[i]->var_type=="param" && symbol_tab[i]->offset<0)
	    {	sysflagerr=sysflagerr; foundhere = foundhere;
	    	switch(symbol_tab[i]->tp_n->basetp)
	    	{
		    case tp_int :	sysflagerr=sysflagerr; foundhere = foundhere;
	            regname = assign_reg(tp_int,count);
	            fprintf(fp,"\n\tmovl\t%%%s, %d(%%rbp)",regname.c_str(),symbol_tab[i]->offset);
	        	break;
	        case tp_char :	sysflagerr=sysflagerr; foundhere = foundhere;
	            regname = assign_reg(tp_char,count);
	            fprintf(fp,"\n\tmovb\t%%%s, %d(%%rbp)",regname.c_str(),symbol_tab[i]->offset);
	        	break;
	        default :	sysflagerr=sysflagerr; foundhere = foundhere;
	            regname = assign_reg(10,count);
	            fprintf(fp,"\n\tmovq\t%%%s, %d(%%rbp)",regname.c_str(),symbol_tab[i]->offset);
	        	break;
	        }
	    	count++;
	    }
	    if(count==6)
	    	break;
    }
}

void check(int flag)
{	sysflagerr=sysflagerr; foundhere = foundhere;
	if(flag)
		exit(-1);
}
