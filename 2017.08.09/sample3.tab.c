/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "sample3.y" /* yacc.c:339  */

#include <stdio.h>
int yyerror(char *);
extern int yylex(void);

#line 72 "sample3.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "sample3.tab.h".  */
#ifndef YY_YY_SAMPLE3_TAB_H_INCLUDED
# define YY_YY_SAMPLE3_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    UNSIGNED = 258,
    BREAK = 259,
    RETURN = 260,
    VOID = 261,
    CASE = 262,
    FLOAT = 263,
    SHORT = 264,
    CHAR = 265,
    FOR = 266,
    SIGNED = 267,
    WHILE = 268,
    GOTO = 269,
    BOOL = 270,
    CONTINUE = 271,
    IF = 272,
    DEFAULT = 273,
    DO = 274,
    INT = 275,
    SWITCH = 276,
    DOUBLE = 277,
    LONG = 278,
    ELSE = 279,
    MATRIX = 280,
    ID = 281,
    IC = 282,
    FC = 283,
    CC = 284,
    ZC = 285,
    SL = 286,
    LSQ = 287,
    RSQ = 288,
    LPA = 289,
    RPA = 290,
    LCU = 291,
    RCU = 292,
    DOT = 293,
    ARROW = 294,
    INC = 295,
    DEC = 296,
    BITAND = 297,
    MULT = 298,
    PLUS = 299,
    MINUS = 300,
    NEG = 301,
    NOT = 302,
    DIV = 303,
    REM = 304,
    LSHIFT = 305,
    RSHIFT = 306,
    LT = 307,
    GT = 308,
    LTE = 309,
    GTE = 310,
    EQ = 311,
    NOTEQ = 312,
    XOR = 313,
    BITOR = 314,
    AND = 315,
    OR = 316,
    COND = 317,
    COLON = 318,
    SEMI = 319,
    ASSIGN = 320,
    MULTEQ = 321,
    DIVEQ = 322,
    REMEQ = 323,
    PLUSEQ = 324,
    MINUSEQ = 325,
    LSHEQ = 326,
    RSHEQ = 327,
    ANDEQ = 328,
    XOREQ = 329,
    OREQ = 330,
    COMMA = 331,
    HASH = 332,
    DASH = 333,
    MlCom = 334,
    SlCom = 335
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SAMPLE3_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 204 "sample3.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  28
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   567

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  81
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  55
/* YYNRULES -- Number of rules.  */
#define YYNRULES  161
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  271

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   335

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    95,    95,    97,    99,   101,   105,   107,   109,   111,
     115,   117,   119,   121,   123,   125,   127,   129,   131,   135,
     137,   141,   143,   145,   147,   151,   153,   155,   159,   163,
     165,   167,   169,   173,   175,   177,   181,   183,   185,   189,
     191,   193,   195,   197,   201,   203,   205,   209,   211,   215,
     217,   221,   223,   227,   229,   233,   235,   239,   241,   245,
     247,   251,   253,   255,   257,   259,   261,   263,   265,   267,
     269,   271,   275,   277,   281,   287,   289,   293,   295,   299,
     301,   305,   307,   311,   313,   315,   317,   319,   321,   323,
     325,   327,   329,   331,   335,   337,   341,   343,   345,   347,
     349,   351,   353,   357,   359,   363,   367,   369,   373,   375,
     379,   381,   385,   387,   391,   393,   397,   399,   401,   403,
     407,   411,   413,   417,   419,   425,   427,   429,   431,   433,
     435,   439,   441,   443,   447,   449,   453,   455,   459,   461,
     465,   467,   471,   473,   475,   479,   481,   483,   485,   490,
     491,   495,   497,   499,   501,   507,   509,   513,   515,   519,
     524,   525
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "UNSIGNED", "BREAK", "RETURN", "VOID",
  "CASE", "FLOAT", "SHORT", "CHAR", "FOR", "SIGNED", "WHILE", "GOTO",
  "BOOL", "CONTINUE", "IF", "DEFAULT", "DO", "INT", "SWITCH", "DOUBLE",
  "LONG", "ELSE", "MATRIX", "ID", "IC", "FC", "CC", "ZC", "SL", "LSQ",
  "RSQ", "LPA", "RPA", "LCU", "RCU", "DOT", "ARROW", "INC", "DEC",
  "BITAND", "MULT", "PLUS", "MINUS", "NEG", "NOT", "DIV", "REM", "LSHIFT",
  "RSHIFT", "LT", "GT", "LTE", "GTE", "EQ", "NOTEQ", "XOR", "BITOR", "AND",
  "OR", "COND", "COLON", "SEMI", "ASSIGN", "MULTEQ", "DIVEQ", "REMEQ",
  "PLUSEQ", "MINUSEQ", "LSHEQ", "RSHEQ", "ANDEQ", "XOREQ", "OREQ", "COMMA",
  "HASH", "DASH", "MlCom", "SlCom", "$accept", "primary_expression",
  "constant", "postfix_expression", "argument_expression_list",
  "unary_expression", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "AND_expression",
  "exclusive_OR_expression", "inclusive_OR_expression",
  "logical_AND_expression", "logical_OR_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "type_specifier", "declarator", "direct_declarator", "pointer",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "initializer", "initializer_row_list",
  "initializer_row", "designation", "designator_list", "designator",
  "statement", "labeled_statement", "compound_statement",
  "block_item_list", "block_item", "expression_statement",
  "selection_statement", "iteration_statement", "expression_opt",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", "declaration_list_opt", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335
};
# endif

#define YYPACT_NINF -191

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-191)))

