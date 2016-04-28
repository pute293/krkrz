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
#line 128 "tjs.tab.cpp"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
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
     T_ASTERISK = 295,
     T_EXCRAMATION = 296,
     T_TILDE = 297,
     T_DECREMENT = 298,
     T_INCREMENT = 299,
     T_NEW = 300,
     T_DELETE = 301,
     T_TYPEOF = 302,
     T_PLUS = 303,
     T_MINUS = 304,
     T_SHARP = 305,
     T_DOLLAR = 306,
     T_ISVALID = 307,
     T_INVALIDATE = 308,
     T_INSTANCEOF = 309,
     T_LPARENTHESIS = 310,
     T_DOT = 311,
     T_LBRACKET = 312,
     T_THIS = 313,
     T_SUPER = 314,
     T_GLOBAL = 315,
     T_RBRACKET = 316,
     T_CLASS = 317,
     T_RPARENTHESIS = 318,
     T_COLON = 319,
     T_SEMICOLON = 320,
     T_LBRACE = 321,
     T_RBRACE = 322,
     T_CONTINUE = 323,
     T_FUNCTION = 324,
     T_ARROW = 325,
     T_DEBUGGER = 326,
     T_DEFAULT = 327,
     T_CASE = 328,
     T_EXTENDS = 329,
     T_FINALLY = 330,
     T_PROPERTY = 331,
     T_PRIVATE = 332,
     T_PUBLIC = 333,
     T_PROTECTED = 334,
     T_STATIC = 335,
     T_RETURN = 336,
     T_BREAK = 337,
     T_EXPORT = 338,
     T_IMPORT = 339,
     T_SWITCH = 340,
     T_IN = 341,
     T_INCONTEXTOF = 342,
     T_FOR = 343,
     T_WHILE = 344,
     T_DO = 345,
     T_IF = 346,
     T_VAR = 347,
     T_CONST = 348,
     T_ENUM = 349,
     T_GOTO = 350,
     T_THROW = 351,
     T_TRY = 352,
     T_SETTER = 353,
     T_GETTER = 354,
     T_ELSE = 355,
     T_CATCH = 356,
     T_OMIT = 357,
     T_SYNCHRONIZED = 358,
     T_WITH = 359,
     T_INT = 360,
     T_REAL = 361,
     T_STRING = 362,
     T_OCTET = 363,
     T_FALSE = 364,
     T_NULL = 365,
     T_TRUE = 366,
     T_VOID = 367,
     T_NAN = 368,
     T_INFINITY = 369,
     T_UPLUS = 370,
     T_UMINUS = 371,
     T_EVAL = 372,
     T_POSTDECREMENT = 373,
     T_POSTINCREMENT = 374,
     T_IGNOREPROP = 375,
     T_PROPACCESS = 376,
     T_ARG = 377,
     T_EXPANDARG = 378,
     T_INLINEARRAY = 379,
     T_ARRAYARG = 380,
     T_INLINEDIC = 381,
     T_DICELM = 382,
     T_WITHDOT = 383,
     T_THIS_PROXY = 384,
     T_WITHDOT_PROXY = 385,
     T_CONSTVAL = 386,
     T_SYMBOL = 387,
     T_REGEXP = 388,
     T_VARIANT = 389
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 60 "syntax/tjs.y"

	tjs_int			num;
	tTJSExprNode *		np;



/* Line 214 of yacc.c  */
#line 305 "tjs.tab.cpp"
} YYSTYPE;
YYLEX_PROTO_DECL

# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 317 "tjs.tab.cpp"

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
#define YYLAST   1809

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  135
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  113
/* YYNRULES -- Number of rules.  */
#define YYNRULES  280
/* YYNRULES -- Number of states.  */
#define YYNSTATES  473

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   389

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
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     6,     9,    10,    13,    17,    19,
      21,    23,    26,    28,    30,    32,    34,    36,    39,    42,
      45,    47,    49,    51,    53,    55,    57,    59,    61,    63,
      65,    66,    71,    72,    73,    81,    82,    83,    84,    95,
      96,    97,   105,   106,   111,   112,   123,   124,   126,   128,
     129,   131,   132,   134,   137,   140,   143,   145,   149,   152,
     157,   158,   161,   164,   167,   170,   173,   176,   177,   184,
     185,   191,   192,   196,   200,   206,   207,   209,   211,   215,
     218,   223,   225,   229,   230,   236,   239,   241,   244,   248,
     250,   251,   258,   260,   262,   265,   268,   269,   277,   278,
     282,   287,   290,   291,   297,   298,   301,   302,   308,   310,
     314,   316,   319,   323,   324,   331,   332,   339,   343,   346,
     347,   353,   355,   359,   364,   368,   370,   372,   376,   378,
     382,   384,   388,   392,   396,   400,   404,   408,   412,   416,
     420,   424,   428,   432,   436,   440,   444,   448,   450,   456,
     458,   462,   464,   468,   470,   474,   476,   480,   482,   486,
     488,   492,   496,   500,   504,   506,   510,   514,   518,   522,
     524,   528,   532,   536,   538,   542,   546,   548,   552,   556,
     560,   563,   566,   568,   571,   574,   577,   580,   583,   586,
     589,   592,   595,   598,   601,   604,   607,   610,   613,   616,
     620,   625,   628,   633,   636,   641,   644,   646,   650,   652,
     656,   661,   663,   664,   669,   672,   675,   678,   679,   683,
     685,   687,   689,   691,   693,   695,   697,   699,   701,   703,
     705,   707,   708,   712,   713,   717,   722,   724,   726,   730,
     731,   733,   735,   737,   738,   743,   745,   749,   750,   752,
     753,   760,   761,   763,   767,   771,   775,   776,   778,   779,
     787,   788,   790,   792,   796,   799,   802,   804,   806,   808,
     810,   811,   820,   821,   823,   827,   832,   837,   841,   845,
     849
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     136,     0,    -1,   137,    -1,    -1,   138,   139,    -1,    -1,
     139,   140,    -1,   139,     1,    65,    -1,   141,    -1,   142,
      -1,    65,    -1,   204,    65,    -1,   151,    -1,   154,    -1,
     144,    -1,   147,    -1,   156,    -1,    82,    65,    -1,    68,
      65,    -1,    71,    65,    -1,   161,    -1,   166,    -1,   179,
      -1,   187,    -1,   193,    -1,   194,    -1,   196,    -1,   198,
      -1,   199,    -1,   202,    -1,    -1,    66,   143,   139,    67,
      -1,    -1,    -1,    89,   145,    55,   204,    63,   146,   140,
      -1,    -1,    -1,    -1,    90,   148,   140,   149,    89,    55,
     204,    63,   150,    65,    -1,    -1,    -1,    91,    55,   152,
     204,   153,    63,   140,    -1,    -1,   151,   100,   155,   140,
      -1,    -1,    88,    55,   157,   158,    65,   159,    65,   160,
      63,   140,    -1,    -1,   162,    -1,   204,    -1,    -1,   204,
      -1,    -1,   204,    -1,   162,    65,    -1,    92,   163,    -1,
      93,   163,    -1,   164,    -1,   163,     3,   164,    -1,   132,
     165,    -1,   132,   165,     4,   203,    -1,    -1,    64,   132,
      -1,    64,   112,    -1,    64,   105,    -1,    64,   106,    -1,
      64,   107,    -1,    64,   108,    -1,    -1,    69,   132,   167,
     170,   165,   142,    -1,    -1,    69,   169,   170,   165,   142,
      -1,    -1,    55,   174,    63,    -1,    55,   171,    63,    -1,
      55,   172,     3,   174,    63,    -1,    -1,   172,    -1,   173,
      -1,   172,     3,   173,    -1,   132,   165,    -1,   132,   165,
       4,   203,    -1,    40,    -1,   132,   165,    40,    -1,    -1,
      70,   176,   177,   165,   178,    -1,   132,   165,    -1,   170,
      -1,    57,    61,    -1,    57,   204,    61,    -1,   142,    -1,
      -1,    76,   132,    66,   180,   181,    67,    -1,   182,    -1,
     184,    -1,   182,   184,    -1,   184,   182,    -1,    -1,    98,
      55,   132,   165,    63,   183,   142,    -1,    -1,   186,   185,
     142,    -1,    99,    55,    63,   165,    -1,    99,   165,    -1,
      -1,    62,   132,   188,   189,   142,    -1,    -1,    74,   203,
      -1,    -1,    74,   203,     3,   190,   191,    -1,   192,    -1,
     191,     3,   192,    -1,   203,    -1,    81,    65,    -1,    81,
     204,    65,    -1,    -1,    85,    55,   204,    63,   195,   142,
      -1,    -1,   104,    55,   204,    63,   197,   140,    -1,    73,
     204,    64,    -1,    72,    64,    -1,    -1,    97,   200,   140,
     201,   140,    -1,   101,    -1,   101,    55,    63,    -1,   101,
      55,   132,    63,    -1,    96,   204,    65,    -1,   206,    -1,
     205,    -1,   205,    91,   204,    -1,   206,    -1,   205,     3,
     206,    -1,   207,    -1,   207,    29,   206,    -1,   207,     4,
     206,    -1,   207,     5,   206,    -1,   207,     6,   206,    -1,
     207,     7,   206,    -1,   207,     8,   206,    -1,   207,     9,
     206,    -1,   207,    10,   206,    -1,   207,    11,   206,    -1,
     207,    12,   206,    -1,   207,    13,   206,    -1,   207,    14,
     206,    -1,   207,    15,   206,    -1,   207,    18,   206,    -1,
     207,    17,   206,    -1,   207,    16,   206,    -1,   208,    -1,
     208,    19,   207,    64,   207,    -1,   209,    -1,   208,    20,
     209,    -1,   210,    -1,   209,    21,   210,    -1,   211,    -1,
     210,    22,   211,    -1,   212,    -1,   211,    23,   212,    -1,
     213,    -1,   212,    24,   213,    -1,   214,    -1,   213,    25,
     214,    -1,   213,    26,   214,    -1,   213,    27,   214,    -1,
     213,    28,   214,    -1,   215,    -1,   214,    30,   215,    -1,
     214,    31,   215,    -1,   214,    32,   215,    -1,   214,    33,
     215,    -1,   216,    -1,   215,    34,   216,    -1,   215,    35,
     216,    -1,   215,    36,   216,    -1,   217,    -1,   216,    48,
     217,    -1,   216,    49,   217,    -1,   219,    -1,   217,    37,
     219,    -1,   217,    38,   219,    -1,   217,    39,   219,    -1,
     218,   219,    -1,   217,    40,    -1,   220,    -1,    41,   219,
      -1,    42,   219,    -1,    43,   219,    -1,    44,   219,    -1,
      45,   227,    -1,    53,   219,    -1,    52,   219,    -1,   220,
      52,    -1,    46,   219,    -1,    47,   219,    -1,    50,   219,
      -1,    51,   219,    -1,    48,   219,    -1,    49,   219,    -1,
      24,   219,    -1,    40,   219,    -1,   220,    54,   219,    -1,
      55,   105,    63,   219,    -1,   105,   219,    -1,    55,   106,
      63,   219,    -1,   106,   219,    -1,    55,   107,    63,   219,
      -1,   107,   219,    -1,   221,    -1,   221,    87,   220,    -1,
     224,    -1,    55,   204,    63,    -1,   221,    57,   204,    61,
      -1,   227,    -1,    -1,   221,    56,   222,   132,    -1,   221,
      44,    -1,   221,    43,    -1,   221,    41,    -1,    -1,    56,
     223,   132,    -1,   131,    -1,   132,    -1,    58,    -1,    59,
      -1,   168,    -1,   175,    -1,    60,    -1,   112,    -1,   230,
      -1,   234,    -1,   239,    -1,   244,    -1,    -1,    11,   225,
     133,    -1,    -1,    38,   226,   133,    -1,   221,    55,   228,
      63,    -1,   102,    -1,   229,    -1,   228,     3,   229,    -1,
      -1,    40,    -1,   218,    -1,   203,    -1,    -1,    57,   231,
     232,    61,    -1,   233,    -1,   232,     3,   233,    -1,    -1,
     203,    -1,    -1,    37,    57,   235,   236,   238,    61,    -1,
      -1,   237,    -1,   236,     3,   237,    -1,   203,     3,   203,
      -1,   132,    64,   203,    -1,    -1,     3,    -1,    -1,    55,
      93,    63,    57,   240,   241,    61,    -1,    -1,   242,    -1,
     243,    -1,   242,     3,   243,    -1,    49,   131,    -1,    48,
     131,    -1,   131,    -1,   112,    -1,   239,    -1,   244,    -1,
      -1,    55,    93,    63,    37,    57,   245,   246,    61,    -1,
      -1,   247,    -1,   246,     3,   247,    -1,   131,     3,    49,
     131,    -1,   131,     3,    48,   131,    -1,   131,     3,   131,
      -1,   131,     3,   112,    -1,   131,     3,   239,    -1,   131,
       3,   244,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   218,   218,   223,   223,   229,   231,   232,   239,   240,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     269,   269,   282,   283,   282,   304,   305,   307,   304,   313,
     314,   313,   320,   320,   340,   340,   349,   351,   352,   357,
     358,   363,   364,   369,   373,   374,   381,   382,   387,   389,
     394,   396,   397,   398,   399,   400,   401,   406,   406,   416,
     416,   429,   431,   432,   433,   437,   439,   443,   444,   448,
     450,   455,   457,   473,   473,   481,   482,   486,   487,   488,
     494,   493,   502,   503,   504,   505,   509,   509,   520,   520,
     529,   530,   536,   536,   543,   545,   546,   546,   551,   552,
     556,   561,   562,   569,   568,   576,   575,   582,   583,   588,
     588,   595,   596,   597,   603,   608,   612,   613,   618,   619,
     624,   625,   626,   627,   628,   629,   630,   631,   632,   633,
     634,   635,   636,   637,   638,   639,   640,   645,   646,   654,
     655,   659,   660,   665,   666,   670,   671,   675,   676,   680,
     681,   682,   683,   684,   688,   689,   690,   691,   692,   696,
     697,   698,   699,   704,   705,   706,   710,   711,   712,   713,
     714,   718,   722,   723,   724,   725,   726,   727,   728,   729,
     730,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,   741,   742,   743,   744,   745,   749,   750,   755,   756,
     757,   758,   759,   759,   763,   764,   765,   766,   766,   774,
     776,   779,   780,   781,   782,   783,   784,   785,   786,   787,
     788,   789,   789,   792,   792,   800,   805,   806,   807,   811,
     812,   813,   814,   820,   820,   829,   830,   835,   836,   841,
     841,   851,   853,   854,   859,   860,   867,   869,   876,   876,
     886,   888,   894,   895,   901,   902,   903,   904,   905,   906,
     911,   911,   923,   925,   926,   931,   932,   933,   934,   935,
     936
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
  "\">>\"", "\"<<\"", "\">>>\"", "\"%\"", "\"/\"", "\"\\\\\"", "\"*\"",
  "\"!\"", "\"~\"", "\"--\"", "\"++\"", "\"new\"", "\"delete\"",
  "\"typeof\"", "\"+\"", "\"-\"", "\"#\"", "\"$\"", "\"isvalid\"",
  "\"invalidate\"", "\"instanceof\"", "\"(\"", "\".\"", "\"[\"",
  "\"this\"", "\"super\"", "\"global\"", "\"]\"", "\"class\"", "\")\"",
  "\":\"", "\";\"", "\"{\"", "\"}\"", "\"continue\"", "\"function\"",
  "\"->\"", "\"debugger\"", "\"default\"", "\"case\"", "\"extends\"",
  "\"finally\"", "\"property\"", "\"private\"", "\"public\"",
  "\"protected\"", "\"static\"", "\"return\"", "\"break\"", "\"export\"",
  "\"import\"", "\"switch\"", "\"in\"", "\"incontextof\"", "\"for\"",
  "\"while\"", "\"do\"", "\"if\"", "\"var\"", "\"const\"", "\"enum\"",
  "\"goto\"", "\"throw\"", "\"try\"", "\"setter\"", "\"getter\"",
  "\"else\"", "\"catch\"", "\"...\"", "\"synchronized\"", "\"with\"",
  "\"int\"", "\"real\"", "\"string\"", "\"octet\"", "\"false\"",
  "\"null\"", "\"true\"", "\"void\"", "\"NaN\"", "\"Infinity\"", "T_UPLUS",
  "T_UMINUS", "T_EVAL", "T_POSTDECREMENT", "T_POSTINCREMENT",
  "T_IGNOREPROP", "T_PROPACCESS", "T_ARG", "T_EXPANDARG", "T_INLINEARRAY",
  "T_ARRAYARG", "T_INLINEDIC", "T_DICELM", "T_WITHDOT", "T_THIS_PROXY",
  "T_WITHDOT_PROXY", "T_CONSTVAL", "T_SYMBOL", "T_REGEXP", "T_VARIANT",
  "$accept", "program", "global_list", "$@1", "def_list",
  "block_or_statement", "statement", "block", "$@2", "while", "$@3", "$@4",
  "do_while", "$@5", "$@6", "$@7", "if", "$@8", "$@9", "if_else", "$@10",
  "for", "$@11", "for_first_clause", "for_second_clause",
  "for_third_clause", "variable_def", "variable_def_inner",
  "variable_id_list", "variable_id", "variable_type", "func_def", "$@12",
  "func_expr_def", "$@13", "func_decl_arg_opt", "func_decl_arg_list",
  "func_decl_arg_at_least_one", "func_decl_arg", "func_decl_arg_collapse",
  "arrow_expr_def", "$@14", "arrow_expr_arg_opt", "arrow_expr_body",
  "property_def", "$@15", "property_handler_def_list",
  "property_handler_setter", "$@16", "property_handler_getter", "$@17",
  "property_getter_handler_head", "class_def", "$@18", "class_extender",
  "$@19", "extends_list", "extends_name", "return", "switch", "$@20",
  "with", "$@21", "case", "try", "$@22", "catch", "throw", "expr_no_comma",
  "expr", "comma_expr", "assign_expr", "cond_expr", "logical_or_expr",
  "logical_and_expr", "inclusive_or_expr", "exclusive_or_expr", "and_expr",
  "identical_expr", "compare_expr", "shift_expr", "add_sub_expr",
  "mul_div_expr", "mul_div_expr_and_asterisk", "unary_expr",
  "incontextof_expr", "priority_expr", "$@23", "$@24", "factor_expr",
  "$@25", "$@26", "func_call_expr", "call_arg_list", "call_arg",
  "inline_array", "$@27", "array_elm_list", "array_elm", "inline_dic",
  "$@28", "dic_elm_list", "dic_elm", "dic_dummy_elm_opt",
  "const_inline_array", "$@29", "const_array_elm_list_opt",
  "const_array_elm_list", "const_array_elm", "const_inline_dic", "$@30",
  "const_dic_elm_list", "const_dic_elm", 0
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
     385,   386,   387,   388,   389
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   135,   136,   138,   137,   139,   139,   139,   140,   140,
     141,   141,   141,   141,   141,   141,   141,   141,   141,   141,
     141,   141,   141,   141,   141,   141,   141,   141,   141,   141,
     143,   142,   145,   146,   144,   148,   149,   150,   147,   152,
     153,   151,   155,   154,   157,   156,   158,   158,   158,   159,
     159,   160,   160,   161,   162,   162,   163,   163,   164,   164,
     165,   165,   165,   165,   165,   165,   165,   167,   166,   169,
     168,   170,   170,   170,   170,   171,   171,   172,   172,   173,
     173,   174,   174,   176,   175,   177,   177,   178,   178,   178,
     180,   179,   181,   181,   181,   181,   183,   182,   185,   184,
     186,   186,   188,   187,   189,   189,   190,   189,   191,   191,
     192,   193,   193,   195,   194,   197,   196,   198,   198,   200,
     199,   201,   201,   201,   202,   203,   204,   204,   205,   205,
     206,   206,   206,   206,   206,   206,   206,   206,   206,   206,
     206,   206,   206,   206,   206,   206,   206,   207,   207,   208,
     208,   209,   209,   210,   210,   211,   211,   212,   212,   213,
     213,   213,   213,   213,   214,   214,   214,   214,   214,   215,
     215,   215,   215,   216,   216,   216,   217,   217,   217,   217,
     217,   218,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   219,   219,   219,   220,   220,   221,   221,
     221,   221,   222,   221,   221,   221,   221,   223,   221,   224,
     224,   224,   224,   224,   224,   224,   224,   224,   224,   224,
     224,   225,   224,   226,   224,   227,   228,   228,   228,   229,
     229,   229,   229,   231,   230,   232,   232,   233,   233,   235,
     234,   236,   236,   236,   237,   237,   238,   238,   240,   239,
     241,   241,   242,   242,   243,   243,   243,   243,   243,   243,
     245,   244,   246,   246,   246,   247,   247,   247,   247,   247,
     247
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,     0,     2,     3,     1,     1,
       1,     2,     1,     1,     1,     1,     1,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     4,     0,     0,     7,     0,     0,     0,    10,     0,
       0,     7,     0,     4,     0,    10,     0,     1,     1,     0,
       1,     0,     1,     2,     2,     2,     1,     3,     2,     4,
       0,     2,     2,     2,     2,     2,     2,     0,     6,     0,
       5,     0,     3,     3,     5,     0,     1,     1,     3,     2,
       4,     1,     3,     0,     5,     2,     1,     2,     3,     1,
       0,     6,     1,     1,     2,     2,     0,     7,     0,     3,
       4,     2,     0,     5,     0,     2,     0,     5,     1,     3,
       1,     2,     3,     0,     6,     0,     6,     3,     2,     0,
       5,     1,     3,     4,     3,     1,     1,     3,     1,     3,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     5,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       2,     2,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     3,
       4,     2,     4,     2,     4,     2,     1,     3,     1,     3,
       4,     1,     0,     4,     2,     2,     2,     0,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     3,     0,     3,     4,     1,     1,     3,     0,
       1,     1,     1,     0,     4,     1,     3,     0,     1,     0,
       6,     0,     1,     3,     3,     3,     0,     1,     0,     7,
       0,     1,     1,     3,     2,     2,     1,     1,     1,     1,
       0,     8,     0,     1,     3,     4,     4,     3,     3,     3,
       3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       3,     0,     2,     5,     1,     0,     0,   231,     0,     0,
     233,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   217,   243,   221,   222,
     225,     0,    10,    30,     0,    69,    83,     0,     0,     0,
       0,     0,     0,     0,     0,    32,    35,     0,     0,     0,
       0,   119,     0,     0,     0,     0,   226,   219,   220,     6,
       8,     9,    14,    15,    12,    13,    16,    20,     0,    21,
     223,   224,    22,    23,    24,    25,    26,    27,    28,    29,
       0,   126,   128,   130,   147,   149,   151,   153,   155,   157,
     159,   164,   169,   173,     0,   176,   182,   206,   208,   211,
     227,   228,   229,   230,     7,     0,    69,   197,   249,     0,
     198,   183,   184,   185,   186,     0,     0,   187,   191,   192,
     195,   196,   193,   194,   189,   188,     0,     0,     0,     0,
       0,     0,   247,   102,     5,    18,    67,    71,    71,    19,
     118,     0,     0,   111,     0,    17,     0,    44,     0,     0,
      39,    60,    54,    56,    55,     0,     0,     0,   201,   203,
     205,    42,    53,    11,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   181,   180,   190,     0,   216,   215,
     214,   239,   212,     0,     0,   232,   251,   234,     0,     0,
       0,     0,   209,   218,   248,   125,     0,   245,   104,     0,
      71,    75,    60,    60,    86,    60,   117,    90,   112,     0,
      46,     0,    36,     0,     0,    58,     0,   124,     0,     0,
       0,   129,   127,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   146,   145,   144,   131,     0,
     150,   152,   154,   156,   158,   160,   161,   162,   163,   165,
     166,   167,   168,   170,   171,   172,   174,   175,   177,   178,
     179,   199,   240,   236,   242,   241,     0,   237,     0,     0,
     207,   220,     0,   256,   252,     0,   258,   200,   202,   204,
     247,   244,     0,     0,    31,    60,    81,    60,     0,    76,
      77,     0,     0,    85,     0,     0,   113,     0,    47,    48,
       0,     0,    40,    63,    64,    65,    66,    62,    61,     0,
      57,   121,     0,   115,    43,     0,   239,   235,   213,   210,
       0,     0,   257,     0,   270,   260,   246,   105,   103,     0,
      79,    73,     0,    72,    70,     0,    89,    84,     0,    60,
       0,    92,    93,    98,     0,    49,    33,     0,     0,    59,
       0,   120,     0,   148,   238,   255,   254,   253,   250,   272,
       0,     0,     0,   267,   266,   268,     0,   261,   262,   269,
     106,    68,     0,    82,    78,     0,    87,     0,     0,     0,
     101,    91,    94,    95,     0,   114,     0,    50,     0,     0,
       0,   122,     0,   116,     0,     0,   273,   265,   264,   259,
       0,     0,    80,    74,    88,    60,    60,    99,    51,    34,
       0,    41,   123,     0,     0,   271,   263,   107,   108,   110,
       0,   100,     0,    52,    37,     0,     0,   278,   277,   279,
     280,   274,     0,    96,     0,     0,   276,   275,   109,     0,
      45,    38,    97
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     3,     5,    59,    60,    61,   134,    62,
     148,   418,    63,   149,   331,   465,    64,   243,   378,    65,
     250,    66,   240,   327,   416,   452,    67,    68,   152,   153,
     245,    69,   230,    70,   137,   232,   318,   319,   320,   321,
      71,   138,   235,   367,    72,   325,   370,   371,   469,   372,
     414,   373,    73,   228,   313,   431,   447,   448,    74,    75,
     374,    76,   382,    77,    78,   156,   342,    79,   224,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,   298,   131,    98,
     105,   109,    99,   296,   297,   100,   132,   226,   227,   101,
     216,   303,   304,   353,   102,   355,   396,   397,   398,   103,
     389,   425,   426
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -346
static const yytype_int16 yypact[] =
{
    -346,    18,  -346,  -346,  -346,   319,   -39,  -346,  1483,   -21,
    -346,  1483,  1483,  1483,  1483,  1483,   182,  1483,  1483,  1483,
    1483,  1483,  1483,  1483,  1483,   707,  -346,  -346,  -346,  -346,
    -346,   -43,  -346,  -346,    31,   -23,  -346,    52,    58,  1483,
      16,   804,    68,    83,    88,  -346,  -346,    89,    17,    17,
    1483,  -346,    95,  1483,  1483,  1483,  -346,  -346,  -346,  -346,
    -346,  -346,  -346,  -346,    53,  -346,  -346,  -346,    87,  -346,
    -346,  -346,  -346,  -346,  -346,  -346,  -346,  -346,  -346,  -346,
      99,     9,  -346,   275,    37,   145,   150,   151,   149,    66,
       1,    90,    71,   131,  1483,  -346,    49,    72,  -346,  -346,
    -346,  -346,  -346,  -346,  -346,    43,  -346,  -346,  -346,    46,
    -346,  -346,  -346,  -346,  -346,   901,   134,   157,  -346,  -346,
    -346,  -346,  -346,  -346,  -346,  -346,   117,   998,  1095,  1192,
     119,    60,  1483,  -346,  -346,  -346,  -346,   140,   -48,  -346,
    -346,   132,   133,  -346,   141,  -346,  1483,  -346,   152,   513,
    -346,   144,   208,  -346,   208,   166,   513,  1483,  -346,  -346,
    -346,  -346,  -346,  -346,  1483,  1483,  1483,  1483,  1483,  1483,
    1483,  1483,  1483,  1483,  1483,  1483,  1483,  1483,  1483,  1483,
    1483,  1483,  1483,  1483,  1483,  1483,  1483,  1483,  1483,  1483,
    1483,  1483,  1483,  1483,  1483,  1483,  1483,  1483,  1483,  1483,
    1483,  1483,  1483,  1483,  -346,  -346,  -346,  1483,  -346,  -346,
    -346,  1289,  -346,  1483,   182,  -346,  1580,  -346,   -28,  1483,
    1483,  1483,  -346,  -346,  -346,  -346,    12,  -346,   158,   416,
     140,   -35,   144,   144,  -346,   144,  -346,  -346,  -346,   170,
     610,  1483,  -346,  1483,    55,   231,    17,  -346,   135,   180,
     513,  -346,  -346,  -346,  -346,  -346,  -346,  -346,  -346,  -346,
    -346,  -346,  -346,  -346,  -346,  -346,  -346,  -346,  -346,   181,
     145,   150,   151,   149,    66,     1,     1,     1,     1,    90,
      90,    90,    90,    71,    71,    71,   131,   131,  -346,  -346,
    -346,  -346,  1483,  -346,  -346,  1483,    20,  -346,   112,   185,
    -346,   183,   245,   246,  -346,   193,  -346,  -346,  -346,  -346,
    1483,  -346,  1483,   187,  -346,   144,  -346,   144,   191,   252,
    -346,   198,   187,  -346,   -38,    32,  -346,   197,  -346,  -346,
     200,   167,  -346,  -346,  -346,  -346,  -346,  -346,  -346,  1483,
    -346,   210,   513,  -346,  -346,  1483,  1677,  -346,  -346,  -346,
    1483,  1483,  1580,   205,  -346,     6,  -346,   264,  -346,   187,
      23,  -346,   -35,  -346,  -346,  1386,  -346,  -346,   213,     3,
     202,   172,   176,  -346,   187,  1483,  -346,   220,   232,  -346,
     -46,  -346,   513,  -346,  -346,  -346,  -346,  -346,  -346,   165,
     168,   169,   204,  -346,  -346,  -346,   237,   298,  -346,  -346,
    -346,  -346,  1483,  -346,  -346,   240,  -346,   244,   174,   247,
    -346,  -346,  -346,  -346,   187,  -346,   242,  -346,   513,  1483,
     513,  -346,   248,  -346,   305,    27,  -346,  -346,  -346,  -346,
       6,  1483,  -346,  -346,  -346,   144,   144,  -346,  1483,  -346,
     249,  -346,  -346,    11,   165,  -346,  -346,   306,  -346,  -346,
     254,  -346,   255,  -346,  -346,   184,   190,  -346,  -346,  -346,
    -346,  -346,  1483,  -346,   513,   257,  -346,  -346,  -346,   187,
    -346,  -346,  -346
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -346,  -346,  -346,  -346,   189,  -148,  -346,  -260,  -346,  -346,
    -346,  -346,  -346,  -346,  -346,  -346,  -346,  -346,  -346,  -346,
    -346,  -346,  -346,  -346,  -346,  -346,  -346,    84,   276,    80,
    -211,  -346,  -346,  -346,  -346,  -125,  -346,  -346,   -34,   -33,
    -346,  -346,  -346,  -346,  -346,  -346,  -346,   -45,  -346,   -40,
    -346,  -346,  -346,  -346,  -346,  -346,  -346,  -130,  -346,  -346,
    -346,  -346,  -346,  -346,  -346,  -346,  -346,  -346,  -205,   -25,
    -346,  -129,  -180,  -346,   153,   154,   156,   148,   155,    14,
      35,   -41,   -64,  -207,    57,   121,   321,  -346,  -346,  -346,
    -346,  -346,   323,  -346,    -2,  -346,  -346,  -346,    36,  -346,
    -346,  -346,    -7,  -346,  -345,  -346,  -346,  -346,   -83,  -335,
    -346,  -346,   -96
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -212
static const yytype_int16 yytable[] =
{
     130,   242,   269,   225,   295,   316,   294,   231,   248,   305,
     395,   302,   164,   234,   141,   310,   144,   421,     4,   365,
     399,   322,   323,   346,   324,   155,   104,   402,    33,   306,
     444,   192,   193,   194,   195,   251,   108,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   358,   390,   391,   182,   183,   409,   455,
     456,   392,   364,   403,   366,   107,   392,   244,   110,   111,
     112,   113,   114,   311,   118,   119,   120,   121,   122,   123,
     124,   125,   225,   347,   233,   395,   422,   225,   445,   133,
     130,   188,   189,   190,   191,   399,   135,   317,   459,   401,
     165,   206,   344,   207,   359,   315,   360,   357,   460,   136,
     158,   159,   160,   208,   415,   209,   210,   139,   393,   199,
     200,   239,   140,   457,   196,   197,   198,   211,   212,   213,
     368,   369,   249,   145,   379,   286,   287,   394,   146,   295,
     252,   294,   458,   147,   150,   385,   386,   302,   142,   151,
     157,   205,   162,   161,   437,   283,   284,   285,   410,   214,
     333,   334,   335,   336,   163,   383,   184,   337,   201,   202,
     203,   204,   185,   187,   186,   208,   215,   209,   210,   217,
     218,   225,   222,   225,   158,   159,   160,   338,   299,   211,
     212,   213,   223,     7,   381,   231,   236,   432,  -211,   237,
    -211,  -211,   275,   276,   277,   278,   238,   241,   244,   472,
     225,   246,  -211,  -211,  -211,   329,   330,   225,   332,     9,
      10,   225,   225,   225,   450,   451,   449,   279,   280,   281,
     282,   247,   312,   326,   423,   339,   341,   115,    26,    27,
      28,    29,    30,   343,   348,   345,   349,   350,   351,   352,
     354,   106,    36,    33,   361,   362,   377,   449,   288,   289,
     290,   363,   375,   376,   291,   380,   388,   400,   408,   411,
     439,   369,   441,   225,   368,   419,   307,   308,   309,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,    56,   420,   424,   126,   429,   427,
     428,   430,   225,   433,   181,   434,   435,   438,   443,   462,
     436,   442,   454,    57,    58,   466,   470,   463,   464,    -4,
       6,   467,   471,   229,   328,   154,   340,   413,   404,   405,
       7,   412,   468,   225,   273,   300,   270,   116,   271,   117,
     407,   272,   274,     8,   384,   387,   356,   446,   461,   110,
     417,     0,   205,     0,     0,     0,     9,    10,     0,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,     0,    25,    26,    27,    28,    29,    30,
       0,    31,     0,     0,    32,    33,     0,    34,    35,    36,
      37,    38,    39,     0,   440,    40,     0,     0,     0,     0,
      41,    42,     0,     0,    43,     0,     0,    44,    45,    46,
      47,    48,    49,   453,     0,    50,    51,     6,     0,     0,
       0,     0,     0,    52,    53,    54,    55,     7,     0,     0,
       0,    56,     0,     0,     0,     0,     0,     0,     0,     0,
       8,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      57,    58,     0,     9,    10,     0,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,    25,    26,    27,    28,    29,    30,     0,    31,     0,
       0,    32,    33,   314,    34,    35,    36,    37,    38,    39,
       0,     0,    40,     0,     0,     0,     0,    41,    42,     0,
       0,    43,     0,     0,    44,    45,    46,    47,    48,    49,
       0,     0,    50,    51,     0,     0,     0,     0,     0,     0,
      52,    53,    54,    55,     7,     0,     0,     0,    56,     0,
       0,     0,     0,     0,     0,     0,     0,     8,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    57,    58,     0,
       9,    10,     0,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,     0,    25,    26,
      27,    28,    29,    30,     0,    31,     0,     0,    32,    33,
       0,    34,    35,    36,    37,    38,    39,     0,     0,    40,
       0,     0,     0,     0,    41,    42,     0,     0,    43,     0,
       0,    44,    45,    46,    47,    48,    49,     0,     0,    50,
      51,     0,     0,     0,     0,     0,     0,    52,    53,    54,
      55,     7,     0,     0,     0,    56,     0,     0,     0,     0,
       0,     0,     0,     0,     8,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    57,    58,     0,     9,    10,     0,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     0,    25,    26,    27,    28,    29,
      30,     0,     0,     0,     0,     0,     0,     0,     0,   106,
      36,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    48,    49,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    53,    54,    55,     7,     0,
       0,     0,    56,     0,     0,     0,     0,     0,     0,     0,
       0,     8,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    57,    58,     0,     9,    10,     0,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,     0,    25,    26,    27,    28,    29,    30,     0,     0,
       0,     0,     0,     0,     0,     0,   106,    36,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     126,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   127,   128,   129,     7,     0,     0,     0,    56,
       0,     0,     0,     0,     0,     0,     0,     0,     8,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    57,    58,
       0,     9,    10,     0,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,     0,    25,
      26,    27,    28,    29,    30,     0,     0,     0,     0,   143,
       0,     0,     0,   106,    36,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    53,
      54,    55,     7,     0,     0,     0,    56,     0,     0,     0,
       0,     0,     0,     0,     0,     8,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    57,    58,     0,     9,    10,
       0,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,     0,    25,    26,    27,    28,
      29,    30,     0,     0,     0,     0,     0,     0,     0,     0,
     106,    36,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   126,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    53,    54,    55,     7,
       0,     0,     0,    56,     0,     0,     0,     0,     0,     0,
       0,     0,     8,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    57,    58,     0,     9,    10,     0,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     0,    25,    26,    27,    28,    29,    30,     0,
       0,   219,     0,     0,     0,     0,     0,   106,    36,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    53,    54,    55,     7,     0,     0,     0,
      56,     0,     0,     0,     0,     0,     0,     0,     0,     8,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    57,
      58,     0,     9,    10,     0,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,     0,
      25,    26,    27,    28,    29,    30,     0,     0,   220,     0,
       0,     0,     0,     0,   106,    36,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      53,    54,    55,     7,     0,     0,     0,    56,     0,     0,
       0,     0,     0,     0,     0,     0,     8,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    57,    58,     0,     9,
      10,     0,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,     0,    25,    26,    27,
      28,    29,    30,     0,     0,   221,     0,     0,     0,     0,
       0,   106,    36,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    53,    54,    55,
       7,     0,     0,     0,    56,     0,     0,     0,     0,     0,
       0,     0,     0,     8,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    57,    58,     0,     9,    10,     0,   292,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,     0,    25,    26,    27,    28,    29,    30,
       0,     0,     0,     0,     0,     0,     0,     0,   106,    36,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   293,     0,     0,    53,    54,    55,     7,     0,     0,
       0,    56,     0,     0,     0,     0,     0,     0,     0,     0,
       8,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      57,    58,     0,     9,    10,     0,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,    25,    26,    27,    28,    29,    30,   406,     0,     0,
       0,     0,     0,     0,     0,   106,    36,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    53,    54,    55,     7,     0,     0,     0,    56,     0,
       0,     0,     0,     0,     0,     0,     0,     8,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    57,    58,     0,
       9,    10,     0,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,     0,    25,    26,
      27,    28,    29,    30,     0,     0,     0,     0,     0,     0,
       0,     0,   106,    36,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    53,    54,
      55,     7,     0,     0,     0,    56,     0,     0,     0,     0,
       0,     0,     0,     0,     8,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    57,    58,     0,     9,    10,     0,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     0,    25,    26,    27,    28,    29,
      30,     0,     0,     0,     0,     0,     0,     0,     0,   106,
      36,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    53,    54,    55,     7,     0,
       0,     0,    56,     0,     0,     0,     0,     0,     0,     0,
       0,     8,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    57,   301,     0,     9,    10,     0,   292,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,     0,    25,    26,    27,    28,    29,    30,     0,     0,
       0,     0,     0,     0,     0,     0,   106,    36,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    53,    54,    55,     0,     0,     0,     0,    56,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    57,    58
};

static const yytype_int16 yycheck[] =
{
      25,   149,   182,   132,   211,    40,   211,    55,   156,    37,
     355,   216,     3,   138,    39,     3,    41,    63,     0,    57,
     355,   232,   233,     3,   235,    50,    65,     4,    66,    57,
       3,    30,    31,    32,    33,   164,    57,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   313,    48,    49,    19,    20,    55,    48,
      49,    55,   322,    40,   324,     8,    55,    64,    11,    12,
      13,    14,    15,    61,    17,    18,    19,    20,    21,    22,
      23,    24,   211,    63,   132,   430,   132,   216,    61,   132,
     115,    25,    26,    27,    28,   430,    65,   132,   443,   359,
      91,    52,   250,    54,   315,   230,   317,   312,   443,   132,
      53,    54,    55,    41,   374,    43,    44,    65,   112,    48,
      49,   146,    64,   112,    34,    35,    36,    55,    56,    57,
      98,    99,   157,    65,   339,   199,   200,   131,    55,   346,
     165,   346,   131,    55,    55,   350,   351,   352,   132,   132,
      55,    94,    65,   100,   414,   196,   197,   198,   369,    87,
     105,   106,   107,   108,    65,   345,    21,   112,    37,    38,
      39,    40,    22,    24,    23,    41,   133,    43,    44,   133,
      63,   310,    63,   312,   127,   128,   129,   132,   213,    55,
      56,    57,   132,    11,   342,    55,    64,   402,    41,    66,
      43,    44,   188,   189,   190,   191,    65,    55,    64,   469,
     339,     3,    55,    56,    57,   240,   241,   346,   243,    37,
      38,   350,   351,   352,   435,   436,   431,   192,   193,   194,
     195,    65,    74,    63,   382,     4,   101,    55,    56,    57,
      58,    59,    60,    63,   132,    64,    61,    64,     3,     3,
      57,    69,    70,    66,    63,     3,    89,   462,   201,   202,
     203,    63,    65,    63,   207,    55,    61,     3,    55,    67,
     418,    99,   420,   402,    98,    55,   219,   220,   221,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,   112,    63,   131,    93,    61,   131,
     131,     3,   431,    63,    29,    61,   132,    65,     3,     3,
      63,    63,    63,   131,   132,   131,   464,    63,    63,     0,
       1,   131,    65,   134,   240,    49,   246,   372,   362,   362,
      11,   371,   462,   462,   186,   214,   183,    16,   184,    16,
     365,   185,   187,    24,   346,   352,   310,   430,   444,   292,
     375,    -1,   295,    -1,    -1,    -1,    37,    38,    -1,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    55,    56,    57,    58,    59,    60,
      -1,    62,    -1,    -1,    65,    66,    -1,    68,    69,    70,
      71,    72,    73,    -1,   419,    76,    -1,    -1,    -1,    -1,
      81,    82,    -1,    -1,    85,    -1,    -1,    88,    89,    90,
      91,    92,    93,   438,    -1,    96,    97,     1,    -1,    -1,
      -1,    -1,    -1,   104,   105,   106,   107,    11,    -1,    -1,
      -1,   112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     131,   132,    -1,    37,    38,    -1,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    55,    56,    57,    58,    59,    60,    -1,    62,    -1,
      -1,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    81,    82,    -1,
      -1,    85,    -1,    -1,    88,    89,    90,    91,    92,    93,
      -1,    -1,    96,    97,    -1,    -1,    -1,    -1,    -1,    -1,
     104,   105,   106,   107,    11,    -1,    -1,    -1,   112,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,   132,    -1,
      37,    38,    -1,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    55,    56,
      57,    58,    59,    60,    -1,    62,    -1,    -1,    65,    66,
      -1,    68,    69,    70,    71,    72,    73,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    85,    -1,
      -1,    88,    89,    90,    91,    92,    93,    -1,    -1,    96,
      97,    -1,    -1,    -1,    -1,    -1,    -1,   104,   105,   106,
     107,    11,    -1,    -1,    -1,   112,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   131,   132,    -1,    37,    38,    -1,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    55,    56,    57,    58,    59,
      60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    92,    93,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   105,   106,   107,    11,    -1,
      -1,    -1,   112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   131,   132,    -1,    37,    38,    -1,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    55,    56,    57,    58,    59,    60,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   105,   106,   107,    11,    -1,    -1,    -1,   112,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,   132,
      -1,    37,    38,    -1,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    55,
      56,    57,    58,    59,    60,    -1,    -1,    -1,    -1,    65,
      -1,    -1,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,
     106,   107,    11,    -1,    -1,    -1,   112,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   131,   132,    -1,    37,    38,
      -1,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    55,    56,    57,    58,
      59,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    93,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   105,   106,   107,    11,
      -1,    -1,    -1,   112,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   131,   132,    -1,    37,    38,    -1,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    55,    56,    57,    58,    59,    60,    -1,
      -1,    63,    -1,    -1,    -1,    -1,    -1,    69,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   105,   106,   107,    11,    -1,    -1,    -1,
     112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,
     132,    -1,    37,    38,    -1,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      55,    56,    57,    58,    59,    60,    -1,    -1,    63,    -1,
      -1,    -1,    -1,    -1,    69,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     105,   106,   107,    11,    -1,    -1,    -1,   112,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   131,   132,    -1,    37,
      38,    -1,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    55,    56,    57,
      58,    59,    60,    -1,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,   106,   107,
      11,    -1,    -1,    -1,   112,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   131,   132,    -1,    37,    38,    -1,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    55,    56,    57,    58,    59,    60,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   102,    -1,    -1,   105,   106,   107,    11,    -1,    -1,
      -1,   112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     131,   132,    -1,    37,    38,    -1,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    55,    56,    57,    58,    59,    60,    61,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   105,   106,   107,    11,    -1,    -1,    -1,   112,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,   132,    -1,
      37,    38,    -1,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    55,    56,
      57,    58,    59,    60,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,   106,
     107,    11,    -1,    -1,    -1,   112,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   131,   132,    -1,    37,    38,    -1,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    55,    56,    57,    58,    59,
      60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   105,   106,   107,    11,    -1,
      -1,    -1,   112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   131,   132,    -1,    37,    38,    -1,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    55,    56,    57,    58,    59,    60,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   105,   106,   107,    -1,    -1,    -1,    -1,   112,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,   132
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   136,   137,   138,     0,   139,     1,    11,    24,    37,
      38,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    55,    56,    57,    58,    59,
      60,    62,    65,    66,    68,    69,    70,    71,    72,    73,
      76,    81,    82,    85,    88,    89,    90,    91,    92,    93,
      96,    97,   104,   105,   106,   107,   112,   131,   132,   140,
     141,   142,   144,   147,   151,   154,   156,   161,   162,   166,
     168,   175,   179,   187,   193,   194,   196,   198,   199,   202,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   224,   227,
     230,   234,   239,   244,    65,   225,    69,   219,    57,   226,
     219,   219,   219,   219,   219,    55,   221,   227,   219,   219,
     219,   219,   219,   219,   219,   219,    93,   105,   106,   107,
     204,   223,   231,   132,   143,    65,   132,   169,   176,    65,
      64,   204,   132,    65,   204,    65,    55,    55,   145,   148,
      55,   132,   163,   164,   163,   204,   200,    55,   219,   219,
     219,   100,    65,    65,     3,    91,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    29,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    30,    31,    32,    33,    34,    35,    36,    48,
      49,    37,    38,    39,    40,   219,    52,    54,    41,    43,
      44,    55,    56,    57,    87,   133,   235,   133,    63,    63,
      63,    63,    63,   132,   203,   206,   232,   233,   188,   139,
     167,    55,   170,   132,   170,   177,    64,    66,    65,   204,
     157,    55,   140,   152,    64,   165,     3,    65,   140,   204,
     155,   206,   204,   206,   206,   206,   206,   206,   206,   206,
     206,   206,   206,   206,   206,   206,   206,   206,   206,   207,
     209,   210,   211,   212,   213,   214,   214,   214,   214,   215,
     215,   215,   215,   216,   216,   216,   217,   217,   219,   219,
     219,   219,    40,   102,   203,   218,   228,   229,   222,   204,
     220,   132,   203,   236,   237,    37,    57,   219,   219,   219,
       3,    61,    74,   189,    67,   170,    40,   132,   171,   172,
     173,   174,   165,   165,   165,   180,    63,   158,   162,   204,
     204,   149,   204,   105,   106,   107,   108,   112,   132,     4,
     164,   101,   201,    63,   140,    64,     3,    63,   132,    61,
      64,     3,     3,   238,    57,   240,   233,   203,   142,   165,
     165,    63,     3,    63,   142,    57,   142,   178,    98,    99,
     181,   182,   184,   186,   195,    65,    63,    89,   153,   203,
      55,   140,   197,   207,   229,   203,   203,   237,    61,   245,
      48,    49,    55,   112,   131,   239,   241,   242,   243,   244,
       3,   142,     4,    40,   173,   174,    61,   204,    55,    55,
     165,    67,   184,   182,   185,   142,   159,   204,   146,    55,
      63,    63,   132,   140,   131,   246,   247,   131,   131,    61,
       3,   190,   203,    63,    61,   132,    63,   142,    65,   140,
     204,   140,    63,     3,     3,    61,   243,   191,   192,   203,
     165,   165,   160,   204,    63,    48,    49,   112,   131,   239,
     244,   247,     3,    63,    63,   150,   131,   131,   192,   183,
     140,    65,   142
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
#line 223 "syntax/tjs.y"
    { sb->PushContextStack(TJS_W("global"),
												ctTopLevel); ;}
    break;

  case 4:

/* Line 1464 of yacc.c  */
#line 225 "syntax/tjs.y"
    { sb->PopContextStack(); ;}
    break;

  case 7:

/* Line 1464 of yacc.c  */
#line 232 "syntax/tjs.y"
    { if(sb->CompileErrorCount>20)
												YYABORT;
											  else yyerrok; ;}
    break;

  case 11:

/* Line 1464 of yacc.c  */
#line 246 "syntax/tjs.y"
    { cc->CreateExprCode((yyvsp[(1) - (2)].np)); ;}
    break;

  case 17:

/* Line 1464 of yacc.c  */
#line 252 "syntax/tjs.y"
    { cc->DoBreak(); ;}
    break;

  case 18:

/* Line 1464 of yacc.c  */
#line 253 "syntax/tjs.y"
    { cc->DoContinue(); ;}
    break;

  case 19:

/* Line 1464 of yacc.c  */
#line 254 "syntax/tjs.y"
    { cc->DoDebugger(); ;}
    break;

  case 30:

/* Line 1464 of yacc.c  */
#line 269 "syntax/tjs.y"
    { cc->EnterBlock(); ;}
    break;

  case 31:

/* Line 1464 of yacc.c  */
#line 271 "syntax/tjs.y"
    { cc->ExitBlock(); ;}
    break;

  case 32:

/* Line 1464 of yacc.c  */
#line 282 "syntax/tjs.y"
    { cc->EnterForCode(); ;}
    break;

  case 33:

/* Line 1464 of yacc.c  */
#line 283 "syntax/tjs.y"
    { cc->CreateForExprCode((yyvsp[(4) - (5)].np));
											  cc->SetForThirdExprCode(NULL); ;}
    break;

  case 34:

/* Line 1464 of yacc.c  */
#line 285 "syntax/tjs.y"
    { cc->ExitForCode(); ;}
    break;

  case 35:

/* Line 1464 of yacc.c  */
#line 304 "syntax/tjs.y"
    { cc->EnterDoWhileCode(); cc->EnterBlock(); ;}
    break;

  case 36:

/* Line 1464 of yacc.c  */
#line 305 "syntax/tjs.y"
    { cc->ExitBlock(); ;}
    break;

  case 37:

/* Line 1464 of yacc.c  */
#line 307 "syntax/tjs.y"
    { cc->CreateDoWhileExprCode((yyvsp[(7) - (8)].np)); ;}
    break;

  case 38:

/* Line 1464 of yacc.c  */
#line 308 "syntax/tjs.y"
    { cc->ExitDoWhileCode(); ;}
    break;

  case 39:

/* Line 1464 of yacc.c  */
#line 313 "syntax/tjs.y"
    { cc->EnterIfCode(); ;}
    break;

  case 40:

/* Line 1464 of yacc.c  */
#line 314 "syntax/tjs.y"
    { cc->CreateIfExprCode((yyvsp[(4) - (4)].np)); ;}
    break;

  case 41:

/* Line 1464 of yacc.c  */
#line 315 "syntax/tjs.y"
    { cc->ExitIfCode(); ;}
    break;

  case 42:

/* Line 1464 of yacc.c  */
#line 320 "syntax/tjs.y"
    { cc->EnterElseCode(); ;}
    break;

  case 43:

/* Line 1464 of yacc.c  */
#line 321 "syntax/tjs.y"
    { cc->ExitElseCode(); ;}
    break;

  case 44:

/* Line 1464 of yacc.c  */
#line 340 "syntax/tjs.y"
    { cc->EnterForCode(); ;}
    break;

  case 45:

/* Line 1464 of yacc.c  */
#line 344 "syntax/tjs.y"
    { cc->ExitForCode(); ;}
    break;

  case 48:

/* Line 1464 of yacc.c  */
#line 352 "syntax/tjs.y"
    { cc->CreateExprCode((yyvsp[(1) - (1)].np)); ;}
    break;

  case 49:

/* Line 1464 of yacc.c  */
#line 357 "syntax/tjs.y"
    { cc->CreateForExprCode(NULL); ;}
    break;

  case 50:

/* Line 1464 of yacc.c  */
#line 358 "syntax/tjs.y"
    { cc->CreateForExprCode((yyvsp[(1) - (1)].np)); ;}
    break;

  case 51:

/* Line 1464 of yacc.c  */
#line 363 "syntax/tjs.y"
    { cc->SetForThirdExprCode(NULL); ;}
    break;

  case 52:

/* Line 1464 of yacc.c  */
#line 364 "syntax/tjs.y"
    { cc->SetForThirdExprCode((yyvsp[(1) - (1)].np)); ;}
    break;

  case 58:

/* Line 1464 of yacc.c  */
#line 387 "syntax/tjs.y"
    { cc->AddLocalVariable(
												lx->GetString((yyvsp[(1) - (2)].num))); ;}
    break;

  case 59:

/* Line 1464 of yacc.c  */
#line 389 "syntax/tjs.y"
    { cc->InitLocalVariable(
											  lx->GetString((yyvsp[(1) - (4)].num)), (yyvsp[(4) - (4)].np)); ;}
    break;

  case 67:

/* Line 1464 of yacc.c  */
#line 406 "syntax/tjs.y"
    { sb->PushContextStack(
												lx->GetString((yyvsp[(2) - (2)].num)),
											  ctFunction);
											  cc->EnterBlock();;}
    break;

  case 68:

/* Line 1464 of yacc.c  */
#line 411 "syntax/tjs.y"
    { cc->ExitBlock(); sb->PopContextStack(); ;}
    break;

  case 69:

/* Line 1464 of yacc.c  */
#line 416 "syntax/tjs.y"
    { sb->PushContextStack(
												TJS_W("(anonymous)"),
											  ctExprFunction);
											  cc->EnterBlock(); ;}
    break;

  case 70:

/* Line 1464 of yacc.c  */
#line 421 "syntax/tjs.y"
    { cc->ExitBlock();
											  tTJSVariant v(cc);
											  sb->PopContextStack();
											  (yyval.np) = cc->MakeNP0(T_CONSTVAL);
											  (yyval.np)->SetValue(v); ;}
    break;

  case 79:

/* Line 1464 of yacc.c  */
#line 448 "syntax/tjs.y"
    { cc->AddFunctionDeclArg(
												lx->GetString((yyvsp[(1) - (2)].num)), NULL); ;}
    break;

  case 80:

/* Line 1464 of yacc.c  */
#line 450 "syntax/tjs.y"
    { cc->AddFunctionDeclArg(
												lx->GetString((yyvsp[(1) - (4)].num)), (yyvsp[(4) - (4)].np)); ;}
    break;

  case 81:

/* Line 1464 of yacc.c  */
#line 455 "syntax/tjs.y"
    { cc->AddFunctionDeclArgCollapse(
												NULL); ;}
    break;

  case 82:

/* Line 1464 of yacc.c  */
#line 457 "syntax/tjs.y"
    { cc->AddFunctionDeclArgCollapse(
												lx->GetString((yyvsp[(1) - (3)].num))); ;}
    break;

  case 83:

/* Line 1464 of yacc.c  */
#line 473 "syntax/tjs.y"
    { sb->PushContextStack(TJS_W("(anonymous)"), ctExprFunction); cc->EnterBlock(); ;}
    break;

  case 84:

/* Line 1464 of yacc.c  */
#line 477 "syntax/tjs.y"
    { cc->ExitBlock(); tTJSVariant v(cc); sb->PopContextStack(); (yyval.np) = cc->MakeNP0(T_CONSTVAL); (yyval.np)->SetValue(v); ;}
    break;

  case 85:

/* Line 1464 of yacc.c  */
#line 481 "syntax/tjs.y"
    { cc->AddFunctionDeclArg(lx->GetString((yyvsp[(1) - (2)].num)), NULL); ;}
    break;

  case 87:

/* Line 1464 of yacc.c  */
#line 486 "syntax/tjs.y"
    { cc->ReturnFromFunc(NULL); ;}
    break;

  case 88:

/* Line 1464 of yacc.c  */
#line 487 "syntax/tjs.y"
    { cc->ReturnFromFunc((yyvsp[(2) - (3)].np)); ;}
    break;

  case 90:

/* Line 1464 of yacc.c  */
#line 494 "syntax/tjs.y"
    { sb->PushContextStack(
												lx->GetString((yyvsp[(2) - (3)].num)),
												ctProperty); ;}
    break;

  case 91:

/* Line 1464 of yacc.c  */
#line 498 "syntax/tjs.y"
    { sb->PopContextStack(); ;}
    break;

  case 96:

/* Line 1464 of yacc.c  */
#line 509 "syntax/tjs.y"
    { sb->PushContextStack(
												TJS_W("(setter)"),
												ctPropertySetter);
											  cc->EnterBlock();
											  cc->SetPropertyDeclArg(
												lx->GetString((yyvsp[(3) - (5)].num))); ;}
    break;

  case 97:

/* Line 1464 of yacc.c  */
#line 515 "syntax/tjs.y"
    { cc->ExitBlock();
											  sb->PopContextStack(); ;}
    break;

  case 98:

/* Line 1464 of yacc.c  */
#line 520 "syntax/tjs.y"
    { sb->PushContextStack(
												TJS_W("(getter)"),
												ctPropertyGetter);
											  cc->EnterBlock(); ;}
    break;

  case 99:

/* Line 1464 of yacc.c  */
#line 524 "syntax/tjs.y"
    { cc->ExitBlock();
											  sb->PopContextStack(); ;}
    break;

  case 102:

/* Line 1464 of yacc.c  */
#line 536 "syntax/tjs.y"
    { sb->PushContextStack(
												lx->GetString((yyvsp[(2) - (2)].num)),
												ctClass); ;}
    break;

  case 103:

/* Line 1464 of yacc.c  */
#line 540 "syntax/tjs.y"
    { sb->PopContextStack(); ;}
    break;

  case 105:

/* Line 1464 of yacc.c  */
#line 545 "syntax/tjs.y"
    { cc->CreateExtendsExprCode((yyvsp[(2) - (2)].np), true); ;}
    break;

  case 106:

/* Line 1464 of yacc.c  */
#line 546 "syntax/tjs.y"
    { cc->CreateExtendsExprCode((yyvsp[(2) - (3)].np), false); ;}
    break;

  case 110:

/* Line 1464 of yacc.c  */
#line 556 "syntax/tjs.y"
    { cc->CreateExtendsExprCode((yyvsp[(1) - (1)].np), false); ;}
    break;

  case 111:

/* Line 1464 of yacc.c  */
#line 561 "syntax/tjs.y"
    { cc->ReturnFromFunc(NULL); ;}
    break;

  case 112:

/* Line 1464 of yacc.c  */
#line 562 "syntax/tjs.y"
    { cc->ReturnFromFunc((yyvsp[(2) - (3)].np)); ;}
    break;

  case 113:

/* Line 1464 of yacc.c  */
#line 569 "syntax/tjs.y"
    { cc->EnterSwitchCode((yyvsp[(3) - (4)].np)); ;}
    break;

  case 114:

/* Line 1464 of yacc.c  */
#line 570 "syntax/tjs.y"
    { cc->ExitSwitchCode(); ;}
    break;

  case 115:

/* Line 1464 of yacc.c  */
#line 576 "syntax/tjs.y"
    { cc->EnterWithCode((yyvsp[(3) - (4)].np)); ;}
    break;

  case 116:

/* Line 1464 of yacc.c  */
#line 577 "syntax/tjs.y"
    { cc->ExitWithCode(); ;}
    break;

  case 117:

/* Line 1464 of yacc.c  */
#line 582 "syntax/tjs.y"
    { cc->ProcessCaseCode((yyvsp[(2) - (3)].np)); ;}
    break;

  case 118:

/* Line 1464 of yacc.c  */
#line 583 "syntax/tjs.y"
    { cc->ProcessCaseCode(NULL); ;}
    break;

  case 119:

/* Line 1464 of yacc.c  */
#line 588 "syntax/tjs.y"
    { cc->EnterTryCode(); ;}
    break;

  case 120:

/* Line 1464 of yacc.c  */
#line 591 "syntax/tjs.y"
    { cc->ExitTryCode(); ;}
    break;

  case 121:

/* Line 1464 of yacc.c  */
#line 595 "syntax/tjs.y"
    { cc->EnterCatchCode(NULL); ;}
    break;

  case 122:

/* Line 1464 of yacc.c  */
#line 596 "syntax/tjs.y"
    { cc->EnterCatchCode(NULL); ;}
    break;

  case 123:

/* Line 1464 of yacc.c  */
#line 597 "syntax/tjs.y"
    { cc->EnterCatchCode(
												lx->GetString((yyvsp[(3) - (4)].num))); ;}
    break;

  case 124:

/* Line 1464 of yacc.c  */
#line 603 "syntax/tjs.y"
    { cc->ProcessThrowCode((yyvsp[(2) - (3)].np)); ;}
    break;

  case 125:

/* Line 1464 of yacc.c  */
#line 608 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 126:

/* Line 1464 of yacc.c  */
#line 612 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 127:

/* Line 1464 of yacc.c  */
#line 613 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_IF, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 128:

/* Line 1464 of yacc.c  */
#line 618 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 129:

/* Line 1464 of yacc.c  */
#line 619 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_COMMA, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 130:

/* Line 1464 of yacc.c  */
#line 624 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 131:

/* Line 1464 of yacc.c  */
#line 625 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_SWAP, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 132:

/* Line 1464 of yacc.c  */
#line 626 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_EQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 133:

/* Line 1464 of yacc.c  */
#line 627 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_AMPERSANDEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 134:

/* Line 1464 of yacc.c  */
#line 628 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_VERTLINEEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 135:

/* Line 1464 of yacc.c  */
#line 629 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_CHEVRONEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 136:

/* Line 1464 of yacc.c  */
#line 630 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_MINUSEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 137:

/* Line 1464 of yacc.c  */
#line 631 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_PLUSEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 138:

/* Line 1464 of yacc.c  */
#line 632 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_PERCENTEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 139:

/* Line 1464 of yacc.c  */
#line 633 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_SLASHEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 140:

/* Line 1464 of yacc.c  */
#line 634 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_BACKSLASHEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 141:

/* Line 1464 of yacc.c  */
#line 635 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_ASTERISKEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 142:

/* Line 1464 of yacc.c  */
#line 636 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_LOGICALOREQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 143:

/* Line 1464 of yacc.c  */
#line 637 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_LOGICALANDEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 144:

/* Line 1464 of yacc.c  */
#line 638 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_RARITHSHIFTEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 145:

/* Line 1464 of yacc.c  */
#line 639 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_LARITHSHIFTEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 146:

/* Line 1464 of yacc.c  */
#line 640 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_RBITSHIFTEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 147:

/* Line 1464 of yacc.c  */
#line 645 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 148:

/* Line 1464 of yacc.c  */
#line 648 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP3(T_QUESTION, (yyvsp[(1) - (5)].np), (yyvsp[(3) - (5)].np), (yyvsp[(5) - (5)].np)); ;}
    break;

  case 149:

/* Line 1464 of yacc.c  */
#line 654 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 150:

/* Line 1464 of yacc.c  */
#line 655 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_LOGICALOR, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 151:

/* Line 1464 of yacc.c  */
#line 659 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 152:

/* Line 1464 of yacc.c  */
#line 661 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_LOGICALAND, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 153:

/* Line 1464 of yacc.c  */
#line 665 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 154:

/* Line 1464 of yacc.c  */
#line 666 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_VERTLINE, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 155:

/* Line 1464 of yacc.c  */
#line 670 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 156:

/* Line 1464 of yacc.c  */
#line 671 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_CHEVRON, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 157:

/* Line 1464 of yacc.c  */
#line 675 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 158:

/* Line 1464 of yacc.c  */
#line 676 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_AMPERSAND, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 159:

/* Line 1464 of yacc.c  */
#line 680 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 160:

/* Line 1464 of yacc.c  */
#line 681 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_NOTEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 161:

/* Line 1464 of yacc.c  */
#line 682 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_EQUALEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 162:

/* Line 1464 of yacc.c  */
#line 683 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_DISCNOTEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 163:

/* Line 1464 of yacc.c  */
#line 684 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_DISCEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 164:

/* Line 1464 of yacc.c  */
#line 688 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 165:

/* Line 1464 of yacc.c  */
#line 689 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_LT, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 166:

/* Line 1464 of yacc.c  */
#line 690 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_GT, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 167:

/* Line 1464 of yacc.c  */
#line 691 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_LTOREQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 168:

/* Line 1464 of yacc.c  */
#line 692 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_GTOREQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 169:

/* Line 1464 of yacc.c  */
#line 696 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 170:

/* Line 1464 of yacc.c  */
#line 697 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_RARITHSHIFT, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 171:

/* Line 1464 of yacc.c  */
#line 698 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_LARITHSHIFT, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 172:

/* Line 1464 of yacc.c  */
#line 699 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_RBITSHIFT, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 173:

/* Line 1464 of yacc.c  */
#line 704 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 174:

/* Line 1464 of yacc.c  */
#line 705 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_PLUS, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 175:

/* Line 1464 of yacc.c  */
#line 706 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_MINUS, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 176:

/* Line 1464 of yacc.c  */
#line 710 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 177:

/* Line 1464 of yacc.c  */
#line 711 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_PERCENT, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 178:

/* Line 1464 of yacc.c  */
#line 712 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_SLASH, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 179:

/* Line 1464 of yacc.c  */
#line 713 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_BACKSLASH, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 180:

/* Line 1464 of yacc.c  */
#line 714 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_ASTERISK, (yyvsp[(1) - (2)].np), (yyvsp[(2) - (2)].np)); ;}
    break;

  case 181:

/* Line 1464 of yacc.c  */
#line 718 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (2)].np); ;}
    break;

  case 182:

/* Line 1464 of yacc.c  */
#line 722 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 183:

/* Line 1464 of yacc.c  */
#line 723 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_EXCRAMATION, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 184:

/* Line 1464 of yacc.c  */
#line 724 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_TILDE, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 185:

/* Line 1464 of yacc.c  */
#line 725 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_DECREMENT, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 186:

/* Line 1464 of yacc.c  */
#line 726 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_INCREMENT, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 187:

/* Line 1464 of yacc.c  */
#line 727 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(2) - (2)].np); (yyval.np)->SetOpecode(T_NEW); ;}
    break;

  case 188:

/* Line 1464 of yacc.c  */
#line 728 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_INVALIDATE, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 189:

/* Line 1464 of yacc.c  */
#line 729 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_ISVALID, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 190:

/* Line 1464 of yacc.c  */
#line 730 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_ISVALID, (yyvsp[(1) - (2)].np)); ;}
    break;

  case 191:

/* Line 1464 of yacc.c  */
#line 731 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_DELETE, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 192:

/* Line 1464 of yacc.c  */
#line 732 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_TYPEOF, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 193:

/* Line 1464 of yacc.c  */
#line 733 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_SHARP, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 194:

/* Line 1464 of yacc.c  */
#line 734 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_DOLLAR, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 195:

/* Line 1464 of yacc.c  */
#line 735 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_UPLUS, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 196:

/* Line 1464 of yacc.c  */
#line 736 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_UMINUS, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 197:

/* Line 1464 of yacc.c  */
#line 737 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_IGNOREPROP, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 198:

/* Line 1464 of yacc.c  */
#line 738 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_PROPACCESS, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 199:

/* Line 1464 of yacc.c  */
#line 739 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_INSTANCEOF, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 200:

/* Line 1464 of yacc.c  */
#line 740 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_INT, (yyvsp[(4) - (4)].np)); ;}
    break;

  case 201:

/* Line 1464 of yacc.c  */
#line 741 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_INT, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 202:

/* Line 1464 of yacc.c  */
#line 742 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_REAL, (yyvsp[(4) - (4)].np)); ;}
    break;

  case 203:

/* Line 1464 of yacc.c  */
#line 743 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_REAL, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 204:

/* Line 1464 of yacc.c  */
#line 744 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_STRING, (yyvsp[(4) - (4)].np)); ;}
    break;

  case 205:

/* Line 1464 of yacc.c  */
#line 745 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_STRING, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 206:

/* Line 1464 of yacc.c  */
#line 749 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 207:

/* Line 1464 of yacc.c  */
#line 751 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_INCONTEXTOF, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 208:

/* Line 1464 of yacc.c  */
#line 755 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 209:

/* Line 1464 of yacc.c  */
#line 756 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(2) - (3)].np); ;}
    break;

  case 210:

/* Line 1464 of yacc.c  */
#line 757 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_LBRACKET, (yyvsp[(1) - (4)].np), (yyvsp[(3) - (4)].np)); ;}
    break;

  case 211:

/* Line 1464 of yacc.c  */
#line 758 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 212:

/* Line 1464 of yacc.c  */
#line 759 "syntax/tjs.y"
    { lx->SetNextIsBareWord(); ;}
    break;

  case 213:

/* Line 1464 of yacc.c  */
#line 760 "syntax/tjs.y"
    { tTJSExprNode * node = cc->MakeNP0(T_CONSTVAL);
												  node->SetValue(lx->GetValue((yyvsp[(4) - (4)].num)));
												  (yyval.np) = cc->MakeNP2(T_DOT, (yyvsp[(1) - (4)].np), node); ;}
    break;

  case 214:

/* Line 1464 of yacc.c  */
#line 763 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_POSTINCREMENT, (yyvsp[(1) - (2)].np)); ;}
    break;

  case 215:

/* Line 1464 of yacc.c  */
#line 764 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_POSTDECREMENT, (yyvsp[(1) - (2)].np)); ;}
    break;

  case 216:

/* Line 1464 of yacc.c  */
#line 765 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_EVAL, (yyvsp[(1) - (2)].np)); ;}
    break;

  case 217:

/* Line 1464 of yacc.c  */
#line 766 "syntax/tjs.y"
    { lx->SetNextIsBareWord(); ;}
    break;

  case 218:

/* Line 1464 of yacc.c  */
#line 767 "syntax/tjs.y"
    { tTJSExprNode * node = cc->MakeNP0(T_CONSTVAL);
												  node->SetValue(lx->GetValue((yyvsp[(3) - (3)].num)));
												  (yyval.np) = cc->MakeNP1(T_WITHDOT, node); ;}
    break;

  case 219:

/* Line 1464 of yacc.c  */
#line 774 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP0(T_CONSTVAL);
												  (yyval.np)->SetValue(lx->GetValue((yyvsp[(1) - (1)].num))); ;}
    break;

  case 220:

/* Line 1464 of yacc.c  */
#line 776 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP0(T_SYMBOL);
												  (yyval.np)->SetValue(tTJSVariant(
													lx->GetString((yyvsp[(1) - (1)].num)))); ;}
    break;

  case 221:

