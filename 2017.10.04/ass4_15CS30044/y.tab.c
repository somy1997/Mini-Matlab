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
#line 1 "ass4_15CS30044.y" /* yacc.c:339  */

    #include "ass4_15CS30044_translator.h"
    void yyerror(const char*);
    extern int yylex(void);
    using namespace std;

#line 73 "y.tab.c" /* yacc.c:339  */

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
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    BREAK = 258,
    CASE = 259,
    CHAR = 260,
    CONTINUE = 261,
    DEFAULT = 262,
    DO = 263,
    DOUBLE = 264,
    ELSE = 265,
    FLOAT = 266,
    FOR = 267,
    GOTO = 268,
    IF = 269,
    INT = 270,
    LONG = 271,
    RETURN = 272,
    SHORT = 273,
    SIGNED = 274,
    SWITCH = 275,
    UNSIGNED = 276,
    VOID = 277,
    WHILE = 278,
    BOOL = 279,
    MATRIX = 280,
    POINTER = 281,
    INCREMENT = 282,
    DECREMENT = 283,
    LEFT_SHIFT = 284,
    RIGHT_SHIFT = 285,
    LESS_EQUALS = 286,
    GREATER_EQUALS = 287,
    EQUALS = 288,
    NOT_EQUALS = 289,
    AND = 290,
    OR = 291,
    MULTIPLY_ASSIGN = 292,
    DIVIDE_ASSIGN = 293,
    MODULO_ASSIGN = 294,
    ADD_ASSIGN = 295,
    SUBTRACT_ASSIGN = 296,
    LEFT_SHIFT_ASSIGN = 297,
    RIGHT_SHIFT_ASSIGN = 298,
    AND_ASSIGN = 299,
    XOR_ASSIGN = 300,
    OR_ASSIGN = 301,
    SINGLE_LINE_COMMENT = 302,
    MULTI_LINE_COMMENT = 303,
    DASH = 304,
    IDENTIFIER = 305,
    INTEGER_CONSTANT = 306,
    FLOATING_CONSTANT = 307,
    CHAR_CONST = 308,
    STRING_LITERAL = 309,
    UNARY = 310
  };
#endif
/* Tokens.  */
#define BREAK 258
#define CASE 259
#define CHAR 260
#define CONTINUE 261
#define DEFAULT 262
#define DO 263
#define DOUBLE 264
#define ELSE 265
#define FLOAT 266
#define FOR 267
#define GOTO 268
#define IF 269
#define INT 270
#define LONG 271
#define RETURN 272
#define SHORT 273
#define SIGNED 274
#define SWITCH 275
#define UNSIGNED 276
#define VOID 277
#define WHILE 278
#define BOOL 279
#define MATRIX 280
#define POINTER 281
#define INCREMENT 282
#define DECREMENT 283
#define LEFT_SHIFT 284
#define RIGHT_SHIFT 285
#define LESS_EQUALS 286
#define GREATER_EQUALS 287
#define EQUALS 288
#define NOT_EQUALS 289
#define AND 290
#define OR 291
#define MULTIPLY_ASSIGN 292
#define DIVIDE_ASSIGN 293
#define MODULO_ASSIGN 294
#define ADD_ASSIGN 295
#define SUBTRACT_ASSIGN 296
#define LEFT_SHIFT_ASSIGN 297
#define RIGHT_SHIFT_ASSIGN 298
#define AND_ASSIGN 299
#define XOR_ASSIGN 300
#define OR_ASSIGN 301
#define SINGLE_LINE_COMMENT 302
#define MULTI_LINE_COMMENT 303
#define DASH 304
#define IDENTIFIER 305
#define INTEGER_CONSTANT 306
#define FLOATING_CONSTANT 307
#define CHAR_CONST 308
#define STRING_LITERAL 309
#define UNARY 310

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 9 "ass4_15CS30044.y" /* yacc.c:355  */

    basic_value value;
    matrix_row *rowval;
    string *str;
    arglistStr argsl; //to define the argumnets list
    int instr;  // to defin the type used by M->(epsilon)
    expresn expon;   // to define the structure of expression
    list *nextlist;  //to define the nextlist type for N->(epsilon)
    bool isPointer;
    vector< expresn > *symlist;
    char charval; 

#line 236 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 253 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  27
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   527

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  80
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  67
/* YYNRULES -- Number of rules.  */
#define YYNRULES  173
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  295

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   310

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    68,     2,     2,     2,    59,    66,     2,
      61,    62,    57,    55,    65,    56,    79,    58,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    74,    76,
      69,    75,    70,    73,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    63,     2,    64,    71,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    77,    72,    78,    67,     2,     2,     2,
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
      60
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    50,    50,    55,    61,    80,    87,    94,   101,   105,
     111,   114,   138,   167,   186,   205,   252,   257,   262,   265,
     269,   272,   297,   322,   361,   364,   367,   370,   373,   376,
     380,   399,   402,   515,   554,   594,   597,   649,   702,   705,
     714,   724,   727,   736,   745,   754,   764,   767,   776,   786,
     789,   794,   797,   802,   805,   810,   813,   821,   824,   833,
     836,   852,   853,   854,   855,   856,   857,   858,   859,   860,
     861,   862,   864,   867,   925,   929,   932,   938,   946,   958,
     964,   966,   966,   969,   973,   979,  1022,  1087,  1090,  1093,
    1094,  1097,  1098,  1099,  1102,  1103,  1104,  1105,  1111,  1133,
    1136,  1140,  1149,  1152,  1164,  1204,  1238,  1241,  1247,  1247,
    1250,  1253,  1257,  1261,  1265,  1270,  1273,  1275,  1276,  1278,
    1281,  1285,  1294,  1306,  1310,  1316,  1316,  1319,  1321,  1322,
    1324,  1325,  1328,  1329,  1332,  1335,  1338,  1341,  1345,  1346,
    1347,  1349,  1353,  1356,  1360,  1363,  1368,  1371,  1375,  1379,
    1382,  1391,  1394,  1401,  1412,  1418,  1422,  1424,  1430,  1436,
    1443,  1445,  1446,  1447,  1448,  1466,  1467,  1469,  1470,  1472,
    1490,  1490,  1493,  1494
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BREAK", "CASE", "CHAR", "CONTINUE",
  "DEFAULT", "DO", "DOUBLE", "ELSE", "FLOAT", "FOR", "GOTO", "IF", "INT",
  "LONG", "RETURN", "SHORT", "SIGNED", "SWITCH", "UNSIGNED", "VOID",
  "WHILE", "BOOL", "MATRIX", "POINTER", "INCREMENT", "DECREMENT",
  "LEFT_SHIFT", "RIGHT_SHIFT", "LESS_EQUALS", "GREATER_EQUALS", "EQUALS",
  "NOT_EQUALS", "AND", "OR", "MULTIPLY_ASSIGN", "DIVIDE_ASSIGN",
  "MODULO_ASSIGN", "ADD_ASSIGN", "SUBTRACT_ASSIGN", "LEFT_SHIFT_ASSIGN",
  "RIGHT_SHIFT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN",
  "SINGLE_LINE_COMMENT", "MULTI_LINE_COMMENT", "DASH", "IDENTIFIER",
  "INTEGER_CONSTANT", "FLOATING_CONSTANT", "CHAR_CONST", "STRING_LITERAL",
  "'+'", "'-'", "'*'", "'/'", "'%'", "UNARY", "'('", "')'", "'['", "']'",
  "','", "'&'", "'~'", "'!'", "'<'", "'>'", "'^'", "'|'", "'?'", "':'",
  "'='", "';'", "'{'", "'}'", "'.'", "$accept", "M", "N",
  "primary_expression", "postfix_expression", "argument_expression_list",
  "argument_expression_list_opt", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "AND_expression", "exclusive_OR_expression", "inclusive_OR_expression",
  "logical_AND_expression", "logical_OR_expression",
  "conditional_expression", "assignment_operator", "assignment_expression",
  "constant_expression", "expression", "declaration",
  "init_declarator_list_opt", "declaration_specifiers",
  "declaration_specifiers_opt", "init_declarator_list", "init_declarator",
  "type_specifier", "declarator", "pointer_opt", "direct_declarator",
  "assignment_expression_opt", "identifier_list_opt", "pointer",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "initializer", "initializer_row_list",
  "initializer_row", "designation_opt", "designation", "designator_list",
  "designator", "statement", "labeled_statement", "compound_statement",
  "block_item_list_opt", "block_item_list", "block_item",
  "expression_statement", "expression_opt", "selection_expression_opt",
  "selection_expression", "selection_statement", "iteration_statement",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", "declaration_list_opt", "declaration_list", YY_NULLPTR
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
     305,   306,   307,   308,   309,    43,    45,    42,    47,    37,
     310,    40,    41,    91,    93,    44,    38,   126,    33,    60,
      62,    94,   124,    63,    58,    61,    59,   123,   125,    46
};
# endif

#define YYPACT_NINF -262

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-262)))

