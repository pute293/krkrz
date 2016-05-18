#include "tjsCommHead.h"
/* A Bison parser, made by GNU Bison 2.4.2.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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
#define YYBISON_VERSION "2.4.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "syntax/tjs.y"

/*---------------------------------------------------------------------------*/
/*
	TJS2 Script Engine
	Copyright (C) 2000 W.Dee <dee@kikyou.info> and contributors

	See details of license at "license.txt"
*/
/*---------------------------------------------------------------------------*/
/* tjs.y */
/* TJS2 bison input file */


#include <malloc.h>

#include "tjsInterCodeGen.h"
#include "tjsScriptBlock.h"
#include "tjsError.h"
#include "tjsArray.h"
#include "tjsDictionary.h"

#define YYMALLOC	::malloc
#define YYREALLOC	::realloc
#define YYFREE		::free

/* param */
#define YYPARSE_PARAM pm
#define YYLEX_PARAM pm

/* script block */
#define sb ((tTJSScriptBlock*)pm)

/* current context */
#define cc (sb->GetCurrentContext())

/* current node */
#define cn (cc->GetCurrentNode())

/* lexical analyzer */
#define lx (sb->GetLexicalAnalyzer())


namespace TJS {

/* yylex/yyerror prototype decl */
#define YYLEX_PROTO_DECL int yylex(YYSTYPE *yylex, void *pm);

int __yyerror(char * msg, void *pm);


#define yyerror(msg) __yyerror(msg, pm);



/* Line 189 of yacc.c  */
#line 127 "tjs.tab.cpp"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


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

/* Line 214 of yacc.c  */
#line 60 "syntax/tjs.y"

	tjs_int			num;
	tTJSExprNode *		np;
	tTJSVarDeclList	*	dp;
	tTJSVarDeclList::Node *	dn;



/* Line 214 of yacc.c  */
#line 316 "tjs.tab.cpp"
} YYSTYPE;
YYLEX_PROTO_DECL

# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 328 "tjs.tab.cpp"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2017

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  145
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  136
/* YYNRULES -- Number of rules.  */
#define YYNRULES  330
/* YYNRULES -- Number of states.  */
#define YYNSTATES  582

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   399

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     6,     9,    10,    13,    17,    19,
      21,    23,    26,    28,    30,    32,    34,    36,    38,    40,
      42,    44,    47,    50,    53,    55,    57,    59,    61,    63,
      65,    67,    69,    71,    73,    74,    79,    80,    81,    89,
      90,    91,    99,   100,   101,   102,   113,   116,   117,   122,
     124,   125,   126,   134,   135,   136,   144,   145,   150,   151,
     162,   165,   166,   167,   169,   171,   172,   174,   175,   177,
     178,   179,   189,   193,   197,   200,   203,   206,   208,   211,
     214,   217,   219,   223,   227,   230,   235,   239,   242,   247,
     251,   253,   254,   257,   260,   263,   266,   269,   272,   273,
     280,   281,   287,   288,   292,   296,   302,   303,   305,   307,
     311,   314,   319,   321,   325,   326,   332,   335,   337,   340,
     344,   346,   347,   354,   356,   358,   361,   364,   365,   373,
     374,   378,   383,   386,   387,   393,   394,   397,   398,   404,
     406,   410,   412,   415,   419,   420,   427,   428,   435,   439,
     442,   443,   449,   451,   455,   460,   464,   466,   468,   472,
     474,   478,   480,   484,   488,   492,   496,   500,   504,   508,
     512,   516,   520,   524,   528,   532,   536,   540,   544,   546,
     552,   554,   558,   560,   564,   566,   570,   572,   576,   578,
     582,   584,   588,   592,   596,   600,   602,   606,   610,   614,
     618,   620,   624,   628,   632,   634,   638,   642,   644,   648,
     652,   656,   660,   663,   666,   668,   671,   674,   677,   680,
     683,   686,   689,   692,   695,   698,   701,   704,   707,   710,
     713,   716,   720,   725,   728,   733,   736,   741,   744,   746,
     750,   752,   756,   761,   763,   764,   769,   770,   775,   778,
     781,   784,   785,   789,   791,   793,   795,   797,   799,   801,
     803,   805,   807,   809,   811,   813,   814,   818,   819,   823,
     828,   830,   832,   836,   837,   839,   841,   843,   844,   849,
     851,   853,   855,   859,   860,   862,   868,   874,   880,   884,
     888,   889,   895,   897,   899,   902,   903,   905,   909,   913,
     917,   918,   920,   928,   936,   942,   948,   952,   956,   957,
     965,   966,   968,   970,   974,   977,   980,   982,   984,   986,
     988,   989,   998,   999,  1001,  1005,  1010,  1015,  1019,  1023,
    1027
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     146,     0,    -1,   147,    -1,    -1,   148,   149,    -1,    -1,
     149,   150,    -1,   149,     1,    66,    -1,   151,    -1,   152,
      -1,    66,    -1,   231,    66,    -1,   167,    -1,   170,    -1,
     173,    -1,   154,    -1,   157,    -1,   160,    -1,   175,    -1,
     182,    -1,   164,    -1,    83,    66,    -1,    69,    66,    -1,
      72,    66,    -1,   186,    -1,   193,    -1,   206,    -1,   214,
      -1,   220,    -1,   221,    -1,   223,    -1,   225,    -1,   226,
      -1,   229,    -1,    -1,    67,   153,   149,    68,    -1,    -1,
      -1,    91,   155,    56,   231,    64,   156,   150,    -1,    -1,
      -1,    92,   158,    56,   231,    64,   159,   150,    -1,    -1,
      -1,    -1,    93,   161,   150,   162,    91,    56,   231,    64,
     163,    66,    -1,   166,   152,    -1,    -1,   166,   231,   165,
     152,    -1,    94,    -1,    -1,    -1,    95,    56,   168,   231,
     169,    64,   150,    -1,    -1,    -1,    96,    56,   171,   231,
     172,    64,   150,    -1,    -1,   167,   105,   174,   150,    -1,
      -1,   177,   179,    66,   176,   180,    66,   181,    64,   150,
     178,    -1,    90,    56,    -1,    -1,    -1,   187,    -1,   231,
      -1,    -1,   231,    -1,    -1,   231,    -1,    -1,    -1,   177,
     185,    87,   231,    64,   183,   150,   184,   178,    -1,    97,
     142,   192,    -1,    98,   142,   192,    -1,   142,   192,    -1,
      97,   190,    -1,    98,   190,    -1,   258,    -1,   187,    66,
      -1,    97,   188,    -1,    98,   188,    -1,   189,    -1,   188,
       3,   189,    -1,   190,     4,   230,    -1,   142,   192,    -1,
     142,   192,     4,   230,    -1,    58,   191,    62,    -1,   142,
     192,    -1,   191,     3,   142,   192,    -1,   191,     3,   190,
      -1,   190,    -1,    -1,    65,   142,    -1,    65,   117,    -1,
      65,   110,    -1,    65,   111,    -1,    65,   112,    -1,    65,
     113,    -1,    -1,    70,   142,   194,   197,   192,   152,    -1,
      -1,    70,   196,   197,   192,   152,    -1,    -1,    56,   201,
      64,    -1,    56,   198,    64,    -1,    56,   199,     3,   201,
      64,    -1,    -1,   199,    -1,   200,    -1,   199,     3,   200,
      -1,   142,   192,    -1,   142,   192,     4,   230,    -1,    41,
      -1,   142,   192,    41,    -1,    -1,    71,   203,   204,   192,
     205,    -1,   142,   192,    -1,   197,    -1,    58,    62,    -1,
      58,   231,    62,    -1,   152,    -1,    -1,    77,   142,    67,
     207,   208,    68,    -1,   209,    -1,   211,    -1,   209,   211,
      -1,   211,   209,    -1,    -1,   103,    56,   142,   192,    64,
     210,   152,    -1,    -1,   213,   212,   152,    -1,   104,    56,
      64,   192,    -1,   104,   192,    -1,    -1,    63,   142,   215,
     216,   152,    -1,    -1,    75,   230,    -1,    -1,    75,   230,
       3,   217,   218,    -1,   219,    -1,   218,     3,   219,    -1,
     230,    -1,    82,    66,    -1,    82,   231,    66,    -1,    -1,
      86,    56,   231,    64,   222,   152,    -1,    -1,   109,    56,
     231,    64,   224,   150,    -1,    74,   231,    65,    -1,    73,
      65,    -1,    -1,   102,   227,   150,   228,   150,    -1,   106,
      -1,   106,    56,    64,    -1,   106,    56,   142,    64,    -1,
     101,   231,    66,    -1,   233,    -1,   232,    -1,   232,    95,
     231,    -1,   233,    -1,   232,     3,   233,    -1,   234,    -1,
     234,    29,   233,    -1,   234,     4,   233,    -1,   234,     5,
     233,    -1,   234,     6,   233,    -1,   234,     7,   233,    -1,
     234,     8,   233,    -1,   234,     9,   233,    -1,   234,    10,
     233,    -1,   234,    11,   233,    -1,   234,    12,   233,    -1,
     234,    13,   233,    -1,   234,    14,   233,    -1,   234,    15,
     233,    -1,   234,    18,   233,    -1,   234,    17,   233,    -1,
     234,    16,   233,    -1,   235,    -1,   235,    19,   234,    65,
     234,    -1,   236,    -1,   235,    20,   236,    -1,   237,    -1,
     236,    21,   237,    -1,   238,    -1,   237,    22,   238,    -1,
     239,    -1,   238,    23,   239,    -1,   240,    -1,   239,    24,
     240,    -1,   241,    -1,   240,    25,   241,    -1,   240,    26,
     241,    -1,   240,    27,   241,    -1,   240,    28,   241,    -1,
     242,    -1,   241,    30,   242,    -1,   241,    31,   242,    -1,
     241,    32,   242,    -1,   241,    33,   242,    -1,   243,    -1,
     242,    34,   243,    -1,   242,    35,   243,    -1,   242,    36,
     243,    -1,   244,    -1,   243,    49,   244,    -1,   243,    50,
     244,    -1,   246,    -1,   244,    37,   246,    -1,   244,    38,
     246,    -1,   244,    39,   246,    -1,   244,    40,   246,    -1,
     245,   246,    -1,   244,    41,    -1,   247,    -1,    42,   246,
      -1,    43,   246,    -1,    44,   246,    -1,    45,   246,    -1,
      46,   255,    -1,    54,   246,    -1,    53,   246,    -1,   247,
      53,    -1,    47,   246,    -1,    48,   246,    -1,    51,   246,
      -1,    52,   246,    -1,    49,   246,    -1,    50,   246,    -1,
      24,   246,    -1,    41,   246,    -1,   247,    55,   246,    -1,
      56,   110,    64,   246,    -1,   110,   246,    -1,    56,   111,
      64,   246,    -1,   111,   246,    -1,    56,   112,    64,   246,
      -1,   112,   246,    -1,   248,    -1,   248,    88,   247,    -1,
     252,    -1,    56,   231,    64,    -1,   248,    58,   231,    62,
      -1,   255,    -1,    -1,   248,    57,   249,   142,    -1,    -1,
     248,    71,   250,   142,    -1,   248,    45,    -1,   248,    44,
      -1,   248,    42,    -1,    -1,    57,   251,   142,    -1,   141,
      -1,   142,    -1,    59,    -1,    60,    -1,   195,    -1,   202,
      -1,    61,    -1,   117,    -1,   258,    -1,   264,    -1,   272,
      -1,   277,    -1,    -1,    11,   253,   143,    -1,    -1,    38,
     254,   143,    -1,   248,    56,   256,    64,    -1,   107,    -1,
     257,    -1,   256,     3,   257,    -1,    -1,    41,    -1,   245,
      -1,   230,    -1,    -1,    58,   259,   260,    62,    -1,   261,
      -1,   263,    -1,   262,    -1,   261,     3,   262,    -1,    -1,
     230,    -1,   230,    90,   142,    87,   230,    -1,   263,    90,
     142,    87,   230,    -1,   263,     3,   142,    87,   230,    -1,
     263,     3,   230,    -1,   263,    95,   230,    -1,    -1,    37,
      58,   265,   266,    62,    -1,   267,    -1,   271,    -1,   268,
     270,    -1,    -1,   269,    -1,   268,     3,   269,    -1,   230,
       3,   230,    -1,   142,    65,   230,    -1,    -1,     3,    -1,
     230,     3,   230,    90,   142,    87,   230,    -1,   142,    65,
     230,    90,   142,    87,   230,    -1,   271,    90,   142,    87,
     230,    -1,   271,     3,   142,    87,   230,    -1,   271,     3,
     230,    -1,   271,    95,   230,    -1,    -1,    56,    98,    64,
      58,   273,   274,    62,    -1,    -1,   275,    -1,   276,    -1,
     275,     3,   276,    -1,    50,   141,    -1,    49,   141,    -1,
     141,    -1,   117,    -1,   272,    -1,   277,    -1,    -1,    56,
      98,    64,    37,    58,   278,   279,    62,    -1,    -1,   280,
      -1,   279,     3,   280,    -1,   141,     3,    50,   141,    -1,
     141,     3,    49,   141,    -1,   141,     3,   141,    -1,   141,
       3,   117,    -1,   141,     3,   272,    -1,   141,     3,   277,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   238,   238,   243,   243,   249,   251,   252,   259,   260,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   293,   293,   306,   307,   306,   320,
     321,   320,   342,   343,   345,   342,   359,   360,   360,   382,
     389,   390,   389,   403,   404,   403,   410,   410,   431,   430,
     439,   443,   448,   449,   450,   455,   456,   461,   462,   486,
     488,   485,   496,   498,   501,   504,   505,   506,   511,   515,
     516,   523,   524,   525,   530,   531,   536,   540,   542,   545,
     547,   551,   553,   554,   555,   556,   557,   558,   563,   563,
     573,   573,   586,   588,   589,   590,   594,   596,   600,   601,
     605,   607,   612,   614,   630,   630,   638,   639,   643,   644,
     645,   651,   650,   659,   660,   661,   662,   666,   666,   677,
     677,   686,   687,   693,   693,   700,   702,   703,   703,   708,
     709,   713,   718,   719,   726,   725,   733,   732,   739,   740,
     745,   745,   752,   753,   754,   760,   765,   769,   770,   775,
     776,   781,   782,   783,   784,   785,   786,   787,   788,   789,
     790,   791,   792,   793,   794,   795,   796,   797,   802,   803,
     811,   812,   816,   817,   822,   823,   827,   828,   832,   833,
     837,   838,   839,   840,   841,   845,   846,   847,   848,   849,
     853,   854,   855,   856,   861,   862,   863,   867,   868,   869,
     870,   871,   872,   876,   880,   881,   882,   883,   884,   885,
     886,   887,   888,   889,   890,   891,   892,   893,   894,   895,
     896,   897,   898,   899,   900,   901,   902,   903,   907,   908,
     913,   914,   915,   916,   917,   917,   921,   921,   929,   930,
     931,   932,   932,   940,   942,   945,   946,   947,   948,   949,
     950,   951,   952,   953,   954,   955,   955,   958,   958,   966,
     971,   972,   973,   977,   978,   979,   980,   986,   986,   995,
     996,  1001,  1002,  1007,  1008,  1013,  1018,  1023,  1028,  1030,
    1036,  1036,  1044,  1045,  1049,  1053,  1055,  1056,  1061,  1062,
    1069,  1071,  1075,  1080,  1087,  1092,  1097,  1099,  1107,  1107,
    1117,  1119,  1125,  1126,  1132,  1133,  1134,  1135,  1136,  1137,
    1142,  1142,  1154,  1156,  1157,  1162,  1163,  1164,  1165,  1166,
    1167
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "\",\"", "\"=\"", "\"&=\"", "\"|=\"",
  "\"^=\"", "\"-=\"", "\"+=\"", "\"%=\"", "\"/=\"", "\"\\\\=\"", "\"*=\"",
  "\"||=\"", "\"&&=\"", "\">>>=\"", "\"<<=\"", "\">>=\"", "\"?\"",
  "\"||\"", "\"&&\"", "\"|\"", "\"^\"", "\"&\"", "\"!=\"", "\"==\"",
  "\"!==\"", "\"===\"", "\"<->\"", "\"<\"", "\">\"", "\"<=\"", "\">=\"",
  "\">>\"", "\"<<\"", "\">>>\"", "\"%\"", "\"/\"", "\"\\\\\"",
  "\"\\\\\\\\\"", "\"*\"", "\"!\"", "\"~\"", "\"--\"", "\"++\"", "\"new\"",
  "\"delete\"", "\"typeof\"", "\"+\"", "\"-\"", "\"#\"", "\"$\"",
  "\"isvalid\"", "\"invalidate\"", "\"instanceof\"", "\"(\"", "\".\"",
  "\"[\"", "\"this\"", "\"super\"", "\"global\"", "\"]\"", "\"class\"",
  "\")\"", "\":\"", "\";\"", "\"{\"", "\"}\"", "\"continue\"",
  "\"function\"", "\"->\"", "\"debugger\"", "\"default\"", "\"case\"",
  "\"extends\"", "\"finally\"", "\"property\"", "\"private\"",
  "\"public\"", "\"protected\"", "\"static\"", "\"return\"", "\"break\"",
  "\"export\"", "\"import\"", "\"switch\"", "\"in\"", "\"incontextof\"",
  "\"foreach\"", "\"for\"", "\"while\"", "\"until\"", "\"do\"", "\"loop\"",
  "\"if\"", "\"unless\"", "\"var\"", "\"const\"", "\"enum\"", "\"goto\"",
  "\"throw\"", "\"try\"", "\"setter\"", "\"getter\"", "\"else\"",
  "\"catch\"", "\"...\"", "\"synchronized\"", "\"with\"", "\"int\"",
  "\"real\"", "\"string\"", "\"octet\"", "\"false\"", "\"null\"",
  "\"true\"", "\"void\"", "\"NaN\"", "\"Infinity\"", "T_UPLUS", "T_UMINUS",
  "T_EVAL", "T_POSTDECREMENT", "T_POSTINCREMENT", "T_IGNOREPROP",
  "T_PROPACCESS", "T_ARG", "T_EXPANDARG", "T_INLINEARRAY", "T_ARRAYARG",
  "T_INLINEDIC", "T_DICELM", "T_WITHDOT", "T_THIS_PROXY",
  "T_WITHDOT_PROXY", "T_ITERATOR", "T_ITERNEXT", "T_ITERCURRENT",
  "T_ARRAYCOMP", "T_DICTCOMP", "T_CONSTVAL", "T_SYMBOL", "T_REGEXP",
  "T_VARIANT", "$accept", "program", "global_list", "$@1", "def_list",
  "block_or_statement", "statement", "block", "$@2", "while", "$@3", "$@4",
  "until", "$@5", "$@6", "do_while", "$@7", "$@8", "$@9", "loop", "$@10",
  "loop_init", "if", "$@11", "$@12", "unless", "$@13", "$@14", "if_else",
  "$@15", "for", "$@16", "for_head", "for_tail", "for_first_clause",
  "for_second_clause", "for_third_clause", "forin", "$@17", "$@18",
  "forin_decl", "variable_def", "variable_def_inner", "variable_id_list",
  "variable_id", "variable_id_unpack", "variable_id_unpack_list",
  "variable_type", "func_def", "$@19", "func_expr_def", "$@20",
  "func_decl_arg_opt", "func_decl_arg_list", "func_decl_arg_at_least_one",
  "func_decl_arg", "func_decl_arg_collapse", "arrow_expr_def", "$@21",
  "arrow_expr_arg_opt", "arrow_expr_body", "property_def", "$@22",
  "property_handler_def_list", "property_handler_setter", "$@23",
  "property_handler_getter", "$@24", "property_getter_handler_head",
  "class_def", "$@25", "class_extender", "$@26", "extends_list",
  "extends_name", "return", "switch", "$@27", "with", "$@28", "case",
  "try", "$@29", "catch", "throw", "expr_no_comma", "expr", "comma_expr",
  "assign_expr", "cond_expr", "logical_or_expr", "logical_and_expr",
  "inclusive_or_expr", "exclusive_or_expr", "and_expr", "identical_expr",
  "compare_expr", "shift_expr", "add_sub_expr", "mul_div_expr",
  "mul_div_expr_and_asterisk", "unary_expr", "incontextof_expr",
  "priority_expr", "$@30", "$@31", "$@32", "factor_expr", "$@33", "$@34",
  "func_call_expr", "call_arg_list", "call_arg", "inline_array", "$@35",
  "array_elm_list", "array_ext", "array_elm", "array_comp", "inline_dic",
  "$@36", "dic_elms", "dic_ext", "dic_elm_list", "dic_elm",
  "dic_dummy_elm_opt", "dic_comp", "const_inline_array", "$@37",
  "const_array_elm_list_opt", "const_array_elm_list", "const_array_elm",
  "const_inline_dic", "$@38", "const_dic_elm_list", "const_dic_elm", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
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
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   145,   146,   148,   147,   149,   149,   149,   150,   150,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   153,   152,   155,   156,   154,   158,
     159,   157,   161,   162,   163,   160,   164,   165,   164,   166,
     168,   169,   167,   171,   172,   170,   174,   173,   176,   175,
     177,   178,   179,   179,   179,   180,   180,   181,   181,   183,
     184,   182,   185,   185,   185,   185,   185,   185,   186,   187,
     187,   188,   188,   188,   189,   189,   190,   191,   191,   191,
     191,   192,   192,   192,   192,   192,   192,   192,   194,   193,
     196,   195,   197,   197,   197,   197,   198,   198,   199,   199,
     200,   200,   201,   201,   203,   202,   204,   204,   205,   205,
     205,   207,   206,   208,   208,   208,   208,   210,   209,   212,
     211,   213,   213,   215,   214,   216,   216,   217,   216,   218,
     218,   219,   220,   220,   222,   221,   224,   223,   225,   225,
     227,   226,   228,   228,   228,   229,   230,   231,   231,   232,
     232,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   234,   234,
     235,   235,   236,   236,   237,   237,   238,   238,   239,   239,
     240,   240,   240,   240,   240,   241,   241,   241,   241,   241,
     242,   242,   242,   242,   243,   243,   243,   244,   244,   244,
     244,   244,   244,   245,   246,   246,   246,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   246,   246,   247,   247,
     248,   248,   248,   248,   249,   248,   250,   248,   248,   248,
     248,   251,   248,   252,   252,   252,   252,   252,   252,   252,
     252,   252,   252,   252,   252,   253,   252,   254,   252,   255,
     256,   256,   256,   257,   257,   257,   257,   259,   258,   260,
     260,   261,   261,   262,   262,   263,   263,   263,   263,   263,
     265,   264,   266,   266,   267,   268,   268,   268,   269,   269,
     270,   270,   271,   271,   271,   271,   271,   271,   273,   272,
     274,   274,   275,   275,   276,   276,   276,   276,   276,   276,
     278,   277,   279,   279,   279,   280,   280,   280,   280,   280,
     280
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,     0,     2,     3,     1,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     4,     0,     0,     7,     0,
       0,     7,     0,     0,     0,    10,     2,     0,     4,     1,
       0,     0,     7,     0,     0,     7,     0,     4,     0,    10,
       2,     0,     0,     1,     1,     0,     1,     0,     1,     0,
       0,     9,     3,     3,     2,     2,     2,     1,     2,     2,
       2,     1,     3,     3,     2,     4,     3,     2,     4,     3,
       1,     0,     2,     2,     2,     2,     2,     2,     0,     6,
       0,     5,     0,     3,     3,     5,     0,     1,     1,     3,
       2,     4,     1,     3,     0,     5,     2,     1,     2,     3,
       1,     0,     6,     1,     1,     2,     2,     0,     7,     0,
       3,     4,     2,     0,     5,     0,     2,     0,     5,     1,
       3,     1,     2,     3,     0,     6,     0,     6,     3,     2,
       0,     5,     1,     3,     4,     3,     1,     1,     3,     1,
       3,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     5,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     2,     2,     1,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     3,     4,     2,     4,     2,     4,     2,     1,     3,
       1,     3,     4,     1,     0,     4,     0,     4,     2,     2,
       2,     0,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     3,     0,     3,     4,
       1,     1,     3,     0,     1,     1,     1,     0,     4,     1,
       1,     1,     3,     0,     1,     5,     5,     5,     3,     3,
       0,     5,     1,     1,     2,     0,     1,     3,     3,     3,
       0,     1,     7,     7,     5,     5,     3,     3,     0,     7,
       0,     1,     1,     3,     2,     2,     1,     1,     1,     1,
       0,     8,     0,     1,     3,     4,     4,     3,     3,     3,
       3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       3,     0,     2,     5,     1,     0,     0,   265,     0,     0,
     267,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   251,   277,   255,   256,
     259,     0,    10,    34,     0,   100,   114,     0,     0,     0,
       0,     0,     0,     0,     0,    36,    39,    42,    49,     0,
       0,     0,     0,     0,   150,     0,     0,     0,     0,   260,
     253,   254,     6,     8,     9,    15,    16,    17,    20,     0,
      12,    13,    14,    18,    62,    19,    24,     0,    25,   257,
     258,    26,    27,    28,    29,    30,    31,    32,    33,     0,
     157,   159,   161,   178,   180,   182,   184,   186,   188,   190,
     195,   200,   204,     0,   207,   214,   238,   240,   243,   261,
     262,   263,   264,     7,     0,   100,   229,   290,     0,   230,
     215,   216,   217,   218,     0,     0,   219,   223,   224,   227,
     228,   225,   226,   221,   220,     0,     0,     0,     0,     0,
       0,   283,   133,     5,    22,    98,   102,   102,    23,   149,
       0,     0,   142,     0,    21,     0,    60,     0,     0,     0,
      50,    53,     0,    91,    79,    81,     0,    80,     0,     0,
       0,   233,   235,   237,    46,    47,    56,     0,     0,   254,
       0,     0,    63,    64,   261,    78,    11,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   213,   212,
     222,     0,   250,   249,   248,   273,   244,     0,   246,     0,
     266,   295,   268,     0,     0,     0,     0,   241,   252,   284,
     156,     0,   279,   281,   280,   135,     0,   102,   106,    91,
      91,   117,    91,   148,   121,   143,     0,     0,     0,    43,
       0,     0,    91,    90,     0,     0,    84,     0,     0,   155,
       0,     0,     0,     0,    91,    75,    91,    76,    74,    58,
       0,   160,   158,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   177,   176,   175,   162,     0,
     181,   183,   185,   187,   189,   191,   192,   193,   194,   196,
     197,   198,   199,   201,   202,   203,   205,   206,   208,   209,
     210,   211,   231,   274,   270,   276,   275,     0,   271,     0,
       0,     0,   239,   254,     0,     0,   292,   300,   296,   293,
       0,   308,   232,   234,   236,     0,   278,   283,     0,     0,
       0,     0,     0,    35,    91,   112,    91,     0,   107,   108,
       0,     0,   116,     0,     0,   144,     0,     0,     0,    51,
      54,    87,     0,    86,    94,    95,    96,    97,    93,    92,
       0,    82,    83,   152,     0,   146,    48,    57,    84,    84,
      65,     0,     0,   273,   269,   245,   242,   247,     0,     0,
     291,   301,   294,     0,     0,     0,   320,   310,     0,   284,
     282,   254,   288,     0,   289,   136,   134,     0,   110,   104,
       0,   103,   101,     0,   120,   115,     0,    91,     0,   123,
     124,   129,     0,    37,    40,     0,     0,     0,    91,    89,
      85,     0,   151,     0,     0,    66,    69,   179,   272,   299,
     298,   254,     0,   297,   254,   306,     0,   307,   322,     0,
       0,     0,   317,   316,   318,     0,   311,   312,   319,     0,
       0,     0,   137,    99,     0,   113,   109,     0,   118,     0,
       0,     0,   132,   122,   125,   126,     0,   145,     0,     0,
       0,     0,     0,    88,   153,     0,   147,    67,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   323,   315,   314,
     309,     0,   285,   287,   286,     0,   111,   105,   119,    91,
      91,   130,    38,    41,     0,    52,    55,   154,     0,    68,
      70,     0,     0,   299,   298,   305,   304,     0,     0,   321,
     313,   138,   139,   141,     0,   131,    44,     0,    61,     0,
       0,     0,     0,   328,   327,   329,   330,   324,     0,   127,
       0,    61,    71,   303,   302,   326,   325,   140,     0,    45,
      59,   128
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     3,     5,    62,    63,    64,   143,    65,
     157,   498,    66,   158,   499,    67,   159,   378,   570,    68,
     282,    69,    70,   270,   446,    71,   271,   447,    72,   283,
      73,   400,    74,   572,   180,   454,   538,    75,   508,   558,
     181,    76,    77,   164,   165,   166,   274,   276,    78,   257,
      79,   146,   259,   367,   368,   369,   370,    80,   147,   262,
     435,    81,   374,   438,   439,   578,   440,   496,   441,    82,
     255,   362,   525,   551,   552,    83,    84,   442,    85,   453,
      86,    87,   169,   394,    88,   335,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   339,   341,   140,   107,   114,   118,
     108,   337,   338,   109,   141,   251,   252,   253,   254,   110,
     241,   345,   346,   347,   348,   412,   349,   111,   417,   475,
     476,   477,   112,   468,   516,   517
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -409
static const yytype_int16 yypact[] =
{
    -409,    33,  -409,  -409,  -409,   524,   -29,  -409,  1556,   -15,
    -409,  1556,  1556,  1556,  1556,  1556,    65,  1556,  1556,  1556,
    1556,  1556,  1556,  1556,  1556,   912,  -409,  -409,  -409,  -409,
    -409,   -59,  -409,  -409,    21,   -53,  -409,    27,    52,  1556,
      26,   989,    54,   119,   120,  -409,  -409,  -409,  -409,   121,
     129,   -14,   -14,  1556,  -409,   132,  1556,  1556,  1556,  -409,
    -409,  -409,  -409,  -409,  -409,  -409,  -409,  -409,  -409,  1066,
      64,  -409,  -409,  -409,   835,  -409,  -409,   128,  -409,  -409,
    -409,  -409,  -409,  -409,  -409,  -409,  -409,  -409,  -409,   138,
      12,  -409,   481,    36,   182,   183,   185,   187,   133,   169,
     137,    47,   113,  1556,  -409,   136,    99,  -409,  -409,  -409,
    -409,  -409,  -409,  -409,    66,  -409,  -409,  -409,    69,  -409,
    -409,  -409,  -409,  -409,  1143,   122,   139,  -409,  -409,  -409,
    -409,  -409,  -409,  -409,  -409,   155,  1245,  1289,  1391,   161,
      84,  1556,  -409,  -409,  -409,  -409,   173,   -34,  -409,  -409,
     167,   166,  -409,   168,  -409,  1556,  -409,   179,   180,   733,
    -409,  -409,   -11,   172,   236,  -409,   237,   236,   174,   733,
    1556,  -409,  -409,  -409,  -409,  -409,  -409,    -5,    -4,   -39,
     176,   156,  -409,  -409,   159,  -409,  -409,  1556,  1556,  1556,
    1556,  1556,  1556,  1556,  1556,  1556,  1556,  1556,  1556,  1556,
    1556,  1556,  1556,  1556,  1556,  1556,  1556,  1556,  1556,  1556,
    1556,  1556,  1556,  1556,  1556,  1556,  1556,  1556,  1556,  1556,
    1556,  1556,  1556,  1556,  1556,  1556,  1556,  1556,  -409,  -409,
    -409,  1556,  -409,  -409,  -409,  1435,  -409,  1556,  -409,    65,
    -409,  1633,  -409,    -8,  1556,  1556,  1556,  -409,  -409,   160,
    -409,   189,   246,  -409,     9,   177,   631,   173,   -27,   172,
     172,  -409,   172,  -409,  -409,  -409,   190,  1556,  1556,  -409,
    1556,  1556,   172,  -409,    29,   -33,   249,   114,  1556,  -409,
     149,   193,   191,   733,   172,   237,   172,   237,  -409,  -409,
    1556,  -409,  -409,  -409,  -409,  -409,  -409,  -409,  -409,  -409,
    -409,  -409,  -409,  -409,  -409,  -409,  -409,  -409,  -409,   194,
     182,   183,   185,   187,   133,   169,   169,   169,   169,   137,
     137,   137,   137,    47,    47,    47,   113,   113,  -409,  -409,
    -409,  -409,  -409,  1556,  -409,  -409,  1556,    18,  -409,   130,
     199,   134,  -409,   197,   261,   208,  -409,   268,  -409,    39,
     217,  -409,  -409,  -409,  -409,   135,  -409,  1556,  1677,   140,
    1556,  1556,   191,  -409,   172,  -409,   172,   216,   281,  -409,
     222,   191,  -409,    23,    42,  -409,   223,   224,   198,  -409,
    -409,  -409,     0,  -409,  -409,  -409,  -409,  -409,  -409,  -409,
    1556,  -409,  -409,   234,   733,  -409,  -409,  -409,    13,    19,
    1556,   227,  1556,  1754,  -409,  -409,  -409,  -409,  1556,  1556,
    -409,  1798,  -409,  1875,   150,  1556,  -409,   -25,   207,  -409,
    -409,   209,  -409,   212,  -409,   292,  -409,   191,    34,  -409,
     -27,  -409,  -409,  1512,  -409,  -409,   244,   -20,   233,   201,
     200,  -409,   191,  -409,  -409,   250,   243,   245,   172,  -409,
    -409,   -12,  -409,   733,   242,  -409,  -409,  -409,  -409,   220,
     221,   247,   310,  -409,   228,  -409,   231,  -409,   203,   206,
     218,   226,  -409,  -409,  -409,   252,   317,  -409,  -409,  1556,
    1556,  1556,  -409,  -409,  1556,  -409,  -409,   266,  -409,   277,
     211,   276,  -409,  -409,  -409,  -409,   191,  -409,   733,   733,
    1556,   733,   733,  -409,  -409,   284,  -409,  1556,   733,   215,
     219,  1556,  1556,  1556,  1556,   338,    32,  -409,  -409,  -409,
    -409,   -25,  -409,  -409,  -409,  1556,  -409,  -409,  -409,   172,
     172,  -409,  -409,  -409,   296,  -409,  -409,  -409,   298,  -409,
    -409,   278,   279,  -409,  -409,  -409,  -409,   -22,   203,  -409,
    -409,   360,  -409,  -409,   300,  -409,  -409,   733,  -409,  1556,
    1556,   235,   238,  -409,  -409,  -409,  -409,  -409,  1556,  -409,
     301,  -409,  -409,  -409,  -409,  -409,  -409,  -409,   191,  -409,
    -409,  -409
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -409,  -409,  -409,  -409,   225,  -156,  -409,   -69,  -409,  -409,
    -409,  -409,  -409,  -409,  -409,  -409,  -409,  -409,  -409,  -409,
    -409,  -409,  -409,  -409,  -409,  -409,  -409,  -409,  -409,  -409,
    -409,  -409,  -409,  -202,  -409,  -409,  -409,  -409,  -409,  -409,
    -409,  -409,   304,   -45,    97,  -158,  -409,  -174,  -409,  -409,
    -409,  -409,  -139,  -409,  -409,   -55,   -50,  -409,  -409,  -409,
    -409,  -409,  -409,  -409,   -54,  -409,   -49,  -409,  -409,  -409,
    -409,  -409,  -409,  -409,  -183,  -409,  -409,  -409,  -409,  -409,
    -409,  -409,  -409,  -409,  -409,   -92,   -23,  -409,  -130,  -204,
    -409,   188,   184,   192,   195,   186,     4,     5,  -180,   -60,
    -229,   314,   154,   381,  -409,  -409,  -409,  -409,  -409,  -409,
     382,  -409,    -1,   325,  -409,  -409,  -409,    46,  -409,  -409,
    -409,  -409,  -409,  -409,    -6,  -409,  -409,  -408,  -409,  -409,
    -409,  -115,  -407,  -409,  -409,  -141
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -244
static const yytype_int16 yytable[] =
{
     174,   309,   139,   269,   273,   288,   336,   167,   261,   474,
     478,   250,   358,   280,   365,   187,   150,   390,   153,   285,
     287,   403,   258,   390,   469,   470,   275,   561,   562,   350,
     168,   471,   382,     4,   471,   548,   491,   113,   484,   323,
     324,   325,   413,   117,   162,   275,   175,   162,   -91,   249,
     351,   183,   504,   162,   162,   205,   206,   291,   162,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   485,     7,   384,   385,   386,
     387,   433,   404,   142,   388,   371,   372,   144,   373,   145,
      33,   383,   472,   148,   549,   563,   222,   223,   381,   359,
     -72,   139,     9,    10,   360,   250,   -73,   188,   260,   389,
     398,   250,   399,   474,   478,   366,   473,   149,   364,   564,
     154,   124,    26,    27,    28,    29,    30,   397,   163,   414,
     505,   272,   266,   167,   415,   115,    36,   284,   286,   565,
     566,   232,   448,   233,   234,   436,   437,   281,   250,   344,
     224,   225,   226,   227,   228,   235,   236,   237,   211,   212,
     213,   214,   326,   327,   232,   292,   233,   234,   151,   176,
     238,   219,   220,   221,   336,   155,   156,   160,   235,   236,
     237,  -243,    59,  -243,  -243,   161,   392,   239,   170,   230,
     427,   231,   428,   238,   185,  -243,  -243,  -243,   457,   215,
     216,   217,   218,   207,   186,   208,    60,    61,   209,   240,
    -243,   210,   242,   396,   340,   315,   316,   317,   318,   243,
     319,   320,   321,   322,   449,   247,   248,   250,   250,   258,
     250,   250,   263,   264,   265,   267,   268,   275,   452,   277,
     279,   278,   289,   290,   376,   377,   -77,   379,   380,   357,
     355,   356,   361,   390,   375,   393,   163,   395,    33,   402,
     250,   406,   408,   492,   409,   419,   422,   401,   424,   425,
     410,   411,   405,   250,   503,   416,   407,   418,   250,   250,
     429,   250,   423,   250,   430,   250,   431,   443,   444,   445,
     451,   456,   466,   426,   479,   482,   480,   506,   450,   481,
     490,   493,   432,   436,   434,   437,   500,   501,   507,   502,
     509,   510,   511,   512,   520,   513,   459,   460,   514,   462,
     521,   465,   116,   467,   135,   119,   120,   121,   122,   123,
     527,   127,   128,   129,   130,   131,   132,   133,   134,   528,
     530,   547,   532,   533,   515,   535,   536,   518,   537,   250,
     250,   250,   540,   529,   250,   554,   555,   541,   483,   519,
     556,   542,   557,   568,   569,   559,   560,   579,   256,   580,
     171,   172,   173,   497,   391,   486,   575,   455,   182,   576,
     487,   250,   250,   250,   250,   577,   495,   522,   523,   524,
     494,   311,   526,   342,   310,   250,   314,   125,   126,   184,
     312,   571,   458,   420,   313,   463,   550,   567,     0,     0,
     489,     0,     0,     0,     0,     0,     0,   229,     0,   543,
     544,   545,   546,     0,     0,     0,     0,   531,     0,   250,
     250,     0,     0,   553,     0,     0,     0,     0,   250,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     171,   172,   173,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   573,   574,     0,
       0,     0,     0,     0,     0,     0,   553,   534,     0,     0,
       0,     0,     0,     0,   539,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   581,
     204,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    -4,     6,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     7,     0,     0,   328,   329,
     330,   331,     0,     0,     0,   332,     0,     0,     8,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   352,   353,
     354,     9,    10,     0,     0,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,     0,
      25,    26,    27,    28,    29,    30,     0,    31,     0,     0,
      32,    33,     0,    34,    35,    36,    37,    38,    39,     0,
       0,    40,     0,     0,     0,     0,    41,    42,     0,     0,
      43,     0,     0,     0,    44,    45,    46,    47,    48,    49,
      50,    51,    52,     0,     0,    53,    54,     0,     0,     0,
       0,     0,     6,    55,    56,    57,    58,     0,     0,     0,
       0,    59,     7,     0,     0,     0,     0,   119,     0,     0,
     229,     0,     0,     0,     0,     8,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    60,    61,     0,     9,    10,
       0,     0,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,     0,    25,    26,    27,
      28,    29,    30,     0,    31,     0,     0,    32,    33,   363,
      34,    35,    36,    37,    38,    39,     0,     0,    40,     0,
       0,     0,     0,    41,    42,     0,     0,    43,     0,     0,
       0,    44,    45,    46,    47,    48,    49,    50,    51,    52,
       0,     0,    53,    54,     0,     0,     0,     0,     0,     0,
      55,    56,    57,    58,     7,     0,     0,     0,    59,     0,
       0,     0,     0,     0,     0,     0,     0,     8,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       9,    10,    60,    61,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,     0,    25,
      26,    27,    28,    29,    30,     0,    31,     0,     0,    32,
      33,     0,    34,    35,    36,    37,    38,    39,     0,     0,
      40,     0,     0,     0,     0,    41,    42,     0,     0,    43,
       0,     0,     0,    44,    45,    46,    47,    48,    49,    50,
      51,    52,     0,     0,    53,    54,     0,     0,     0,     0,
       0,     0,    55,    56,    57,    58,     7,     0,     0,     0,
      59,     0,     0,     0,     0,     0,     0,     0,     0,     8,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     9,    10,    60,    61,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,    25,    26,    27,    28,    29,    30,     0,     0,     0,
       0,     0,     0,     0,     0,   115,    36,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     7,     0,     0,     0,     0,     0,     0,
       0,     0,   177,   178,     0,     0,     8,     0,     0,     0,
       0,     0,     0,     0,     0,    56,    57,    58,     0,     9,
      10,     0,    59,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,     0,    25,    26,
      27,    28,    29,    30,     0,     0,    60,   179,     0,     0,
       0,     0,   115,    36,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       7,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     135,     0,     0,     8,     0,     0,     0,     0,     0,     0,
       0,     0,   136,   137,   138,     0,     9,    10,     0,    59,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     0,    25,    26,    27,    28,    29,
      30,     0,     0,    60,    61,   152,     0,     0,     0,   115,
      36,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     7,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       8,     0,     0,     0,     0,     0,     0,     0,     0,    56,
      57,    58,     0,     9,    10,     0,    59,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,     0,    25,    26,    27,    28,    29,    30,     0,     0,
      60,    61,     0,    33,     0,     0,   115,    36,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     7,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     8,     0,     0,
       0,     0,     0,     0,     0,     0,    56,    57,    58,     0,
       9,    10,     0,    59,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,     0,    25,
      26,    27,    28,    29,    30,     0,     0,    60,    61,     0,
       0,     0,     0,   115,    36,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   135,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    56,    57,    58,     7,     0,     0,     0,
      59,     0,     0,     0,     0,     0,     0,     0,     0,     8,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     9,    10,    60,    61,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       7,    25,    26,    27,    28,    29,    30,     0,     0,   244,
       0,     0,     0,     8,     0,   115,    36,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     9,    10,     0,     0,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     0,    25,    26,    27,    28,    29,
      30,     0,     0,   245,     0,    56,    57,    58,     0,   115,
      36,     0,    59,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    60,    61,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    56,
      57,    58,     7,     0,     0,     0,    59,     0,     0,     0,
       0,     0,     0,     0,     0,     8,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     9,    10,
      60,    61,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,     7,    25,    26,    27,
      28,    29,    30,     0,     0,   246,     0,     0,     0,     8,
       0,   115,    36,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     9,    10,     0,     0,   333,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,    25,    26,    27,    28,    29,    30,     0,     0,     0,
       0,    56,    57,    58,     0,   115,    36,     0,    59,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     7,     0,     0,     0,     0,     0,     0,
       0,     0,    60,    61,     0,     0,     8,     0,     0,     0,
       0,     0,   334,     0,     0,    56,    57,    58,     0,     9,
      10,     0,    59,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,     7,    25,    26,
      27,    28,    29,    30,   488,     0,    60,    61,     0,     0,
       8,     0,   115,    36,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     9,    10,     0,     0,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,     0,    25,    26,    27,    28,    29,    30,     0,     0,
       0,     0,    56,    57,    58,     0,   115,    36,     0,    59,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     7,     0,     0,     0,     0,     0,
       0,     0,     0,    60,    61,     0,     0,     8,     0,     0,
       0,     0,     0,     0,     0,     0,    56,    57,    58,     0,
       9,    10,     0,    59,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,     7,    25,
      26,    27,    28,    29,    30,     0,     0,    60,    61,     0,
       0,     8,     0,   115,    36,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     9,    10,     0,     0,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     0,    25,    26,    27,    28,    29,    30,     0,
       0,     0,     0,    56,    57,    58,     0,   115,    36,     0,
      59,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     7,     0,     0,     0,     0,
       0,     0,     0,     0,    60,   343,     0,     0,     8,     0,
       0,     0,     0,     0,     0,     0,     0,    56,    57,    58,
       0,     9,    10,     0,    59,   333,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,     7,
      25,    26,    27,    28,    29,    30,     0,     0,    60,   421,
       0,     0,     8,     0,   115,    36,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     9,    10,     0,     0,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,     0,    25,    26,    27,    28,    29,    30,
       0,     0,     0,     0,    56,    57,    58,     0,   115,    36,
       0,    59,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     7,     0,     0,     0,
       0,     0,     0,     0,     0,    60,    61,     0,     0,     8,
       0,     0,     0,     0,     0,     0,     0,     0,    56,    57,
      58,     0,     9,    10,     0,    59,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,    25,    26,    27,    28,    29,    30,     0,     0,    60,
     461,     0,     0,     0,     0,   115,    36,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    56,    57,    58,     0,     0,
       0,     0,    59,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    60,   464
};

static const yytype_int16 yycheck[] =
{
      69,   205,    25,   159,   162,   179,   235,    52,   147,   417,
     417,   141,     3,   169,    41,     3,    39,     4,    41,   177,
     178,     3,    56,     4,    49,    50,    65,    49,    50,    37,
      53,    56,     3,     0,    56,     3,    56,    66,     4,   219,
     220,   221,     3,    58,    58,    65,    69,    58,    87,   141,
      58,    74,    64,    58,    58,    19,    20,   187,    58,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,    41,    11,   110,   111,   112,
     113,    58,    64,   142,   117,   259,   260,    66,   262,   142,
      67,    62,   117,    66,    62,   117,    49,    50,   272,    90,
      87,   124,    37,    38,    95,   235,    87,    95,   142,   142,
     284,   241,   286,   521,   521,   142,   141,    65,   257,   141,
      66,    56,    57,    58,    59,    60,    61,   283,   142,    90,
     142,   142,   155,   178,    95,    70,    71,   142,   142,   547,
     547,    42,   142,    44,    45,   103,   104,   170,   278,   241,
      37,    38,    39,    40,    41,    56,    57,    58,    25,    26,
      27,    28,   222,   223,    42,   188,    44,    45,   142,   105,
      71,    34,    35,    36,   403,    56,    56,    56,    56,    57,
      58,    42,   117,    44,    45,    56,   278,    88,    56,    53,
     364,    55,   366,    71,    66,    56,    57,    58,   402,    30,
      31,    32,    33,    21,    66,    22,   141,   142,    23,   143,
      71,    24,   143,   282,   237,   211,   212,   213,   214,    64,
     215,   216,   217,   218,   382,    64,   142,   357,   358,    56,
     360,   361,    65,    67,    66,    56,    56,    65,   394,     3,
      66,     4,    66,    87,   267,   268,    87,   270,   271,     3,
      90,    62,    75,     4,    64,   106,   142,    64,    67,    65,
     390,    62,    65,   437,     3,   357,   358,   290,   360,   361,
      62,     3,   142,   403,   448,    58,   142,   142,   408,   409,
      64,   411,   142,   413,     3,   415,    64,    64,    64,    91,
      56,    64,   142,   362,    87,     3,    87,   453,   390,    87,
      56,    68,   371,   103,   373,   104,    56,    64,    66,    64,
      90,    90,    65,     3,    62,    87,   408,   409,    87,   411,
       3,   413,     8,   415,    98,    11,    12,    13,    14,    15,
      64,    17,    18,    19,    20,    21,    22,    23,    24,    62,
      64,     3,   498,   499,   141,   501,   502,   141,    64,   479,
     480,   481,   508,   142,   484,   529,   530,   142,   427,   141,
      64,   142,    64,     3,    64,    87,    87,    66,   143,   571,
      56,    57,    58,   442,   277,   430,   141,   400,    74,   141,
     430,   511,   512,   513,   514,   568,   440,   479,   480,   481,
     439,   207,   484,   239,   206,   525,   210,    16,    16,    74,
     208,   557,   403,   357,   209,   411,   521,   548,    -1,    -1,
     433,    -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,   511,
     512,   513,   514,    -1,    -1,    -1,    -1,   496,    -1,   559,
     560,    -1,    -1,   525,    -1,    -1,    -1,    -1,   568,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     136,   137,   138,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   559,   560,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   568,   500,    -1,    -1,
      -1,    -1,    -1,    -1,   507,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   578,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     0,     1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    11,    -1,    -1,   224,   225,
     226,   227,    -1,    -1,    -1,   231,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   244,   245,
     246,    37,    38,    -1,    -1,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    -1,
      56,    57,    58,    59,    60,    61,    -1,    63,    -1,    -1,
      66,    67,    -1,    69,    70,    71,    72,    73,    74,    -1,
      -1,    77,    -1,    -1,    -1,    -1,    82,    83,    -1,    -1,
      86,    -1,    -1,    -1,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    -1,    -1,   101,   102,    -1,    -1,    -1,
      -1,    -1,     1,   109,   110,   111,   112,    -1,    -1,    -1,
      -1,   117,    11,    -1,    -1,    -1,    -1,   333,    -1,    -1,
     336,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   141,   142,    -1,    37,    38,
      -1,    -1,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    -1,    56,    57,    58,
      59,    60,    61,    -1,    63,    -1,    -1,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    -1,    -1,    77,    -1,
      -1,    -1,    -1,    82,    83,    -1,    -1,    86,    -1,    -1,
      -1,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      -1,    -1,   101,   102,    -1,    -1,    -1,    -1,    -1,    -1,
     109,   110,   111,   112,    11,    -1,    -1,    -1,   117,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    38,   141,   142,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    -1,    56,
      57,    58,    59,    60,    61,    -1,    63,    -1,    -1,    66,
      67,    -1,    69,    70,    71,    72,    73,    74,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    82,    83,    -1,    -1,    86,
      -1,    -1,    -1,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    -1,    -1,   101,   102,    -1,    -1,    -1,    -1,
      -1,    -1,   109,   110,   111,   112,    11,    -1,    -1,    -1,
     117,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    38,   141,   142,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      -1,    56,    57,    58,    59,    60,    61,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    97,    98,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   110,   111,   112,    -1,    37,
      38,    -1,   117,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    -1,    56,    57,
      58,    59,    60,    61,    -1,    -1,   141,   142,    -1,    -1,
      -1,    -1,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      98,    -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   110,   111,   112,    -1,    37,    38,    -1,   117,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    -1,    56,    57,    58,    59,    60,
      61,    -1,    -1,   141,   142,    66,    -1,    -1,    -1,    70,
      71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,
     111,   112,    -1,    37,    38,    -1,   117,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    -1,    56,    57,    58,    59,    60,    61,    -1,    -1,
     141,   142,    -1,    67,    -1,    -1,    70,    71,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   110,   111,   112,    -1,
      37,    38,    -1,   117,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    -1,    56,
      57,    58,    59,    60,    61,    -1,    -1,   141,   142,    -1,
      -1,    -1,    -1,    70,    71,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   110,   111,   112,    11,    -1,    -1,    -1,
     117,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    38,   141,   142,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      11,    56,    57,    58,    59,    60,    61,    -1,    -1,    64,
      -1,    -1,    -1,    24,    -1,    70,    71,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    -1,    56,    57,    58,    59,    60,
      61,    -1,    -1,    64,    -1,   110,   111,   112,    -1,    70,
      71,    -1,   117,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   141,   142,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,
     111,   112,    11,    -1,    -1,    -1,   117,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,
     141,   142,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    11,    56,    57,    58,
      59,    60,    61,    -1,    -1,    64,    -1,    -1,    -1,    24,
      -1,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    38,    -1,    -1,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      -1,    56,    57,    58,    59,    60,    61,    -1,    -1,    -1,
      -1,   110,   111,   112,    -1,    70,    71,    -1,   117,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   141,   142,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    -1,   107,    -1,    -1,   110,   111,   112,    -1,    37,
      38,    -1,   117,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    11,    56,    57,
      58,    59,    60,    61,    62,    -1,   141,   142,    -1,    -1,
      24,    -1,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    38,    -1,    -1,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    -1,    56,    57,    58,    59,    60,    61,    -1,    -1,
      -1,    -1,   110,   111,   112,    -1,    70,    71,    -1,   117,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   141,   142,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   110,   111,   112,    -1,
      37,    38,    -1,   117,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    11,    56,
      57,    58,    59,    60,    61,    -1,    -1,   141,   142,    -1,
      -1,    24,    -1,    70,    71,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    -1,    56,    57,    58,    59,    60,    61,    -1,
      -1,    -1,    -1,   110,   111,   112,    -1,    70,    71,    -1,
     117,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   141,   142,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,   111,   112,
      -1,    37,    38,    -1,   117,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    11,
      56,    57,    58,    59,    60,    61,    -1,    -1,   141,   142,
      -1,    -1,    24,    -1,    70,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    -1,    56,    57,    58,    59,    60,    61,
      -1,    -1,    -1,    -1,   110,   111,   112,    -1,    70,    71,
      -1,   117,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   141,   142,    -1,    -1,    24,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,   111,
     112,    -1,    37,    38,    -1,   117,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      -1,    56,    57,    58,    59,    60,    61,    -1,    -1,   141,
     142,    -1,    -1,    -1,    -1,    70,    71,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   110,   111,   112,    -1,    -1,
      -1,    -1,   117,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   141,   142
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   146,   147,   148,     0,   149,     1,    11,    24,    37,
      38,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    56,    57,    58,    59,    60,
      61,    63,    66,    67,    69,    70,    71,    72,    73,    74,
      77,    82,    83,    86,    90,    91,    92,    93,    94,    95,
      96,    97,    98,   101,   102,   109,   110,   111,   112,   117,
     141,   142,   150,   151,   152,   154,   157,   160,   164,   166,
     167,   170,   173,   175,   177,   182,   186,   187,   193,   195,
     202,   206,   214,   220,   221,   223,   225,   226,   229,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   252,   255,   258,
     264,   272,   277,    66,   253,    70,   246,    58,   254,   246,
     246,   246,   246,   246,    56,   248,   255,   246,   246,   246,
     246,   246,   246,   246,   246,    98,   110,   111,   112,   231,
     251,   259,   142,   153,    66,   142,   196,   203,    66,    65,
     231,   142,    66,   231,    66,    56,    56,   155,   158,   161,
      56,    56,    58,   142,   188,   189,   190,   188,   231,   227,
      56,   246,   246,   246,   152,   231,   105,    97,    98,   142,
     179,   185,   187,   231,   258,    66,    66,     3,    95,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    29,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    30,    31,    32,    33,    34,
      35,    36,    49,    50,    37,    38,    39,    40,    41,   246,
      53,    55,    42,    44,    45,    56,    57,    58,    71,    88,
     143,   265,   143,    64,    64,    64,    64,    64,   142,   230,
     233,   260,   261,   262,   263,   215,   149,   194,    56,   197,
     142,   197,   204,    65,    67,    66,   231,    56,    56,   150,
     168,   171,   142,   190,   191,    65,   192,     3,     4,    66,
     150,   231,   165,   174,   142,   190,   142,   190,   192,    66,
      87,   233,   231,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   234,
     236,   237,   238,   239,   240,   241,   241,   241,   241,   242,
     242,   242,   242,   243,   243,   243,   244,   244,   246,   246,
     246,   246,   246,    41,   107,   230,   245,   256,   257,   249,
     231,   250,   247,   142,   230,   266,   267,   268,   269,   271,
      37,    58,   246,   246,   246,    90,    62,     3,     3,    90,
      95,    75,   216,    68,   197,    41,   142,   198,   199,   200,
     201,   192,   192,   192,   207,    64,   231,   231,   162,   231,
     231,   192,     3,    62,   110,   111,   112,   113,   117,   142,
       4,   189,   230,   106,   228,    64,   152,   150,   192,   192,
     176,   231,    65,     3,    64,   142,    62,   142,    65,     3,
      62,     3,   270,     3,    90,    95,    58,   273,   142,   230,
     262,   142,   230,   142,   230,   230,   152,   192,   192,    64,
       3,    64,   152,    58,   152,   205,   103,   104,   208,   209,
     211,   213,   222,    64,    64,    91,   169,   172,   142,   190,
     230,    56,   150,   224,   180,   231,    64,   234,   257,   230,
     230,   142,   230,   269,   142,   230,   142,   230,   278,    49,
      50,    56,   117,   141,   272,   274,   275,   276,   277,    87,
      87,    87,     3,   152,     4,    41,   200,   201,    62,   231,
      56,    56,   192,    68,   211,   209,   212,   152,   156,   159,
      56,    64,    64,   192,    64,   142,   150,    66,   183,    90,
      90,    65,     3,    87,    87,   141,   279,   280,   141,   141,
      62,     3,   230,   230,   230,   217,   230,    64,    62,   142,
      64,   152,   150,   150,   231,   150,   150,    64,   181,   231,
     150,   142,   142,   230,   230,   230,   230,     3,     3,    62,
     276,   218,   219,   230,   192,   192,    64,    64,   184,    87,
      87,    49,    50,   117,   141,   272,   277,   280,     3,    64,
     163,   150,   178,   230,   230,   141,   141,   219,   210,    66,
     178,   152
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval)
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */





/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:

/* Line 1464 of yacc.c  */
#line 243 "syntax/tjs.y"
    { sb->PushContextStack(TJS_W("global"),
												ctTopLevel); ;}
    break;

  case 4:

/* Line 1464 of yacc.c  */
#line 245 "syntax/tjs.y"
    { sb->PopContextStack(); ;}
    break;

  case 7:

/* Line 1464 of yacc.c  */
#line 252 "syntax/tjs.y"
    { if(sb->CompileErrorCount>20)
												YYABORT;
											  else yyerrok; ;}
    break;

  case 11:

/* Line 1464 of yacc.c  */
#line 266 "syntax/tjs.y"
    { cc->CreateExprCode((yyvsp[(1) - (2)].np)); ;}
    break;

  case 21:

/* Line 1464 of yacc.c  */
#line 276 "syntax/tjs.y"
    { cc->DoBreak(); ;}
    break;

  case 22:

/* Line 1464 of yacc.c  */
#line 277 "syntax/tjs.y"
    { cc->DoContinue(); ;}
    break;

  case 23:

/* Line 1464 of yacc.c  */
#line 278 "syntax/tjs.y"
    { cc->DoDebugger(); ;}
    break;

  case 24:

/* Line 1464 of yacc.c  */
#line 279 "syntax/tjs.y"
    { cc->DeclareVariables((yyvsp[(1) - (1)].dp)); ;}
    break;

  case 34:

/* Line 1464 of yacc.c  */
#line 293 "syntax/tjs.y"
    { cc->EnterBlock(); ;}
    break;

  case 35:

/* Line 1464 of yacc.c  */
#line 295 "syntax/tjs.y"
    { cc->ExitBlock(); ;}
    break;

  case 36:

/* Line 1464 of yacc.c  */
#line 306 "syntax/tjs.y"
    { cc->EnterForCode(); ;}
    break;

  case 37:

/* Line 1464 of yacc.c  */
#line 307 "syntax/tjs.y"
    { cc->CreateForExprCode((yyvsp[(4) - (5)].np));
											  cc->SetForThirdExprCode(NULL); ;}
    break;

  case 38:

/* Line 1464 of yacc.c  */
#line 309 "syntax/tjs.y"
    { cc->ExitForCode(); ;}
    break;

  case 39:

/* Line 1464 of yacc.c  */
#line 320 "syntax/tjs.y"
    { cc->EnterForCode(); ;}
    break;

  case 40:

/* Line 1464 of yacc.c  */
#line 321 "syntax/tjs.y"
    { cc->CreateForExprCode(cc->MakeNP1(T_EXCRAMATION, (yyvsp[(4) - (5)].np)));
											  cc->SetForThirdExprCode(NULL); ;}
    break;

  case 41:

/* Line 1464 of yacc.c  */
#line 323 "syntax/tjs.y"
    { cc->ExitForCode(); ;}
    break;

  case 42:

/* Line 1464 of yacc.c  */
#line 342 "syntax/tjs.y"
    { cc->EnterDoWhileCode(); cc->EnterBlock(); ;}
    break;

  case 43:

/* Line 1464 of yacc.c  */
#line 343 "syntax/tjs.y"
    { cc->ExitBlock(); ;}
    break;

  case 44:

/* Line 1464 of yacc.c  */
#line 345 "syntax/tjs.y"
    { cc->CreateDoWhileExprCode((yyvsp[(7) - (8)].np)); ;}
    break;

  case 45:

/* Line 1464 of yacc.c  */
#line 346 "syntax/tjs.y"
    { cc->ExitDoWhileCode(); ;}
    break;

  case 46:

/* Line 1464 of yacc.c  */
#line 359 "syntax/tjs.y"
    { cc->ExitForCode(); ;}
    break;

  case 47:

/* Line 1464 of yacc.c  */
#line 360 "syntax/tjs.y"
    { tjs_char *temp = cc->GetTemporaryVariableName();
												  { // var $1 = (int)expr
												    cc->InitLocalVariable(temp, cc->MakeNP1(T_INT, (yyvsp[(2) - (2)].np)));
												  }
												  { // 0 < $1
												    auto zero = cc->MakeNP0(T_CONSTVAL);
												    zero->SetValue(tTJSVariant(tTVInteger(0)));
												    auto rhs = cc->MakeNP0(T_SYMBOL);
												    rhs->SetValue(tTJSVariant(temp));
												    cc->CreateForExprCode(cc->MakeNP2(T_LT, zero, rhs));
												  }
												  { // --$1
												    auto t1 = cc->MakeNP0(T_SYMBOL);
												    t1->SetValue(tTJSVariant(temp));
												    cc->SetForThirdExprCode(cc->MakeNP1(T_DECREMENT, t1));
												  }
												  delete[] temp;
												;}
    break;

  case 48:

/* Line 1464 of yacc.c  */
#line 378 "syntax/tjs.y"
    { cc->ExitForCode(); ;}
    break;

  case 49:

/* Line 1464 of yacc.c  */
#line 382 "syntax/tjs.y"
    { cc->EnterForCode();
												  cc->CreateForExprCode(NULL);
												  cc->SetForThirdExprCode(NULL); ;}
    break;

  case 50:

/* Line 1464 of yacc.c  */
#line 389 "syntax/tjs.y"
    { cc->EnterIfCode(); ;}
    break;

  case 51:

/* Line 1464 of yacc.c  */
#line 390 "syntax/tjs.y"
    { cc->CreateIfExprCode((yyvsp[(4) - (4)].np)); ;}
    break;

  case 52:

/* Line 1464 of yacc.c  */
#line 391 "syntax/tjs.y"
    { cc->ExitIfCode(); ;}
    break;

  case 53:

/* Line 1464 of yacc.c  */
#line 403 "syntax/tjs.y"
    { cc->EnterIfCode(); ;}
    break;

  case 54:

/* Line 1464 of yacc.c  */
#line 404 "syntax/tjs.y"
    { cc->CreateIfExprCode(cc->MakeNP1(T_EXCRAMATION, (yyvsp[(4) - (4)].np))); ;}
    break;

  case 55:

/* Line 1464 of yacc.c  */
#line 405 "syntax/tjs.y"
    { cc->ExitIfCode(); ;}
    break;

  case 56:

/* Line 1464 of yacc.c  */
#line 410 "syntax/tjs.y"
    { cc->EnterElseCode(); ;}
    break;

  case 57:

/* Line 1464 of yacc.c  */
#line 411 "syntax/tjs.y"
    { cc->ExitElseCode(); ;}
    break;

  case 58:

/* Line 1464 of yacc.c  */
#line 431 "syntax/tjs.y"
    { if ((yyvsp[(2) - (3)].dp)) cc->DeclareVariables((yyvsp[(2) - (3)].dp)); ;}
    break;

  case 60:

/* Line 1464 of yacc.c  */
#line 439 "syntax/tjs.y"
    { cc->EnterForCode(); ;}
    break;

  case 61:

/* Line 1464 of yacc.c  */
#line 443 "syntax/tjs.y"
    { cc->ExitForCode(); ;}
    break;

  case 62:

/* Line 1464 of yacc.c  */
#line 448 "syntax/tjs.y"
    { (yyval.dp) = nullptr; ;}
    break;

  case 63:

/* Line 1464 of yacc.c  */
#line 449 "syntax/tjs.y"
    { (yyval.dp) = (yyvsp[(1) - (1)].dp); ;}
    break;

  case 64:

/* Line 1464 of yacc.c  */
#line 450 "syntax/tjs.y"
    { (yyval.dp) = nullptr; cc->CreateExprCode((yyvsp[(1) - (1)].np)); ;}
    break;

  case 65:

/* Line 1464 of yacc.c  */
#line 455 "syntax/tjs.y"
    { cc->CreateForExprCode(NULL); ;}
    break;

  case 66:

/* Line 1464 of yacc.c  */
#line 456 "syntax/tjs.y"
    { cc->CreateForExprCode((yyvsp[(1) - (1)].np)); ;}
    break;

  case 67:

/* Line 1464 of yacc.c  */
#line 461 "syntax/tjs.y"
    { cc->SetForThirdExprCode(NULL); ;}
    break;

  case 68:

/* Line 1464 of yacc.c  */
#line 462 "syntax/tjs.y"
    { cc->SetForThirdExprCode((yyvsp[(1) - (1)].np)); ;}
    break;

  case 69:

/* Line 1464 of yacc.c  */
#line 486 "syntax/tjs.y"
    { if ((yyvsp[(2) - (5)].dp)->Count() == 0) { YYABORT; }
											  cc->EnterForInCode((yyvsp[(2) - (5)].dp), (yyvsp[(4) - (5)].np)); ;}
    break;

  case 70:

/* Line 1464 of yacc.c  */
#line 488 "syntax/tjs.y"
    { cc->ExitForInCode(); ;}
    break;

  case 72:

/* Line 1464 of yacc.c  */
#line 496 "syntax/tjs.y"
    { (yyval.dp) = cc->CreateVarDeclList(); 
											  (yyval.dp)->Push(cc->GetVarDeclNode(lx->GetString((yyvsp[(2) - (3)].num)))); ;}
    break;

  case 73:

/* Line 1464 of yacc.c  */
#line 498 "syntax/tjs.y"
    { (yyval.dp) = cc->CreateVarDeclList(); 
											  (yyval.dp)->Push(cc->GetVarDeclNode(lx->GetString((yyvsp[(2) - (3)].num))));
											  (yyval.dp)->SetConst(); ;}
    break;

  case 74:

/* Line 1464 of yacc.c  */
#line 501 "syntax/tjs.y"
    { (yyval.dp) = cc->CreateVarDeclList(); 
											  (yyval.dp)->Push(cc->GetVarDeclNode(lx->GetString((yyvsp[(1) - (2)].num))));
											  (yyval.dp)->SetNotLocal(); ;}
    break;

  case 75:

/* Line 1464 of yacc.c  */
#line 504 "syntax/tjs.y"
    { (yyval.dp) = (yyvsp[(2) - (2)].dp); ;}
    break;

  case 76:

/* Line 1464 of yacc.c  */
#line 505 "syntax/tjs.y"
    { (yyval.dp) = (yyvsp[(2) - (2)].dp); ;}
    break;

  case 77:

/* Line 1464 of yacc.c  */
#line 506 "syntax/tjs.y"
    { (yyval.dp) = tTJSVarDeclList::FromInlineArray((yyvsp[(1) - (1)].np)); ;}
    break;

  case 78:

/* Line 1464 of yacc.c  */
#line 511 "syntax/tjs.y"
    { (yyval.dp) = (yyvsp[(1) - (2)].dp); ;}
    break;

  case 79:

/* Line 1464 of yacc.c  */
#line 515 "syntax/tjs.y"
    { (yyval.dp) = (yyvsp[(2) - (2)].dp); ;}
    break;

  case 80:

/* Line 1464 of yacc.c  */
#line 516 "syntax/tjs.y"
    { (yyval.dp) = (yyvsp[(2) - (2)].dp); (yyval.dp)->SetConst(); ;}
    break;

  case 81:

/* Line 1464 of yacc.c  */
#line 523 "syntax/tjs.y"
    { (yyval.dp) = cc->CreateVarDeclList(); (yyval.dp)->Push((yyvsp[(1) - (1)].dn)); ;}
    break;

  case 82:

/* Line 1464 of yacc.c  */
#line 524 "syntax/tjs.y"
    { (yyval.dp) = (yyvsp[(1) - (3)].dp); (yyval.dp)->Push((yyvsp[(3) - (3)].dn)); ;}
    break;

  case 83:

/* Line 1464 of yacc.c  */
#line 525 "syntax/tjs.y"
    { (yyval.dp) = (yyvsp[(1) - (3)].dp); (yyval.dp)->SetUnpackExpr((yyvsp[(3) - (3)].np)); ;}
    break;

  case 84:

/* Line 1464 of yacc.c  */
#line 530 "syntax/tjs.y"
    { (yyval.dn) = cc->GetVarDeclNode(lx->GetString((yyvsp[(1) - (2)].num))); ;}
    break;

  case 85:

/* Line 1464 of yacc.c  */
#line 532 "syntax/tjs.y"
    { (yyval.dn) = cc->GetVarDeclNode(lx->GetString((yyvsp[(1) - (4)].num)), (yyvsp[(4) - (4)].np)); ;}
    break;

  case 86:

/* Line 1464 of yacc.c  */
#line 536 "syntax/tjs.y"
    { (yyval.dp) = (yyvsp[(2) - (3)].dp)->Pack(); ;}
    break;

  case 87:

/* Line 1464 of yacc.c  */
#line 540 "syntax/tjs.y"
    { (yyval.dp) = cc->CreateVarDeclList();
											  (yyval.dp)->Push(lx->GetString((yyvsp[(1) - (2)].num))); ;}
    break;

  case 88:

/* Line 1464 of yacc.c  */
#line 543 "syntax/tjs.y"
    { (yyval.dp) = (yyvsp[(1) - (4)].dp);
											  (yyval.dp)->Push(lx->GetString((yyvsp[(3) - (4)].num))); ;}
    break;

  case 89:

/* Line 1464 of yacc.c  */
#line 546 "syntax/tjs.y"
    { (yyval.dp) = (yyvsp[(1) - (3)].dp)->Join((yyvsp[(3) - (3)].dp)); ;}
    break;

  case 90:

/* Line 1464 of yacc.c  */
#line 547 "syntax/tjs.y"
    { (yyval.dp) = (yyvsp[(1) - (1)].dp); ;}
    break;

  case 98:

/* Line 1464 of yacc.c  */
#line 563 "syntax/tjs.y"
    { sb->PushContextStack(
												lx->GetString((yyvsp[(2) - (2)].num)),
											  ctFunction);
											  cc->EnterBlock();;}
    break;

  case 99:

/* Line 1464 of yacc.c  */
#line 568 "syntax/tjs.y"
    { cc->ExitBlock(); sb->PopContextStack(); ;}
    break;

  case 100:

/* Line 1464 of yacc.c  */
#line 573 "syntax/tjs.y"
    { sb->PushContextStack(
												TJS_W("(anonymous)"),
											  ctExprFunction);
											  cc->EnterBlock(); ;}
    break;

  case 101:

/* Line 1464 of yacc.c  */
#line 578 "syntax/tjs.y"
    { cc->ExitBlock();
											  tTJSVariant v(cc);
											  sb->PopContextStack();
											  (yyval.np) = cc->MakeNP0(T_CONSTVAL);
											  (yyval.np)->SetValue(v); ;}
    break;

  case 110:

/* Line 1464 of yacc.c  */
#line 605 "syntax/tjs.y"
    { cc->AddFunctionDeclArg(
												lx->GetString((yyvsp[(1) - (2)].num)), NULL); ;}
    break;

  case 111:

/* Line 1464 of yacc.c  */
#line 607 "syntax/tjs.y"
    { cc->AddFunctionDeclArg(
												lx->GetString((yyvsp[(1) - (4)].num)), (yyvsp[(4) - (4)].np)); ;}
    break;

  case 112:

/* Line 1464 of yacc.c  */
#line 612 "syntax/tjs.y"
    { cc->AddFunctionDeclArgCollapse(
												NULL); ;}
    break;

  case 113:

/* Line 1464 of yacc.c  */
#line 614 "syntax/tjs.y"
    { cc->AddFunctionDeclArgCollapse(
												lx->GetString((yyvsp[(1) - (3)].num))); ;}
    break;

  case 114:

/* Line 1464 of yacc.c  */
#line 630 "syntax/tjs.y"
    { sb->PushContextStack(TJS_W("(anonymous)"), ctExprFunction); cc->EnterBlock(); ;}
    break;

  case 115:

/* Line 1464 of yacc.c  */
#line 634 "syntax/tjs.y"
    { cc->ExitBlock(); tTJSVariant v(cc); sb->PopContextStack(); (yyval.np) = cc->MakeNP0(T_CONSTVAL); (yyval.np)->SetValue(v); ;}
    break;

  case 116:

/* Line 1464 of yacc.c  */
#line 638 "syntax/tjs.y"
    { cc->AddFunctionDeclArg(lx->GetString((yyvsp[(1) - (2)].num)), NULL); ;}
    break;

  case 118:

/* Line 1464 of yacc.c  */
#line 643 "syntax/tjs.y"
    { cc->ReturnFromFunc(NULL); ;}
    break;

  case 119:

/* Line 1464 of yacc.c  */
#line 644 "syntax/tjs.y"
    { cc->ReturnFromFunc((yyvsp[(2) - (3)].np)); ;}
    break;

  case 121:

/* Line 1464 of yacc.c  */
#line 651 "syntax/tjs.y"
    { sb->PushContextStack(
												lx->GetString((yyvsp[(2) - (3)].num)),
												ctProperty); ;}
    break;

  case 122:

/* Line 1464 of yacc.c  */
#line 655 "syntax/tjs.y"
    { sb->PopContextStack(); ;}
    break;

  case 127:

/* Line 1464 of yacc.c  */
#line 666 "syntax/tjs.y"
    { sb->PushContextStack(
												TJS_W("(setter)"),
												ctPropertySetter);
											  cc->EnterBlock();
											  cc->SetPropertyDeclArg(
												lx->GetString((yyvsp[(3) - (5)].num))); ;}
    break;

  case 128:

/* Line 1464 of yacc.c  */
#line 672 "syntax/tjs.y"
    { cc->ExitBlock();
											  sb->PopContextStack(); ;}
    break;

  case 129:

/* Line 1464 of yacc.c  */
#line 677 "syntax/tjs.y"
    { sb->PushContextStack(
												TJS_W("(getter)"),
												ctPropertyGetter);
											  cc->EnterBlock(); ;}
    break;

  case 130:

/* Line 1464 of yacc.c  */
#line 681 "syntax/tjs.y"
    { cc->ExitBlock();
											  sb->PopContextStack(); ;}
    break;

  case 133:

/* Line 1464 of yacc.c  */
#line 693 "syntax/tjs.y"
    { sb->PushContextStack(
												lx->GetString((yyvsp[(2) - (2)].num)),
												ctClass); ;}
    break;

  case 134:

/* Line 1464 of yacc.c  */
#line 697 "syntax/tjs.y"
    { sb->PopContextStack(); ;}
    break;

  case 136:

/* Line 1464 of yacc.c  */
#line 702 "syntax/tjs.y"
    { cc->CreateExtendsExprCode((yyvsp[(2) - (2)].np), true); ;}
    break;

  case 137:

/* Line 1464 of yacc.c  */
#line 703 "syntax/tjs.y"
    { cc->CreateExtendsExprCode((yyvsp[(2) - (3)].np), false); ;}
    break;

  case 141:

/* Line 1464 of yacc.c  */
#line 713 "syntax/tjs.y"
    { cc->CreateExtendsExprCode((yyvsp[(1) - (1)].np), false); ;}
    break;

  case 142:

/* Line 1464 of yacc.c  */
#line 718 "syntax/tjs.y"
    { cc->ReturnFromFunc(NULL); ;}
    break;

  case 143:

/* Line 1464 of yacc.c  */
#line 719 "syntax/tjs.y"
    { cc->ReturnFromFunc((yyvsp[(2) - (3)].np)); ;}
    break;

  case 144:

/* Line 1464 of yacc.c  */
#line 726 "syntax/tjs.y"
    { cc->EnterSwitchCode((yyvsp[(3) - (4)].np)); ;}
    break;

  case 145:

/* Line 1464 of yacc.c  */
#line 727 "syntax/tjs.y"
    { cc->ExitSwitchCode(); ;}
    break;

  case 146:

/* Line 1464 of yacc.c  */
#line 733 "syntax/tjs.y"
    { cc->EnterWithCode((yyvsp[(3) - (4)].np)); ;}
    break;

  case 147:

/* Line 1464 of yacc.c  */
#line 734 "syntax/tjs.y"
    { cc->ExitWithCode(); ;}
    break;

  case 148:

/* Line 1464 of yacc.c  */
#line 739 "syntax/tjs.y"
    { cc->ProcessCaseCode((yyvsp[(2) - (3)].np)); ;}
    break;

  case 149:

/* Line 1464 of yacc.c  */
#line 740 "syntax/tjs.y"
    { cc->ProcessCaseCode(NULL); ;}
    break;

  case 150:

/* Line 1464 of yacc.c  */
#line 745 "syntax/tjs.y"
    { cc->EnterTryCode(); ;}
    break;

  case 151:

/* Line 1464 of yacc.c  */
#line 748 "syntax/tjs.y"
    { cc->ExitTryCode(); ;}
    break;

  case 152:

/* Line 1464 of yacc.c  */
#line 752 "syntax/tjs.y"
    { cc->EnterCatchCode(NULL); ;}
    break;

  case 153:

/* Line 1464 of yacc.c  */
#line 753 "syntax/tjs.y"
    { cc->EnterCatchCode(NULL); ;}
    break;

  case 154:

/* Line 1464 of yacc.c  */
#line 754 "syntax/tjs.y"
    { cc->EnterCatchCode(
												lx->GetString((yyvsp[(3) - (4)].num))); ;}
    break;

  case 155:

/* Line 1464 of yacc.c  */
#line 760 "syntax/tjs.y"
    { cc->ProcessThrowCode((yyvsp[(2) - (3)].np)); ;}
    break;

  case 156:

/* Line 1464 of yacc.c  */
#line 765 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 157:

/* Line 1464 of yacc.c  */
#line 769 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 158:

/* Line 1464 of yacc.c  */
#line 770 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_IF, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 159:

/* Line 1464 of yacc.c  */
#line 775 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 160:

/* Line 1464 of yacc.c  */
#line 776 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_COMMA, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 161:

/* Line 1464 of yacc.c  */
#line 781 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 162:

/* Line 1464 of yacc.c  */
#line 782 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_SWAP, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 163:

/* Line 1464 of yacc.c  */
#line 783 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_EQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 164:

/* Line 1464 of yacc.c  */
#line 784 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_AMPERSANDEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 165:

/* Line 1464 of yacc.c  */
#line 785 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_VERTLINEEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 166:

/* Line 1464 of yacc.c  */
#line 786 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_CHEVRONEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 167:

/* Line 1464 of yacc.c  */
#line 787 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_MINUSEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 168:

/* Line 1464 of yacc.c  */
#line 788 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_PLUSEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 169:

/* Line 1464 of yacc.c  */
#line 789 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_PERCENTEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 170:

/* Line 1464 of yacc.c  */
#line 790 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_SLASHEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 171:

/* Line 1464 of yacc.c  */
#line 791 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_BACKSLASHEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 172:

/* Line 1464 of yacc.c  */
#line 792 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_ASTERISKEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 173:

/* Line 1464 of yacc.c  */
#line 793 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_LOGICALOREQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 174:

/* Line 1464 of yacc.c  */
#line 794 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_LOGICALANDEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 175:

/* Line 1464 of yacc.c  */
#line 795 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_RARITHSHIFTEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 176:

/* Line 1464 of yacc.c  */
#line 796 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_LARITHSHIFTEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 177:

/* Line 1464 of yacc.c  */
#line 797 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_RBITSHIFTEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 178:

/* Line 1464 of yacc.c  */
#line 802 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 179:

/* Line 1464 of yacc.c  */
#line 805 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP3(T_QUESTION, (yyvsp[(1) - (5)].np), (yyvsp[(3) - (5)].np), (yyvsp[(5) - (5)].np)); ;}
    break;

  case 180:

/* Line 1464 of yacc.c  */
#line 811 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 181:

/* Line 1464 of yacc.c  */
#line 812 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_LOGICALOR, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 182:

/* Line 1464 of yacc.c  */
#line 816 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 183:

/* Line 1464 of yacc.c  */
#line 818 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_LOGICALAND, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 184:

/* Line 1464 of yacc.c  */
#line 822 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 185:

/* Line 1464 of yacc.c  */
#line 823 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_VERTLINE, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 186:

/* Line 1464 of yacc.c  */
#line 827 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 187:

/* Line 1464 of yacc.c  */
#line 828 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_CHEVRON, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 188:

/* Line 1464 of yacc.c  */
#line 832 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 189:

/* Line 1464 of yacc.c  */
#line 833 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_AMPERSAND, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 190:

/* Line 1464 of yacc.c  */
#line 837 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 191:

/* Line 1464 of yacc.c  */
#line 838 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_NOTEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 192:

/* Line 1464 of yacc.c  */
#line 839 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_EQUALEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 193:

/* Line 1464 of yacc.c  */
#line 840 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_DISCNOTEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 194:

/* Line 1464 of yacc.c  */
#line 841 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_DISCEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 195:

/* Line 1464 of yacc.c  */
#line 845 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 196:

/* Line 1464 of yacc.c  */
#line 846 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_LT, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 197:

/* Line 1464 of yacc.c  */
#line 847 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_GT, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 198:

/* Line 1464 of yacc.c  */
#line 848 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_LTOREQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 199:

/* Line 1464 of yacc.c  */
#line 849 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_GTOREQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 200:

/* Line 1464 of yacc.c  */
#line 853 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 201:

/* Line 1464 of yacc.c  */
#line 854 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_RARITHSHIFT, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 202:

/* Line 1464 of yacc.c  */
#line 855 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_LARITHSHIFT, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 203:

/* Line 1464 of yacc.c  */
#line 856 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_RBITSHIFT, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 204:

/* Line 1464 of yacc.c  */
#line 861 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 205:

/* Line 1464 of yacc.c  */
#line 862 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_PLUS, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 206:

/* Line 1464 of yacc.c  */
#line 863 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_MINUS, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 207:

/* Line 1464 of yacc.c  */
#line 867 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 208:

/* Line 1464 of yacc.c  */
#line 868 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_PERCENT, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 209:

/* Line 1464 of yacc.c  */
#line 869 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_SLASH, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 210:

/* Line 1464 of yacc.c  */
#line 870 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_BACKSLASH, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 211:

/* Line 1464 of yacc.c  */
#line 871 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_RATIONAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 212:

/* Line 1464 of yacc.c  */
#line 872 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_ASTERISK, (yyvsp[(1) - (2)].np), (yyvsp[(2) - (2)].np)); ;}
    break;

  case 213:

/* Line 1464 of yacc.c  */
#line 876 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (2)].np); ;}
    break;

  case 214:

/* Line 1464 of yacc.c  */
#line 880 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 215:

/* Line 1464 of yacc.c  */
#line 881 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_EXCRAMATION, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 216:

/* Line 1464 of yacc.c  */
#line 882 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_TILDE, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 217:

/* Line 1464 of yacc.c  */
#line 883 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_DECREMENT, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 218:

/* Line 1464 of yacc.c  */
#line 884 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_INCREMENT, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 219:

/* Line 1464 of yacc.c  */
#line 885 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(2) - (2)].np); (yyval.np)->SetOpecode(T_NEW); ;}
    break;

  case 220:

/* Line 1464 of yacc.c  */
#line 886 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_INVALIDATE, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 221:

/* Line 1464 of yacc.c  */
#line 887 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_ISVALID, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 222:

/* Line 1464 of yacc.c  */
#line 888 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_ISVALID, (yyvsp[(1) - (2)].np)); ;}
    break;

  case 223:

/* Line 1464 of yacc.c  */
#line 889 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_DELETE, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 224:

/* Line 1464 of yacc.c  */
#line 890 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_TYPEOF, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 225:

/* Line 1464 of yacc.c  */
#line 891 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_SHARP, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 226:

/* Line 1464 of yacc.c  */
#line 892 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_DOLLAR, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 227:

/* Line 1464 of yacc.c  */
#line 893 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_UPLUS, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 228:

/* Line 1464 of yacc.c  */
#line 894 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_UMINUS, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 229:

/* Line 1464 of yacc.c  */
#line 895 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_IGNOREPROP, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 230:

/* Line 1464 of yacc.c  */
#line 896 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_PROPACCESS, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 231:

/* Line 1464 of yacc.c  */
#line 897 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_INSTANCEOF, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 232:

/* Line 1464 of yacc.c  */
#line 898 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_INT, (yyvsp[(4) - (4)].np)); ;}
    break;

  case 233:

/* Line 1464 of yacc.c  */
#line 899 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_INT, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 234:

/* Line 1464 of yacc.c  */
#line 900 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_REAL, (yyvsp[(4) - (4)].np)); ;}
    break;

  case 235:

/* Line 1464 of yacc.c  */
#line 901 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_REAL, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 236:

/* Line 1464 of yacc.c  */
#line 902 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_STRING, (yyvsp[(4) - (4)].np)); ;}
    break;

  case 237:

/* Line 1464 of yacc.c  */
#line 903 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_STRING, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 238:

/* Line 1464 of yacc.c  */
#line 907 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 239:

/* Line 1464 of yacc.c  */
#line 909 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_INCONTEXTOF, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 240:

/* Line 1464 of yacc.c  */
#line 913 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 241:

/* Line 1464 of yacc.c  */
#line 914 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(2) - (3)].np); ;}
    break;

  case 242:

/* Line 1464 of yacc.c  */
#line 915 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_LBRACKET, (yyvsp[(1) - (4)].np), (yyvsp[(3) - (4)].np)); ;}
    break;

  case 243:

/* Line 1464 of yacc.c  */
#line 916 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 244:

/* Line 1464 of yacc.c  */
#line 917 "syntax/tjs.y"
    { lx->SetNextIsBareWord(); ;}
    break;

  case 245:

/* Line 1464 of yacc.c  */
#line 918 "syntax/tjs.y"
    { tTJSExprNode * node = cc->MakeNP0(T_CONSTVAL);
												  node->SetValue(lx->GetValue((yyvsp[(4) - (4)].num)));
												  (yyval.np) = cc->MakeNP2(T_DOT, (yyvsp[(1) - (4)].np), node); ;}
    break;

  case 246:

/* Line 1464 of yacc.c  */
#line 921 "syntax/tjs.y"
    { lx->SetNextIsBareWord(); ;}
    break;

  case 247:

/* Line 1464 of yacc.c  */
#line 922 "syntax/tjs.y"
    { /* syntactic sugar of '(Dictionary.*T_SYMBOL* incontexof *priority_expr*)' */
												  auto dict = cc->MakeNP0(T_SYMBOL);
												  auto method = cc->MakeNP0(T_CONSTVAL);
												  dict->SetValue(tTJSVariant("Dictionary"));
												  method->SetValue(lx->GetValue((yyvsp[(4) - (4)].num)));
												  auto func = cc->MakeNP2(T_DOT, dict, method);
												  (yyval.np) = cc->MakeNP2(T_INCONTEXTOF, func, (yyvsp[(1) - (4)].np)); ;}
    break;

  case 248:

/* Line 1464 of yacc.c  */
#line 929 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_POSTINCREMENT, (yyvsp[(1) - (2)].np)); ;}
    break;

  case 249:

/* Line 1464 of yacc.c  */
#line 930 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_POSTDECREMENT, (yyvsp[(1) - (2)].np)); ;}
    break;

  case 250:

/* Line 1464 of yacc.c  */
#line 931 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_EVAL, (yyvsp[(1) - (2)].np)); ;}
    break;

  case 251:

/* Line 1464 of yacc.c  */
#line 932 "syntax/tjs.y"
    { lx->SetNextIsBareWord(); ;}
    break;

  case 252:

/* Line 1464 of yacc.c  */
#line 933 "syntax/tjs.y"
    { tTJSExprNode * node = cc->MakeNP0(T_CONSTVAL);
												  node->SetValue(lx->GetValue((yyvsp[(3) - (3)].num)));
												  (yyval.np) = cc->MakeNP1(T_WITHDOT, node); ;}
    break;

  case 253:

/* Line 1464 of yacc.c  */
#line 940 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP0(T_CONSTVAL);
												  (yyval.np)->SetValue(lx->GetValue((yyvsp[(1) - (1)].num))); ;}
    break;

  case 254:

