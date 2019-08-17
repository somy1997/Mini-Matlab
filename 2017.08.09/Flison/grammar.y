%{
#include <stdio.h>
int yyerror(char *);
extern int yylex(void);
%}

%token NUMBER
%token PLUS
%token MINUS

%%

expr : NUMBER {
  printf("expr => Number\n");
 }
| expr PLUS NUMBER {
  printf("expr => expr + Number\n");
 }
| expr MINUS NUMBER {
  printf("expr => expr - Number\n");
 }

%%

int yyerror(char *s){
  printf("Parser Error : %s\n",s);
  return -1;
}