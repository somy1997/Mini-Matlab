%{

#define KW	 		10
#define ID			11
#define IC			12
#define FC			13
#define CC			14
#define ZC			15
#define SL			16
#define Punc		17
#define MlCom		18
#define SlCom		19

%}

KW		unsigned|break|return|void|case|float|short|char|for|signed|while|goto|Bool|continue|if|default|do|int|switch|double|long|else|Matrix
D		[0-9]
IDND	[_a-zA-Z]
ID		{IDND}({IDND}|{D})*
ZC		0
ND		[1-9]
IC		{ND}{D}*
DS		{D}+
sign	[+-]
EP		[eE]({sign}{0,1}){DS}
FrC		("."{DS}|{DS}"."{DS})|{DS}"."
FC		({FrC}|{FrC}{EP})|{DS}{EP}
ES		"\\\'"|"\\\""|"\\\?"|"\\\\"|"\\a"|"\\b"|"\\f"|"\\n"|"\\r"|"\\t"|"\\v"
cchar	[^\'\\\n]|{ES}
cchars	{cchar}+
CC		"\'"{cchars}"\'"
schar	{cchar}
schars	{schar}+
SL		"\""{schars}"\""
Punc	"["|"]"|"("|")"|"."|"->"|"++"|"--"|"&"|"*"|"+"|"-"|"~"|"!"|"/"|"%"|"<<"|">>"|"<"|">"|"<="|">="|"=="|"!="|"^"|"|"|"&&"|"||"|"?"|":"|";"|"="|"*="|"/="|"%="|"+="|"-="|"<<="|">>="|"&="|"^="|"|="|","|"#"|"'"
MlCom	"/*"([^*]|[*]+[^/*])*[*]+"/"
SlCom	"//"[^\n]*"\n"

%%

{KW}	{ return KW; }
{ID}	{ return ID; }
{IC}	{ return IC; }
{FC}	{ return FC; }
{CC}	{ return CC; }
{ZC}	{ return ZC; }
{SL}	{ return SL; }
{Punc}	{ return Punc; }
{MlCom}	{ return MlCom; }
{SlCom}	{ return SlCom;}
.		{ ;}

%%

main()
{
	int token;
	while(token = yylex())
	{
		switch (token)
		{
			case KW: printf("<KEYWORD, %d '%s'>\n",token,yytext); break;
			case ID: printf("<IDENTIFIER, %d '%s'>\n",token,yytext); break;
			case IC: printf("<INTEGER CONSTANT, %d '%s'>\n",token,yytext); break;
			case FC: printf("<FLOATING CONSTANT, %d '%s'>\n",token,yytext); break;
			case CC: printf("<CHARACTER CONSTANT, %d '%s'>\n",token,yytext); break;
			case ZC: printf("<ZERO CONSTANT, %d '%s'>\n",token,yytext); break;
			case SL: printf("<STRING LITERAL, %d '%s'>\n",token,yytext); break;
			case Punc: printf("<PUNCTUATOR, %d '%s'>\n",token,yytext); break;
			case MlCom: printf("<MULTI LINE COMMENT, %d '%s'>\n",token,yytext); break;
			case SlCom: printf("<SINGLE LINE COMMENT, %d '%s'>\n",token,yytext); break;
		}
	}
}