/* Line 1464 of yacc.c  */
#line 779 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP0(T_THIS); ;}
    break;

  case 222:

/* Line 1464 of yacc.c  */
#line 780 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP0(T_SUPER); ;}
    break;

  case 223:

/* Line 1464 of yacc.c  */
#line 781 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 224:

/* Line 1464 of yacc.c  */
#line 782 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 225:

/* Line 1464 of yacc.c  */
#line 783 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP0(T_GLOBAL); ;}
    break;

  case 226:

/* Line 1464 of yacc.c  */
#line 784 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP0(T_VOID); ;}
    break;

  case 227:

/* Line 1464 of yacc.c  */
#line 785 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 228:

/* Line 1464 of yacc.c  */
#line 786 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 229:

/* Line 1464 of yacc.c  */
#line 787 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 230:

/* Line 1464 of yacc.c  */
#line 788 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 231:

/* Line 1464 of yacc.c  */
#line 789 "syntax/tjs.y"
    { lx->SetStartOfRegExp(); ;}
    break;

  case 232:

/* Line 1464 of yacc.c  */
#line 790 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP0(T_REGEXP);
												  (yyval.np)->SetValue(lx->GetValue((yyvsp[(3) - (3)].num))); ;}
    break;

  case 233:

/* Line 1464 of yacc.c  */
#line 792 "syntax/tjs.y"
    { lx->SetStartOfRegExp(); ;}
    break;

  case 234:

/* Line 1464 of yacc.c  */
#line 793 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP0(T_REGEXP);
												  (yyval.np)->SetValue(lx->GetValue((yyvsp[(3) - (3)].num))); ;}
    break;

  case 235:

/* Line 1464 of yacc.c  */
#line 800 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_LPARENTHESIS, (yyvsp[(1) - (4)].np), (yyvsp[(3) - (4)].np)); ;}
    break;

  case 236:

/* Line 1464 of yacc.c  */
#line 805 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP0(T_OMIT); ;}
    break;

  case 237:

/* Line 1464 of yacc.c  */
#line 806 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_ARG, (yyvsp[(1) - (1)].np)); ;}
    break;

  case 238:

/* Line 1464 of yacc.c  */
#line 807 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_ARG, (yyvsp[(3) - (3)].np), (yyvsp[(1) - (3)].np)); ;}
    break;

  case 239:

/* Line 1464 of yacc.c  */
#line 811 "syntax/tjs.y"
    { (yyval.np) = NULL; ;}
    break;

  case 240:

/* Line 1464 of yacc.c  */
#line 812 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_EXPANDARG, NULL); ;}
    break;

  case 241:

/* Line 1464 of yacc.c  */
#line 813 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_EXPANDARG, (yyvsp[(1) - (1)].np)); ;}
    break;

  case 242:

