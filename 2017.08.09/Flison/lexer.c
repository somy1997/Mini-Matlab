#include "lex.yy.c"

int main(int argc ,char *argv[]){
  int what;
  while(what = yylex()){
    if(what == NUMBER){
      printf("Number %s\n",yytext);
    }else if(what == PLUS) {
      printf("PLUS %s\n",yytext);
    }else if(what == MINUS) {
      printf("MINUS %s\n",yytext);
    }
  };
  return 0;
}