#define YYTABLE_NINF -172

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     266,  -262,  -262,  -262,  -262,  -262,  -262,  -262,  -262,  -262,
    -262,  -262,  -262,   -44,   266,   407,  -262,  -262,   -22,   -57,
     -36,  -262,    39,   -27,  -262,  -262,  -262,  -262,  -262,  -262,
    -262,   -22,    78,  -262,   -44,   -35,   266,  -262,   -22,   -37,
    -262,   -26,   459,   459,  -262,  -262,  -262,  -262,  -262,  -262,
    -262,  -262,   459,  -262,  -262,  -262,   -43,  -262,   166,   164,
     459,  -262,    50,    -3,    82,    94,   120,    -4,   -12,    17,
      61,   -28,  -262,  -262,  -262,   245,  -262,  -262,    41,   161,
     459,  -262,  -262,  -262,   -53,   459,    65,    24,    57,    78,
    -262,   -38,  -262,  -262,  -262,  -262,   459,   459,  -262,  -262,
    -262,  -262,  -262,  -262,  -262,  -262,  -262,  -262,  -262,   459,
    -262,  -262,   459,   459,   459,   459,   459,   459,   459,   459,
     459,   459,   459,   459,   459,   459,   459,   459,  -262,  -262,
    -262,    62,   459,    64,    73,  -262,    88,   109,   101,   459,
     110,   117,    91,   116,  -262,  -262,  -262,  -262,   106,   138,
    -262,  -262,   112,  -262,  -262,  -262,  -262,  -262,    36,   155,
     156,   154,  -262,   157,  -262,   159,  -262,   459,  -262,   160,
    -262,   -43,  -262,   -43,  -262,  -262,  -262,   165,   158,  -262,
     104,  -262,  -262,  -262,  -262,    50,    50,    -3,    -3,    82,
      82,    82,    82,    94,    94,   120,    -4,   -12,   459,   459,
     459,  -262,   151,  -262,   386,   386,   440,   162,   459,   167,
     459,  -262,   386,  -262,   320,  -262,  -262,  -262,  -262,   266,
     181,   169,  -262,  -262,    57,    78,   459,  -262,   172,    17,
      61,   116,   386,  -262,   213,   459,   168,  -262,   116,   175,
    -262,   178,   459,  -262,  -262,  -262,  -262,   459,  -262,  -262,
     459,   171,  -262,   180,   170,  -262,  -262,   386,   185,   210,
     126,  -262,  -262,   459,   459,   386,  -262,  -262,  -262,  -262,
     459,   459,   214,   202,  -262,   232,   386,  -262,   217,   386,
    -262,   270,  -262,   207,  -262,   459,  -262,  -262,  -262,   386,
     224,  -262,  -262,   386,  -262
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    88,    93,    92,    90,    91,    89,    94,    95,    87,
      96,    97,   168,   100,    82,     0,   165,   167,   110,     0,
      78,    83,    85,     0,    99,    81,    80,     1,   166,   111,
      77,   100,     0,   172,   100,     0,   170,   101,   100,    98,
      84,    85,     0,     0,     4,     5,     6,     7,     8,    26,
      27,    25,     0,    24,    28,    29,   126,    10,    20,    30,
       0,    31,    35,    38,    41,    46,    49,    51,    53,    55,
      57,    59,    72,   119,    86,   143,   169,   173,     0,   109,
     107,    21,    22,    75,     0,     0,     0,     0,   121,     0,
     125,     0,   128,    13,    14,    15,    19,     0,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    61,     0,
      30,    23,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     2,     2,
       2,     0,     0,     0,     0,     2,     0,     0,     0,   150,
       0,     0,     4,   149,   146,   147,   132,   133,     0,     2,
     144,   134,     0,   135,   136,   137,   102,   117,   100,     0,
       0,   112,   113,   108,   106,     0,     9,     0,    74,     0,
     131,   126,   120,   126,   123,   127,   129,    18,     0,    16,
       0,    73,    32,    33,    34,    36,    37,    39,    40,    44,
      45,    42,    43,    47,    48,    50,    52,    54,     0,     0,
       0,   163,     0,   162,   150,   150,   150,     0,     0,     0,
       0,     2,   150,   141,   150,   148,   115,   105,   104,     0,
       0,     0,    76,   130,   122,     0,     0,    12,     0,    56,
      58,     3,   150,   140,     0,   150,     0,   161,   153,     0,
     164,     0,     0,   138,   145,   114,   118,   107,   124,    17,
       0,     0,   139,     0,     0,     2,     2,   150,     0,     0,
       0,     2,     2,   150,   152,   150,   156,     2,   103,    11,
       0,     0,     0,     0,   151,   155,   150,    60,     0,   150,
       2,     0,   157,     0,   160,   150,     2,   158,     3,   150,
       0,   154,     2,   150,   159
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -262,  -119,  -261,  -262,  -262,  -262,  -262,   -42,  -262,   -45,
      81,    95,    -1,    75,   179,   163,   176,    96,    93,  -262,
     -81,  -262,     8,   173,   -50,   -19,  -262,     7,  -262,  -262,
     262,  -262,    -7,  -262,  -262,    60,  -262,   290,  -262,  -262,
      90,  -262,   -84,  -262,   139,   141,  -262,  -262,   225,  -166,
    -262,   280,  -262,  -262,   103,  -262,  -111,  -262,  -177,  -262,
    -262,  -262,  -262,   303,  -262,  -262,  -262
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   198,   251,    57,    58,   177,   178,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,   109,    83,   169,   143,    12,    19,    34,    26,    20,
      21,    14,    41,    23,    39,   165,   159,    24,   160,   161,
     162,   163,    74,    87,    88,    89,    90,    91,    92,   145,
     146,   147,   148,   149,   150,   151,   152,   273,   239,   153,
     154,   155,    15,    16,    17,    35,    36
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      81,    82,    84,    33,   168,   174,    22,    13,   129,   166,
     199,   200,   167,    18,   281,   111,   205,    77,   110,    30,
      85,    25,    13,    37,    79,    85,    80,   290,   209,    31,
     214,    78,   -79,   241,    38,    18,    86,   175,   233,   234,
      73,    86,    75,   110,     1,   130,   243,   180,     2,    32,
       3,   168,   115,   116,     4,     5,   144,     6,     7,   126,
       8,     9,   125,    10,    11,   258,   252,   182,   183,   184,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   158,   274,   164,   127,
     110,   266,   242,    18,   278,   236,   128,    73,  -116,   275,
     171,  -116,   172,   156,   179,    42,    43,   112,   113,   114,
     282,   117,   118,   284,    32,   170,  -171,   181,   189,   190,
     191,   192,   173,   291,   254,   119,   120,   294,    44,    45,
      46,    47,    48,    49,    50,    51,   264,   265,   201,    52,
     203,   248,   270,   271,    53,    54,    55,   204,   276,   206,
     231,   216,   272,   123,   124,    56,   110,   110,   238,   207,
     238,   285,   208,   121,   122,   212,     1,   289,   228,   167,
       2,   210,     3,   293,   288,   222,     4,     5,   211,     6,
       7,   167,     8,     9,   213,    10,    11,   235,   215,   277,
     269,   167,   238,    93,    94,   144,   185,   186,   193,   194,
     260,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   157,   187,   188,   238,    95,  -142,   217,   218,   219,
     227,   238,   220,   221,   223,   232,   158,    96,   110,    97,
     226,   246,   247,    73,   249,   250,   253,   256,   237,   108,
     257,   262,    -3,   240,   255,   261,   263,   267,   131,   132,
       1,   133,   134,   135,     2,   164,     3,   136,   137,   138,
       4,     5,   139,     6,     7,   140,     8,     9,   141,    10,
      11,     1,    42,    43,   268,     2,   279,     3,   280,   283,
     286,     4,     5,   287,     6,     7,   292,     8,     9,   196,
      10,    11,   230,    40,   229,   142,    45,    46,    47,    48,
      49,    50,    51,   197,   195,   202,    52,   259,    29,   245,
     224,    53,    54,    55,   225,    76,   176,   244,    28,     0,
       0,  -150,    75,   131,   132,     1,   133,   134,   135,     2,
       0,     3,   136,   137,   138,     4,     5,   139,     6,     7,
     140,     8,     9,   141,    10,    11,     0,    42,    43,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     142,    45,    46,    47,    48,    49,    50,    51,     0,     0,
       0,    52,     0,     0,     0,     0,    53,    54,    55,   131,
     132,     0,   133,   134,   135,     0,     0,    75,   136,   137,
     138,     0,     0,   139,     0,     0,   140,    27,     0,   141,
       0,     0,     1,    42,    43,     0,     2,     0,     3,     0,
       0,     0,     4,     5,     0,     6,     7,     0,     8,     9,
       0,    10,    11,     0,     0,     0,   142,    45,    46,    47,
      48,    49,    50,    51,     0,     1,     0,    52,     0,     2,
       0,     3,    53,    54,    55,     4,     5,     0,     6,     7,
       0,     8,     9,    75,    10,    11,     0,    42,    43,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    42,    43,     0,     0,
      44,    45,    46,    47,    48,    49,    50,    51,     0,     0,
       0,    52,     0,     0,     0,     0,    53,    54,    55,    44,
      45,    46,    47,    48,    49,    50,    51,     0,     0,     0,
      52,     0,     0,     0,     0,    53,    54,    55
};

static const yytype_int16 yycheck[] =
{
      42,    43,    52,    22,    85,    89,    13,     0,    36,    62,
     129,   130,    65,    57,   275,    60,   135,    36,    60,    76,
      63,    14,    15,    50,    61,    63,    63,   288,   139,    65,
     149,    38,    76,   210,    61,    57,    79,    75,   204,   205,
      32,    79,    77,    85,     5,    73,   212,    97,     9,    75,
      11,   132,    55,    56,    15,    16,    75,    18,    19,    71,
      21,    22,    66,    24,    25,   242,   232,   112,   113,   114,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,    79,   264,    80,    72,
     132,   257,   211,    57,   271,   206,    35,    89,    62,   265,
      76,    65,    78,    62,    96,    27,    28,    57,    58,    59,
     276,    29,    30,   279,    75,    50,    77,   109,   119,   120,
     121,   122,    65,   289,   235,    31,    32,   293,    50,    51,
      52,    53,    54,    55,    56,    57,   255,   256,    76,    61,
      76,   225,   261,   262,    66,    67,    68,    74,   267,    61,
     200,   158,   263,    33,    34,    77,   198,   199,   208,    50,
     210,   280,    61,    69,    70,    74,     5,   286,    64,    65,
       9,    61,    11,   292,   285,   167,    15,    16,    61,    18,
      19,    65,    21,    22,    78,    24,    25,   206,    76,   270,
      64,    65,   242,    27,    28,   214,   115,   116,   123,   124,
     250,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    50,   117,   118,   264,    49,    78,    62,    62,    65,
      62,   271,    65,    64,    64,    74,   219,    61,   270,    63,
      65,    50,    63,   225,   226,    63,    23,    62,    76,    75,
      62,    61,    10,    76,    76,    74,    76,    62,     3,     4,
       5,     6,     7,     8,     9,   247,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     5,    27,    28,    64,     9,    62,    11,    76,    62,
      10,    15,    16,    76,    18,    19,    62,    21,    22,   126,
      24,    25,   199,    31,   198,    50,    51,    52,    53,    54,
      55,    56,    57,   127,   125,   132,    61,   247,    18,   219,
     171,    66,    67,    68,   173,    35,    91,   214,    15,    -1,
      -1,    76,    77,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    -1,    -1,
      -1,    61,    -1,    -1,    -1,    -1,    66,    67,    68,     3,
       4,    -1,     6,     7,     8,    -1,    -1,    77,    12,    13,
      14,    -1,    -1,    17,    -1,    -1,    20,     0,    -1,    23,
      -1,    -1,     5,    27,    28,    -1,     9,    -1,    11,    -1,
      -1,    -1,    15,    16,    -1,    18,    19,    -1,    21,    22,
      -1,    24,    25,    -1,    -1,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    -1,     5,    -1,    61,    -1,     9,
      -1,    11,    66,    67,    68,    15,    16,    -1,    18,    19,
      -1,    21,    22,    77,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    -1,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    -1,    -1,
      -1,    61,    -1,    -1,    -1,    -1,    66,    67,    68,    50,
      51,    52,    53,    54,    55,    56,    57,    -1,    -1,    -1,
      61,    -1,    -1,    -1,    -1,    66,    67,    68
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,     9,    11,    15,    16,    18,    19,    21,    22,
      24,    25,   105,   107,   111,   142,   143,   144,    57,   106,
     109,   110,   112,   113,   117,   107,   108,     0,   143,   117,
      76,    65,    75,   105,   107,   145,   146,    50,    61,   114,
     110,   112,    27,    28,    50,    51,    52,    53,    54,    55,
      56,    57,    61,    66,    67,    68,    77,    83,    84,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   102,   122,    77,   131,   105,   112,    61,
      63,    87,    87,   102,   104,    63,    79,   123,   124,   125,
     126,   127,   128,    27,    28,    49,    61,    63,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    75,   101,
      87,    89,    57,    58,    59,    55,    56,    29,    30,    31,
      32,    69,    70,    33,    34,    66,    71,    72,    35,    36,
      73,     3,     4,     6,     7,     8,    12,    13,    14,    17,
      20,    23,    50,   104,   105,   129,   130,   131,   132,   133,
     134,   135,   136,   139,   140,   141,    62,    50,   107,   116,
     118,   119,   120,   121,   102,   115,    62,    65,   100,   103,
      50,    76,    78,    65,   122,    75,   128,    85,    86,   102,
     104,   102,    89,    89,    89,    90,    90,    91,    91,    92,
      92,    92,    92,    93,    93,    94,    95,    96,    81,    81,
      81,    76,   103,    76,    74,    81,    61,    50,    61,   136,
      61,    61,    74,    78,    81,    76,   112,    62,    62,    65,
      65,    64,   102,    64,   124,   125,    65,    62,    64,    97,
      98,   104,    74,   129,   129,   105,   136,    76,   104,   138,
      76,   138,    81,   129,   134,   120,    50,    63,   122,   102,
      63,    82,   129,    23,   136,    76,    62,    62,   138,   115,
     104,    74,    61,    76,    81,    81,   129,    62,    64,    64,
      81,    81,   136,   137,   138,   129,    81,   100,   138,    62,
      76,    82,   129,    62,   129,    81,    10,    76,   136,    81,
      82,   129,    62,    81,   129
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    80,    81,    82,    83,    83,    83,    83,    83,    83,
      84,    84,    84,    84,    84,    84,    85,    85,    86,    86,
      87,    87,    87,    87,    88,    88,    88,    88,    88,    88,
      89,    90,    90,    90,    90,    91,    91,    91,    92,    92,
      92,    93,    93,    93,    93,    93,    94,    94,    94,    95,
      95,    96,    96,    97,    97,    98,    98,    99,    99,   100,
     100,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   102,   102,   103,   104,   104,   105,   106,   106,
     107,   108,   108,   109,   109,   110,   110,   111,   111,   111,
     111,   111,   111,   111,   111,   111,   111,   111,   112,   113,
     113,   114,   114,   114,   114,   114,   115,   115,   116,   116,
     117,   117,   118,   119,   119,   120,   120,   121,   121,   122,
     122,   123,   123,   124,   124,   125,   125,   126,   127,   127,
     128,   128,   129,   129,   129,   129,   129,   129,   130,   130,
     130,   131,   132,   132,   133,   133,   134,   134,   135,   136,
     136,   137,   137,   138,   139,   139,   139,   140,   140,   140,
     140,   141,   141,   141,   141,   142,   142,   143,   143,   144,
     145,   145,   146,   146
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,     1,     1,     1,     1,     1,     3,
       1,     7,     4,     2,     2,     2,     1,     3,     1,     0,
       1,     2,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     1,     3,     1,     3,     1,     4,     1,     4,     1,
       8,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     1,     3,     3,     1,     0,
       2,     1,     0,     1,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       0,     1,     3,     7,     4,     4,     1,     0,     1,     0,
       1,     2,     1,     1,     3,     2,     1,     1,     3,     1,
       3,     1,     3,     2,     4,     1,     0,     2,     1,     2,
       3,     2,     1,     1,     1,     1,     1,     1,     3,     4,
       3,     3,     1,     0,     1,     3,     1,     1,     2,     1,
       0,     1,     0,     1,    10,     6,     5,     7,     9,    13,
       8,     3,     2,     2,     3,     1,     2,     1,     1,     4,
       1,     0,     1,     2
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
#line 50 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
    (yyval.instr) = next_instr;
}
#line 1619 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 55 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
    (yyval.nextlist) = makelist(next_instr);
    glob_quad.emit(Q_GOTO, "-1");
}
#line 1628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 62 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
		                                //Check whether its a function
		                                symdata * check_func = glob_st->search(*(yyvsp[0].str));
		                                if(check_func == NULL)
		                                {
		                                    (yyval.expon).loc  =  curr_st->search(*(yyvsp[0].str));
		                                    if((yyval.expon).loc == NULL)
		                                    {
		                                    	printf("ERROR : Using variable %s without declaration",(yyvsp[0].str)->c_str());
		                                    	exit(-1);
		                                    }
		                                }
		                                else
		                                {
		                                    // It is a function
		                                    (yyval.expon).loc = check_func;
		                                }
                                }
