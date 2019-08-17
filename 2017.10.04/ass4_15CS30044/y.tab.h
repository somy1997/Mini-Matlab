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
#line 9 "ass4_15CS30044.y" /* yacc.c:1909  */

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

#line 177 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
