%{

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

%}

ZC		0

D		[0-9]
ND		[1-9]
IC		{ND}{D}*

DS		{D}+
sign	[+-]
EP		[eE]({sign}?){DS}
FrC		{DS}?"."{DS}|{DS}"."
FC		{FrC}({EP}?)|{DS}{EP}

C		{IC}|{FC}|{ZC}

INT		{ZC}|{IC}
FL1		"for("{ID}"="{INT}";"{INT}"<"{ID}";--"{ID}")"
FL2		"for("{ID}"="{INT}","{ID}"="{INT}";"{INT}"<"{ID}";--"{ID}",++"{ID}")"
WHL		"while("{INT}"<"{ID}")"
ASNFLT	{ID}"="{FC}
DECL	({ASNFLT}",")*{ASNFLT}
ARR		{ID}"["{INT}"]"
IF		"if("{INT}"<"{ID}"||"{INT}"<"{ID}")"
UNOP	({ID}"--")|("--"{ID})
SW		"switch("{ID}")"
ROW		{INT}","{INT}","{INT}
MAT		"["({ROW}";")*{ROW}"]"
BINOP	{ID}"="{INT}"*"{ID}";"

KW		break|return|case|float|for|while|continue|if|default|int|switch|Matrix

IDND	[_a-zA-Z]
ID		{IDND}({IDND}|{D})*

schar	[^\'\\\n]
schars	{schar}+
SL		"\""({schars}?)"\""

Punc	"["|"]"|"("|")"|"{"|"}"|"."|"++"|"--"|"*"|"+"|"-"|"/"|"!"|"<"|">"|"&&"|"||"|"?"|":"|";"|"="|","|"#"

MlCom	"/*"([^*]|[*]+[^/*])*[*]+"/"
SlCom	"//"[^\n]*"\n"

WS		[ \t\n]+

%%

{FL1}		return FL1;
{FL2}		return FL2;
{WHL}		return WHL;
{DECL}		return DECL;
{ARR}		return ARR;
{IF}		return IF;
{UNOP}		return UNOP;
{SW}		return SW;
{MAT}		return MAT;
{BINOP}		return BINOP;

{KW}		return KW;

{ID}		return ID;

{C}			return C;

{SL}		return SL;

{Punc}		return Punc;

{MlCom}		return MlCom;
{SlCom}		return SlCom;

{WS}		return WS;

.			return ERR;

%%