#line 1651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 81 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
		                                // Declare and initialize the value of the temporary variable with the integer
		                                (yyval.expon).loc  = curr_st->gentemp(tp_int);         
		                                (yyval.expon).loc->setbasic((yyvsp[0].value));
		                                glob_quad.emit(Q_ASSIGN, (yyvsp[0].value).i, (yyval.expon).loc->name);
                				}
#line 1662 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 88 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
		                                // Declare and initialize the value of the temporary variable with the floatval
		                                (yyval.expon).loc  = curr_st->gentemp(tp_double);         
		                                (yyval.expon).loc->setbasic((yyvsp[0].value));
		                                glob_quad.emit(Q_ASSIGN, (yyvsp[0].value).d, (yyval.expon).loc->name);
                                }
#line 1673 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 95 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
		                            	// Declare and initialize the value of the temporary variable with the character
		                            	(yyval.expon).loc  = curr_st->gentemp(tp_char);         
		                                (yyval.expon).loc->setbasic((yyvsp[0].value));
		                                glob_quad.emit(Q_ASSIGN, (yyvsp[0].value).c, (yyval.expon).loc->name);
                                }
#line 1684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 102 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                
                                }
#line 1692 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 106 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                		(yyval.expon) = (yyvsp[-1].expon);
                                }
#line 1700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 111 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                         (yyval.expon) = (yyvsp[0].expon);
                                                    }
#line 1708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 114 "ass4_15CS30044.y" /* yacc.c:1646  */
    {                                  // handle matrices
                                                                        //Explanation of Array handling
                                                                        if((yyvsp[-6].expon).loc->tp != tp_matrix)
                                                                        {
                                                                        	printf("ERROR : %s is not a matrix",(yyvsp[-6].expon).loc->name.c_str());
                                                                        	exit(-1);
                                                                        }
                                                                        else if((yyvsp[-4].expon).loc->init.i >= (yyvsp[-6].expon).loc->mat->number_rows || (yyvsp[-1].expon).loc->init.i >= (yyvsp[-6].expon).loc->mat->number_cols)
                                                                        {
                                                                        	printf("ERROR : Matrix index out of bounds");
                                                                        	exit(-1);
                                                                        }
                                        								symdata *ncols = curr_st->gentemp(tp_int);
                                        								symdata *t = curr_st->gentemp(tp_int);
                                                                        glob_quad.emit(Q_RINDEX,(yyvsp[-6].expon).loc->name,str_of_int,ncols->name);
                                                                        glob_quad.emit(Q_MULT,ncols->name,(yyvsp[-4].expon).loc->name,t->name);
                                                                        glob_quad.emit(Q_PLUS,t->name,(yyvsp[-1].expon).loc->name,t->name);
                                                                        glob_quad.emit(Q_MULT,t->name,str_of_double,t->name);
                                                                        glob_quad.emit(Q_PLUS,t->name,str_of_2_int,t->name);
                                        								(yyvsp[-6].expon).do_indexing = true;
                                        								(yyvsp[-6].expon).sym_index = t;
                                        								(yyval.expon) = (yyvsp[-6].expon);
                                                                        //$$.arr->tp_n has the full type of the arr which will be used for size calculations
                                                                     }
#line 1737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 138 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                                                            if((yyvsp[-3].expon).loc->tp != tp_func)
                                                                                            {
                                                                                            	printf("ERROR : %s is not a function",(yyvsp[-3].expon).loc->name.c_str());
                                                                                            	exit(-1);
                                                                                            }
                                                                                            //Explanation of Function Handling
                                                                                            symdata *ret = (yyvsp[-3].expon).loc->nest_tab->symbol_tab[0];
                                                                                            (yyval.expon).loc = curr_st->gentemp(ret->tp,ret->tp_of_ptr);
                                                                                            //temporary is created 
                                                                                            char str[10];
                                                                                            if((yyvsp[-1].argsl).arguments == NULL)
                                                                                            {
                                                                                                //No function Parameters
                                                                                                sprintf(str,"0");
                                                                                                glob_quad.emit(Q_CALL,(yyvsp[-3].expon).loc->name,str,(yyval.expon).loc->name);
                                                                                            }
                                                                                            else
                                                                                            {
                                                                                                for(int i=0;i<(yyvsp[-1].argsl).arguments->size();i++)
                                                                                                {
                                                                                                    // To print the parameters 
                                                                                                    glob_quad.emit(Q_PARAM,(*(yyvsp[-1].argsl).arguments)[i]->loc->name);
                                                                    							}
                                                                                                sprintf(str,"%ld",(yyvsp[-1].argsl).arguments->size());
                                                                                                glob_quad.emit(Q_CALL,(yyvsp[-3].expon).loc->name,str,(yyval.expon).loc->name);
                                                                                            }

                                                                                   		}
#line 1771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 167 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                                if((yyvsp[-1].expon).do_indexing == true)
                                                                {
                                                                	(yyvsp[-1].expon).do_indexing =false;
                                                                	(yyval.expon).loc = curr_st->gentemp(tp_double);
                                                                	glob_quad.emit(Q_RINDEX,(yyvsp[-1].expon).loc->name,(yyvsp[-1].expon).sym_index->name,(yyval.expon).loc->name);
                                                                	symdata *t = curr_st->gentemp(tp_double);
                                                                	glob_quad.emit(Q_PLUS,(yyval.expon).loc->name,"1",t->name);
                                                                	glob_quad.emit(Q_LINDEX,(yyvsp[-1].expon).sym_index->name,t->name,(yyvsp[-1].expon).loc->name);
                                                                	(yyvsp[-1].expon).sym_index = NULL;
                                                               	}
                                                                else
                                                                {
		                                                            (yyval.expon).loc = curr_st->gentemp((yyvsp[-1].expon).loc->tp,(yyvsp[-1].expon).loc->tp_of_ptr);
		                                                            //post increment of an simple element
		                                                            glob_quad.emit(Q_ASSIGN,(yyvsp[-1].expon).loc->name,(yyval.expon).loc->name);
		                                                            glob_quad.emit(Q_PLUS,(yyvsp[-1].expon).loc->name,"1",(yyvsp[-1].expon).loc->name);
		                                                        }    
                                                             }
#line 1795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 186 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                                if((yyvsp[-1].expon).do_indexing == true)
                                                                {
                                                                	(yyvsp[-1].expon).do_indexing =false;
                                                                	(yyval.expon).loc = curr_st->gentemp(tp_double);
                                                                	glob_quad.emit(Q_RINDEX,(yyvsp[-1].expon).loc->name,(yyvsp[-1].expon).sym_index->name,(yyval.expon).loc->name);
                                                                	symdata *t = curr_st->gentemp(tp_double);
                                                                	glob_quad.emit(Q_MINUS,(yyval.expon).loc->name,"1",t->name);
                                                                	glob_quad.emit(Q_LINDEX,(yyvsp[-1].expon).sym_index->name,t->name,(yyvsp[-1].expon).loc->name);
                                                                	(yyvsp[-1].expon).sym_index = NULL;
                                                               	}
                                                               	else
                                                               	{
		                                                            (yyval.expon).loc = curr_st->gentemp((yyvsp[-1].expon).loc->tp,(yyvsp[-1].expon).loc->tp_of_ptr);
		                                                            //post decrement of an simple element
		                                                            glob_quad.emit(Q_ASSIGN,(yyvsp[-1].expon).loc->name,(yyval.expon).loc->name);
		                                                            glob_quad.emit(Q_MINUS,(yyvsp[-1].expon).loc->name,"1",(yyvsp[-1].expon).loc->name);
                                                              	}
                                                              }
#line 1819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 205 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                                if((yyvsp[-1].expon).loc->tp == tp_matrix)
                                                                {
                                                                	matrix *op = (yyvsp[-1].expon).loc->mat;
                                                                	matrix *t = new matrix;
                                                                	t->number_rows = op->number_cols;
                                                                	t->number_cols = op->number_rows;
                                                                	(yyval.expon).loc = curr_st -> gentemp(tp_matrix);
                                                                	(yyval.expon).loc->mat = t;
                                                                	symdata *rows = curr_st -> gentemp(tp_int);
                                                                	symdata *cols = curr_st -> gentemp(tp_int);
                                                                	symdata *t1 = curr_st -> gentemp(tp_int);
                                                                	symdata *t2 = curr_st -> gentemp(tp_int);
                                                                	symdata *t3 = curr_st -> gentemp(tp_double);
                                                                	symdata *i = curr_st -> gentemp(tp_int);
                                                                	symdata *j = curr_st -> gentemp(tp_int);
                                                                	glob_quad.emit(Q_RINDEX,(yyvsp[-1].expon).loc->name,"0",rows->name);
                                                                	glob_quad.emit(Q_RINDEX,(yyvsp[-1].expon).loc->name,str_of_int,cols->name);
                                                                	glob_quad.emit(Q_LINDEX,"0",cols->name,(yyval.expon).loc->name);
                                                                	glob_quad.emit(Q_LINDEX,str_of_int,rows->name,(yyval.expon).loc->name);
                                                                	glob_quad.emit(Q_ASSIGN,2*size_of_int,t1->name);
                                                                	glob_quad.emit(Q_ASSIGN,0,i->name);
                                                                	int dest1 = next_instr;
                                                                	glob_quad.emit(Q_ASSIGN,0,j->name);
                                                                	int dest2 = next_instr;
                                                                	glob_quad.emit(Q_MULT,j->name,rows->name,t2->name);
                                                                	glob_quad.emit(Q_PLUS,t2->name,i->name,t2->name);
                                                                	glob_quad.emit(Q_MULT,t2->name,str_of_double,t2->name);
                                                                	glob_quad.emit(Q_PLUS,t2->name,str_of_2_int,t2->name);
                                                                	glob_quad.emit(Q_RINDEX,(yyvsp[-1].expon).loc->name,t1->name,t3->name);
                                                                	glob_quad.emit(Q_LINDEX,t2->name,t3->name,(yyval.expon).loc->name);
                                                                	glob_quad.emit(Q_PLUS,t1->name,str_of_double,t1->name);
                                                                	glob_quad.emit(Q_PLUS,j->name,"1",j->name);
                                                                	char str[20];
                                                                	int2str(dest2,str);
                                                                	glob_quad.emit(Q_IF_LESS,j->name,cols->name,str);
                                                                	glob_quad.emit(Q_PLUS,i->name,"1",i->name);
                                                                	int2str(dest1,str);
                                                                	glob_quad.emit(Q_IF_LESS,i->name,rows->name,str);                                                                	
                                                                }
                                                                else
														        {
														        	printf("ERROR : %s is not a matrix",(yyvsp[-1].expon).loc->name.c_str());
														        	exit(-1);
														       	}
                                                              }
#line 1870 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 252 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                        (yyval.argsl).arguments = new vector<expresn*>;
                                                        expresn * tex = new expresn((yyvsp[0].expon));
                                                        (yyval.argsl).arguments->push_back(tex);
                                                     }
#line 1880 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 257 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                                                        expresn * tex = new expresn((yyvsp[0].expon));
                                                                                        (yyval.argsl).arguments->push_back(tex);
                                                                                    }
#line 1889 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 262 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                            (yyval.argsl) = (yyvsp[0].argsl);
                                                          }
#line 1897 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 265 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                (yyval.argsl).arguments = NULL;
                                            }
#line 1905 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 269 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                        (yyval.expon) = (yyvsp[0].expon);
                                                   }
#line 1913 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 272 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                								if((yyvsp[0].expon).do_indexing == true)
                                                                {
                                                                	(yyvsp[0].expon).do_indexing =false;
                                                                	(yyval.expon).loc = curr_st->gentemp(tp_double);
                                                                	glob_quad.emit(Q_RINDEX,(yyvsp[0].expon).loc->name,(yyvsp[0].expon).sym_index->name,(yyval.expon).loc->name);
                                                                	glob_quad.emit(Q_PLUS,(yyval.expon).loc->name,"1",(yyval.expon).loc->name);
                                                                	glob_quad.emit(Q_LINDEX,(yyvsp[0].expon).sym_index->name,(yyval.expon).loc->name,(yyvsp[0].expon).loc->name);
                                                                	(yyvsp[0].expon).sym_index = NULL;
                                                               	}
                                								else
                                								{
		                                                            if((yyvsp[0].expon).do_dereference == true)
		                            								{
		                            									(yyvsp[0].expon).do_dereference=false;
		                            									symdata *temp = curr_st->gentemp((yyvsp[0].expon).loc->tp_of_ptr); //incomplete, what if it is pointer to pointer
		                            									glob_quad.emit(Q_RDEREF,(yyvsp[0].expon).loc->name,temp->name);
		                            									(yyvsp[0].expon).loc = temp;
		                            								}
		                                                            (yyval.expon).loc = curr_st->gentemp((yyvsp[0].expon).loc->tp,(yyvsp[0].expon).loc->tp_of_ptr);
		                                                            // pre increment
		                                                            glob_quad.emit(Q_PLUS,(yyvsp[0].expon).loc->name,"1",(yyvsp[0].expon).loc->name);
		                                                            glob_quad.emit(Q_ASSIGN,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
		                                                        }
                                                        	}
