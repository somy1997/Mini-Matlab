%{
#include "grammar.tab.c"
%}

%option noyywrap

NUMBER [0-9]+
PLUS "+"
MINUS "-"

%%

{NUMBER} {return NUMBER;}

{PLUS} {return PLUS;}

{MINUS} {return MINUS;}

. {
printf("Lexer error %s\n",yytext);
}

%%
