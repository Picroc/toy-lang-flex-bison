/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IDENTIFIER = 258,
     NUMBER = 259,
     IMPORT = 260,
     CLASS = 261,
     EXTENDS = 262,
     PRIVATE = 263,
     PUBLIC = 264,
     STATIC = 265,
     VOID = 266,
     IF = 267,
     ELSE = 268,
     WHILE = 269,
     LOOP = 270,
     RETURN = 271,
     PRINT = 272,
     NUL = 273,
     NEW = 274,
     INT = 275,
     REAL = 276,
     LBRACE = 277,
     RBRACE = 278,
     LPAREN = 279,
     RPAREN = 280,
     LBRACKET = 281,
     RBRACKET = 282,
     COMMA = 283,
     DOT = 284,
     SEMICOLON = 285,
     ASSIGN = 286,
     LESS = 287,
     GREATER = 288,
     EQUAL = 289,
     NOT_EQUAL = 290,
     PLUS = 291,
     MINUS = 292,
     MULTIPLY = 293,
     DIVIDE = 294
   };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define NUMBER 259
#define IMPORT 260
#define CLASS 261
#define EXTENDS 262
#define PRIVATE 263
#define PUBLIC 264
#define STATIC 265
#define VOID 266
#define IF 267
#define ELSE 268
#define WHILE 269
#define LOOP 270
#define RETURN 271
#define PRINT 272
#define NUL 273
#define NEW 274
#define INT 275
#define REAL 276
#define LBRACE 277
#define RBRACE 278
#define LPAREN 279
#define RPAREN 280
#define LBRACKET 281
#define RBRACKET 282
#define COMMA 283
#define DOT 284
#define SEMICOLON 285
#define ASSIGN 286
#define LESS 287
#define GREATER 288
#define EQUAL 289
#define NOT_EQUAL 290
#define PLUS 291
#define MINUS 292
#define MULTIPLY 293
#define DIVIDE 294




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 9 "toy_lang_grammar.y"
{
       CompilationUnit* cpunit;
       ClassDeclarations* cldcls;
       ClassDeclaration* cldcl;
       Imports* imps;
       LocalDeclarations* lcdcls;
       LocalDeclaration* lcdcl;
       FieldDeclaration* fld;
       MethodDeclaration* mtd;
       Statements* stms;
       Statement* stm;
       ClassMembers* clsmbs;
       ClassMember* clsmb;
       ParameterList* plist;
       Parameter* par;
       ArgumentList* arglist;
       Expression* exp;
       CompoundNames* cpnames;
       CompoundName* cpname;
       Terms* trms;
       Term* trm;
       Factor* fctr;
       Factors* fctrs;
       MultSign* mlsn;
       AddSign* adsn;
       Extension* extns;
       Body* bd;
       Visibility* vsblt;
       Staticness* stcs;
       Type* tp;
       NewType* ntp;
       ArrayTail* arrt;
       LeftPart* lfpt;
       Block* blck;
       Relation* rlt;
       RelationalOperator* rltop;
       MethodType* mtp;
       Import* imp;

       std::string *string;
       int token;
}
/* Line 1529 of yacc.c.  */
#line 170 "parser.hpp"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