#line 1943 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 297 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                								if((yyvsp[0].expon).do_indexing == true)
                                                                {
                                                                	(yyvsp[0].expon).do_indexing =false;
                                                                	(yyval.expon).loc = curr_st->gentemp(tp_double);
                                                                	glob_quad.emit(Q_RINDEX,(yyvsp[0].expon).loc->name,(yyvsp[0].expon).sym_index->name,(yyval.expon).loc->name);
                                                                	glob_quad.emit(Q_MINUS,(yyval.expon).loc->name,"1",(yyval.expon).loc->name);
                                                                	glob_quad.emit(Q_LINDEX,(yyvsp[0].expon).sym_index->name,(yyval.expon).loc->name,(yyvsp[0].expon).loc->name);
                                                                	(yyvsp[0].expon).sym_index = NULL;
                                                               	}
                                                               	else
                                                               	{
		                            								if((yyvsp[0].expon).do_dereference == true)
		                            								{
		                            									(yyvsp[0].expon).do_dereference=false;
		                            									symdata *temp = curr_st->gentemp((yyvsp[0].expon).loc->tp_of_ptr); //incomplete, what if it is pointer to pointer
		                            									glob_quad.emit(Q_RDEREF,(yyvsp[0].expon).loc->name,temp->name);
		                            									(yyvsp[0].expon).loc = temp;
		                            								}
		                                                            (yyval.expon).loc = curr_st->gentemp((yyvsp[0].expon).loc->tp,(yyvsp[0].expon).loc->tp_of_ptr);
		                                                            // pre decrement
		                                                            glob_quad.emit(Q_MINUS,(yyvsp[0].expon).loc->name,"1",(yyvsp[0].expon).loc->name);
		                                                            glob_quad.emit(Q_ASSIGN,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
		                                                       	}
                                                            }
#line 1973 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 323 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                                    //type_n * temp_type;
                                                                    switch((yyvsp[-1].charval))
                                                                    {
                                                                        case '&':
                                                                            //create a temporary type store the type
                                                                            (yyval.expon).loc = curr_st->gentemp(tp_ptr,(yyvsp[0].expon).loc->tp);   //incomplete   
                                                                            glob_quad.emit(Q_ADDR,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
                                                                            break;
                                                                        case '*':
                                                                            //incomplete
                                                                            (yyvsp[0].expon).do_dereference = true;
                                                                            (yyval.expon) = (yyvsp[0].expon);
                                                                            break;
                                                                        case '+':
                                                                            (yyval.expon).loc = curr_st->gentemp((yyvsp[0].expon).loc->tp,(yyvsp[0].expon).loc->tp_of_ptr);
                                                                            glob_quad.emit(Q_ASSIGN,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
                                                                            break;
                                                                        case '-':
                                                                            (yyval.expon).loc = curr_st->gentemp((yyvsp[0].expon).loc->tp,(yyvsp[0].expon).loc->tp_of_ptr);
                                                                            glob_quad.emit(Q_UNARY_MINUS,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
                                                                            break;
                                                                        case '~':
                                                                            /*Bitwise Not to be implemented Later on*/
                                                                            (yyval.expon).loc = curr_st->gentemp((yyvsp[0].expon).loc->tp,(yyvsp[0].expon).loc->tp_of_ptr);
                                                                            glob_quad.emit(Q_COMPLEMENT,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
                                                                            break;
                                                                        case '!':
                                                                            (yyval.expon).loc = curr_st->gentemp((yyvsp[0].expon).loc->tp,(yyvsp[0].expon).loc->tp_of_ptr);
                                                                            glob_quad.emit(Q_NOT,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
                                                                            (yyval.expon).truelist = (yyvsp[0].expon).falselist;
                                                                            (yyval.expon).falselist = (yyvsp[0].expon).truelist;
                                                                            break;
                                                                        default:
                                                                            break;
                                                                    }
                                                                }
#line 2015 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 361 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                        (yyval.charval) = '&';
                                    }
#line 2023 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 364 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                        (yyval.charval) = '*';
                                    }
#line 2031 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 367 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                        (yyval.charval) = '+';
                                    }
#line 2039 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 370 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                        (yyval.charval) = '-';
                                    }
#line 2047 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 373 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                        (yyval.charval) = '~';
                                    }
#line 2055 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 376 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                        (yyval.charval) = '!';
                                    }
#line 2063 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 380 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                    if((yyvsp[0].expon).do_indexing == true)
                                                    {
                                                    	(yyvsp[0].expon).do_indexing =false;
                                                    	symdata *temp = curr_st->gentemp(tp_double);
                                                    	glob_quad.emit(Q_RINDEX,(yyvsp[0].expon).loc->name,(yyvsp[0].expon).sym_index->name,temp->name);
                                                    	(yyvsp[0].expon).sym_index = NULL;
                                                    	(yyvsp[0].expon).loc = temp;
                                                   	}
                                                    else if((yyvsp[0].expon).do_dereference == true)
                    								{
                    									(yyvsp[0].expon).do_dereference=false;
                    									symdata *temp = curr_st->gentemp((yyvsp[0].expon).loc->tp_of_ptr); //incomplete, what if it is pointer to pointer
                    									glob_quad.emit(Q_RDEREF,(yyvsp[0].expon).loc->name,temp->name);
                    									(yyvsp[0].expon).loc = temp;
                    								}
                                                    (yyval.expon) = (yyvsp[0].expon);
                                                }
#line 2086 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 399 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                    (yyval.expon) = (yyvsp[0].expon);
                                                }
#line 2094 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 402 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                                                   	if((yyvsp[-2].expon).loc->tp == tp_matrix && (yyvsp[0].expon).loc->tp == tp_matrix)
                                                                                    {
                                                                                    	matrix *op1 = (yyvsp[-2].expon).loc->mat;
                                                                                    	matrix *op2 = (yyvsp[0].expon).loc->mat;
                                                                                    	matrix *t = new matrix;
                                                                                    	if(op1->number_cols != op2->number_rows)
                                                                                    	{
                                                                                    		printf("ERROR : Matrices are not dimensionally compatible for multiplication");
                                                                                    		exit(-1);
                                                                                    	}
                                                                                    	t->number_rows = op1->number_rows;
                                                                                    	t->number_cols = op2->number_cols;
                                                                                    	(yyval.expon).loc = curr_st -> gentemp(tp_matrix);
                                                                                    	(yyval.expon).loc->mat = t;                                         //size not updated
                                                                                    	symdata *rows = curr_st -> gentemp(tp_int);
                                                                                    	symdata *cols = curr_st -> gentemp(tp_int);
                                                                                    	symdata *cells = curr_st ->gentemp(tp_int);
                                                                                    	symdata *i = curr_st -> gentemp(tp_int);
                                                                                    	symdata *j = curr_st -> gentemp(tp_int);
                                                                                    	symdata *k = curr_st -> gentemp(tp_int);
                                                                                    	symdata *t1 = curr_st -> gentemp(tp_int);
                                                                                    	symdata *t2 = curr_st -> gentemp(tp_int);
                                                                                    	symdata *t3 = curr_st -> gentemp(tp_int);
                                                                                    	symdata *t4 = curr_st -> gentemp(tp_double);
                                                                                    	symdata *t5 = curr_st -> gentemp(tp_double);
                                                                                    	
                                                                                    	glob_quad.emit(Q_RINDEX,(yyvsp[-2].expon).loc->name,"0",rows->name);
                                                                                    	glob_quad.emit(Q_LINDEX,"0",rows->name,(yyval.expon).loc->name);
                                                                                    	glob_quad.emit(Q_RINDEX,(yyvsp[0].expon).loc->name,str_of_int,cols->name);
                                                                                    	glob_quad.emit(Q_LINDEX,str_of_int,cols->name,(yyval.expon).loc->name);
                                                                                    	glob_quad.emit(Q_RINDEX,(yyvsp[-2].expon).loc->name,str_of_int,cells->name);
                                                                                    	glob_quad.emit(Q_ASSIGN,0,i->name);
                                                                                    	int dest1 = next_instr;
                                                                                    	glob_quad.emit(Q_ASSIGN,0,j->name);
                                                                                    	int dest2 = next_instr;
                                                                                    	
                                                                                    	glob_quad.emit(Q_MULT,i->name,cols->name,t1->name);
                                                                                    	glob_quad.emit(Q_PLUS,t1->name,j->name,t1->name);
                                                                                    	glob_quad.emit(Q_MULT,t1->name,str_of_double,t1->name);
                                                                                    	glob_quad.emit(Q_PLUS,t1->name,str_of_2_int,t1->name);
                                                                                    	glob_quad.emit(Q_LINDEX,t1->name,"0",(yyval.expon).loc->name);
                                                                                    	glob_quad.emit(Q_ASSIGN,0,k->name);
                                                                                    	int dest3 = next_instr;
                                                                                    	
                                                                                    	glob_quad.emit(Q_MULT,i->name,cells->name,t2->name);
                                                                                    	glob_quad.emit(Q_PLUS,t2->name,k->name,t2->name);
                                                                                    	glob_quad.emit(Q_MULT,t2->name,str_of_double,t2->name);
                                                                                    	glob_quad.emit(Q_PLUS,t2->name,str_of_2_int,t2->name);
                                                                                    	
                                                                                    	glob_quad.emit(Q_MULT,k->name,cols->name,t3->name);
                                                                                    	glob_quad.emit(Q_PLUS,t3->name,j->name,t3->name);
                                                                                    	glob_quad.emit(Q_MULT,t3->name,str_of_double,t3->name);
                                                                                    	glob_quad.emit(Q_PLUS,t3->name,str_of_2_int,t3->name);
                                                                                    	
                                                                                    	glob_quad.emit(Q_RINDEX,(yyvsp[-2].expon).loc->name,t2->name,t4->name);
                                                                                    	glob_quad.emit(Q_RINDEX,(yyvsp[0].expon).loc->name,t3->name,t5->name);
                                                                                    	glob_quad.emit(Q_MULT,t4->name,t5->name,t4->name);
                                                                                    	glob_quad.emit(Q_RINDEX,(yyval.expon).loc->name,t1->name,t5->name);
                                                                                    	glob_quad.emit(Q_PLUS,t4->name,t5->name,t4->name);
                                                                                    	glob_quad.emit(Q_LINDEX,t1->name,t4->name,(yyval.expon).loc->name);
                                                                                    	
                                                                                    	char str[20];
                                                                                    	glob_quad.emit(Q_PLUS,k->name,"1",k->name);
                                                                                    	int2str(dest3,str);
                                                                                    	glob_quad.emit(Q_IF_LESS,k->name,cells->name,str);
                                                                                    	
                                                                                    	glob_quad.emit(Q_PLUS,j->name,"1",j->name);
                                                                                    	int2str(dest2,str);
                                                                                    	glob_quad.emit(Q_IF_LESS,j->name,cols->name,str);
                                                                                    	
                                                                                    	glob_quad.emit(Q_PLUS,i->name,"1",i->name);
                                                                                    	int2str(dest1,str);
                                                                                    	glob_quad.emit(Q_IF_LESS,i->name,rows->name,str);
                                                                                    }
                                                                                   	else if((yyvsp[-2].expon).loc->tp == tp_matrix && (yyvsp[0].expon).loc->tp != tp_matrix)
                                                                                    {
                                                                                    	matrix *op = (yyvsp[-2].expon).loc->mat;
                                                                                    	matrix *t = new matrix;
                                                                                    	t->number_rows = op->number_rows;
                                                                                    	t->number_cols = op->number_cols;
                                                                                    	(yyval.expon).loc = curr_st -> gentemp(tp_matrix);
                                                                                    	(yyval.expon).loc->mat = t;
                                                                                    	symdata *rows = curr_st -> gentemp(tp_int);
                                                                                    	symdata *cols = curr_st -> gentemp(tp_int);
                                                                                    	symdata *t1 = curr_st -> gentemp(tp_int);
                                                                                    	symdata *t2 = curr_st -> gentemp(tp_int);
                                                                                    	symdata *t3 = curr_st -> gentemp(tp_int);
                                                                                    	symdata *t4 = curr_st -> gentemp(tp_double);
                                                                                    	glob_quad.emit(Q_RINDEX,(yyvsp[-2].expon).loc->name,"0",rows->name);
                                                                                    	glob_quad.emit(Q_LINDEX,"0",rows->name,(yyval.expon).loc->name);
                                                                                    	glob_quad.emit(Q_RINDEX,(yyvsp[-2].expon).loc->name,str_of_int,cols->name);
                                                                                    	glob_quad.emit(Q_LINDEX,str_of_int,cols->name,(yyval.expon).loc->name);
                                                                                    	glob_quad.emit(Q_ASSIGN,2*size_of_int,t1->name);
                                                                                    	glob_quad.emit(Q_MULT,rows->name,cols->name,t2->name);
                                                                                    	glob_quad.emit(Q_ASSIGN,0,t3->name);
                                                                                    	int dest = next_instr;
                                                                                    	glob_quad.emit(Q_RINDEX,(yyvsp[-2].expon).loc->name,t1->name,t4->name);
                                                                                    	glob_quad.emit(Q_MULT,t4->name,(yyvsp[0].expon).loc->name,t4->name);
                                                                                    	glob_quad.emit(Q_LINDEX,t1->name,t4->name,(yyval.expon).loc->name);
                                                                                    	glob_quad.emit(Q_PLUS,t3->name,"1",t3->name);
                                                                                    	glob_quad.emit(Q_PLUS,t1->name,str_of_double,t1->name);
                                                                                    	char str[20];
                                                                                    	int2str(dest,str);
                                                                                    	glob_quad.emit(Q_IF_LESS,t3->name,t2->name,str);
                                                                                    }
                                                                                    else
                                                                                    {
		                                                                                typecheck(&(yyvsp[-2].expon),&(yyvsp[0].expon));
		                                                                                (yyval.expon).loc = curr_st->gentemp((yyvsp[-2].expon).loc->tp,(yyvsp[-2].expon).loc->tp_of_ptr);
		                                                                                glob_quad.emit(Q_MULT,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
                                                                                    }
                                                                              }