/* Line 1464 of yacc.c  */
#line 942 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP0(T_SYMBOL);
												  (yyval.np)->SetValue(tTJSVariant(
													lx->GetString((yyvsp[(1) - (1)].num)))); ;}
    break;

  case 255:

/* Line 1464 of yacc.c  */
#line 945 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP0(T_THIS); ;}
    break;

  case 256:

/* Line 1464 of yacc.c  */
#line 946 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP0(T_SUPER); ;}
    break;

  case 257:

/* Line 1464 of yacc.c  */
#line 947 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 258:

/* Line 1464 of yacc.c  */
#line 948 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 259:

/* Line 1464 of yacc.c  */
#line 949 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP0(T_GLOBAL); ;}
    break;

  case 260:

/* Line 1464 of yacc.c  */
#line 950 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP0(T_VOID); ;}
    break;

  case 261:

/* Line 1464 of yacc.c  */
#line 951 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 262:

/* Line 1464 of yacc.c  */
#line 952 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 263:

/* Line 1464 of yacc.c  */
#line 953 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 264:

/* Line 1464 of yacc.c  */
#line 954 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 265:

/* Line 1464 of yacc.c  */
#line 955 "syntax/tjs.y"
    { lx->SetStartOfRegExp(); ;}
    break;

  case 266:

/* Line 1464 of yacc.c  */
#line 956 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP0(T_REGEXP);
												  (yyval.np)->SetValue(lx->GetValue((yyvsp[(3) - (3)].num))); ;}
    break;

  case 267:

/* Line 1464 of yacc.c  */
#line 958 "syntax/tjs.y"
    { lx->SetStartOfRegExp(); ;}
    break;

  case 268:

/* Line 1464 of yacc.c  */
#line 959 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP0(T_REGEXP);
												  (yyval.np)->SetValue(lx->GetValue((yyvsp[(3) - (3)].num))); ;}
    break;

  case 269:

/* Line 1464 of yacc.c  */
#line 966 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_LPARENTHESIS, (yyvsp[(1) - (4)].np), (yyvsp[(3) - (4)].np)); ;}
    break;

  case 270:

/* Line 1464 of yacc.c  */
#line 971 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP0(T_OMIT); ;}
    break;

  case 271:

/* Line 1464 of yacc.c  */
#line 972 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_ARG, (yyvsp[(1) - (1)].np)); ;}
    break;

  case 272:

/* Line 1464 of yacc.c  */
#line 973 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_ARG, (yyvsp[(3) - (3)].np), (yyvsp[(1) - (3)].np)); ;}
    break;

  case 273:

/* Line 1464 of yacc.c  */
#line 977 "syntax/tjs.y"
    { (yyval.np) = NULL; ;}
    break;

  case 274:

/* Line 1464 of yacc.c  */
#line 978 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_EXPANDARG, NULL); ;}
    break;

  case 275:

/* Line 1464 of yacc.c  */
#line 979 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_EXPANDARG, (yyvsp[(1) - (1)].np)); ;}
    break;

  case 276:

/* Line 1464 of yacc.c  */
#line 980 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 277:

/* Line 1464 of yacc.c  */
#line 986 "syntax/tjs.y"
    { tTJSExprNode *node =
										  cc->MakeNP0(T_INLINEARRAY);
										  cc->PushCurrentNode(node); ;}
    break;

  case 278:

/* Line 1464 of yacc.c  */
#line 990 "syntax/tjs.y"
    { (yyval.np) = cn; cc->PopCurrentNode(); ;}
    break;

  case 280:

/* Line 1464 of yacc.c  */
#line 997 "syntax/tjs.y"
    { cn->Add((yyvsp[(1) - (1)].np)); ;}
    break;

  case 281:

/* Line 1464 of yacc.c  */
#line 1001 "syntax/tjs.y"
    { cn->Add((yyvsp[(1) - (1)].np)); ;}
    break;

  case 282:

/* Line 1464 of yacc.c  */
#line 1002 "syntax/tjs.y"
    { cn->Add((yyvsp[(3) - (3)].np)); ;}
    break;

  case 283:

