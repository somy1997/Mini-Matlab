/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    SlCom = 335,
    ERR = 336
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

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