#line 2212 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 515 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
		                                                                            if((yyvsp[-2].expon).loc->tp == tp_matrix && (yyvsp[0].expon).loc->tp != tp_matrix)
                                                                                    {
                                                                                    	matrix *op = (yyvsp[-2].expon).loc->mat;
                                                                                    	matrix *t = new matrix;
                                                                                    	t->number_rows = op->number_rows;
                                                                                    	t->number_cols = op->number_cols;
                                                                                    	(yyval.expon).loc = curr_st -> gentemp(tp_matrix);
                                                                                    	(yyval.expon).loc->mat = t;
                                                                                    	symdata *rows = curr_st -> gentemp(tp_int);
                                                                                    	symdata *cols = curr_st -> gentemp(tp_int);
                                                                                    	symdata *t1 = curr_st -> gentemp(tp_int);
                                                                                    	symdata *t2 = curr_st -> gentemp(tp_int);
                                                                                    	symdata *t3 = curr_st -> gentemp(tp_int);
                                                                                    	symdata *t4 = curr_st -> gentemp(tp_double);
                                                                                    	glob_quad.emit(Q_RINDEX,(yyvsp[-2].expon).loc->name,"0",rows->name);
                                                                                    	glob_quad.emit(Q_LINDEX,"0",rows->name,(yyval.expon).loc->name);
                                                                                    	glob_quad.emit(Q_RINDEX,(yyvsp[-2].expon).loc->name,str_of_int,cols->name);
                                                                                    	glob_quad.emit(Q_LINDEX,str_of_int,cols->name,(yyval.expon).loc->name);
                                                                                    	glob_quad.emit(Q_ASSIGN,2*size_of_int,t1->name);
                                                                                    	glob_quad.emit(Q_MULT,rows->name,cols->name,t2->name);
                                                                                    	glob_quad.emit(Q_ASSIGN,0,t3->name);
                                                                                    	int dest = next_instr;
                                                                                    	glob_quad.emit(Q_RINDEX,(yyvsp[-2].expon).loc->name,t1->name,t4->name);
                                                                                    	glob_quad.emit(Q_DIVIDE,t4->name,(yyvsp[0].expon).loc->name,t4->name);
                                                                                    	glob_quad.emit(Q_LINDEX,t1->name,t4->name,(yyval.expon).loc->name);
                                                                                    	glob_quad.emit(Q_PLUS,t3->name,"1",t3->name);
                                                                                    	glob_quad.emit(Q_PLUS,t1->name,str_of_double,t1->name);
                                                                                    	char str[20];
                                                                                    	int2str(dest,str);
                                                                                    	glob_quad.emit(Q_IF_LESS,t3->name,t2->name,str);
                                                                                    }
		                                                                            else
		                                                                            {
		                                                                                typecheck(&(yyvsp[-2].expon),&(yyvsp[0].expon));
		                                                                                (yyval.expon).loc = curr_st->gentemp((yyvsp[-2].expon).loc->tp,(yyvsp[-2].expon).loc->tp_of_ptr);
		                                                                                glob_quad.emit(Q_DIVIDE,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
		                                                                            }
                                                                              }
#line 2256 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 554 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
		                                                                            if((yyvsp[-2].expon).loc->tp == tp_matrix && (yyvsp[0].expon).loc->tp != tp_matrix)
                                                                                    {
                                                                                    	matrix *op = (yyvsp[-2].expon).loc->mat;
                                                                                    	matrix *t = new matrix;
                                                                                    	t->number_rows = op->number_rows;
                                                                                    	t->number_cols = op->number_cols;
                                                                                    	(yyval.expon).loc = curr_st -> gentemp(tp_matrix);
                                                                                    	(yyval.expon).loc->mat = t;
                                                                                    	symdata *rows = curr_st -> gentemp(tp_int);
                                                                                    	symdata *cols = curr_st -> gentemp(tp_int);
                                                                                    	symdata *t1 = curr_st -> gentemp(tp_int);
                                                                                    	symdata *t2 = curr_st -> gentemp(tp_int);
                                                                                    	symdata *t3 = curr_st -> gentemp(tp_int);
                                                                                    	symdata *t4 = curr_st -> gentemp(tp_double);
                                                                                    	glob_quad.emit(Q_RINDEX,(yyvsp[-2].expon).loc->name,"0",rows->name);
                                                                                    	glob_quad.emit(Q_LINDEX,"0",rows->name,(yyval.expon).loc->name);
                                                                                    	glob_quad.emit(Q_RINDEX,(yyvsp[-2].expon).loc->name,str_of_int,cols->name);
                                                                                    	glob_quad.emit(Q_LINDEX,str_of_int,cols->name,(yyval.expon).loc->name);
                                                                                    	glob_quad.emit(Q_ASSIGN,2*size_of_int,t1->name);
                                                                                    	glob_quad.emit(Q_MULT,rows->name,cols->name,t2->name);
                                                                                    	glob_quad.emit(Q_ASSIGN,0,t3->name);
                                                                                    	int dest = next_instr;
                                                                                    	glob_quad.emit(Q_RINDEX,(yyvsp[-2].expon).loc->name,t1->name,t4->name);
                                                                                    	glob_quad.emit(Q_MODULO,t4->name,(yyvsp[0].expon).loc->name,t4->name);
                                                                                    	glob_quad.emit(Q_LINDEX,t1->name,t4->name,(yyval.expon).loc->name);
                                                                                    	glob_quad.emit(Q_PLUS,t3->name,"1",t3->name);
                                                                                    	glob_quad.emit(Q_PLUS,t1->name,str_of_double,t1->name);
                                                                                    	char str[20];
                                                                                    	int2str(dest,str);
                                                                                    	glob_quad.emit(Q_IF_LESS,t3->name,t2->name,str);
                                                                                    }
		                                                                            else
		                                                                            {
		                                                                                typecheck(&(yyvsp[-2].expon),&(yyvsp[0].expon));
		                                                                                (yyval.expon).loc = curr_st->gentemp((yyvsp[-2].expon).loc->tp,(yyvsp[-2].expon).loc->tp_of_ptr);
		                                                                                glob_quad.emit(Q_MODULO,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
                                                                                    }
                                                                             }
#line 2300 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 594 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                                (yyval.expon) = (yyvsp[0].expon);
                                                          }
#line 2308 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 597 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                                                        if((yyvsp[-2].expon).loc->tp == tp_matrix && (yyvsp[0].expon).loc->tp == tp_matrix)
                                                                                        {
                                                                                        	matrix *op1 = (yyvsp[-2].expon).loc->mat;
                                                                                        	matrix *op2 = (yyvsp[0].expon).loc->mat;
                                                                                        	matrix *t = new matrix;
                                                                                        	if(op1->number_rows != op2->number_rows)
                                                                                        	{
                                                                                        		printf("ERROR : Matrices are not dimensionally compatible for addition");
                                                                                        		exit(-1);
                                                                                        	}
                                                                                        	if(op1->number_cols != op2->number_cols)
                                                                                        	{
                                                                                        		printf("ERROR : Matrices are not dimensionally compatible for addition");
                                                                                        		exit(-1);
                                                                                        	}
                                                                                        	t->number_rows = op1->number_rows;
                                                                                        	t->number_cols = op1->number_cols;
                                                                                        	(yyval.expon).loc = curr_st -> gentemp(tp_matrix);
                                                                                        	(yyval.expon).loc->mat = t;
                                                                                        	symdata *rows = curr_st -> gentemp(tp_int);
                                                                                        	symdata *cols = curr_st -> gentemp(tp_int);
                                                                                        	symdata *t1 = curr_st -> gentemp(tp_int);
                                                                                        	symdata *t2 = curr_st -> gentemp(tp_int);
                                                                                        	symdata *t3 = curr_st -> gentemp(tp_int);
                                                                                        	symdata *t4 = curr_st -> gentemp(tp_double);
                                                                                        	symdata *t5 = curr_st -> gentemp(tp_double);
                                                                                        	glob_quad.emit(Q_RINDEX,(yyvsp[-2].expon).loc->name,"0",rows->name);
                                                                                        	glob_quad.emit(Q_LINDEX,"0",rows->name,(yyval.expon).loc->name);
                                                                                        	glob_quad.emit(Q_RINDEX,(yyvsp[-2].expon).loc->name,str_of_int,cols->name);
                                                                                        	glob_quad.emit(Q_LINDEX,str_of_int,cols->name,(yyval.expon).loc->name);
                                                                                        	glob_quad.emit(Q_ASSIGN,2*size_of_int,t1->name);
                                                                                        	glob_quad.emit(Q_MULT,rows->name,cols->name,t2->name);
                                                                                        	glob_quad.emit(Q_ASSIGN,0,t3->name);
                                                                                        	int dest = next_instr;
                                                                                        	glob_quad.emit(Q_RINDEX,(yyvsp[-2].expon).loc->name,t1->name,t4->name);
                                                                                        	glob_quad.emit(Q_RINDEX,(yyvsp[0].expon).loc->name,t1->name,t5->name);
                                                                                        	glob_quad.emit(Q_PLUS,t4->name,t5->name,t4->name);
                                                                                        	glob_quad.emit(Q_LINDEX,t1->name,t4->name,(yyval.expon).loc->name);
                                                                                        	glob_quad.emit(Q_PLUS,t3->name,"1",t3->name);
                                                                                        	glob_quad.emit(Q_PLUS,t1->name,str_of_double,t1->name);
                                                                                        	char str[20];
                                                                                        	int2str(dest,str);
                                                                                        	glob_quad.emit(Q_IF_LESS,t3->name,t2->name,str);
                                                                                        }
                                                                                        else
                                                                                        {
		                                                                                    typecheck(&(yyvsp[-2].expon),&(yyvsp[0].expon));
		                                                                                    (yyval.expon).loc = curr_st->gentemp((yyvsp[-2].expon).loc->tp,(yyvsp[-2].expon).loc->tp_of_ptr);
		                                                                                	glob_quad.emit(Q_PLUS,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
		                                                                                }
                                                                                  }