/* Line 1464 of yacc.c  */
#line 1007 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_ARRAYARG, NULL); ;}
    break;

  case 284:

/* Line 1464 of yacc.c  */
#line 1008 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_ARRAYARG, (yyvsp[(1) - (1)].np)); ;}
    break;

  case 285:

/* Line 1464 of yacc.c  */
#line 1014 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_ARRAYCOMP, (yyvsp[(1) - (5)].np));
										  auto var = cc->MakeNP0(T_SYMBOL);
										  var->SetValue(tTJSVariant(lx->GetString((yyvsp[(3) - (5)].num))));
										  (yyval.np)->Add(cc->MakeNP2(T_IN, var, (yyvsp[(5) - (5)].np))); ;}
    break;

  case 286:

/* Line 1464 of yacc.c  */
#line 1019 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (5)].np);
										  auto var = cc->MakeNP0(T_SYMBOL);
										  var->SetValue(tTJSVariant(lx->GetString((yyvsp[(3) - (5)].num))));
										  (yyval.np)->Add(cc->MakeNP2(T_IN, var, (yyvsp[(5) - (5)].np))); ;}
    break;

  case 287:

/* Line 1464 of yacc.c  */
#line 1024 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (5)].np);
										  auto var = cc->MakeNP0(T_SYMBOL);
										  var->SetValue(tTJSVariant(lx->GetString((yyvsp[(3) - (5)].num))));
										  (yyval.np)->Add(cc->MakeNP2(T_IN, var, (yyvsp[(5) - (5)].np))); ;}
    break;

  case 288:

/* Line 1464 of yacc.c  */
#line 1028 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (3)].np);
										  (yyval.np)->Add(cc->MakeNP1(T_IF, (yyvsp[(3) - (3)].np))); ;}
    break;

  case 289:

/* Line 1464 of yacc.c  */
#line 1030 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (3)].np);
										  (yyval.np)->Add(cc->MakeNP1(T_IF, (yyvsp[(3) - (3)].np))); ;}
    break;

  case 290:

/* Line 1464 of yacc.c  */
#line 1036 "syntax/tjs.y"
    { tTJSExprNode *node =
										  cc->MakeNP0(T_INLINEDIC);
										  cc->PushCurrentNode(node); ;}
    break;

  case 291:

/* Line 1464 of yacc.c  */
#line 1040 "syntax/tjs.y"
    { (yyval.np) = cn; cc->PopCurrentNode(); ;}
    break;

  case 293:

/* Line 1464 of yacc.c  */
#line 1045 "syntax/tjs.y"
    { cn->Add((yyvsp[(1) - (1)].np)); ;}
    break;

  case 296:

/* Line 1464 of yacc.c  */
#line 1055 "syntax/tjs.y"
    { cn->Add((yyvsp[(1) - (1)].np)); ;}
    break;

  case 297:

/* Line 1464 of yacc.c  */
#line 1056 "syntax/tjs.y"
    { cn->Add((yyvsp[(3) - (3)].np)); ;}
    break;

  case 298:

