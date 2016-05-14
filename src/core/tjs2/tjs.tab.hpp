namespace TJS {
/* A Bison parser, made by GNU Bison 2.4.2.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2006, 2009-2010 Free Software
   Foundation, Inc.
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     T_COMMA = 258,
     T_EQUAL = 259,
     T_AMPERSANDEQUAL = 260,
     T_VERTLINEEQUAL = 261,
     T_CHEVRONEQUAL = 262,
     T_MINUSEQUAL = 263,
     T_PLUSEQUAL = 264,
     T_PERCENTEQUAL = 265,
     T_SLASHEQUAL = 266,
     T_BACKSLASHEQUAL = 267,
     T_ASTERISKEQUAL = 268,
     T_LOGICALOREQUAL = 269,
     T_LOGICALANDEQUAL = 270,
     T_RBITSHIFTEQUAL = 271,
     T_LARITHSHIFTEQUAL = 272,
     T_RARITHSHIFTEQUAL = 273,
     T_QUESTION = 274,
     T_LOGICALOR = 275,
     T_LOGICALAND = 276,
     T_VERTLINE = 277,
     T_CHEVRON = 278,
     T_AMPERSAND = 279,
     T_NOTEQUAL = 280,
     T_EQUALEQUAL = 281,
     T_DISCNOTEQUAL = 282,
     T_DISCEQUAL = 283,
     T_SWAP = 284,
     T_LT = 285,
     T_GT = 286,
     T_LTOREQUAL = 287,
     T_GTOREQUAL = 288,
     T_RARITHSHIFT = 289,
     T_LARITHSHIFT = 290,
     T_RBITSHIFT = 291,
     T_PERCENT = 292,
     T_SLASH = 293,
     T_BACKSLASH = 294,
     T_RATIONAL = 295,
     T_ASTERISK = 296,
     T_EXCRAMATION = 297,
     T_TILDE = 298,
     T_DECREMENT = 299,
     T_INCREMENT = 300,
     T_NEW = 301,
     T_DELETE = 302,
     T_TYPEOF = 303,
     T_PLUS = 304,
     T_MINUS = 305,
     T_SHARP = 306,
     T_DOLLAR = 307,
     T_ISVALID = 308,
     T_INVALIDATE = 309,
     T_INSTANCEOF = 310,
     T_LPARENTHESIS = 311,
     T_DOT = 312,
     T_LBRACKET = 313,
     T_THIS = 314,
     T_SUPER = 315,
     T_GLOBAL = 316,
     T_RBRACKET = 317,
     T_CLASS = 318,
     T_RPARENTHESIS = 319,
     T_COLON = 320,
     T_SEMICOLON = 321,
     T_LBRACE = 322,
     T_RBRACE = 323,
     T_CONTINUE = 324,
     T_FUNCTION = 325,
     T_ARROW = 326,
     T_DEBUGGER = 327,
     T_DEFAULT = 328,
     T_CASE = 329,
     T_EXTENDS = 330,
     T_FINALLY = 331,
     T_PROPERTY = 332,
     T_PRIVATE = 333,
     T_PUBLIC = 334,
     T_PROTECTED = 335,
     T_STATIC = 336,
     T_RETURN = 337,
     T_BREAK = 338,
     T_EXPORT = 339,
     T_IMPORT = 340,
     T_SWITCH = 341,
     T_IN = 342,
     T_INCONTEXTOF = 343,
     T_FOREACH = 344,
     T_FOR = 345,
     T_WHILE = 346,
     T_UNTIL = 347,
     T_DO = 348,
     T_LOOP = 349,
     T_IF = 350,
     T_UNLESS = 351,
     T_VAR = 352,
     T_CONST = 353,
     T_ENUM = 354,
     T_GOTO = 355,
     T_THROW = 356,
     T_TRY = 357,
     T_SETTER = 358,
     T_GETTER = 359,
     T_ELSE = 360,
     T_CATCH = 361,
     T_OMIT = 362,
     T_SYNCHRONIZED = 363,
     T_WITH = 364,
     T_INT = 365,
     T_REAL = 366,
     T_STRING = 367,
     T_OCTET = 368,
     T_FALSE = 369,
     T_NULL = 370,
     T_TRUE = 371,
     T_VOID = 372,
     T_NAN = 373,
     T_INFINITY = 374,
     T_UPLUS = 375,
     T_UMINUS = 376,
     T_EVAL = 377,
     T_POSTDECREMENT = 378,
     T_POSTINCREMENT = 379,
     T_IGNOREPROP = 380,
     T_PROPACCESS = 381,
     T_ARG = 382,
     T_EXPANDARG = 383,
     T_INLINEARRAY = 384,
     T_ARRAYARG = 385,
     T_INLINEDIC = 386,
     T_DICELM = 387,
     T_WITHDOT = 388,
     T_THIS_PROXY = 389,
     T_WITHDOT_PROXY = 390,
     T_ITERATOR = 391,
     T_ITERNEXT = 392,
     T_ITERCURRENT = 393,
     T_ARRAYCOMP = 394,
     T_DICTCOMP = 395,
     T_CONSTVAL = 396,
     T_SYMBOL = 397,
     T_REGEXP = 398,
     T_VARIANT = 399
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1685 of yacc.c  */
#line 60 "tjs.y"

	tjs_int			num;
	tTJSExprNode *		np;
	tTJSVarDeclList	*	dp;
	tTJSVarDeclList::Node *	dn;



/* Line 1685 of yacc.c  */
#line 204 "tjs.tab.hpp"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif





}