#line 2365 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 649 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                														if((yyvsp[-2].expon).loc->tp == tp_matrix && (yyvsp[0].expon).loc->tp == tp_matrix)
                                                                                        {
                                                                                        	matrix *op1 = (yyvsp[-2].expon).loc->mat;
                                                                                        	matrix *op2 = (yyvsp[0].expon).loc->mat;
                                                                                        	matrix *t = new matrix;
                                                                                        	if(op1->number_rows != op2->number_rows)
                                                                                        	{
                                                                                        		printf("ERROR : Matrices are not dimensionally compatible for subtraction");
                                                                                        		exit(-1);
                                                                                        	}
                                                                                        	if(op1->number_cols != op2->number_cols)
                                                                                        	{
                                                                                        		printf("ERROR : Matrices are not dimensionally compatible for subtraction");
                                                                                        		exit(-1);
                                                                                        	}
                                                                                        	t->number_rows = op1->number_rows;
                                                                                        	t->number_cols = op1->number_cols;
                                                                                        	(yyval.expon).loc = curr_st -> gentemp(tp_matrix);
                                                                                        	(yyval.expon).loc->mat = t;
                                                                                        	symdata *rows = curr_st -> gentemp(tp_int);
                                                                                        	symdata *cols = curr_st -> gentemp(tp_int);
                                                                                        	symdata *t1 = curr_st -> gentemp(tp_int);
                                                                                        	symdata *t2 = curr_st -> gentemp(tp_int);
                                                                                        	symdata *t3 = curr_st -> gentemp(tp_int);
                                                                                        	symdata *t4 = curr_st -> gentemp(tp_double);
                                                                                        	symdata *t5 = curr_st -> gentemp(tp_double);
                                                                                        	glob_quad.emit(Q_RINDEX,(yyvsp[-2].expon).loc->name,"0",rows->name);
                                                                                        	glob_quad.emit(Q_LINDEX,"0",rows->name,(yyval.expon).loc->name);
                                                                                        	glob_quad.emit(Q_RINDEX,(yyvsp[-2].expon).loc->name,str_of_int,cols->name);
                                                                                        	glob_quad.emit(Q_LINDEX,str_of_int,cols->name,(yyval.expon).loc->name);
                                                                                        	glob_quad.emit(Q_ASSIGN,2*size_of_int,t1->name);
                                                                                        	glob_quad.emit(Q_MULT,rows->name,cols->name,t2->name);
                                                                                        	glob_quad.emit(Q_ASSIGN,0,t3->name);
                                                                                        	int dest = next_instr;
                                                                                        	glob_quad.emit(Q_RINDEX,(yyvsp[-2].expon).loc->name,t1->name,t4->name);
                                                                                        	glob_quad.emit(Q_RINDEX,(yyvsp[0].expon).loc->name,t1->name,t5->name);
                                                                                        	glob_quad.emit(Q_MINUS,t4->name,t5->name,t4->name);
                                                                                        	glob_quad.emit(Q_LINDEX,t1->name,t4->name,(yyval.expon).loc->name);
                                                                                        	glob_quad.emit(Q_PLUS,t3->name,"1",t3->name);
                                                                                        	glob_quad.emit(Q_PLUS,t1->name,str_of_double,t1->name);
                                                                                        	char str[20];
                                                                                        	int2str(dest,str);
                                                                                        	glob_quad.emit(Q_IF_LESS,t3->name,t2->name,str);
                                                                                        }
                                                                                        else
                                                                                        {
		                                                                                    typecheck(&(yyvsp[-2].expon),&(yyvsp[0].expon));
		                                                                                    (yyval.expon).loc = curr_st->gentemp((yyvsp[-2].expon).loc->tp,(yyvsp[-2].expon).loc->tp_of_ptr);
		                                                                                    glob_quad.emit(Q_MINUS,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
                                                                                        }
                                                                                  }
#line 2422 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 702 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                        (yyval.expon) = (yyvsp[0].expon);
                                                    }
#line 2430 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 705 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                                                    if((yyvsp[0].expon).loc->tp != tp_int)
                                                                                    {
                                                                                    	printf("ERROR : Number of shifts is not an integer");
                                                                                    	exit(-1);
                                                                                    }
                                                                                    (yyval.expon).loc = curr_st->gentemp((yyvsp[-2].expon).loc->tp,(yyvsp[-2].expon).loc->tp_of_ptr);
                                                                                    glob_quad.emit(Q_LEFT_OP,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
                                                                                }
#line 2444 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 714 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                                                    if((yyvsp[0].expon).loc->tp != tp_int)
                                                                                    {
                                                                                    	printf("ERROR : Number of shifts is not an integer");
                                                                                    	exit(-1);
                                                                                    }
                                                                                    (yyval.expon).loc = curr_st->gentemp((yyvsp[-2].expon).loc->tp,(yyvsp[-2].expon).loc->tp_of_ptr);
                                                                                    glob_quad.emit(Q_RIGHT_OP,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
                                                                                }
#line 2458 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 724 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                        (yyval.expon) = (yyvsp[0].expon);
                                                 }
#line 2466 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 727 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                                                typecheck(&(yyvsp[-2].expon),&(yyvsp[0].expon));
                                                                                (yyval.expon).loc = curr_st->gentemp(tp_bool);
                                                                                glob_quad.emit(Q_LESS,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
                                                                                (yyval.expon).truelist = makelist(next_instr);
                                                                                (yyval.expon).falselist = makelist(next_instr+1);
                                                                                glob_quad.emit(Q_IF_LESS,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,"-1");
                                                                                glob_quad.emit(Q_GOTO,"-1");
                                                                           }
#line 2480 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 736 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                                                typecheck(&(yyvsp[-2].expon),&(yyvsp[0].expon));
                                                                                (yyval.expon).loc = curr_st->gentemp(tp_bool);
                                                                                glob_quad.emit(Q_GREATER,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
                                                                                (yyval.expon).truelist = makelist(next_instr);
                                                                                (yyval.expon).falselist = makelist(next_instr+1);
                                                                                glob_quad.emit(Q_IF_GREATER,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,"-1");
                                                                                glob_quad.emit(Q_GOTO,"-1");
                                                                           }
#line 2494 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 745 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                                                        typecheck(&(yyvsp[-2].expon),&(yyvsp[0].expon));
                                                                                        (yyval.expon).loc = curr_st->gentemp(tp_bool);
                                                                                		glob_quad.emit(Q_LESS_OR_EQUAL,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
                                                                                		(yyval.expon).truelist = makelist(next_instr);
                                                                                        (yyval.expon).falselist = makelist(next_instr+1);
                                                                                        glob_quad.emit(Q_IF_LESS_OR_EQUAL,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,"-1");
                                                                                        glob_quad.emit(Q_GOTO,"-1");
                                                                                    }
#line 2508 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 754 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                                                            typecheck(&(yyvsp[-2].expon),&(yyvsp[0].expon));
                                                                                            (yyval.expon).loc = curr_st->gentemp(tp_bool);
                                                                                			glob_quad.emit(Q_GREATER_OR_EQUAL,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
                                                                                			(yyval.expon).truelist = makelist(next_instr);
                                                                                            (yyval.expon).falselist = makelist(next_instr+1);
                                                                                            glob_quad.emit(Q_IF_GREATER_OR_EQUAL,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,"-1");
                                                                                            glob_quad.emit(Q_GOTO,"-1");
                                                                                      }
#line 2522 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 764 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                            (yyval.expon) = (yyvsp[0].expon);
                                                      }
#line 2530 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 767 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                                                        typecheck(&(yyvsp[-2].expon),&(yyvsp[0].expon));
                                                                                        (yyval.expon).loc = curr_st->gentemp(tp_bool);
                                                                                		glob_quad.emit(Q_EQUAL,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
                                                                                		(yyval.expon).truelist = makelist(next_instr);
                                                                                        (yyval.expon).falselist = makelist(next_instr+1);
                                                                                        glob_quad.emit(Q_IF_EQUAL,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,"-1");
                                                                                        glob_quad.emit(Q_GOTO,"-1");
                                                                                 }
#line 2544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 776 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                                                            typecheck(&(yyvsp[-2].expon),&(yyvsp[0].expon));
                                                                                            (yyval.expon).loc = curr_st->gentemp(tp_bool);
                                                                                			glob_quad.emit(Q_NOT_EQUAL,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
                                                                                			(yyval.expon).truelist = makelist(next_instr);
                                                                                            (yyval.expon).falselist = makelist(next_instr+1);
                                                                                            glob_quad.emit(Q_IF_NOT_EQUAL,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,"-1");
                                                                                            glob_quad.emit(Q_GOTO,"-1");
                                                                                     }
#line 2558 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 786 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                        (yyval.expon) = (yyvsp[0].expon);
                                                    }
#line 2566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 789 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                                            (yyval.expon).loc = curr_st->gentemp(tp_bool);
                                                                            glob_quad.emit(Q_AND,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
                                                                        }
#line 2575 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 794 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                    (yyval.expon) = (yyvsp[0].expon);
                                               }
#line 2583 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 797 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                                                (yyval.expon).loc = curr_st->gentemp(tp_bool);
                                                                                glob_quad.emit(Q_XOR,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
                                                                           }
#line 2592 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 802 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                            (yyval.expon) = (yyvsp[0].expon);
                                                        }
#line 2600 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 805 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                                                        (yyval.expon).loc = curr_st->gentemp(tp_bool);
                                                                                        glob_quad.emit(Q_OR,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
                                                                                    }
#line 2609 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 810 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                            (yyval.expon) = (yyvsp[0].expon);
                                                        }
#line 2617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 813 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                                                        backpatch((yyvsp[-3].expon).truelist,(yyvsp[-1].instr));
                                                                                        (yyval.expon).falselist = merge((yyvsp[-3].expon).falselist,(yyvsp[0].expon).falselist);
                                                                                        (yyval.expon).truelist = (yyvsp[0].expon).truelist;
                                                                                        (yyval.expon).loc = curr_st->gentemp(tp_bool);
                                                                                        glob_quad.emit(Q_LOG_AND,(yyvsp[-3].expon).loc->name,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
                                                                                    }
#line 2629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 821 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                            (yyval.expon) = (yyvsp[0].expon);
                                                       }
#line 2637 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 824 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                                                        backpatch((yyvsp[-3].expon).falselist,(yyvsp[-1].instr));
                                                                                        (yyval.expon).truelist = merge((yyvsp[-3].expon).truelist,(yyvsp[0].expon).truelist);
                                                                                        (yyval.expon).falselist = (yyvsp[0].expon).falselist;
                                                                                    	(yyval.expon).loc = curr_st->gentemp(tp_bool);
                                                                                        glob_quad.emit(Q_LOG_OR,(yyvsp[-3].expon).loc->name,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
                                                                                    }
#line 2649 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 833 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                            (yyval.expon) = (yyvsp[0].expon);
                                                      }
#line 2657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 836 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                                                                            backpatch((yyvsp[-7].expon).truelist,(yyvsp[-5].instr));
                                                                                                            backpatch((yyvsp[-7].expon).falselist,(yyvsp[-1].instr));
                                                                                                            backpatch((yyvsp[-3].nextlist),next_instr);
                                                                                                            typecheck(&(yyvsp[-4].expon),&(yyvsp[0].expon));
                                                                                        					(yyval.expon).loc = curr_st->gentemp((yyvsp[-4].expon).loc->tp,(yyvsp[-4].expon).loc->tp_of_ptr);
                                                                                        					list *temp1 = makelist(next_instr);
                                                                                        					glob_quad.emit(Q_IF_EXPRESSION,(yyvsp[-7].expon).loc->name,"-1");
                                                                                        					glob_quad.emit(Q_ASSIGN,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
                                                                                        					list *temp2 = makelist(next_instr);
                                                                                        					glob_quad.emit(Q_GOTO,"-1");
                                                                                        					backpatch(temp1,next_instr);
                                                                                        					glob_quad.emit(Q_ASSIGN,(yyvsp[-4].expon).loc->name,(yyval.expon).loc->name);
                                                                                        					backpatch(temp2,next_instr);
                                                                                                        }
#line 2677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 864 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                            (yyval.expon) = (yyvsp[0].expon);
                                                        }
#line 2685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 867 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                                                                if((yyvsp[-2].expon).loc->tp == tp_matrix && (yyvsp[0].expon).loc->tp == tp_matrix)
				                                                                                {
				                                                                                	matrix *op1 = (yyvsp[-2].expon).loc->mat;
				                                                                                	matrix *op2 = (yyvsp[0].expon).loc->mat;
				                                                                                	if(op1->number_rows != -1 && op1->number_rows != op2->number_rows)
				                                                                                	{
				                                                                                		printf("ERROR : Matrices are not dimensionally compatible for assignment");
				                                                                                		exit(-1);
				                                                                                	}
				                                                                                	if(op1->number_cols != -1 && op1->number_cols != op2->number_cols)
				                                                                                	{
				                                                                                		printf("ERROR : Matrices are not dimensionally compatible for assignment");
				                                                                                		exit(-1);
				                                                                                	}
				                                                                                	op1->number_rows = op2->number_rows;
				                                                                                	op1->number_cols = op2->number_cols;
				                                                                                	symdata *rows = curr_st -> gentemp(tp_int);
				                                                                                	symdata *cols = curr_st -> gentemp(tp_int);
				                                                                                	symdata *t1 = curr_st -> gentemp(tp_int);
				                                                                                	symdata *t2 = curr_st -> gentemp(tp_int);
				                                                                                	symdata *t3 = curr_st -> gentemp(tp_int);
				                                                                                	symdata *t4 = curr_st -> gentemp(tp_double);
				                                                                                	glob_quad.emit(Q_RINDEX,(yyvsp[-2].expon).loc->name,"0",rows->name);
				                                                                                	glob_quad.emit(Q_RINDEX,(yyvsp[-2].expon).loc->name,str_of_int,cols->name);
				                                                                                	glob_quad.emit(Q_ASSIGN,2*size_of_int,t1->name);
				                                                                                	glob_quad.emit(Q_MULT,rows->name,cols->name,t2->name);
				                                                                                	glob_quad.emit(Q_ASSIGN,0,t3->name);
				                                                                                	int dest = next_instr;
				                                                                                	glob_quad.emit(Q_RINDEX,(yyvsp[0].expon).loc->name,t1->name,t4->name);
				                                                                                	glob_quad.emit(Q_LINDEX,t1->name,t4->name,(yyvsp[-2].expon).loc->name);
				                                                                                	glob_quad.emit(Q_PLUS,t3->name,"1",t3->name);
				                                                                                	glob_quad.emit(Q_PLUS,t1->name,str_of_double,t1->name);
				                                                                                	char str[20];
                                                                                        			int2str(dest,str);
				                                                                                	glob_quad.emit(Q_IF_LESS,t3->name,t2->name,str);
				                                                                                }
                                                                                                else if((yyvsp[-2].expon).do_indexing == true)
																						        {
																						        	(yyvsp[-2].expon).do_indexing =false;
																						        	glob_quad.emit(Q_LINDEX,(yyvsp[-2].expon).sym_index->name,(yyvsp[0].expon).loc->name,(yyvsp[-2].expon).loc->name);
																						        	(yyvsp[-2].expon).sym_index = NULL;
																						       	}
                                                                                                //LDereferencing
                                                                                                else if((yyvsp[-2].expon).do_dereference == true)
																								{
																									(yyvsp[-2].expon).do_dereference=false;             //incomplete, what if it is pointer to pointer
																									glob_quad.emit(Q_LDEREF,(yyvsp[0].expon).loc->name,(yyvsp[-2].expon).loc->name);
																								}
																								else
																								{
                                                                                                	typecheck(&(yyvsp[-2].expon),&(yyvsp[0].expon),true);
                                                                                                    glob_quad.emit(Q_ASSIGN,(yyvsp[0].expon).loc->name,(yyvsp[-2].expon).loc->name);
                                                                                                }
                                                                                                (yyval.expon) = (yyvsp[0].expon);
                                                                                            }