/* Line 1464 of yacc.c  */
#line 1061 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_DICELM, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 299:

/* Line 1464 of yacc.c  */
#line 1062 "syntax/tjs.y"
    { tTJSVariant val(lx->GetString((yyvsp[(1) - (3)].num)));
										  tTJSExprNode *node0 = cc->MakeNP0(T_CONSTVAL);
										  node0->SetValue(val);
										  (yyval.np) = cc->MakeNP2(T_DICELM, node0, (yyvsp[(3) - (3)].np)); ;}
    break;

  case 302:

/* Line 1464 of yacc.c  */
#line 1076 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_DICTCOMP, (yyvsp[(1) - (7)].np), (yyvsp[(3) - (7)].np));
										  auto var = cc->MakeNP0(T_SYMBOL);
										  var->SetValue(tTJSVariant(lx->GetString((yyvsp[(5) - (7)].num))));
										  (yyval.np)->Add(cc->MakeNP2(T_IN, var, (yyvsp[(7) - (7)].np))); ;}
    break;

  case 303:

/* Line 1464 of yacc.c  */
#line 1081 "syntax/tjs.y"
    { tTJSExprNode *node0 = cc->MakeNP0(T_CONSTVAL);
										  node0->SetValue(tTJSVariant(lx->GetString((yyvsp[(1) - (7)].num))));
										  (yyval.np) = cc->MakeNP2(T_DICTCOMP, node0, (yyvsp[(3) - (7)].np));
										  auto var = cc->MakeNP0(T_SYMBOL);
										  var->SetValue(tTJSVariant(lx->GetString((yyvsp[(5) - (7)].num))));
										  (yyval.np)->Add(cc->MakeNP2(T_IN, var, (yyvsp[(7) - (7)].np))); ;}
    break;

  case 304:

/* Line 1464 of yacc.c  */
#line 1088 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (5)].np);
										  auto var = cc->MakeNP0(T_SYMBOL);
										  var->SetValue(tTJSVariant(lx->GetString((yyvsp[(3) - (5)].num))));
										  (yyval.np)->Add(cc->MakeNP2(T_IN, var, (yyvsp[(5) - (5)].np))); ;}
    break;

  case 305:

/* Line 1464 of yacc.c  */
#line 1093 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (5)].np);
										  auto var = cc->MakeNP0(T_SYMBOL);
										  var->SetValue(tTJSVariant(lx->GetString((yyvsp[(3) - (5)].num))));
										  (yyval.np)->Add(cc->MakeNP2(T_IN, var, (yyvsp[(5) - (5)].np))); ;}
    break;

  case 306:

/* Line 1464 of yacc.c  */
#line 1097 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (3)].np);
										  (yyval.np)->Add(cc->MakeNP1(T_IF, (yyvsp[(3) - (3)].np))); ;}
    break;

  case 307:

/* Line 1464 of yacc.c  */
#line 1099 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (3)].np);
										  (yyval.np)->Add(cc->MakeNP1(T_IF, (yyvsp[(3) - (3)].np))); ;}
    break;

  case 308:

/* Line 1464 of yacc.c  */
#line 1107 "syntax/tjs.y"
    { tTJSExprNode *node =
										  cc->MakeNP0(T_CONSTVAL);
										  iTJSDispatch2 * dsp = TJSCreateArrayObject();
										  node->SetValue(tTJSVariant(dsp, dsp));
										  dsp->Release();
										  cc->PushCurrentNode(node); ;}
    break;

  case 309:

/* Line 1464 of yacc.c  */
#line 1114 "syntax/tjs.y"
    { (yyval.np) = cn; cc->PopCurrentNode(); ;}
    break;

  case 314:

/* Line 1464 of yacc.c  */
#line 1132 "syntax/tjs.y"
    { cn->AddArrayElement(- lx->GetValue((yyvsp[(2) - (2)].num))); ;}
    break;

  case 315:

/* Line 1464 of yacc.c  */
#line 1133 "syntax/tjs.y"
    { cn->AddArrayElement(+ lx->GetValue((yyvsp[(2) - (2)].num))); ;}
    break;

  case 316:

/* Line 1464 of yacc.c  */
#line 1134 "syntax/tjs.y"
    { cn->AddArrayElement(lx->GetValue((yyvsp[(1) - (1)].num))); ;}
    break;

  case 317:

/* Line 1464 of yacc.c  */
#line 1135 "syntax/tjs.y"
    { cn->AddArrayElement(tTJSVariant());  ;}
    break;

  case 318:

/* Line 1464 of yacc.c  */
#line 1136 "syntax/tjs.y"
    { cn->AddArrayElement((yyvsp[(1) - (1)].np)->GetValue()); ;}
    break;

  case 319:

/* Line 1464 of yacc.c  */
#line 1137 "syntax/tjs.y"
    { cn->AddArrayElement((yyvsp[(1) - (1)].np)->GetValue()); ;}
    break;

  case 320:

/* Line 1464 of yacc.c  */
#line 1142 "syntax/tjs.y"
    { tTJSExprNode *node =
										  cc->MakeNP0(T_CONSTVAL);
										  iTJSDispatch2 * dsp = TJSCreateDictionaryObject();
										  node->SetValue(tTJSVariant(dsp, dsp));
										  dsp->Release();
										  cc->PushCurrentNode(node); ;}
    break;

  case 321:

/* Line 1464 of yacc.c  */
#line 1149 "syntax/tjs.y"
    { (yyval.np) = cn; cc->PopCurrentNode(); ;}
    break;

  case 325:

/* Line 1464 of yacc.c  */
#line 1162 "syntax/tjs.y"
    { cn->AddDictionaryElement(lx->GetValue((yyvsp[(1) - (4)].num)), - lx->GetValue((yyvsp[(4) - (4)].num))); ;}
    break;

  case 326:

/* Line 1464 of yacc.c  */
#line 1163 "syntax/tjs.y"
    { cn->AddDictionaryElement(lx->GetValue((yyvsp[(1) - (4)].num)), + lx->GetValue((yyvsp[(4) - (4)].num))); ;}
    break;

  case 327:

/* Line 1464 of yacc.c  */
#line 1164 "syntax/tjs.y"
    { cn->AddDictionaryElement(lx->GetValue((yyvsp[(1) - (3)].num)), lx->GetValue((yyvsp[(3) - (3)].num))); ;}
    break;

  case 328:

/* Line 1464 of yacc.c  */
#line 1165 "syntax/tjs.y"
    { cn->AddDictionaryElement(lx->GetValue((yyvsp[(1) - (3)].num)), tTJSVariant()); ;}
    break;

  case 329:

/* Line 1464 of yacc.c  */
#line 1166 "syntax/tjs.y"
    { cn->AddDictionaryElement(lx->GetValue((yyvsp[(1) - (3)].num)), (yyvsp[(3) - (3)].np)->GetValue()); ;}
    break;

  case 330:

/* Line 1464 of yacc.c  */
#line 1167 "syntax/tjs.y"
    { cn->AddDictionaryElement(lx->GetValue((yyvsp[(1) - (3)].num)), (yyvsp[(3) - (3)].np)->GetValue()); ;}
    break;



/* Line 1464 of yacc.c  */
#line 4391 "tjs.tab.cpp"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1684 of yacc.c  */
#line 1172 "syntax/tjs.y"



}
