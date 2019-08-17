%{
	#include "15CS30044_translator.h"
	#include "y.tab.h"
	extern void yyerror(const char *);
	static void comment(void);
%}

DIGIT [0-9]
NONZERODIG [1-9]
IDENT_ND [A-Za-z_]
IDENT ({IDENT_ND}({IDENT_ND}|{DIGIT})*)
WHITESPACE [ \n\t\r]
SIGN [+-]
DIGIT_SEQ {DIGIT}+
EXPONENT_PART ([eE]{SIGN}?{DIGIT_SEQ})
ZERO "0"
INT_CONST (({NONZERODIG}({DIGIT}*))|{ZERO}+)
DOT "."
FRACT_CONST (({DIGIT_SEQ}?{DOT}{DIGIT_SEQ})|({DIGIT_SEQ}{DOT}))
FLOAT_CONST (({FRACT_CONST}{EXPONENT_PART}?)|({DIGIT_SEQ}{EXPONENT_PART}))
ENUM_CONST {IDENT}
ESC_SEQ ([\\][\'\"\?\\abfnrtv])
C_CHAR [^\'\\\n]|{ESC_SEQ}
C_CHAR_SEQ {C_CHAR}+
C_CHAR_CONST (\'{C_CHAR_SEQ}\')
CONST ({INT_CONST}|{FLOAT_CONST}|{ENUM_CONST}|{C_CHAR_CONST})
S_CHAR [^\"\\\n]|{ESC_SEQ}
S_CHAR_SEQ {S_CHAR}+
STRING_LITERAL (\"{S_CHAR_SEQ}*\")
SINGLE_COMMENT [/][/].*
MULTI_END [\*]+[/]
MULTI_START [/][\*]+
NON_STAR (([^\*]).*)
NON_FS ([^/].*)
AVOID_MULTI_END (NON_STAR|([\*]{NON_FS}))
MULTI_COMMENT ({MULTI_START}(([^\*])|((\*)+[^/\*]))*{MULTI_END})
COMMENT {SINGLE_COMMENT}|{MULTI_COMMENT}

%%

"unsigned"          {return UNSIGNED;}
"break"             {return BREAK;}
"return"            {return RETURN;}
"void"              {return VOID;}
"case"              {return CASE;}
"float"             {return FLOAT;}
"short"             {return SHORT;}
"char"              {return CHAR;}
"for"              	{return FOR;}
"signed"            {return SIGNED;}
"while"             {return WHILE;}
"goto"              {return GOTO;}
"Bool"              {return BOOL;}
"continue"          {return CONTINUE;}
"if"                {return IF;}
"default"           {return DEFAULT;}
"do"                {return DO;}
"int"               {return INT;}
"switch"            {return SWITCH;}
"double"            {return DOUBLE;}
"long"              {return LONG;}
"else"              {return ELSE;}
"Matrix"			{return MATRIX;}

"["                 { return '['; }
"]"                 { return ']'; }
"("                 { return '('; }
")"                 { return ')'; }
"{"                 { return '{'; }
"}"                 { return '}'; }
"."                 { return '.'; }
"->"                { return (POINTER); }
"++"                { return (INCREMENT); }
"--"                { return (DECREMENT); }
"&"                 { return '&'; }
"*"                 { return '*'; }
"+"                 { return '+'; }
"-"                 { return '-'; }
"~"                 { return '~'; }
"!"                 { return '!'; }
"/"                 { return '/'; }
"%"                 { return '%'; }
"<<"                { return (LEFT_SHIFT); }
">>"                { return (RIGHT_SHIFT); }
"<"                 { return '<'; }
">"                 { return '>'; }
"<="                { return (LESS_EQUALS); }
">="                { return (GREATER_EQUALS); }
"=="                { return (EQUALS); }
"!="                { return (NOT_EQUALS); }
"^"                 { return '^'; }
"|"                 { return '|'; }
"&&"                { return (AND); }
"||"                { return (OR); }
"?"                 { return '?'; }
":"                 { return ':'; }
";"                 { return ';'; }
"="                 { return '='; }
"*="                { return MULTIPLY_ASSIGN; }
"/="                { return DIVIDE_ASSIGN; }
"%="                { return MODULO_ASSIGN; }
"+="                { return ADD_ASSIGN; }
"-="                { return SUBTRACT_ASSIGN; }
"<<="               { return LEFT_SHIFT_ASSIGN; }
">>="               { return RIGHT_SHIFT_ASSIGN; }
"&="                { return AND_ASSIGN; }
"^="                { return XOR_ASSIGN; }
"|="                { return OR_ASSIGN; }
","                 { return ','; }
"#"                 { return '#'; }
".'"				{ return DASH; }

{COMMENT}           {;}

{IDENT}             { yylval.str=new string(yytext);return IDENTIFIER;}
{INT_CONST}         { yylval.value.i=atoi(yytext); return INTEGER_CONSTANT;}
{FLOAT_CONST}		{ yylval.value.d=atof(yytext); return FLOATING_CONSTANT;}
{C_CHAR_CONST}		{ 
						yylval.value.c=yytext[1];
						if(yytext[1]=='\\')
							switch(yytext[2])	// \'\"\?\\abfnrtv
							{
								case '\'':
								case '\"':
								case '\?':
								case '\\':	yylval.value.c=yytext[2]; break;
								case 'a' :	yylval.value.c='\a'; break;
								case 'b' :	yylval.value.c='\b'; break;
								case 'f' :	yylval.value.c='\f'; break;
								case 'n' :	yylval.value.c='\n'; break;
								case 'r' :	yylval.value.c='\r'; break;
								case 't' :	yylval.value.c='\t'; break;
								case 'v' :	yylval.value.c='\v'; break;
							} 
						return CHAR_CONST;
					}
{STRING_LITERAL}    { ;return STRING_LITERAL;}


{WHITESPACE}        {;}

%%