#define YYTABLE_NINF -82

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     441,  -191,  -191,  -191,  -191,  -191,  -191,  -191,  -191,  -191,
    -191,  -191,  -191,     2,   441,   423,  -191,  -191,  -191,    48,
       1,  -191,   -29,  -191,    64,    47,    15,  -191,  -191,  -191,
      -9,  -191,  -191,    48,   462,   111,   482,   402,    47,  -191,
    -191,   -55,  -191,  -191,  -191,  -191,  -191,  -191,   522,   442,
     522,  -191,  -191,  -191,   522,  -191,  -191,    -1,   193,   522,
    -191,    37,    44,    43,    99,    92,     6,    20,    24,    53,
      94,  -191,  -191,  -191,   212,  -191,     2,  -191,  -191,    82,
    -191,  -191,    48,    83,    54,  -191,   -23,  -191,   -21,   522,
      98,  -191,    -7,    56,   462,   -15,  -191,  -191,  -191,   522,
     502,   109,   113,  -191,  -191,  -191,  -191,  -191,  -191,  -191,
    -191,  -191,  -191,  -191,  -191,  -191,  -191,   522,  -191,  -191,
     522,   522,   522,   522,   522,   522,   522,   522,   522,   522,
     522,   522,   522,   522,   522,   522,   522,   522,   522,    73,
     522,   522,   108,   112,   133,   104,   147,   119,   316,   149,
     121,  -191,  -191,    11,  -191,  -191,  -191,  -191,   274,  -191,
    -191,  -191,  -191,  -191,  -191,  -191,  -191,   441,  -191,   159,
    -191,   522,  -191,   153,  -191,  -191,   442,   442,  -191,  -191,
    -191,   -24,  -191,   -20,  -191,  -191,  -191,  -191,  -191,  -191,
    -191,    37,    37,    44,    44,    43,    43,    43,    43,    99,
      99,    92,     6,    20,    24,    53,   -52,  -191,   114,   123,
     126,   359,   522,   127,  -191,   522,   316,   179,   522,   316,
    -191,  -191,  -191,  -191,  -191,  -191,  -191,    56,  -191,   462,
    -191,  -191,   522,   522,  -191,   316,   522,   129,   -17,  -191,
     -13,  -191,   160,    -8,  -191,  -191,  -191,  -191,  -191,   131,
     522,   316,   316,   522,   316,   522,   134,  -191,   176,    -3,
    -191,   166,   522,   316,  -191,   316,   168,  -191,  -191,   316,
    -191
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    92,    83,    88,    85,    84,    91,    93,    86,    89,
      87,    90,   158,     0,    78,     0,   155,   157,    96,     0,
     104,    76,     0,    79,   160,    94,     0,    77,     1,   156,
       0,   103,    75,     0,     0,     0,     0,     0,    95,    97,
      80,    81,     2,     6,     7,     8,     9,     4,     0,     0,
       0,    25,    26,    27,     0,    10,     3,    21,    28,     0,
      29,    33,    36,    39,    44,    47,    49,    51,    53,    55,
      57,    59,   112,    82,     0,   161,     0,   159,    99,     0,
     110,   102,   109,     0,   105,   106,     0,    72,     0,     0,
       0,   117,     0,   114,     0,     0,   121,    22,    23,     0,
       0,     0,     0,    16,    17,    18,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,     0,    28,    24,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     149,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       2,   135,   141,     0,   138,   139,   125,   126,     0,   136,
     127,   128,   129,   130,    98,   108,   100,     0,   101,     0,
       5,     0,    74,     0,   124,   113,     0,     0,   116,   120,
     122,     0,    13,     0,    19,    14,    15,    60,    30,    31,
      32,    34,    35,    37,    38,    40,    41,    42,    43,    45,
      46,    48,    50,    52,    54,    56,     0,   153,   150,     0,
       0,   149,     0,     0,   152,     0,     0,     0,     0,     0,
     140,   134,   137,   107,   111,    73,   123,   115,   119,     0,
      11,    12,     0,     0,   154,     0,   149,     0,     0,   151,
       0,   133,     0,     0,   131,   118,    20,    58,   132,     0,
     149,     0,     0,     0,     0,   149,     0,   145,   142,     0,
     144,     0,   149,     0,   146,     0,     0,   143,   148,     0,
     147
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -191,  -191,  -191,  -191,  -191,   -25,  -191,   -51,    38,    40,
      49,    42,    71,    72,    74,    75,    76,  -191,   -83,   -33,
    -191,   -48,    69,   -31,     5,  -191,   203,  -191,    -6,   186,
     224,  -191,  -191,    78,  -191,   -32,  -191,    77,    70,  -191,
     155,   -94,  -191,   216,  -191,   115,  -191,  -191,  -191,  -190,
    -191,  -191,   254,  -191,  -191
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    55,    56,    57,   183,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    87,
     117,   153,   173,    12,    76,    22,    23,    14,    41,    25,
      26,    83,    84,    85,    86,    91,    92,    93,    94,    95,
      96,   155,   156,   157,   158,   159,   160,   161,   162,   209,
     163,    15,    16,    17,    35
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      88,    72,    73,    79,    75,    13,   172,    24,   119,   230,
      34,   233,   168,    30,   170,   231,    72,    89,   251,    27,
      13,   237,   252,    90,   171,    97,    39,   254,    18,    98,
     175,    99,   264,   100,   118,    32,    19,   101,   102,   103,
     104,    18,    82,   154,    20,    20,   249,    33,   133,    19,
     179,   181,   171,   169,   217,   171,   232,   176,   172,   171,
     256,    72,   178,   171,   118,   261,    21,   184,   171,   188,
     189,   190,   266,   171,    18,   220,   165,   105,   134,    36,
     120,    37,    19,   135,   187,   121,   122,   171,   123,   124,
     206,    20,   208,   125,   126,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   136,     1,   164,   118,     2,   166,     3,
       4,     5,   241,     6,   174,   244,     7,   154,   -81,    34,
     167,     8,   177,     9,    10,   185,    11,   207,   225,   186,
     -81,   248,   211,    72,    72,   228,   212,    74,   131,   132,
     247,   127,   128,   129,   130,   137,   138,   257,   258,   213,
     260,   191,   192,   208,   238,   193,   194,   240,   214,   267,
     243,   268,    82,   199,   200,   270,   195,   196,   197,   198,
     236,   215,   216,   218,   219,   224,   226,   234,   208,   235,
     171,   239,   242,   250,   253,   255,    72,   245,   262,   246,
     263,   265,   208,   269,   201,   259,   202,   208,   118,   203,
     210,   204,    38,   205,   208,     1,   139,   140,     2,   141,
       3,     4,     5,   142,     6,   143,   144,     7,   145,   146,
     147,   148,     8,   149,     9,    10,    40,    11,   150,    43,
      44,    45,    46,    47,    31,   223,    48,   229,    74,   151,
     180,    77,    50,   227,    51,    52,    53,    54,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,    29,
       0,     0,     0,   222,     0,     0,   152,     1,   139,   140,
       2,   141,     3,     4,     5,   142,     6,   143,   144,     7,
     145,   146,   147,   148,     8,   149,     9,    10,     0,    11,
     150,    43,    44,    45,    46,    47,     0,     0,    48,     0,
      74,   221,     0,     0,    50,     0,    51,    52,    53,    54,
     139,   140,     0,   141,     0,     0,     0,   142,     0,   143,
     144,     0,   145,   146,   147,   148,     0,   149,   152,     0,
       0,     0,   150,    43,    44,    45,    46,    47,     0,     0,
      48,     0,    74,     0,     0,     0,    50,     0,    51,    52,
      53,    54,     1,     0,     0,     2,     0,     3,     4,     5,
       0,     6,     0,     0,     7,     0,     0,     0,     0,     8,
     152,     9,    10,     0,    11,    42,    43,    44,    45,    46,
      47,     0,     0,    48,     0,     0,     0,     0,     0,    50,
       0,    51,    52,    53,    54,     1,     0,     0,     2,     0,
       3,     4,     5,     0,     6,     0,     0,     7,     0,     0,
       0,     0,     8,    28,     9,    10,     1,    11,    80,     2,
       0,     3,     4,     5,     0,     6,     0,    81,     7,     0,
       0,     0,     0,     8,     1,     9,    10,     2,    11,     3,
       4,     5,     0,     6,     0,     0,     7,     0,     0,     0,
       0,     8,     0,     9,    10,     0,    11,     0,    42,    43,
      44,    45,    46,    47,    89,     0,    48,     0,    49,     0,
      90,     0,    50,     0,    51,    52,    53,    54,    42,    43,
      44,    45,    46,    47,     0,     0,    48,     0,    49,     0,
       0,     0,    50,     0,    51,    52,    53,    54,    42,    43,
      44,    45,    46,    47,     0,    78,    48,     0,     0,     0,
       0,     0,    50,     0,    51,    52,    53,    54,    42,    43,
      44,    45,    46,    47,     0,     0,    48,   182,     0,     0,
       0,     0,    50,     0,    51,    52,    53,    54,    42,    43,
      44,    45,    46,    47,     0,     0,    48,     0,     0,     0,
       0,     0,    50,     0,    51,    52,    53,    54
};

