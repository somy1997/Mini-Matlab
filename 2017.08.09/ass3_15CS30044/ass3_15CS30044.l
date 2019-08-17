%{

#include "y.tab.h"

%}

D		[0-9]
IDND	[_a-zA-Z]
ID		{IDND}({IDND}|{D})*
ZC		0
ND		[1-9]
IC		{ND}{D}*
DS		{D}+
sign	[+-]
EP		[eE]{sign}?{DS}
FrC		("."{DS}|{DS}"."{DS})|{DS}"."
FC		({FrC}|{FrC}{EP})|{DS}{EP}
ES		"\\\'"|"\\\""|"\\\?"|"\\\\"|"\\a"|"\\b"|"\\f"|"\\n"|"\\r"|"\\t"|"\\v"
cchar	[^\'\\\n]|{ES}
cchars	{cchar}+
CC		"\'"{cchars}"\'"
schar	{cchar}
schars	{schar}+
SL		"\""{cchars}"\""
Punc	"["|"]"|"("|")"|"{"|"}"|"."|"->"|"++"|"--"|"&"|"*"|"+"|"-"|"~"|"!"|"/"|"%"|"<<"|">>"|"<"|">"|"<="|">="|"=="|"!="|"^"|"|"|"&&"|"||"|"?"|":"|";"|"="|"*="|"/="|"%="|"+="|"-="|"<<="|">>="|"&="|"^="|"|="|","|"#"|"'"
MlCom	"/*"([^*]|[*]+[^/*])*[*]+"/"
SlCom	"//"[^\n\r]*
WS		[ \t\r\n]+

%%

unsigned	return UNSIGNED;
break		return BREAK;
return		return RETURN;
void		return VOID;
case		return CASE;
float		return FLOAT;
short		return SHORT;
char		return CHAR;
for			return FOR;
signed		return SIGNED;
while		return WHILE;
goto		return GOTO;
Bool		return BOOL;
continue	return CONTINUE;
if			return IF;
default		return DEFAULT;
do			return DO;
int			return INT;
switch		return SWITCH;
double		return DOUBLE;
long		return LONG;
else		return ELSE;
Matrix		return MATRIX;

{ID}		{ return ID; }

{IC}	{ return IC; }
{FC}	{ return FC; }
{CC}	{ return CC; }
{ZC}	{ return ZC; }
{SL}	{ return SL; }

"["			return LSQ;
"]"			return RSQ;
"("			return LPA;
")"			return RPA;
"{"			return LCU;
"}"			return RCU;
"."			return DOT;
"->"		return ARROW;
"++"		return INC;
"--"		return DEC;
"&"			return BITAND;
"*"			return MULT;
"+"			return PLUS;
"-"			return MINUS;
"~"			return NEG;
"!"			return NOT;
"/"			return DIV;
"%"			return REM;
"<<"		return LSHIFT;
">>"		return RSHIFT;
"<"			return LT;
">"			return GT;
"<="		return LTE;
">="		return GTE;
"=="		return EQ;
"!="		return NOTEQ;
"^"			return XOR;
"|"			return BITOR;
"&&"		return AND;
"||"		return OR;
"?"			return COND;
":"			return COLON;
";"			return SEMI;
"="			return ASSIGN;
"*="		return MULTEQ;
"/="		return DIVEQ;
"%="		return REMEQ;
"+="		return PLUSEQ;
"-="		return MINUSEQ;
"<<="		return LSHEQ;
">>="		return RSHEQ;
"&="		return ANDEQ;
"^="		return XOREQ;
"|="		return OREQ;
","			return COMMA;
"#"			return HASH;
".'"		return DASH;

{MlCom}		;//{ return MlCom; }
{SlCom}		;//{ return SlCom;}

{WS}	{ ; }
.		{ return ERR;}

%%