#line 2746 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 925 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                            (yyval.expon) = (yyvsp[0].expon);
                                                       }
#line 2754 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 929 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                            (yyval.expon) = (yyvsp[0].expon);
                                                      }
#line 2762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 932 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                                        (yyval.expon) = (yyvsp[0].expon);
                                                                     }
#line 2770 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 938 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                                                        if((yyvsp[-1].expon).loc != NULL && (yyvsp[-1].expon).loc->tp == tp_func)
                                                                                        {
                                                                                            //Delete curr_st as function declaration need not be supported
                                                                                            curr_st = new symtab();
                                                                                        }
                                                                                    }
#line 2782 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 946 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                        if((yyvsp[0].expon).loc != NULL && (yyvsp[0].expon).loc->tp == tp_func)
                                                        {
                                                            (yyval.expon) = (yyvsp[0].expon);
                                                        }
                                                        else
                                                        {
                                                        	(yyval.expon).loc = NULL;
						                                    (yyval.expon).truelist = NULL;
						                                    (yyval.expon).falselist = NULL;
                                                        }
                                                     }
#line 2799 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 958 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                (yyval.expon).loc = NULL;
                                                (yyval.expon).truelist = NULL;
                                                (yyval.expon).falselist = NULL;
                                            }
#line 2809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 969 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                    /*Expecting only function declaration*/
                                                    (yyval.expon) = (yyvsp[0].expon);
                                                }
#line 2818 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 973 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
		                                            (yyval.expon).loc = NULL;
		                                            (yyval.expon).truelist = NULL;
		                                            (yyval.expon).falselist = NULL;
                                            	}
#line 2828 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 979 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                /*Nothing to be done here*/
                                                if((yyvsp[0].expon).loc->tp == tp_func)
                                                {
                                                    (yyval.expon) = (yyvsp[0].expon);
                                                }
                                                else
                                                {
                                                    //its not a function
                                                    //if its a matrix
                                                    if((yyvsp[0].expon).loc->tp == tp_matrix)
                                                    {
                                                    	if((yyvsp[0].expon).loc->mat->number_rows == -1 || (yyvsp[0].expon).loc->mat->number_cols == -1)
                                                    	{
                                                    		printf("ERROR : matrix size not defined");
                                                    		exit(-1);
                                                    	}
                                                    	//initialising each value to 0
                                                    	int i,j;
                                                    	matrix *temp1 = (yyvsp[0].expon).loc->mat;
                                                    	for(i=0; i < temp1->number_rows; i++)
                                                    	{	
                                                    		vector<double> row;
                                                    		for(j=0; j < temp1->number_cols; j++)
                                                    		{
                                                    			row.push_back(0);
                                                    		}
                                                    		temp1->mat.push_back(row);
                                                    	}
                                                    	char str[20],str_off[20];
                                                    	int offset = 0;
                                                    	sprintf(str, "%d", temp1->number_rows);
                                                    	sprintf(str_off, "%d", offset);
                                                    	glob_quad.emit(Q_LINDEX,str_off,str,(yyvsp[0].expon).loc->name);
                                                    	offset += size_of_int;
                                                    	sprintf(str, "%d", temp1->number_cols);
                                                    	sprintf(str_off, "%d", offset);
                                                    	glob_quad.emit(Q_LINDEX,str_off,str,(yyvsp[0].expon).loc->name);
                                                    }
                                                    (yyvsp[0].expon).loc->isInitialized = false;                                  //explicitly putting this value even though unnecessary
                                                    curr_st->lookup((yyvsp[0].expon).loc);
                                                }
                                            }
#line 2876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 1022 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                                if((yyvsp[-2].expon).loc->tp == tp_func)
												                {
                                                                    printf("ERROR : Wrong declaration");
                                                                    exit(-1);
                                                                }
                                                                (yyvsp[-2].expon).loc->isInitialized = true;
                                                                //initializations of declarators
                                                                if((yyvsp[-2].expon).loc->tp == tp_matrix)
                                                                {
                                                                	if((yyvsp[0].expon).loc->mat == NULL)
                                                                	{
                                                                		printf("Types compatibility not defined");
                                                                		exit(-1);
                                                                	}
                                                                	matrix *temp1 = (yyvsp[-2].expon).loc->mat;
                                                                	matrix *temp2 = (yyvsp[0].expon).loc->mat;
                                                                	if(temp1->number_rows != -1 && temp1->number_rows != temp2->number_rows)
                                                                	{
                                                                		printf("ERROR : number of rows do not match during initialization");
                                                                		exit(-1);
                                                                	}
                                                                	if(temp1->number_cols != -1 && temp1->number_cols != temp2->number_cols)
                                                                	{
                                                                		printf("ERROR : number of cols do not match during initialization");
                                                                		exit(-1);
                                                                	}
                                                                	char str[20],str_off[20];
                                                                	int offset=0,i,j;
																	sprintf(str, "%d", temp2->number_rows);
																	sprintf(str_off, "%d", offset);
                                                                	glob_quad.emit(Q_LINDEX,str_off,str,(yyvsp[-2].expon).loc->name);
                                                                	offset += size_of_int;
                                                                	sprintf(str, "%d", temp2->number_cols);
                                                                	sprintf(str_off, "%d", offset);
                                                                	glob_quad.emit(Q_LINDEX,str_off,str,(yyvsp[-2].expon).loc->name);
                                                                	offset += size_of_int;
                                                                	for(i=0; i < temp2->mat.size(); i++)
                                                                	{
                                                                		for(j=0; j < temp2->mat[i].size(); j++)
                                                                		{
                                                                			sprintf(str_off, "%d", offset);
                                                                			sprintf(str, "%lf", temp2->mat[i][j]);
                                                                			glob_quad.emit(Q_LINDEX,str_off,str,(yyvsp[-2].expon).loc->name);
                                                                			offset += size_of_double;
                                                                		}
                                                                	}
                                                                }
                                                                else
                                                                {
                                                                	typecheck(&(yyvsp[-2].expon),&(yyvsp[0].expon),true);    //typecheck should not change $1 on initialization
                                                                	glob_quad.emit(Q_ASSIGN,(yyvsp[0].expon).loc->name,(yyvsp[-2].expon).loc->name);
                                                                }
                                                                curr_st->lookup((yyvsp[-2].expon).loc);
                                                                switch((yyvsp[-2].expon).loc->tp)
                                                                {
                                                                	case tp_char: 
                                                                	case tp_int: 
                                                                	case tp_double: (yyvsp[-2].expon).loc->init=(yyvsp[0].expon).loc->init;
                                                                				 break;
                                                                	case tp_matrix: delete (yyvsp[-2].expon).loc->mat;
                                                                					(yyvsp[-2].expon).loc->mat = (yyvsp[0].expon).loc->mat;
                                                                }
                                                            }
#line 2945 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 1087 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                        glob_type = tp_void;
                                    }
#line 2953 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 1090 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                        glob_type = tp_char;
                                    }
#line 2961 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 1093 "ass4_15CS30044.y" /* yacc.c:1646  */
    {}
#line 2967 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 1094 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                        glob_type = tp_int;
                                    }
#line 2975 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 1097 "ass4_15CS30044.y" /* yacc.c:1646  */
    {}
#line 2981 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 1098 "ass4_15CS30044.y" /* yacc.c:1646  */
    {}
#line 2987 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 1099 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                            glob_type = tp_double;
                                        }
#line 2995 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 1102 "ass4_15CS30044.y" /* yacc.c:1646  */
    {}
#line 3001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 1103 "ass4_15CS30044.y" /* yacc.c:1646  */
    {}
#line 3007 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 1104 "ass4_15CS30044.y" /* yacc.c:1646  */
    {}
#line 3013 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 1105 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                	glob_type = tp_matrix;
                                	}
#line 3021 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 1111 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                                if((yyvsp[-1].isPointer) == true)
                                                                {
                                                                    if((yyvsp[0].expon).loc->tp == tp_func)
                                                                    {
                                                                    	symdata *ret = curr_st->symbol_tab[0];
                                                                    	ret->tp_of_ptr = ret->tp;
                                                                    	ret->tp = tp_ptr;
                                                                    	if(ret->mat != NULL)
                                                                    		delete ret->mat;
                                                                    }
                                                                    else
                                                                    {
		                                                                (yyvsp[0].expon).loc->tp_of_ptr = (yyvsp[0].expon).loc->tp;
		                                                                (yyvsp[0].expon).loc->tp = tp_ptr;
		                                                                if((yyvsp[0].expon).loc->mat != NULL)
		                                                                	delete (yyvsp[0].expon).loc->mat;
	                                                                }
                                                                }
                                                                (yyval.expon) = (yyvsp[0].expon);
                                                            }
#line 3047 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 1133 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                            (yyval.isPointer) = (yyvsp[0].isPointer);
                                        }
#line 3055 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 1136 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                (yyval.isPointer) = false;
                                            }
#line 3063 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 1140 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
													(yyval.expon).loc = curr_st->search(*(yyvsp[0].str));
													if((yyval.expon).loc != NULL)
													{
														printf("\n\nERROR: Redeclaration of %s",(yyvsp[0].str)->c_str());
														exit(-1);
													}
													(yyval.expon).loc = new symdata(*(yyvsp[0].str),-1,"local",glob_type);
                                            }
#line 3077 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 1149 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                        (yyval.expon) = (yyvsp[-1].expon);
                                                    }
#line 3085 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 1152 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                							                                                    matrix *temp = (yyvsp[-6].expon).loc->mat;
                                							                                                    if ((yyvsp[-4].expon).loc != NULL)
                                							                                                    {
                                							                                                    	temp->number_rows = (yyvsp[-4].expon).loc->init.i;          //incomplete convert to integer
                                							                                                    }
                                							                                                    if ((yyvsp[-1].expon).loc != NULL)
                                							                                                    {
                                							                                                    	temp->number_cols = (yyvsp[-1].expon).loc->init.i;          //incomplete convert to integer
                                							                                                    }
                                							                                                    (yyval.expon) = (yyvsp[-6].expon);
                                                                                                            }
#line 3102 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 1164 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                                                    symdata *checkfnexists = glob_st->search((yyvsp[-3].expon).loc->name);
                                                                                    //printf("Hello1\n");
                                                                                    if(checkfnexists == NULL)
                                                                                    {
                                                                                    	//For temporary variables that were created during parameter declaration
                                                                                    	symtab *temp_st = curr_st;
                                                                                    	curr_st = new symtab();     //created a new symbol table
                                                                                    	//setting name of curr_st
                                                                                    	curr_st->name = (yyvsp[-3].expon).loc->name;
                                                                                    	//setting return type in new symbol table;
                                                                                    	symdata *ret = new symdata("retVal",-1,"return",(yyvsp[-3].expon).loc->tp,(yyvsp[-3].expon).loc->tp_of_ptr);
                                                                                    	curr_st->lookup(ret);
                                                                                    	//change $1(function) type to tp_func
                                                                                    	(yyvsp[-3].expon).loc->tp = tp_func;
                                                                                    	(yyvsp[-3].expon).loc->tp_of_ptr = tp_not_set;
                                                                                    	(yyvsp[-3].expon).loc->var_type = "func";
                                                                                    	//set nest_tab of function to curr_st
                                                                                    	(yyvsp[-3].expon).loc->nest_tab = curr_st;
                                                                                    	glob_st->lookup((yyvsp[-3].expon).loc);
                                                                                    	//adding parameters from parameter list to the current symbol table and setting var_type as "param"
                                                                                    	vector<expresn> paramlist = *(yyvsp[-1].symlist);
                                                                                    	for(int i=0; i<paramlist.size() ; i++)
                                                                                    	{
                                                                                    		paramlist[i].loc->var_type = "param";
                                                                                    		curr_st->lookup(paramlist[i].loc);
                                                                                    	}
                                                                                    	for(int i=0; i < temp_st->symbol_tab.size(); i++)
									                                                	{
									                                                		curr_st->lookup(temp_st->symbol_tab[i]);
																						}
																						delete temp_st;
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        printf("ERROR : Function already exists");
                                                                                        exit(-1);
                                                                                    }
                                                                                    (yyval.expon) = (yyvsp[-3].expon);
                                                                                }