/* Line 1464 of yacc.c  */
#line 814 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 243:

/* Line 1464 of yacc.c  */
#line 820 "syntax/tjs.y"
    { tTJSExprNode *node =
										  cc->MakeNP0(T_INLINEARRAY);
										  cc->PushCurrentNode(node); ;}
    break;

  case 244:

/* Line 1464 of yacc.c  */
#line 824 "syntax/tjs.y"
    { (yyval.np) = cn; cc->PopCurrentNode(); ;}
    break;

  case 245:

/* Line 1464 of yacc.c  */
#line 829 "syntax/tjs.y"
    { cn->Add((yyvsp[(1) - (1)].np)); ;}
    break;

  case 246:

/* Line 1464 of yacc.c  */
#line 830 "syntax/tjs.y"
    { cn->Add((yyvsp[(3) - (3)].np)); ;}
    break;

  case 247:

/* Line 1464 of yacc.c  */
#line 835 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_ARRAYARG, NULL); ;}
    break;

  case 248:

/* Line 1464 of yacc.c  */
#line 836 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_ARRAYARG, (yyvsp[(1) - (1)].np)); ;}
    break;

  case 249:

/* Line 1464 of yacc.c  */
#line 841 "syntax/tjs.y"
    { tTJSExprNode *node =
										  cc->MakeNP0(T_INLINEDIC);
										  cc->PushCurrentNode(node); ;}
    break;

  case 250:

/* Line 1464 of yacc.c  */
#line 846 "syntax/tjs.y"
    { (yyval.np) = cn; cc->PopCurrentNode(); ;}
    break;

  case 252:

/* Line 1464 of yacc.c  */
#line 853 "syntax/tjs.y"
    { cn->Add((yyvsp[(1) - (1)].np)); ;}
    break;

  case 253:

/* Line 1464 of yacc.c  */
#line 854 "syntax/tjs.y"
    { cn->Add((yyvsp[(3) - (3)].np)); ;}
    break;

  case 254:

/* Line 1464 of yacc.c  */
#line 859 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_DICELM, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 255:

/* Line 1464 of yacc.c  */
#line 860 "syntax/tjs.y"
    { tTJSVariant val(lx->GetString((yyvsp[(1) - (3)].num)));
										  tTJSExprNode *node0 = cc->MakeNP0(T_CONSTVAL);
										  node0->SetValue(val);
										  (yyval.np) = cc->MakeNP2(T_DICELM, node0, (yyvsp[(3) - (3)].np)); ;}
    break;

  case 258:

/* Line 1464 of yacc.c  */
#line 876 "syntax/tjs.y"
    { tTJSExprNode *node =
										  cc->MakeNP0(T_CONSTVAL);
										  iTJSDispatch2 * dsp = TJSCreateArrayObject();
										  node->SetValue(tTJSVariant(dsp, dsp));
										  dsp->Release();
										  cc->PushCurrentNode(node); ;}
    break;

  case 259:

/* Line 1464 of yacc.c  */
#line 883 "syntax/tjs.y"
    { (yyval.np) = cn; cc->PopCurrentNode(); ;}
    break;

  case 264:

/* Line 1464 of yacc.c  */
#line 901 "syntax/tjs.y"
    { cn->AddArrayElement(- lx->GetValue((yyvsp[(2) - (2)].num))); ;}
    break;

  case 265:

/* Line 1464 of yacc.c  */
#line 902 "syntax/tjs.y"
    { cn->AddArrayElement(+ lx->GetValue((yyvsp[(2) - (2)].num))); ;}
    break;

  case 266:

/* Line 1464 of yacc.c  */
#line 903 "syntax/tjs.y"
    { cn->AddArrayElement(lx->GetValue((yyvsp[(1) - (1)].num))); ;}
    break;

  case 267:

/* Line 1464 of yacc.c  */
#line 904 "syntax/tjs.y"
    { cn->AddArrayElement(tTJSVariant());  ;}
    break;

  case 268:

/* Line 1464 of yacc.c  */
#line 905 "syntax/tjs.y"
    { cn->AddArrayElement((yyvsp[(1) - (1)].np)->GetValue()); ;}
    break;

  case 269:

/* Line 1464 of yacc.c  */
#line 906 "syntax/tjs.y"
    { cn->AddArrayElement((yyvsp[(1) - (1)].np)->GetValue()); ;}
    break;

  case 270:

/* Line 1464 of yacc.c  */
#line 911 "syntax/tjs.y"
    { tTJSExprNode *node =
										  cc->MakeNP0(T_CONSTVAL);
										  iTJSDispatch2 * dsp = TJSCreateDictionaryObject();
										  node->SetValue(tTJSVariant(dsp, dsp));
										  dsp->Release();
										  cc->PushCurrentNode(node); ;}
    break;

  case 271:

/* Line 1464 of yacc.c  */
#line 918 "syntax/tjs.y"
    { (yyval.np) = cn; cc->PopCurrentNode(); ;}
    break;

  case 275:

/* Line 1464 of yacc.c  */
#line 931 "syntax/tjs.y"
    { cn->AddDictionaryElement(lx->GetValue((yyvsp[(1) - (4)].num)), - lx->GetValue((yyvsp[(4) - (4)].num))); ;}
    break;

  case 276:

/* Line 1464 of yacc.c  */
#line 932 "syntax/tjs.y"
    { cn->AddDictionaryElement(lx->GetValue((yyvsp[(1) - (4)].num)), + lx->GetValue((yyvsp[(4) - (4)].num))); ;}
    break;

  case 277:

/* Line 1464 of yacc.c  */
#line 933 "syntax/tjs.y"
    { cn->AddDictionaryElement(lx->GetValue((yyvsp[(1) - (3)].num)), lx->GetValue((yyvsp[(3) - (3)].num))); ;}
    break;

  case 278:

/* Line 1464 of yacc.c  */
#line 934 "syntax/tjs.y"
    { cn->AddDictionaryElement(lx->GetValue((yyvsp[(1) - (3)].num)), tTJSVariant()); ;}
    break;

  case 279:

/* Line 1464 of yacc.c  */
#line 935 "syntax/tjs.y"
    { cn->AddDictionaryElement(lx->GetValue((yyvsp[(1) - (3)].num)), (yyvsp[(3) - (3)].np)->GetValue()); ;}
    break;

  case 280:

/* Line 1464 of yacc.c  */
#line 936 "syntax/tjs.y"
    { cn->AddDictionaryElement(lx->GetValue((yyvsp[(1) - (3)].num)), (yyvsp[(3) - (3)].np)->GetValue()); ;}
    break;



/* Line 1464 of yacc.c  */
#line 3854 "tjs.tab.cpp"
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
#line 941 "syntax/tjs.y"



}