static const yytype_int16 yycheck[] =
{
      48,    34,    34,    36,    35,     0,    89,    13,    59,    33,
      65,    63,    35,    19,    35,    35,    49,    32,    35,    14,
      15,   211,    35,    38,    76,    50,    35,    35,    26,    54,
      37,    32,    35,    34,    59,    64,    34,    38,    39,    40,
      41,    26,    37,    74,    43,    43,   236,    76,    42,    34,
      65,    99,    76,    76,   148,    76,    76,    64,   141,    76,
     250,    94,    94,    76,    89,   255,    64,   100,    76,   120,
     121,   122,   262,    76,    26,    64,    82,    78,    58,    32,
      43,    34,    34,    59,   117,    48,    49,    76,    44,    45,
     138,    43,   140,    50,    51,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,    60,     3,    33,   141,     6,    35,     8,
       9,    10,   216,    12,    26,   219,    15,   158,    64,    65,
      76,    20,    76,    22,    23,    26,    25,    64,   171,    26,
      76,   235,    34,   176,   177,   177,    34,    36,    56,    57,
     233,    52,    53,    54,    55,    61,    62,   251,   252,    26,
     254,   123,   124,   211,   212,   125,   126,   215,    64,   263,
     218,   265,   167,   131,   132,   269,   127,   128,   129,   130,
     211,    34,    63,    34,    63,    26,    33,    64,   236,    63,
      76,    64,    13,    64,    34,    64,   229,   229,    64,   232,
      24,    35,   250,    35,   133,   253,   134,   255,   233,   135,
     141,   136,    26,   137,   262,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    33,    25,    26,    27,
      28,    29,    30,    31,    20,   167,    34,   177,    36,    37,
      95,    35,    40,   176,    42,    43,    44,    45,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    15,
      -1,    -1,    -1,   158,    -1,    -1,    64,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    25,
      26,    27,    28,    29,    30,    31,    -1,    -1,    34,    -1,
      36,    37,    -1,    -1,    40,    -1,    42,    43,    44,    45,
       4,     5,    -1,     7,    -1,    -1,    -1,    11,    -1,    13,
      14,    -1,    16,    17,    18,    19,    -1,    21,    64,    -1,
      -1,    -1,    26,    27,    28,    29,    30,    31,    -1,    -1,
      34,    -1,    36,    -1,    -1,    -1,    40,    -1,    42,    43,
      44,    45,     3,    -1,    -1,     6,    -1,     8,     9,    10,
      -1,    12,    -1,    -1,    15,    -1,    -1,    -1,    -1,    20,
      64,    22,    23,    -1,    25,    26,    27,    28,    29,    30,
      31,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    42,    43,    44,    45,     3,    -1,    -1,     6,    -1,
       8,     9,    10,    -1,    12,    -1,    -1,    15,    -1,    -1,
      -1,    -1,    20,     0,    22,    23,     3,    25,    26,     6,
      -1,     8,     9,    10,    -1,    12,    -1,    35,    15,    -1,
      -1,    -1,    -1,    20,     3,    22,    23,     6,    25,     8,
       9,    10,    -1,    12,    -1,    -1,    15,    -1,    -1,    -1,
      -1,    20,    -1,    22,    23,    -1,    25,    -1,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    36,    -1,
      38,    -1,    40,    -1,    42,    43,    44,    45,    26,    27,
      28,    29,    30,    31,    -1,    -1,    34,    -1,    36,    -1,
      -1,    -1,    40,    -1,    42,    43,    44,    45,    26,    27,
      28,    29,    30,    31,    -1,    33,    34,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    42,    43,    44,    45,    26,    27,
      28,    29,    30,    31,    -1,    -1,    34,    35,    -1,    -1,
      -1,    -1,    40,    -1,    42,    43,    44,    45,    26,    27,
      28,    29,    30,    31,    -1,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    42,    43,    44,    45
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     8,     9,    10,    12,    15,    20,    22,
      23,    25,   104,   105,   108,   132,   133,   134,    26,    34,
      43,    64,   106,   107,   109,   110,   111,   105,     0,   133,
     109,   111,    64,    76,    65,   135,    32,    34,   110,    35,
     107,   109,    26,    27,    28,    29,    30,    31,    34,    36,
      40,    42,    43,    44,    45,    82,    83,    84,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   116,    36,   104,   105,   124,    33,   100,
      26,    35,   105,   112,   113,   114,   115,   100,   102,    32,
      38,   116,   117,   118,   119,   120,   121,    86,    86,    32,
      34,    38,    39,    40,    41,    78,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,   101,    86,    88,
      43,    48,    49,    44,    45,    50,    51,    52,    53,    54,
      55,    56,    57,    42,    58,    59,    60,    61,    62,     4,
       5,     7,    11,    13,    14,    16,    17,    18,    19,    21,
      26,    37,    64,   102,   104,   122,   123,   124,   125,   126,
     127,   128,   129,   131,    33,   109,    35,    76,    35,    76,
      35,    76,    99,   103,    26,    37,    64,    76,   116,    65,
     121,   102,    35,    85,   100,    26,    26,   100,    88,    88,
      88,    89,    89,    90,    90,    91,    91,    91,    91,    92,
      92,    93,    94,    95,    96,    97,   102,    64,   102,   130,
     103,    34,    34,    26,    64,    34,    63,   122,    34,    63,
      64,    37,   126,   114,    26,   100,    33,   118,   116,   119,
      33,    35,    76,    63,    64,    63,   104,   130,   102,    64,
     102,   122,    13,   102,   122,   116,   100,    99,   122,   130,
      64,    35,    35,    34,    35,    64,   130,   122,   122,   102,
     122,   130,    64,    24,    35,    35,   130,   122,   122,    35,
     122
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    81,    82,    82,    82,    82,    83,    83,    83,    83,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    85,
      85,    86,    86,    86,    86,    87,    87,    87,    88,    89,
      89,    89,    89,    90,    90,    90,    91,    91,    91,    92,
      92,    92,    92,    92,    93,    93,    93,    94,    94,    95,
      95,    96,    96,    97,    97,    98,    98,    99,    99,   100,
     100,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   102,   102,   103,   104,   104,   105,   105,   106,
     106,   107,   107,   108,   108,   108,   108,   108,   108,   108,
     108,   108,   108,   108,   109,   109,   110,   110,   110,   110,
     110,   110,   110,   111,   111,   112,   113,   113,   114,   114,
     115,   115,   116,   116,   117,   117,   118,   118,   118,   118,
     119,   120,   120,   121,   121,   122,   122,   122,   122,   122,
     122,   123,   123,   123,   124,   124,   125,   125,   126,   126,
     127,   127,   128,   128,   128,   129,   129,   129,   129,   130,
     130,   131,   131,   131,   131,   132,   132,   133,   133,   134,
     135,   135
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     4,     4,     3,     3,     3,     2,     2,     2,     1,
       3,     1,     2,     2,     2,     1,     1,     1,     1,     1,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     5,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     3,     2,     2,     1,     1,
       3,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     3,     4,     3,
       4,     4,     3,     2,     1,     1,     1,     3,     2,     1,
       1,     3,     1,     3,     1,     3,     2,     1,     4,     3,
       2,     1,     2,     3,     2,     1,     1,     1,     1,     1,
       1,     3,     4,     3,     3,     2,     1,     2,     1,     1,
       2,     1,     5,     7,     5,     5,     6,     9,     8,     0,
       1,     3,     2,     2,     3,     1,     2,     1,     1,     4,
       0,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 96 "sample3.y" /* yacc.c:1646  */
    { printf("primary_expression  =>  identifier\n"); }
#line 1562 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 98 "sample3.y" /* yacc.c:1646  */
    { printf("primary_expression  =>  constant\n"); }
#line 1568 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 100 "sample3.y" /* yacc.c:1646  */
    { printf("primary_expression  =>  string_literal\n"); }
#line 1574 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 102 "sample3.y" /* yacc.c:1646  */
    { printf("primary_expression  =>  (expression)\n"); }
#line 1580 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 106 "sample3.y" /* yacc.c:1646  */
    { printf("constant  =>  INTEGER CONSTANT\n"); }
#line 1586 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 108 "sample3.y" /* yacc.c:1646  */
    { printf("constant  =>  FLOAT CONSTANT\n"); }
#line 1592 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 110 "sample3.y" /* yacc.c:1646  */
    { printf("constant  =>  CHARACTER CONSTANT\n"); }
#line 1598 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 112 "sample3.y" /* yacc.c:1646  */
    { printf("constant  =>  ZERO CONSTANT\n"); }
#line 1604 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 116 "sample3.y" /* yacc.c:1646  */
    { printf("postfix_expression  =>  primary_expression\n"); }
#line 1610 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 118 "sample3.y" /* yacc.c:1646  */
    { printf("postfix_expression  =>  postfix_expression [ expression ]\n"); }
#line 1616 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 120 "sample3.y" /* yacc.c:1646  */
    { printf("postfix_expression  =>  postfix_expression ( argument_expression_list )\n"); }
#line 1622 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 122 "sample3.y" /* yacc.c:1646  */
    { printf("postfix_expression  =>  postfix_expression ( )\n"); }
#line 1628 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 124 "sample3.y" /* yacc.c:1646  */
    { printf("postfix_expression  =>  postfix_expression . identifier\n"); }
#line 1634 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 126 "sample3.y" /* yacc.c:1646  */
    { printf("postfix_expression  =>  postfix_expression − > identifier\n"); }
#line 1640 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 128 "sample3.y" /* yacc.c:1646  */
    { printf("postfix_expression  =>  postfix_expression ++\n"); }
#line 1646 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 130 "sample3.y" /* yacc.c:1646  */
    { printf("postfix_expression  =>  postfix_expression −−\n"); }
#line 1652 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 132 "sample3.y" /* yacc.c:1646  */
    { printf("postfix_expression  =>  postfix_expression .’\n"); }
#line 1658 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 136 "sample3.y" /* yacc.c:1646  */
    { printf("argument_expression_list  =>  assignment_expression\n"); }
#line 1664 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 138 "sample3.y" /* yacc.c:1646  */
    { printf("argument_expression_list  =>  argument_expression_list , assignment_expression\n"); }
#line 1670 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 142 "sample3.y" /* yacc.c:1646  */
    { printf("unary_expression  =>  postfix_expression\n"); }
#line 1676 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 144 "sample3.y" /* yacc.c:1646  */
    { printf("unary_expression  =>  ++ unary_expression\n"); }
#line 1682 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 146 "sample3.y" /* yacc.c:1646  */
    { printf("unary_expression  =>  – unary_expression\n"); }
#line 1688 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 148 "sample3.y" /* yacc.c:1646  */
    { printf("unary_expression  =>  unary_operator cast_expression\n"); }
#line 1694 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 152 "sample3.y" /* yacc.c:1646  */
    { printf("unary_operator  =>  &\n"); }
#line 1700 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 154 "sample3.y" /* yacc.c:1646  */
    { printf("unary_operator  =>  *\n"); }
#line 1706 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 156 "sample3.y" /* yacc.c:1646  */
    { printf("unary_operator  =>  +\n"); }
#line 1712 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 160 "sample3.y" /* yacc.c:1646  */
    { printf("cast_expression  =>  unary_expression\n"); }
#line 1718 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 164 "sample3.y" /* yacc.c:1646  */
    { printf("multiplicative_expression  =>  cast_expression\n"); }
#line 1724 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 166 "sample3.y" /* yacc.c:1646  */
    { printf("multiplicative_expression  =>  multiplicative_expression * cast_expression\n"); }
#line 1730 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 168 "sample3.y" /* yacc.c:1646  */
    { printf("multiplicative_expression  =>  multiplicative_expression / cast_expression\n"); }
#line 1736 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 170 "sample3.y" /* yacc.c:1646  */
    { printf("multiplicative_expression  =>  multiplicative_expression % cast_expression\n"); }
#line 1742 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 174 "sample3.y" /* yacc.c:1646  */
    { printf("additive_expression  =>  multiplicative_expression\n"); }
#line 1748 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 176 "sample3.y" /* yacc.c:1646  */
    { printf("additive_expression  =>  additive_expression + multiplicative_expression\n"); }
#line 1754 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 178 "sample3.y" /* yacc.c:1646  */
    { printf("additive_expression  =>  additive_expression - multiplicative_expression\n"); }
#line 1760 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 182 "sample3.y" /* yacc.c:1646  */
    { printf("shift_expression  =>  additive_expression\n"); }
#line 1766 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 184 "sample3.y" /* yacc.c:1646  */
    { printf("shift_expression  =>  shift_expression << additive_expression\n"); }
#line 1772 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 186 "sample3.y" /* yacc.c:1646  */
    { printf("shift_expression  =>  shift_expression >> additive_expression\n"); }
#line 1778 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 190 "sample3.y" /* yacc.c:1646  */
    { printf("relational_expression  =>  shift_expression\n"); }
#line 1784 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 192 "sample3.y" /* yacc.c:1646  */
    { printf("relational_expression  =>  relational_expression < shift_expression\n"); }
#line 1790 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 194 "sample3.y" /* yacc.c:1646  */
    { printf("relational_expression  =>  relational_expression > shift_expression\n"); }
#line 1796 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 196 "sample3.y" /* yacc.c:1646  */
    { printf("relational_expression  =>  relational_expression <= shift_expression\n"); }
#line 1802 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 198 "sample3.y" /* yacc.c:1646  */
    { printf("relational_expression  =>  relational_expression >= shift_expression\n"); }
#line 1808 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 202 "sample3.y" /* yacc.c:1646  */
    { printf("equality_expression  =>  relational_expression\n"); }
#line 1814 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 204 "sample3.y" /* yacc.c:1646  */
    { printf("equality_expression  =>  equality_expression == relational_expression\n"); }
#line 1820 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 206 "sample3.y" /* yacc.c:1646  */
    { printf("equality_expression  =>  equality_expression != relational_expression\n"); }
#line 1826 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 210 "sample3.y" /* yacc.c:1646  */
    { printf("AND_expression  =>  equality_expression\n"); }
#line 1832 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 212 "sample3.y" /* yacc.c:1646  */
    { printf("AND_expression  =>  AND_expression & equality_expression\n"); }
#line 1838 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 216 "sample3.y" /* yacc.c:1646  */
    { printf("exclusive_OR_expression  =>  AND_expression\n"); }
#line 1844 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 218 "sample3.y" /* yacc.c:1646  */
    { printf("exclusive_OR_expression  =>  exclusive_OR_expression ∧ AND_expression\n"); }
#line 1850 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 222 "sample3.y" /* yacc.c:1646  */
    { printf("inclusive_OR_expression  =>  exclusive_OR_expression\n"); }
#line 1856 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 224 "sample3.y" /* yacc.c:1646  */
    { printf("inclusive_OR_expression  =>  inclusive_OR_expression | exclusive_OR_expression\n"); }
#line 1862 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 228 "sample3.y" /* yacc.c:1646  */
    { printf("logical_AND_expression  =>  inclusive_OR_expression\n"); }
#line 1868 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 230 "sample3.y" /* yacc.c:1646  */
    { printf("logical_AND_expression  =>  logical_AND_expression && inclusive_OR_expression\n"); }
#line 1874 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 234 "sample3.y" /* yacc.c:1646  */
    { printf("logical_OR_expression  =>  logical_AND_expression\n"); }
#line 1880 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 236 "sample3.y" /* yacc.c:1646  */
    { printf("logical_OR_expression  =>  logical_OR_expression || logical_AND_expression\n"); }
#line 1886 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 240 "sample3.y" /* yacc.c:1646  */
    { printf("conditional_expression  =>  logical_OR_expression\n"); }
#line 1892 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 242 "sample3.y" /* yacc.c:1646  */
    { printf("conditional_expression  =>  logical_OR_expression ? expression : conditional_expression\n"); }
#line 1898 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 246 "sample3.y" /* yacc.c:1646  */
    { printf("assignment_expression  =>  conditional_expression\n"); }
#line 1904 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 248 "sample3.y" /* yacc.c:1646  */
    { printf("assignment_expression  =>  unary_expression assignment_operator assignment_expression\n"); }
#line 1910 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 252 "sample3.y" /* yacc.c:1646  */
    { printf("assignment_operator  =>  =\n"); }
#line 1916 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 254 "sample3.y" /* yacc.c:1646  */
    { printf("assignment_operator  =>  *=\n"); }
#line 1922 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 256 "sample3.y" /* yacc.c:1646  */
    { printf("assignment_operator  =>  /=\n"); }
#line 1928 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 258 "sample3.y" /* yacc.c:1646  */
    { printf("assignment_operator  =>  %=\n"); }
#line 1934 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 260 "sample3.y" /* yacc.c:1646  */
    { printf("assignment_operator  =>  +=\n"); }
#line 1940 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 262 "sample3.y" /* yacc.c:1646  */
    { printf("assignment_operator  =>  -=\n"); }
#line 1946 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 264 "sample3.y" /* yacc.c:1646  */
    { printf("assignment_operator  =>  <<=\n"); }
#line 1952 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 266 "sample3.y" /* yacc.c:1646  */
    { printf("assignment_operator  =>  >>=\n"); }
#line 1958 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 268 "sample3.y" /* yacc.c:1646  */
    { printf("assignment_operator  =>  &=\n"); }
#line 1964 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 270 "sample3.y" /* yacc.c:1646  */
    { printf("assignment_operator  =>  ^=\n"); }
#line 1970 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 272 "sample3.y" /* yacc.c:1646  */
    { printf("assignment_operator  =>  |=\n"); }
#line 1976 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 276 "sample3.y" /* yacc.c:1646  */
    { printf("expression  =>  assignment_expression\n"); }
#line 1982 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 278 "sample3.y" /* yacc.c:1646  */
    { printf("expression  =>  expression , assignment_expression\n"); }
#line 1988 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 282 "sample3.y" /* yacc.c:1646  */
    { printf("constant_expression  =>  conditional_expression\n"); }
#line 1994 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 288 "sample3.y" /* yacc.c:1646  */
    { printf("declaration  =>  declaration_specifiers init_declarator_list ;\n"); }
#line 2000 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 290 "sample3.y" /* yacc.c:1646  */
    { printf("declaration  =>  declaration_specifiers ;\n"); }
#line 2006 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 294 "sample3.y" /* yacc.c:1646  */
    { printf("declaration_specifiers  =>  type_specifier declaration_specifiers\n"); }
#line 2012 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 296 "sample3.y" /* yacc.c:1646  */
    { printf("declaration_specifiers  =>  type_specifier\n"); }
#line 2018 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 300 "sample3.y" /* yacc.c:1646  */
    { printf("init_declarator_list  =>  init_declarator\n"); }
#line 2024 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 302 "sample3.y" /* yacc.c:1646  */
    { printf("init_declarator_list  =>  init_declarator_list, init_declarator\n"); }
#line 2030 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 306 "sample3.y" /* yacc.c:1646  */
    { printf("init_declarator  =>  declarator\n"); }
#line 2036 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 308 "sample3.y" /* yacc.c:1646  */
    { printf("init_declarator  =>  declarator = initializer\n"); }
#line 2042 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 312 "sample3.y" /* yacc.c:1646  */
    { printf("type_specifier  =>  void\n"); }
#line 2048 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 314 "sample3.y" /* yacc.c:1646  */
    { printf("type_specifier  =>  char\n"); }
#line 2054 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 316 "sample3.y" /* yacc.c:1646  */
    { printf("type_specifier  =>  short\n"); }
#line 2060 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 318 "sample3.y" /* yacc.c:1646  */
    { printf("type_specifier  =>  int\n"); }
#line 2066 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 320 "sample3.y" /* yacc.c:1646  */
    { printf("type_specifier  =>  long\n"); }
#line 2072 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 322 "sample3.y" /* yacc.c:1646  */
    { printf("type_specifier  =>  float\n"); }
#line 2078 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 324 "sample3.y" /* yacc.c:1646  */
    { printf("type_specifier  =>  double\n"); }
#line 2084 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 326 "sample3.y" /* yacc.c:1646  */
    { printf("type_specifier  =>  Matrix\n"); }
#line 2090 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 328 "sample3.y" /* yacc.c:1646  */
    { printf("type_specifier  =>  signed\n"); }
#line 2096 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 330 "sample3.y" /* yacc.c:1646  */
    { printf("type_specifier  =>  unsigned\n"); }
#line 2102 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 332 "sample3.y" /* yacc.c:1646  */
    { printf("type_specifier  =>  Bool\n"); }
#line 2108 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 336 "sample3.y" /* yacc.c:1646  */
    { printf("declarator  =>  direct_declarator\n"); }
#line 2114 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 338 "sample3.y" /* yacc.c:1646  */
    { printf("declarator  =>  pointer direct_declarator\n"); }
#line 2120 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 342 "sample3.y" /* yacc.c:1646  */
    { printf("direct_declarator  =>  identifier\n"); }
#line 2126 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 344 "sample3.y" /* yacc.c:1646  */
    { printf("direct_declarator  =>  (declarator)\n"); }
#line 2132 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 346 "sample3.y" /* yacc.c:1646  */
    { printf("direct_declarator  =>  direct_declarator [ assignment_expression ]\n"); }
#line 2138 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 348 "sample3.y" /* yacc.c:1646  */
    { printf("direct_declarator  =>  direct_declarator [ ]\n"); }
#line 2144 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 350 "sample3.y" /* yacc.c:1646  */
    { printf("direct_declarator  =>  direct_declarator ( parameter_type_list )\n"); }
#line 2150 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 352 "sample3.y" /* yacc.c:1646  */
    { printf("direct_declarator  =>  direct_declarator ( identifier_list )\n"); }
#line 2156 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 354 "sample3.y" /* yacc.c:1646  */
    { printf("direct_declarator  =>  direct_declarator ( )\n"); }
#line 2162 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 358 "sample3.y" /* yacc.c:1646  */
    { printf("pointer  =>  * pointer\n"); }
#line 2168 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 360 "sample3.y" /* yacc.c:1646  */
    { printf("pointer  =>  *\n"); }
#line 2174 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 364 "sample3.y" /* yacc.c:1646  */
    { printf("parameter_type_list  =>  parameter_list\n"); }
#line 2180 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 368 "sample3.y" /* yacc.c:1646  */
    { printf("parameter_list  =>  parameter_declaration\n"); }
#line 2186 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 370 "sample3.y" /* yacc.c:1646  */
    { printf("parameter_list  =>  parameter_list , parameter_declaration\n"); }
#line 2192 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 374 "sample3.y" /* yacc.c:1646  */
    { printf("parameter_declaration  =>  declaration_specifiers declarator\n"); }
#line 2198 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 376 "sample3.y" /* yacc.c:1646  */
    { printf("parameter_declaration  =>  declaration_specifiers\n"); }
#line 2204 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 380 "sample3.y" /* yacc.c:1646  */
    { printf("identifier_list  =>  identifier\n"); }
#line 2210 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 382 "sample3.y" /* yacc.c:1646  */
    { printf("identifier_list  =>  identifier_list , identifier\n"); }
#line 2216 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 386 "sample3.y" /* yacc.c:1646  */
    { printf("initializer  =>  assignment_expression\n"); }
#line 2222 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 388 "sample3.y" /* yacc.c:1646  */
    { printf("initializer  =>  { initializer_row_list }\n"); }
#line 2228 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 392 "sample3.y" /* yacc.c:1646  */
    { printf("initializer_row_list  =>  initializer_row\n"); }
#line 2234 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 394 "sample3.y" /* yacc.c:1646  */
    { printf("initializer_row_list  =>  initializer_row_list ; initializer_row\n"); }
#line 2240 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 398 "sample3.y" /* yacc.c:1646  */
    { printf("initializer_row  =>  designation initializer\n"); }
#line 2246 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 400 "sample3.y" /* yacc.c:1646  */
    { printf("initializer_row  =>  initializer\n"); }
#line 2252 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 402 "sample3.y" /* yacc.c:1646  */
    { printf("initializer_row  =>  initializer_row, designation initializer\n"); }
#line 2258 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 404 "sample3.y" /* yacc.c:1646  */
    { printf("initializer_row  =>  initializer_row,  initializer\n"); }
#line 2264 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 408 "sample3.y" /* yacc.c:1646  */
    { printf("designation  =>  designator_list =\n"); }
#line 2270 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 412 "sample3.y" /* yacc.c:1646  */
    { printf("designator_list  =>  designator\n"); }
#line 2276 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 414 "sample3.y" /* yacc.c:1646  */
    { printf("designator_list  =>  designator_list designator\n"); }
#line 2282 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 418 "sample3.y" /* yacc.c:1646  */
    { printf("designator  =>  [ constant_expression ]\n"); }
#line 2288 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 420 "sample3.y" /* yacc.c:1646  */
    { printf("designator  =>  . identifier\n"); }
#line 2294 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 426 "sample3.y" /* yacc.c:1646  */
    { printf("statement  =>  labeled_statement\n"); }
#line 2300 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 428 "sample3.y" /* yacc.c:1646  */
    { printf("statement  =>  compound_statement\n"); }
#line 2306 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 430 "sample3.y" /* yacc.c:1646  */
    { printf("statement  =>  expression_statement\n"); }
#line 2312 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 432 "sample3.y" /* yacc.c:1646  */
    { printf("statement  =>  selection_statement\n"); }
#line 2318 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 434 "sample3.y" /* yacc.c:1646  */
    { printf("statement  =>  iteration_statement\n"); }
#line 2324 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 436 "sample3.y" /* yacc.c:1646  */
    { printf("statement  =>  jump_statement\n"); }
#line 2330 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 440 "sample3.y" /* yacc.c:1646  */
    { printf("labeled_statement  =>  identifier : statement\n"); }
#line 2336 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 442 "sample3.y" /* yacc.c:1646  */
    { printf("labeled_statement  =>  case constant_expression : statement\n"); }
#line 2342 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 444 "sample3.y" /* yacc.c:1646  */
    { printf("labeled_statement  =>  default : statement\n"); }
#line 2348 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 448 "sample3.y" /* yacc.c:1646  */
    { printf("compound_statement  =>  { block_item_list }\n"); }
#line 2354 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 450 "sample3.y" /* yacc.c:1646  */
    { printf("compound_statement  =>  { }\n"); }
#line 2360 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 454 "sample3.y" /* yacc.c:1646  */
    { printf("block_item_list  =>  block_item\n"); }
#line 2366 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 456 "sample3.y" /* yacc.c:1646  */
    { printf("block_item_list  =>  block_item_list block_item\n"); }
#line 2372 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 460 "sample3.y" /* yacc.c:1646  */
    { printf("block_item  =>  declaration\n"); }
#line 2378 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 462 "sample3.y" /* yacc.c:1646  */
    { printf("block_item  =>  statement\n"); }
#line 2384 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 466 "sample3.y" /* yacc.c:1646  */
    { printf("expression_statement  =>  expression ;\n"); }
#line 2390 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 468 "sample3.y" /* yacc.c:1646  */
    { printf("expression_statement  =>  ;\n"); }
#line 2396 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 472 "sample3.y" /* yacc.c:1646  */
    { printf("selection_statement  =>  if ( expression ) statement\n"); }
#line 2402 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 474 "sample3.y" /* yacc.c:1646  */
    { printf("selection_statement  =>  if ( expression ) statement else statement\n"); }
#line 2408 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 476 "sample3.y" /* yacc.c:1646  */
    { printf("selection_statement  =>  switch ( expression ) statement\n"); }
#line 2414 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 480 "sample3.y" /* yacc.c:1646  */
    { printf("iteration_statement  =>  while ( expression ) statement\n"); }
#line 2420 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 482 "sample3.y" /* yacc.c:1646  */
    { printf("iteration_statement  =>  do statement while ( expression ) ;\n"); }
#line 2426 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 484 "sample3.y" /* yacc.c:1646  */
    { printf("iteration_statement  =>  for ( expression_opt ; expression_opt ; expression_opt ) statement\n"); }
#line 2432 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 486 "sample3.y" /* yacc.c:1646  */
    { printf("iteration_statement  =>  for ( declaration expression_opt ; expression_opt ) statement\n"); }
#line 2438 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 490 "sample3.y" /* yacc.c:1646  */
    { printf("expression_opt  =>  EMPTY STRING\n"); }
#line 2444 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 492 "sample3.y" /* yacc.c:1646  */
    { printf("expression_opt  =>  expression\n"); }
#line 2450 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 496 "sample3.y" /* yacc.c:1646  */
    { printf("jump_statement  =>  goto identifier ;\n"); }
#line 2456 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 498 "sample3.y" /* yacc.c:1646  */
    { printf("jump_statement  =>  continue ;\n"); }
#line 2462 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 500 "sample3.y" /* yacc.c:1646  */
    { printf("jump_statement  =>  break ;\n"); }
#line 2468 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 502 "sample3.y" /* yacc.c:1646  */
    { printf("jump_statement  =>  return expression_opt ;\n"); }
#line 2474 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 508 "sample3.y" /* yacc.c:1646  */
    { printf("translation_unit  =>  external_declaration\n"); }
#line 2480 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 510 "sample3.y" /* yacc.c:1646  */
    { printf("translation_unit  =>  translation_unit external_declaration\n"); }
#line 2486 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 514 "sample3.y" /* yacc.c:1646  */
    { printf("external_declaration  =>  function_definition\n"); }
#line 2492 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 516 "sample3.y" /* yacc.c:1646  */
    { printf("external_declaration  =>  declaration\n"); }
#line 2498 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 520 "sample3.y" /* yacc.c:1646  */
    { printf("function_definition  =>  declaration_specifiers declarator declaration_list_opt compound_statement\n"); }
#line 2504 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 524 "sample3.y" /* yacc.c:1646  */
    { printf("declaration_list_opt  =>  EMPTY STRING\n"); }
#line 2510 "sample3.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 526 "sample3.y" /* yacc.c:1646  */
    { printf("declaration_list_opt  =>  declaration_list_opt declaration\n"); }
#line 2516 "sample3.tab.c" /* yacc.c:1646  */
    break;


#line 2520 "sample3.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 529 "sample3.y" /* yacc.c:1906  */


int yyerror(char *s){
  printf("Parser Error : %s\n",s);
  return -1;
}
