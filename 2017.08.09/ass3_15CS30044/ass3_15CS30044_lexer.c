#include <stdio.h>
#include "y.tab.h"

extern int yylex();
extern char* yytext;

int main()
{
	int token;
	while(token = yylex())
	{
		switch (token)
		{
			case UNSIGNED: 
			case BREAK: 
			case RETURN: 
			case VOID: 
			case CASE: 
			case FLOAT: 
			case SHORT: 
			case CHAR: 
			case FOR: 
			case SIGNED: 
			case WHILE: 
			case GOTO: 
			case BOOL: 
			case CONTINUE: 
			case IF: 
			case DEFAULT: 
			case DO: 
			case INT: 
			case SWITCH: 
			case DOUBLE: 
			case LONG: 
			case ELSE: 
			case MATRIX: printf("<KEYWORD, '%s'>\n",yytext); break;

			case ID: printf("<IDENTIFIER, '%s'>\n",yytext); break;
			
			case IC: printf("<INTEGER CONSTANT, '%s'>\n",yytext); break;
			case FC: printf("<FLOATING CONSTANT, '%s'>\n",yytext); break;
			case CC: printf("<CHARACTER CONSTANT, '%s'>\n",yytext); break;
			case ZC: printf("<ZERO CONSTANT, '%s'>\n",yytext); break;
			
			case SL: printf("<STRING LITERAL, '%s'>\n",yytext); break;
			
			case LSQ: 
			case RSQ: 
			case LPA: 
			case RPA: 
			case LCU: 
			case RCU: 
			case DOT: 
			case ARROW: 
			case INC: 
			case DEC: 
			case BITAND: 
			case MULT: 
			case PLUS: 
			case MINUS: 
			case NEG: 
			case NOT: 
			case DIV: 
			case REM: 
			case LSHIFT: 
			case RSHIFT: 
			case LT: 
			case GT: 
			case LTE: 
			case GTE: 
			case EQ: 
			case NOTEQ: 
			case XOR: 
			case BITOR: 
			case AND: 
			case OR: 
			case COND: 
			case COLON: 
			case SEMI: 
			case ASSIGN: 
			case MULTEQ: 
			case DIVEQ: 
			case REMEQ: 
			case PLUSEQ: 
			case MINUSEQ: 
			case LSHEQ: 
			case RSHEQ: 
			case ANDEQ: 
			case XOREQ: 
			case OREQ: 
			case COMMA: 
			case HASH: 
			case DASH: printf("<PUNCTUATOR, '%s'>\n",yytext); break;
			
			case MlCom: printf("<MULTI LINE COMMENT, '%s'>\n",yytext); break;
			case SlCom: printf("<SINGLE LINE COMMENT, '%s'>\n",yytext); break;
			
			case ERR: printf("<LEXING FAILED, '%s'>\n",yytext); return 0;
		}
	}
	return 0;
}
