%{

#define UNSIGNED	10
#define BREAK		11
#define RETURN		12
#define VOID		13
#define CASE		14
#define FLOAT		15
#define SHORT		16
#define CHAR		17
#define FOR			18
#define SIGNED		19
#define WHILE		20
#define GOTO		21
#define BOOL		22
#define CONTINUE	23
#define IF			24
#define DEFAULT		25
#define DO			26
#define INT			27
#define SWITCH		28
#define DOUBLE		29
#define LONG		30
#define ELSE		31
#define MATRIX		32

#define ID			33

#define IC			34
#define FC			35
#define CC			36
#define ZC			37

#define SL			38

#define LSQ			39
#define RSQ			40
#define LPA			41
#define RPA			42
#define LCU			43
#define RCU			44
#define DOT			45
#define ARROW		46
#define INC			47
#define DEC			48
#define BITAND		49
#define MULT		50
#define PLUS		51
#define MINUS		52
#define NEG			53
#define NOT			54
#define DIV			55
#define REM			56
#define LSHIFT		57
#define RSHIFT		58
#define LT			59
#define GT			60
#define LTE			61
#define GTE			62
#define EQ			63
#define NOTEQ		64
#define XOR			65
#define BITOR		66
#define AND			67
#define OR			68
#define COND		69
#define COLON		70
#define SEMI		71
#define ASSIGN		72
#define MULTEQ		73
#define DIVEQ		74
#define REMEQ		75
#define PLUSEQ		76
#define MINUSEQ		77
#define LSHEQ		78
#define RSHEQ		79
#define ANDEQ		80
#define XOREQ		81
#define OREQ		82
#define COMMA		83
#define HASH		84
#define DASH		85

#define MlCom		86
#define SlCom		87

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
SlCom	"//"[^\n]*"\n"

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

{MlCom}		{ return MlCom; }
{SlCom}		{ return SlCom;}

%%

main()
{
	int token;
	while(token = yylex())
	{
		switch (token)
		{
			case UNSIGNED: printf("<KEYWORD, unsigned, %d '%s'>\n",token,yytext); break;
			case BREAK: printf("<KEYWORD, break, %d '%s'>\n",token,yytext); break;
			case RETURN: printf("<KEYWORD, return, %d '%s'>\n",token,yytext); break;
			case VOID: printf("<KEYWORD, void, %d '%s'>\n",token,yytext); break;
			case CASE: printf("<KEYWORD, case, %d '%s'>\n",token,yytext); break;
			case FLOAT: printf("<KEYWORD, float, %d '%s'>\n",token,yytext); break;
			case SHORT: printf("<KEYWORD, short, %d '%s'>\n",token,yytext); break;
			case CHAR: printf("<KEYWORD, char, %d '%s'>\n",token,yytext); break;
			case FOR: printf("<KEYWORD, for, %d '%s'>\n",token,yytext); break;
			case SIGNED: printf("<KEYWORD, signed, %d '%s'>\n",token,yytext); break;
			case WHILE: printf("<KEYWORD, while, %d '%s'>\n",token,yytext); break;
			case GOTO: printf("<KEYWORD, goto, %d '%s'>\n",token,yytext); break;
			case BOOL: printf("<KEYWORD, Bool, %d '%s'>\n",token,yytext); break;
			case CONTINUE: printf("<KEYWORD, continue, %d '%s'>\n",token,yytext); break;
			case IF: printf("<KEYWORD, if, %d '%s'>\n",token,yytext); break;
			case DEFAULT: printf("<KEYWORD, default, %d '%s'>\n",token,yytext); break;
			case DO: printf("<KEYWORD, do, %d '%s'>\n",token,yytext); break;
			case INT: printf("<KEYWORD, int, %d '%s'>\n",token,yytext); break;
			case SWITCH: printf("<KEYWORD, switch, %d '%s'>\n",token,yytext); break;
			case DOUBLE: printf("<KEYWORD, double, %d '%s'>\n",token,yytext); break;
			case LONG: printf("<KEYWORD, long, %d '%s'>\n",token,yytext); break;
			case ELSE: printf("<KEYWORD, else, %d '%s'>\n",token,yytext); break;
			case MATRIX: printf("<KEYWORD, Matrix, %d '%s'>\n",token,yytext); break;

			case ID: printf("<IDENTIFIER, %d '%s'>\n",token,yytext); break;
			
			case IC: printf("<INTEGER CONSTANT, %d '%s'>\n",token,yytext); break;
			case FC: printf("<FLOATING CONSTANT, %d '%s'>\n",token,yytext); break;
			case CC: printf("<CHARACTER CONSTANT, %d '%s'>\n",token,yytext); break;
			case ZC: printf("<ZERO CONSTANT, %d '%s'>\n",token,yytext); break;
			
			case SL: printf("<STRING LITERAL, %d '%s'>\n",token,yytext); break;
			
			case LSQ: printf("<PUNCTUATOR, '[', %d '%s'>\n",token,yytext); break;
			case RSQ: printf("<PUNCTUATOR, ']', %d '%s'>\n",token,yytext); break;
			case LPA: printf("<PUNCTUATOR, '(', %d '%s'>\n",token,yytext); break;
			case RPA: printf("<PUNCTUATOR, ')', %d '%s'>\n",token,yytext); break;
			case LCU: printf("<PUNCTUATOR, '{', %d '%s'>\n",token,yytext); break;
			case RCU: printf("<PUNCTUATOR, '}', %d '%s'>\n",token,yytext); break;
			case DOT: printf("<PUNCTUATOR, '.', %d '%s'>\n",token,yytext); break;
			case ARROW: printf("<PUNCTUATOR, '->', %d '%s'>\n",token,yytext); break;
			case INC: printf("<PUNCTUATOR, '++', %d '%s'>\n",token,yytext); break;
			case DEC: printf("<PUNCTUATOR, '--', %d '%s'>\n",token,yytext); break;
			case BITAND: printf("<PUNCTUATOR, '&', %d '%s'>\n",token,yytext); break;
			case MULT: printf("<PUNCTUATOR, '*', %d '%s'>\n",token,yytext); break;
			case PLUS: printf("<PUNCTUATOR, '+', %d '%s'>\n",token,yytext); break;
			case MINUS: printf("<PUNCTUATOR, '-', %d '%s'>\n",token,yytext); break;
			case NEG: printf("<PUNCTUATOR, '~', %d '%s'>\n",token,yytext); break;
			case NOT: printf("<PUNCTUATOR, '!', %d '%s'>\n",token,yytext); break;
			case DIV: printf("<PUNCTUATOR, '/', %d '%s'>\n",token,yytext); break;
			case REM: printf("<PUNCTUATOR, '%', %d '%s'>\n",token,yytext); break;
			case LSHIFT: printf("<PUNCTUATOR, '<<', %d '%s'>\n",token,yytext); break;
			case RSHIFT: printf("<PUNCTUATOR, '>>', %d '%s'>\n",token,yytext); break;
			case LT: printf("<PUNCTUATOR, '<', %d '%s'>\n",token,yytext); break;
			case GT: printf("<PUNCTUATOR, '>', %d '%s'>\n",token,yytext); break;
			case LTE: printf("<PUNCTUATOR, '<=', %d '%s'>\n",token,yytext); break;
			case GTE: printf("<PUNCTUATOR, '>=', %d '%s'>\n",token,yytext); break;
			case EQ: printf("<PUNCTUATOR, '==', %d '%s'>\n",token,yytext); break;
			case NOTEQ: printf("<PUNCTUATOR, '!=', %d '%s'>\n",token,yytext); break;
			case XOR: printf("<PUNCTUATOR, '^', %d '%s'>\n",token,yytext); break;
			case BITOR: printf("<PUNCTUATOR, '|', %d '%s'>\n",token,yytext); break;
			case AND: printf("<PUNCTUATOR, '&&', %d '%s'>\n",token,yytext); break;
			case OR: printf("<PUNCTUATOR, '||', %d '%s'>\n",token,yytext); break;
			case COND: printf("<PUNCTUATOR, '?', %d '%s'>\n",token,yytext); break;
			case COLON: printf("<PUNCTUATOR, ':', %d '%s'>\n",token,yytext); break;
			case SEMI: printf("<PUNCTUATOR, ';', %d '%s'>\n",token,yytext); break;
			case ASSIGN: printf("<PUNCTUATOR, '=', %d '%s'>\n",token,yytext); break;
			case MULTEQ: printf("<PUNCTUATOR, '*=', %d '%s'>\n",token,yytext); break;
			case DIVEQ: printf("<PUNCTUATOR, '/=', %d '%s'>\n",token,yytext); break;
			case REMEQ: printf("<PUNCTUATOR, '%=', %d '%s'>\n",token,yytext); break;
			case PLUSEQ: printf("<PUNCTUATOR, '+=', %d '%s'>\n",token,yytext); break;
			case MINUSEQ: printf("<PUNCTUATOR, '-=', %d '%s'>\n",token,yytext); break;
			case LSHEQ: printf("<PUNCTUATOR, '<<=', %d '%s'>\n",token,yytext); break;
			case RSHEQ: printf("<PUNCTUATOR, '>>=', %d '%s'>\n",token,yytext); break;
			case ANDEQ: printf("<PUNCTUATOR, '&=', %d '%s'>\n",token,yytext); break;
			case XOREQ: printf("<PUNCTUATOR, '^=', %d '%s'>\n",token,yytext); break;
			case OREQ: printf("<PUNCTUATOR, '|=', %d '%s'>\n",token,yytext); break;
			case COMMA: printf("<PUNCTUATOR, ',', %d '%s'>\n",token,yytext); break;
			case HASH: printf("<PUNCTUATOR, '#', %d '%s'>\n",token,yytext); break;
			case DASH: printf("<PUNCTUATOR, ''', %d '%s'>\n",token,yytext); break;
			
			case MlCom: printf("<MULTI LINE COMMENT, %d '%s'>\n",token,yytext); break;
			case SlCom: printf("<SINGLE LINE COMMENT, %d '%s'>\n",token,yytext); break;
		}
	}
}