#line 3147 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 1204 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                                                	//functions with void parameter list come here
                                                                                	symdata *checkfnexists = glob_st->search((yyvsp[-3].expon).loc->name);
                                                                                    //printf("Hello1\n");
                                                                                    if(checkfnexists == NULL)
                                                                                    {
                                                                                    	symtab *temp_st = curr_st;
                                                                                    	curr_st = new symtab();     //created a new symbol table
                                                                                    	//setting name of curr_st
                                                                                    	curr_st->name = (yyvsp[-3].expon).loc->name;
                                                                                    	//setting return type in new symbol table;
                                                                                    	symdata *ret = new symdata("retVal",-1,"return",(yyvsp[-3].expon).loc->tp,(yyvsp[-3].expon).loc->tp_of_ptr);
                                                                                    	curr_st->lookup(ret);
                                                                                    	//change $1(function) type to tp_func
                                                                                    	(yyvsp[-3].expon).loc->tp = tp_func;
                                                                                    	(yyvsp[-3].expon).loc->tp_of_ptr = tp_not_set;
                                                                                    	(yyvsp[-3].expon).loc->var_type = "func";
                                                                                    	//set nest_tab of function to curr_st
                                                                                    	(yyvsp[-3].expon).loc->nest_tab = curr_st;
                                                                                    	glob_st->lookup((yyvsp[-3].expon).loc);
                                                                                    	for(int i=0; i < temp_st->symbol_tab.size(); i++)
									                                                	{
									                                                		curr_st->lookup(temp_st->symbol_tab[i]);
																						}
																						delete temp_st;
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        printf("ERROR : Function already exists");
                                                                                        exit(-1);
                                                                                    }
                                                                                    (yyval.expon) = (yyvsp[-3].expon);
                                                                            }
#line 3185 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 1238 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                            (yyval.expon) = (yyvsp[0].expon);
                                                        }
#line 3193 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 1241 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                (yyval.expon).loc = NULL;
                                                (yyval.expon).truelist = NULL;
                                                (yyval.expon).falselist = NULL;
                                            }
#line 3203 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 1250 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                                (yyval.isPointer) = true;
                                    }
#line 3211 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 1253 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                                (yyval.isPointer) = true;
                                            }
#line 3219 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 1257 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                    (yyval.symlist) = (yyvsp[0].symlist);
                                                }
#line 3227 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 1261 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                         (yyval.symlist) = new vector<expresn>;
                                                         (yyval.symlist)->push_back((yyvsp[0].expon));   
                                                      }
#line 3236 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 1265 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                                            (yyval.symlist) = (yyvsp[-2].symlist);
                                                                            (yyval.symlist)->push_back((yyvsp[0].expon));
                                                                        }
#line 3245 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 1270 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                                        (yyval.expon) = (yyvsp[0].expon);
                                                                  }
#line 3253 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 1273 "ass4_15CS30044.y" /* yacc.c:1646  */
    {}
#line 3259 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 1278 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                    (yyval.expon) = (yyvsp[0].expon);
                                }
#line 3267 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 1281 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                	(yyval.expon) = (yyvsp[-1].expon);
                                }
#line 3275 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 1285 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
									(yyval.expon).loc = new symdata();
									(yyval.expon).loc->tp = tp_matrix;
									(yyval.expon).loc->mat = new matrix();
									matrix *temp = (yyval.expon).loc->mat;
									temp->number_cols = (yyvsp[0].rowval)->matrow.size();
									temp->number_rows = 1;
									temp->mat.push_back((yyvsp[0].rowval)->matrow);
								}
#line 3289 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 1294 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
									matrix *temp = (yyvsp[-2].expon).loc->mat;
									if(temp->number_cols != (yyvsp[0].rowval)->matrow.size())
									{
										printf("ERROR: row size don't match");
										exit(-1);
									}
									temp->mat.push_back((yyvsp[0].rowval)->matrow);
									temp->number_rows++;
									(yyval.expon) = (yyvsp[-2].expon);
								}
#line 3305 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 1306 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
									(yyval.rowval) = new matrix_row;
									(yyval.rowval)->matrow.push_back((yyvsp[0].expon).loc->init.d);
								}
#line 3314 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 1310 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
									(yyvsp[-3].rowval)->matrow.push_back((yyvsp[0].expon).loc->init.d);
									(yyval.rowval) = (yyvsp[-3].rowval);
								}
#line 3323 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 1325 "ass4_15CS30044.y" /* yacc.c:1646  */
    {}
#line 3329 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 1328 "ass4_15CS30044.y" /* yacc.c:1646  */
    {/*Switch Case*/}
#line 3335 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 1329 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                        (yyval.nextlist) = (yyvsp[0].nextlist);
                                                    }
#line 3343 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 1332 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                        (yyval.nextlist) = NULL;
                                                    }
#line 3351 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 1335 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                        (yyval.nextlist) = (yyvsp[0].nextlist);
                                                    }
#line 3359 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 1338 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                        (yyval.nextlist) = (yyvsp[0].nextlist);
                                                    }
#line 3367 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1341 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                    (yyval.nextlist) = (yyvsp[0].nextlist);
                                                }
#line 3375 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1345 "ass4_15CS30044.y" /* yacc.c:1646  */
    {}
#line 3381 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1346 "ass4_15CS30044.y" /* yacc.c:1646  */
    {}
#line 3387 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1347 "ass4_15CS30044.y" /* yacc.c:1646  */
    {}
#line 3393 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1349 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                                (yyval.nextlist) = (yyvsp[-1].nextlist);
                                                            }
#line 3401 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 1353 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                    (yyval.nextlist) = (yyvsp[0].nextlist);
                                                }
#line 3409 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1356 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                (yyval.nextlist) = NULL;
                                            }
#line 3417 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1360 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                (yyval.nextlist) = (yyvsp[0].nextlist);
                                            }
#line 3425 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1363 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                                    backpatch((yyvsp[-2].nextlist),(yyvsp[-1].instr));
                                                                    (yyval.nextlist) = (yyvsp[0].nextlist);
                                                             }
#line 3434 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1368 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                (yyval.nextlist) = NULL;
                                            }
#line 3442 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1371 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                (yyval.nextlist) = (yyvsp[0].nextlist);
                                          }
#line 3450 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1375 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                        (yyval.expon) = (yyvsp[-1].expon);
                                                  }
#line 3458 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1379 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                (yyval.expon) = (yyvsp[0].expon);
                                           }
#line 3466 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1382 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                /*Initialize Expression to NULL*/
                                                (yyval.expon).loc = NULL;
                                                (yyval.expon).truelist = NULL;
                                                (yyval.expon).falselist = NULL;
                                            }
#line 3477 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1391 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                (yyval.expon) = (yyvsp[0].expon);
                                           }
#line 3485 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1394 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                /*Initialize Expression to NULL*/
                                                (yyval.expon).truelist = NULL;
                                                (yyval.expon).falselist = NULL;
                                                (yyval.expon).loc = NULL;
                                            }
#line 3496 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1401 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
												(yyval.expon) = (yyvsp[0].expon);   //copying to copy the lists
												(yyval.expon).loc = NULL;
												list *temp1=makelist(next_instr);
												list *temp2=makelist(next_instr+1);
												glob_quad.emit(Q_IF_EXPRESSION,(yyvsp[0].expon).loc->name,"-1");
												glob_quad.emit(Q_IF_FALSE_EXPRESSION,(yyvsp[0].expon).loc->name,"-1");
												(yyval.expon).truelist = merge((yyval.expon).truelist,temp1);
												(yyval.expon).falselist = merge((yyval.expon).falselist,temp2);
											}
#line 3511 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1412 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                                                            backpatch((yyvsp[-7].expon).truelist,(yyvsp[-5].instr));
                                                                                            backpatch((yyvsp[-7].expon).falselist,(yyvsp[-1].instr));
                                                                                            list *temp = merge((yyvsp[-4].nextlist),(yyvsp[-3].nextlist));
                                                                                            (yyval.nextlist) = merge( temp, (yyvsp[0].nextlist));
                                                                                        }
#line 3522 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1418 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                                        backpatch((yyvsp[-3].expon).truelist,(yyvsp[-1].instr));
                                                                        (yyval.nextlist) = merge((yyvsp[-3].expon).falselist,(yyvsp[0].nextlist));
                                                                    }
#line 3531 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1422 "ass4_15CS30044.y" /* yacc.c:1646  */
    {}
#line 3537 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 1424 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                                            backpatch((yyvsp[0].nextlist),(yyvsp[-4].instr));
                                                                            backpatch((yyvsp[-3].expon).truelist,(yyvsp[-1].instr));
                                                                            (yyval.nextlist) = (yyvsp[-3].expon).falselist;
                                                                            glob_quad.emit(Q_GOTO,(yyvsp[-4].instr));
                                                                        }
#line 3548 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1430 "ass4_15CS30044.y" /* yacc.c:1646  */
    {  
                                                                                    backpatch((yyvsp[-6].nextlist),(yyvsp[-3].instr));
                                                                                    backpatch((yyvsp[-2].expon).truelist,(yyvsp[-7].instr));
                                                                                    (yyval.nextlist) = (yyvsp[-2].expon).falselist;
                                                                                }
#line 3558 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1436 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                                                                                        backpatch((yyvsp[-7].expon).truelist,(yyvsp[-1].instr));
                                                                                                                        (yyval.nextlist) = (yyvsp[-7].expon).falselist;
                                                                                                                        backpatch((yyvsp[0].nextlist),(yyvsp[-5].instr));
                                                                                                                        glob_quad.emit(Q_GOTO,(yyvsp[-5].instr));
                                                                                                                        backpatch((yyvsp[-3].nextlist),(yyvsp[-8].instr));
                                                                                                                    }
#line 3570 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1443 "ass4_15CS30044.y" /* yacc.c:1646  */
    {}
#line 3576 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1445 "ass4_15CS30044.y" /* yacc.c:1646  */
    {}
#line 3582 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1446 "ass4_15CS30044.y" /* yacc.c:1646  */
    {}
#line 3588 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1447 "ass4_15CS30044.y" /* yacc.c:1646  */
    {}
#line 3594 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 1448 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                                if((yyvsp[-1].expon).loc == NULL)
                                                                {
                                                                    glob_quad.emit(Q_RETURN);
                                                                }
                                                                else
                                                                {
                                                                    expresn * dummy = new expresn();
                                                                    dummy->loc = curr_st->symbol_tab[0];
                                                                    typecheck(dummy,&(yyvsp[-1].expon),true);
                                                                    glob_quad.emit(Q_ASSIGN,(yyvsp[-1].expon).loc->name,dummy->loc->name);
                                                                    glob_quad.emit(Q_RETURN,dummy->loc->name);
                                                                    delete dummy;
                                                                }
                                                                (yyval.nextlist) = NULL;
                                                          }
#line 3615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1472 "ass4_15CS30044.y" /* yacc.c:1646  */
    {
                                                                                                    glob_quad.arr[start_instr].result = curr_st->name;
                                                                                                    //glob_quad.print();
                                                                                                    backpatch((yyvsp[0].nextlist),next_instr);
                                                                                                    glob_quad.emit(Q_RETURN);
                                                                                                    curr_st->offset = 0;
														                                        	for(int i=0; i < curr_st->symbol_tab.size(); i++)
														                                        	{
														                                        		curr_st->symbol_tab[i]->offset = curr_st->offset;
																										curr_st->symbol_tab[i]->setsize();
																										curr_st->offset += curr_st->symbol_tab[i]->getsize();
														                                        	}
                                                                                                    //Create a new Current Symbol Table
                                                                                                    start_instr = next_instr;
                                                                                                    glob_quad.emit(Q_START,"-1");
                                                                                                    curr_st = new symtab();
                                                                                                }
#line 3637 "y.tab.c" /* yacc.c:1646  */
    break;


#line 3641 "y.tab.c" /* yacc.c:1646  */
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
#line 1496 "ass4_15CS30044.y" /* yacc.c:1906  */

void yyerror(const char*s)
{
    printf("%s",s);
}
