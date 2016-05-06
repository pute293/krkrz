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
#line 128 "tjs.tab.c"

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
     T_FOREACH = 343,
     T_FOR = 344,
     T_WHILE = 345,
     T_UNTIL = 346,
     T_DO = 347,
     T_LOOP = 348,
     T_IF = 349,
     T_UNLESS = 350,
     T_VAR = 351,
     T_CONST = 352,
     T_ENUM = 353,
     T_GOTO = 354,
     T_THROW = 355,
     T_TRY = 356,
     T_SETTER = 357,
     T_GETTER = 358,
     T_ELSE = 359,
     T_CATCH = 360,
     T_OMIT = 361,
     T_SYNCHRONIZED = 362,
     T_WITH = 363,
     T_INT = 364,
     T_REAL = 365,
     T_STRING = 366,
     T_OCTET = 367,
     T_FALSE = 368,
     T_NULL = 369,
     T_TRUE = 370,
     T_VOID = 371,
     T_NAN = 372,
     T_INFINITY = 373,
     T_UPLUS = 374,
     T_UMINUS = 375,
     T_EVAL = 376,
     T_POSTDECREMENT = 377,
     T_POSTINCREMENT = 378,
     T_IGNOREPROP = 379,
     T_PROPACCESS = 380,
     T_ARG = 381,
     T_EXPANDARG = 382,
     T_INLINEARRAY = 383,
     T_ARRAYARG = 384,
     T_INLINEDIC = 385,
     T_DICELM = 386,
     T_WITHDOT = 387,
     T_THIS_PROXY = 388,
     T_WITHDOT_PROXY = 389,
     T_CONSTVAL = 390,
     T_SYMBOL = 391,
     T_REGEXP = 392,
     T_VARIANT = 393
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
#line 309 "tjs.tab.c"
} YYSTYPE;
YYLEX_PROTO_DECL

# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 321 "tjs.tab.c"

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
#define YYLAST   1682

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  139
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  127
/* YYNRULES -- Number of rules.  */
#define YYNRULES  302
/* YYNRULES -- Number of states.  */
#define YYNSTATES  517

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   393

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
     135,   136,   137,   138
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
      90,    91,    99,   100,   101,   102,   113,   114,   115,   123,
     124,   125,   133,   134,   139,   140,   151,   152,   154,   156,
     157,   159,   160,   162,   163,   164,   174,   178,   182,   185,
     188,   189,   194,   196,   199,   202,   205,   207,   211,   214,
     219,   220,   223,   226,   229,   232,   235,   238,   239,   246,
     247,   253,   254,   258,   262,   268,   269,   271,   273,   277,
     280,   285,   287,   291,   292,   298,   301,   303,   306,   310,
     312,   313,   320,   322,   324,   327,   330,   331,   339,   340,
     344,   349,   352,   353,   359,   360,   363,   364,   370,   372,
     376,   378,   381,   385,   386,   393,   394,   401,   405,   408,
     409,   415,   417,   421,   426,   430,   432,   434,   438,   440,
     444,   446,   450,   454,   458,   462,   466,   470,   474,   478,
     482,   486,   490,   494,   498,   502,   506,   510,   512,   518,
     520,   524,   526,   530,   532,   536,   538,   542,   544,   548,
     550,   554,   558,   562,   566,   568,   572,   576,   580,   584,
     586,   590,   594,   598,   600,   604,   608,   610,   614,   618,
     622,   625,   628,   630,   633,   636,   639,   642,   645,   648,
     651,   654,   657,   660,   663,   666,   669,   672,   675,   678,
     682,   687,   690,   695,   698,   703,   706,   708,   712,   714,
     718,   723,   725,   726,   731,   732,   737,   740,   743,   746,
     747,   751,   753,   755,   757,   759,   761,   763,   765,   767,
     769,   771,   773,   775,   776,   780,   781,   785,   790,   792,
     794,   798,   799,   801,   803,   805,   806,   811,   813,   817,
     818,   820,   821,   828,   829,   831,   835,   839,   843,   844,
     846,   847,   855,   856,   858,   860,   864,   867,   870,   872,
     874,   876,   878,   879,   888,   889,   891,   895,   900,   905,
     909,   913,   917
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     140,     0,    -1,   141,    -1,    -1,   142,   143,    -1,    -1,
     143,   144,    -1,   143,     1,    65,    -1,   145,    -1,   146,
      -1,    65,    -1,   221,    65,    -1,   158,    -1,   161,    -1,
     164,    -1,   148,    -1,   151,    -1,   154,    -1,   166,    -1,
     171,    -1,   175,    -1,    82,    65,    -1,    68,    65,    -1,
      71,    65,    -1,   178,    -1,   183,    -1,   196,    -1,   204,
      -1,   210,    -1,   211,    -1,   213,    -1,   215,    -1,   216,
      -1,   219,    -1,    -1,    66,   147,   143,    67,    -1,    -1,
      -1,    90,   149,    55,   221,    63,   150,   144,    -1,    -1,
      -1,    91,   152,    55,   221,    63,   153,   144,    -1,    -1,
      -1,    -1,    92,   155,   144,   156,    90,    55,   221,    63,
     157,    65,    -1,    -1,    -1,    94,    55,   159,   221,   160,
      63,   144,    -1,    -1,    -1,    95,    55,   162,   221,   163,
      63,   144,    -1,    -1,   158,   104,   165,   144,    -1,    -1,
      89,    55,   167,   168,    65,   169,    65,   170,    63,   144,
      -1,    -1,   179,    -1,   221,    -1,    -1,   221,    -1,    -1,
     221,    -1,    -1,    -1,    88,    55,   172,   174,    86,   221,
      63,   173,   144,    -1,    96,   136,   182,    -1,    97,   136,
     182,    -1,   136,   182,    -1,   177,   146,    -1,    -1,   177,
     221,   176,   146,    -1,    93,    -1,   179,    65,    -1,    96,
     180,    -1,    97,   180,    -1,   181,    -1,   180,     3,   181,
      -1,   136,   182,    -1,   136,   182,     4,   220,    -1,    -1,
      64,   136,    -1,    64,   116,    -1,    64,   109,    -1,    64,
     110,    -1,    64,   111,    -1,    64,   112,    -1,    -1,    69,
     136,   184,   187,   182,   146,    -1,    -1,    69,   186,   187,
     182,   146,    -1,    -1,    55,   191,    63,    -1,    55,   188,
      63,    -1,    55,   189,     3,   191,    63,    -1,    -1,   189,
      -1,   190,    -1,   189,     3,   190,    -1,   136,   182,    -1,
     136,   182,     4,   220,    -1,    40,    -1,   136,   182,    40,
      -1,    -1,    70,   193,   194,   182,   195,    -1,   136,   182,
      -1,   187,    -1,    57,    61,    -1,    57,   221,    61,    -1,
     146,    -1,    -1,    76,   136,    66,   197,   198,    67,    -1,
     199,    -1,   201,    -1,   199,   201,    -1,   201,   199,    -1,
      -1,   102,    55,   136,   182,    63,   200,   146,    -1,    -1,
     203,   202,   146,    -1,   103,    55,    63,   182,    -1,   103,
     182,    -1,    -1,    62,   136,   205,   206,   146,    -1,    -1,
      74,   220,    -1,    -1,    74,   220,     3,   207,   208,    -1,
     209,    -1,   208,     3,   209,    -1,   220,    -1,    81,    65,
      -1,    81,   221,    65,    -1,    -1,    85,    55,   221,    63,
     212,   146,    -1,    -1,   108,    55,   221,    63,   214,   144,
      -1,    73,   221,    64,    -1,    72,    64,    -1,    -1,   101,
     217,   144,   218,   144,    -1,   105,    -1,   105,    55,    63,
      -1,   105,    55,   136,    63,    -1,   100,   221,    65,    -1,
     223,    -1,   222,    -1,   222,    94,   221,    -1,   223,    -1,
     222,     3,   223,    -1,   224,    -1,   224,    29,   223,    -1,
     224,     4,   223,    -1,   224,     5,   223,    -1,   224,     6,
     223,    -1,   224,     7,   223,    -1,   224,     8,   223,    -1,
     224,     9,   223,    -1,   224,    10,   223,    -1,   224,    11,
     223,    -1,   224,    12,   223,    -1,   224,    13,   223,    -1,
     224,    14,   223,    -1,   224,    15,   223,    -1,   224,    18,
     223,    -1,   224,    17,   223,    -1,   224,    16,   223,    -1,
     225,    -1,   225,    19,   224,    64,   224,    -1,   226,    -1,
     225,    20,   226,    -1,   227,    -1,   226,    21,   227,    -1,
     228,    -1,   227,    22,   228,    -1,   229,    -1,   228,    23,
     229,    -1,   230,    -1,   229,    24,   230,    -1,   231,    -1,
     230,    25,   231,    -1,   230,    26,   231,    -1,   230,    27,
     231,    -1,   230,    28,   231,    -1,   232,    -1,   231,    30,
     232,    -1,   231,    31,   232,    -1,   231,    32,   232,    -1,
     231,    33,   232,    -1,   233,    -1,   232,    34,   233,    -1,
     232,    35,   233,    -1,   232,    36,   233,    -1,   234,    -1,
     233,    48,   234,    -1,   233,    49,   234,    -1,   236,    -1,
     234,    37,   236,    -1,   234,    38,   236,    -1,   234,    39,
     236,    -1,   235,   236,    -1,   234,    40,    -1,   237,    -1,
      41,   236,    -1,    42,   236,    -1,    43,   236,    -1,    44,
     236,    -1,    45,   245,    -1,    53,   236,    -1,    52,   236,
      -1,   237,    52,    -1,    46,   236,    -1,    47,   236,    -1,
      50,   236,    -1,    51,   236,    -1,    48,   236,    -1,    49,
     236,    -1,    24,   236,    -1,    40,   236,    -1,   237,    54,
     236,    -1,    55,   109,    63,   236,    -1,   109,   236,    -1,
      55,   110,    63,   236,    -1,   110,   236,    -1,    55,   111,
      63,   236,    -1,   111,   236,    -1,   238,    -1,   238,    87,
     237,    -1,   242,    -1,    55,   221,    63,    -1,   238,    57,
     221,    61,    -1,   245,    -1,    -1,   238,    56,   239,   136,
      -1,    -1,   238,    70,   240,   136,    -1,   238,    44,    -1,
     238,    43,    -1,   238,    41,    -1,    -1,    56,   241,   136,
      -1,   135,    -1,   136,    -1,    58,    -1,    59,    -1,   185,
      -1,   192,    -1,    60,    -1,   116,    -1,   248,    -1,   252,
      -1,   257,    -1,   262,    -1,    -1,    11,   243,   137,    -1,
      -1,    38,   244,   137,    -1,   238,    55,   246,    63,    -1,
     106,    -1,   247,    -1,   246,     3,   247,    -1,    -1,    40,
      -1,   235,    -1,   220,    -1,    -1,    57,   249,   250,    61,
      -1,   251,    -1,   250,     3,   251,    -1,    -1,   220,    -1,
      -1,    37,    57,   253,   254,   256,    61,    -1,    -1,   255,
      -1,   254,     3,   255,    -1,   220,     3,   220,    -1,   136,
      64,   220,    -1,    -1,     3,    -1,    -1,    55,    97,    63,
      57,   258,   259,    61,    -1,    -1,   260,    -1,   261,    -1,
     260,     3,   261,    -1,    49,   135,    -1,    48,   135,    -1,
     135,    -1,   116,    -1,   257,    -1,   262,    -1,    -1,    55,
      97,    63,    37,    57,   263,   264,    61,    -1,    -1,   265,
      -1,   264,     3,   265,    -1,   135,     3,    49,   135,    -1,
     135,     3,    48,   135,    -1,   135,     3,   135,    -1,   135,
       3,   116,    -1,   135,     3,   257,    -1,   135,     3,   262,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   222,   222,   227,   227,   233,   235,   236,   243,   244,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   277,   277,   290,   291,   290,   304,
     305,   304,   326,   327,   329,   326,   335,   336,   335,   349,
     350,   349,   356,   356,   376,   376,   385,   387,   388,   393,
     394,   399,   400,   423,   424,   423,   470,   473,   476,   490,
     491,   491,   513,   520,   524,   525,   532,   533,   538,   540,
     545,   547,   548,   549,   550,   551,   552,   557,   557,   567,
     567,   580,   582,   583,   584,   588,   590,   594,   595,   599,
     601,   606,   608,   624,   624,   632,   633,   637,   638,   639,
     645,   644,   653,   654,   655,   656,   660,   660,   671,   671,
     680,   681,   687,   687,   694,   696,   697,   697,   702,   703,
     707,   712,   713,   720,   719,   727,   726,   733,   734,   739,
     739,   746,   747,   748,   754,   759,   763,   764,   769,   770,
     775,   776,   777,   778,   779,   780,   781,   782,   783,   784,
     785,   786,   787,   788,   789,   790,   791,   796,   797,   805,
     806,   810,   811,   816,   817,   821,   822,   826,   827,   831,
     832,   833,   834,   835,   839,   840,   841,   842,   843,   847,
     848,   849,   850,   855,   856,   857,   861,   862,   863,   864,
     865,   869,   873,   874,   875,   876,   877,   878,   879,   880,
     881,   882,   883,   884,   885,   886,   887,   888,   889,   890,
     891,   892,   893,   894,   895,   896,   900,   901,   906,   907,
     908,   909,   910,   910,   914,   914,   922,   923,   924,   925,
     925,   933,   935,   938,   939,   940,   941,   942,   943,   944,
     945,   946,   947,   948,   948,   951,   951,   959,   964,   965,
     966,   970,   971,   972,   973,   979,   979,   988,   989,   994,
     995,  1000,  1000,  1010,  1012,  1013,  1018,  1019,  1026,  1028,
    1035,  1035,  1045,  1047,  1053,  1054,  1060,  1061,  1062,  1063,
    1064,  1065,  1070,  1070,  1082,  1084,  1085,  1090,  1091,  1092,
    1093,  1094,  1095
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
  "\"import\"", "\"switch\"", "\"in\"", "\"incontextof\"", "\"foreach\"",
  "\"for\"", "\"while\"", "\"until\"", "\"do\"", "\"loop\"", "\"if\"",
  "\"unless\"", "\"var\"", "\"const\"", "\"enum\"", "\"goto\"",
  "\"throw\"", "\"try\"", "\"setter\"", "\"getter\"", "\"else\"",
  "\"catch\"", "\"...\"", "\"synchronized\"", "\"with\"", "\"int\"",
  "\"real\"", "\"string\"", "\"octet\"", "\"false\"", "\"null\"",
  "\"true\"", "\"void\"", "\"NaN\"", "\"Infinity\"", "T_UPLUS", "T_UMINUS",
  "T_EVAL", "T_POSTDECREMENT", "T_POSTINCREMENT", "T_IGNOREPROP",
  "T_PROPACCESS", "T_ARG", "T_EXPANDARG", "T_INLINEARRAY", "T_ARRAYARG",
  "T_INLINEDIC", "T_DICELM", "T_WITHDOT", "T_THIS_PROXY",
  "T_WITHDOT_PROXY", "T_CONSTVAL", "T_SYMBOL", "T_REGEXP", "T_VARIANT",
  "$accept", "program", "global_list", "$@1", "def_list",
  "block_or_statement", "statement", "block", "$@2", "while", "$@3", "$@4",
  "until", "$@5", "$@6", "do_while", "$@7", "$@8", "$@9", "if", "$@10",
  "$@11", "unless", "$@12", "$@13", "if_else", "$@14", "for", "$@15",
  "for_first_clause", "for_second_clause", "for_third_clause", "forin",
  "$@16", "$@17", "forin_decl", "loop", "$@18", "loop_init",
  "variable_def", "variable_def_inner", "variable_id_list", "variable_id",
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
  "array_elm_list", "array_elm", "inline_dic", "$@36", "dic_elm_list",
  "dic_elm", "dic_dummy_elm_opt", "const_inline_array", "$@37",
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
     385,   386,   387,   388,   389,   390,   391,   392,   393
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   139,   140,   142,   141,   143,   143,   143,   144,   144,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   147,   146,   149,   150,   148,   152,
     153,   151,   155,   156,   157,   154,   159,   160,   158,   162,
     163,   161,   165,   164,   167,   166,   168,   168,   168,   169,
     169,   170,   170,   172,   173,   171,   174,   174,   174,   175,
     176,   175,   177,   178,   179,   179,   180,   180,   181,   181,
     182,   182,   182,   182,   182,   182,   182,   184,   183,   186,
     185,   187,   187,   187,   187,   188,   188,   189,   189,   190,
     190,   191,   191,   193,   192,   194,   194,   195,   195,   195,
     197,   196,   198,   198,   198,   198,   200,   199,   202,   201,
     203,   203,   205,   204,   206,   206,   207,   206,   208,   208,
     209,   210,   210,   212,   211,   214,   213,   215,   215,   217,
     216,   218,   218,   218,   219,   220,   221,   221,   222,   222,
     223,   223,   223,   223,   223,   223,   223,   223,   223,   223,
     223,   223,   223,   223,   223,   223,   223,   224,   224,   225,
     225,   226,   226,   227,   227,   228,   228,   229,   229,   230,
     230,   230,   230,   230,   231,   231,   231,   231,   231,   232,
     232,   232,   232,   233,   233,   233,   234,   234,   234,   234,
     234,   235,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   237,   237,   238,   238,
     238,   238,   239,   238,   240,   238,   238,   238,   238,   241,
     238,   242,   242,   242,   242,   242,   242,   242,   242,   242,
     242,   242,   242,   243,   242,   244,   242,   245,   246,   246,
     246,   247,   247,   247,   247,   249,   248,   250,   250,   251,
     251,   253,   252,   254,   254,   254,   255,   255,   256,   256,
     258,   257,   259,   259,   260,   260,   261,   261,   261,   261,
     261,   261,   263,   262,   264,   264,   264,   265,   265,   265,
     265,   265,   265
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,     0,     2,     3,     1,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     4,     0,     0,     7,     0,
       0,     7,     0,     0,     0,    10,     0,     0,     7,     0,
       0,     7,     0,     4,     0,    10,     0,     1,     1,     0,
       1,     0,     1,     0,     0,     9,     3,     3,     2,     2,
       0,     4,     1,     2,     2,     2,     1,     3,     2,     4,
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
       4,     1,     0,     4,     0,     4,     2,     2,     2,     0,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     3,     0,     3,     4,     1,     1,
       3,     0,     1,     1,     1,     0,     4,     1,     3,     0,
       1,     0,     6,     0,     1,     3,     3,     3,     0,     1,
       0,     7,     0,     1,     1,     3,     2,     2,     1,     1,
       1,     1,     0,     8,     0,     1,     3,     4,     4,     3,
       3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       3,     0,     2,     5,     1,     0,     0,   253,     0,     0,
     255,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   239,   265,   243,   244,
     247,     0,    10,    34,     0,    89,   103,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    36,    39,    42,    72,
       0,     0,     0,     0,     0,   139,     0,     0,     0,     0,
     248,   241,   242,     6,     8,     9,    15,    16,    17,    12,
      13,    14,    18,    19,    20,     0,    24,     0,    25,   245,
     246,    26,    27,    28,    29,    30,    31,    32,    33,     0,
     146,   148,   150,   167,   169,   171,   173,   175,   177,   179,
     184,   189,   193,     0,   196,   202,   226,   228,   231,   249,
     250,   251,   252,     7,     0,    89,   217,   271,     0,   218,
     203,   204,   205,   206,     0,     0,   207,   211,   212,   215,
     216,   213,   214,   209,   208,     0,     0,     0,     0,     0,
       0,   269,   122,     5,    22,    87,    91,    91,    23,   138,
       0,     0,   131,     0,    21,     0,    63,    54,     0,     0,
       0,    46,    49,    80,    74,    76,    75,     0,     0,     0,
     221,   223,   225,    52,    69,    70,    73,    11,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   201,   200,
     210,     0,   238,   237,   236,   261,   232,     0,   234,     0,
     254,   273,   256,     0,     0,     0,     0,   229,   240,   270,
     145,     0,   267,   124,     0,    91,    95,    80,    80,   106,
      80,   137,   110,   132,     0,     0,    56,     0,     0,    43,
       0,     0,     0,    78,     0,   144,     0,     0,     0,     0,
     149,   147,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   166,   165,   164,   151,     0,   170,
     172,   174,   176,   178,   180,   181,   182,   183,   185,   186,
     187,   188,   190,   191,   192,   194,   195,   197,   198,   199,
     219,   262,   258,   264,   263,     0,   259,     0,     0,     0,
     227,   242,     0,   278,   274,     0,   280,   220,   222,   224,
     269,   266,     0,     0,    35,    80,   101,    80,     0,    96,
      97,     0,     0,   105,     0,     0,   133,     0,     0,    80,
       0,     0,    57,    58,     0,     0,     0,    47,    50,    83,
      84,    85,    86,    82,    81,     0,    77,   141,     0,   135,
      53,    71,     0,   261,   257,   233,   230,   235,     0,     0,
     279,     0,   292,   282,   268,   125,   123,     0,    99,    93,
       0,    92,    90,     0,   109,   104,     0,    80,     0,   112,
     113,   118,     0,    80,    80,    68,     0,    59,    37,    40,
       0,     0,     0,    79,     0,   140,     0,   168,   260,   277,
     276,   275,   272,   294,     0,     0,     0,   289,   288,   290,
       0,   283,   284,   291,   126,    88,     0,   102,    98,     0,
     107,     0,     0,     0,   121,   111,   114,   115,     0,   134,
      66,    67,     0,     0,    60,     0,     0,     0,     0,     0,
     142,     0,   136,     0,     0,   295,   287,   286,   281,     0,
       0,   100,    94,   108,    80,    80,   119,    64,    61,    38,
      41,     0,    48,    51,   143,     0,     0,   293,   285,   127,
     128,   130,     0,   120,     0,     0,    62,    44,     0,     0,
     300,   299,   301,   302,   296,     0,   116,    65,     0,     0,
     298,   297,   129,     0,    55,    45,   117
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     3,     5,    63,    64,    65,   143,    66,
     158,   455,    67,   159,   456,    68,   160,   356,   509,    69,
     260,   411,    70,   261,   412,    71,   268,    72,   256,   351,
     453,   495,    73,   255,   494,   350,    74,   269,    75,    76,
      77,   164,   165,   263,    78,   245,    79,   146,   247,   338,
     339,   340,   341,    80,   147,   250,   395,    81,   345,   398,
     399,   513,   400,   448,   401,    82,   243,   333,   470,   489,
     490,    83,    84,   402,    85,   416,    86,    87,   168,   368,
      88,   239,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     317,   319,   140,   107,   114,   118,   108,   315,   316,   109,
     141,   241,   242,   110,   231,   323,   324,   381,   111,   383,
     430,   431,   432,   112,   423,   464,   465
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -378
static const yytype_int16 yypact[] =
{
    -378,    35,  -378,  -378,  -378,   378,   -40,  -378,  1402,    17,
    -378,  1402,  1402,  1402,  1402,  1402,    80,  1402,  1402,  1402,
    1402,  1402,  1402,  1402,  1402,   783,  -378,  -378,  -378,  -378,
    -378,   -95,  -378,  -378,    20,   -59,  -378,    22,    29,  1402,
     -52,   826,    31,    56,    61,    66,  -378,  -378,  -378,  -378,
      67,    73,   -46,   -46,  1402,  -378,    74,  1402,  1402,  1402,
    -378,  -378,  -378,  -378,  -378,  -378,  -378,  -378,  -378,    44,
    -378,  -378,  -378,  -378,  -378,   927,  -378,    87,  -378,  -378,
    -378,  -378,  -378,  -378,  -378,  -378,  -378,  -378,  -378,   100,
       4,  -378,   280,    25,   134,   137,   143,   144,    26,    94,
      13,   -18,   124,  1402,  -378,     3,    45,  -378,  -378,  -378,
    -378,  -378,  -378,  -378,    38,  -378,  -378,  -378,    42,  -378,
    -378,  -378,  -378,  -378,   970,    90,   197,  -378,  -378,  -378,
    -378,  -378,  -378,  -378,  -378,   113,  1071,  1114,  1215,   122,
      58,  1402,  -378,  -378,  -378,  -378,   146,   -42,  -378,  -378,
     139,   145,  -378,   148,  -378,  1402,  -378,  -378,   154,   166,
     581,  -378,  -378,   158,   220,  -378,   220,   160,   581,  1402,
    -378,  -378,  -378,  -378,  -378,  -378,  -378,  -378,  1402,  1402,
    1402,  1402,  1402,  1402,  1402,  1402,  1402,  1402,  1402,  1402,
    1402,  1402,  1402,  1402,  1402,  1402,  1402,  1402,  1402,  1402,
    1402,  1402,  1402,  1402,  1402,  1402,  1402,  1402,  1402,  1402,
    1402,  1402,  1402,  1402,  1402,  1402,  1402,  1402,  -378,  -378,
    -378,  1402,  -378,  -378,  -378,  1258,  -378,  1402,  -378,    80,
    -378,  1503,  -378,   -11,  1402,  1402,  1402,  -378,  -378,  -378,
    -378,    18,  -378,   155,   480,   146,   -16,   158,   158,  -378,
     158,  -378,  -378,  -378,   167,   -58,   682,  1402,  1402,  -378,
    1402,  1402,    88,   230,   -46,  -378,   132,   176,   581,   180,
    -378,  -378,  -378,  -378,  -378,  -378,  -378,  -378,  -378,  -378,
    -378,  -378,  -378,  -378,  -378,  -378,  -378,  -378,   178,   134,
     137,   143,   144,    26,    94,    94,    94,    94,    13,    13,
      13,    13,   -18,   -18,   -18,   124,   124,  -378,  -378,  -378,
    -378,  1402,  -378,  -378,  1402,    12,  -378,   111,   188,   114,
    -378,   191,   258,   259,  -378,   206,  -378,  -378,  -378,  -378,
    1402,  -378,  1402,   180,  -378,   158,  -378,   158,   201,   262,
    -378,   203,   180,  -378,   -34,    39,  -378,   133,   135,   158,
     187,   209,  -378,  -378,   212,   213,   189,  -378,  -378,  -378,
    -378,  -378,  -378,  -378,  -378,  1402,  -378,   222,   581,  -378,
    -378,  -378,  1402,  1546,  -378,  -378,  -378,  -378,  1402,  1402,
    1503,   217,  -378,   -21,  -378,   277,  -378,   180,    36,  -378,
     -16,  -378,  -378,  1359,  -378,  -378,   226,   -22,   215,   198,
     202,  -378,   180,   158,   158,  -378,  1402,  1402,  -378,  -378,
     253,   247,   248,  -378,   -53,  -378,   581,  -378,  -378,  -378,
    -378,  -378,  -378,   177,   181,   182,   218,  -378,  -378,  -378,
     257,   316,  -378,  -378,  -378,  -378,  1402,  -378,  -378,   260,
    -378,   261,   184,   263,  -378,  -378,  -378,  -378,   180,  -378,
    -378,  -378,   264,   256,  -378,   581,   581,  1402,   581,   581,
    -378,   266,  -378,   321,    19,  -378,  -378,  -378,  -378,   -21,
    1402,  -378,  -378,  -378,   158,   158,  -378,  -378,  1402,  -378,
    -378,   267,  -378,  -378,  -378,   -12,   177,  -378,  -378,   322,
    -378,  -378,   268,  -378,   581,   269,  -378,  -378,   199,   200,
    -378,  -378,  -378,  -378,  -378,  1402,  -378,  -378,   581,   271,
    -378,  -378,  -378,   180,  -378,  -378,  -378
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -378,  -378,  -378,  -378,   190,  -156,  -378,   -74,  -378,  -378,
    -378,  -378,  -378,  -378,  -378,  -378,  -378,  -378,  -378,  -378,
    -378,  -378,  -378,  -378,  -378,  -378,  -378,  -378,  -378,  -378,
    -378,  -378,  -378,  -378,  -378,  -378,  -378,  -378,  -378,  -378,
      81,   286,    76,  -230,  -378,  -378,  -378,  -378,  -139,  -378,
    -378,   -49,   -48,  -378,  -378,  -378,  -378,  -378,  -378,  -378,
     -57,  -378,   -55,  -378,  -378,  -378,  -378,  -378,  -378,  -378,
    -160,  -378,  -378,  -378,  -378,  -378,  -378,  -378,  -378,  -378,
    -378,  -222,   -25,  -378,  -122,  -194,  -378,   149,   151,   152,
     147,   153,   -33,    11,    -5,  -132,  -220,   169,   121,   337,
    -378,  -378,  -378,  -378,  -378,  -378,   339,  -378,   -17,  -378,
    -378,  -378,    27,  -378,  -378,  -378,   -20,  -378,  -377,  -378,
    -378,  -378,  -111,  -372,  -378,  -378,  -127
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -232
static const yytype_int16 yytable[] =
{
     139,   174,   288,   313,   259,   314,   429,   178,   249,   322,
     460,   433,   266,   246,   150,   373,   153,   342,   343,   240,
     344,   330,   486,   393,   336,   113,   325,   424,   425,   167,
     213,   214,    33,   443,   426,     4,   498,   499,   347,   348,
     436,   142,   262,   426,   196,   197,   326,   210,   211,   212,
     175,   202,   203,   204,   205,   220,   270,   221,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   117,   374,   437,   145,   349,   331,
     487,   305,   306,   461,   151,   144,   222,   148,   223,   224,
     163,     7,   429,   149,   248,   427,   154,   433,   179,   139,
     225,   226,   227,   240,   500,   387,   335,   388,   502,   240,
     385,   155,   370,   503,   428,   228,   156,     9,    10,   405,
     337,   157,   161,   501,   206,   207,   208,   209,   162,   169,
     254,   222,   229,   223,   224,   124,    26,    27,    28,    29,
      30,   396,   397,   413,   267,   225,   226,   227,   173,   115,
      36,   313,   176,   314,   271,   198,   419,   420,   322,   199,
     228,   215,   216,   217,   218,   177,   200,   444,   201,   294,
     295,   296,   297,   450,   451,   230,   233,   116,   417,   232,
     119,   120,   121,   122,   123,   237,   127,   128,   129,   130,
     131,   132,   133,   134,   238,   371,    60,   359,   360,   361,
     362,   246,   318,   251,   363,   302,   303,   304,   240,   257,
     240,   252,   415,   253,   471,    61,    62,   298,   299,   300,
     301,   258,   262,   264,   364,   265,   170,   171,   172,   332,
     346,   353,   354,   355,   365,   357,   358,   367,  -231,   369,
    -231,  -231,   372,   240,   492,   493,    33,   375,   491,   376,
     377,   240,  -231,  -231,  -231,   378,   240,   240,   240,   386,
     462,   379,   380,   382,   389,   390,   391,  -231,   392,   403,
     394,   404,   219,   406,   407,   408,   409,   414,   422,   410,
     434,   442,   445,   491,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   479,
     480,   397,   482,   483,   396,   170,   171,   172,   457,   195,
     458,   459,   463,   435,   240,   135,   466,   467,   468,   469,
     474,   478,   473,   472,   485,   505,   475,   477,   449,   484,
     497,   506,   508,   244,   510,   511,   515,   352,   507,   166,
     366,   438,   439,   447,   446,   512,   289,   292,   240,   290,
     320,   291,   514,   125,   293,   126,   418,   384,   488,   504,
     421,     0,     0,     0,     0,     0,     0,     0,   441,     0,
       0,     0,     0,     0,   476,     0,     0,     0,    -4,     6,
       0,   452,   454,   240,   307,   308,   309,     0,     0,     7,
     310,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     8,   327,   328,   329,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     9,    10,     0,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,   481,    25,    26,    27,    28,    29,    30,   516,
      31,     0,     0,    32,    33,     0,    34,    35,    36,    37,
      38,    39,     0,   496,    40,     0,     0,     0,     0,    41,
      42,     0,     0,    43,     0,     0,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,     0,     0,    54,    55,
     119,     6,     0,   219,     0,     0,    56,    57,    58,    59,
       0,     7,     0,     0,    60,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     8,     0,     0,     0,     0,     0,
       0,     0,     0,    61,    62,     0,     0,     9,    10,     0,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     0,    25,    26,    27,    28,    29,
      30,     0,    31,     0,     0,    32,    33,   334,    34,    35,
      36,    37,    38,    39,     0,     0,    40,     0,     0,     0,
       0,    41,    42,     0,     0,    43,     0,     0,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,     0,     0,
      54,    55,     0,     0,     0,     0,     0,     0,    56,    57,
      58,    59,     7,     0,     0,     0,    60,     0,     0,     0,
       0,     0,     0,     0,     0,     8,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    61,    62,     0,     9,    10,
       0,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,     0,    25,    26,    27,    28,
      29,    30,     0,    31,     0,     0,    32,    33,     0,    34,
      35,    36,    37,    38,    39,     0,     0,    40,     0,     0,
       0,     0,    41,    42,     0,     0,    43,     0,     0,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,     0,
       0,    54,    55,     0,     0,     0,     0,     0,     0,    56,
      57,    58,    59,     7,     0,     0,     0,    60,     0,     0,
       0,     0,     0,     0,     0,     0,     8,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    61,    62,     0,     9,
      10,     0,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,     0,    25,    26,    27,
      28,    29,    30,     0,     0,     0,     0,     0,     0,     0,
       0,   115,    36,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    52,    53,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    57,    58,    59,     7,     0,     0,     0,    60,     0,
       0,     0,     0,     0,     0,     0,     0,     8,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    61,    62,     0,
       9,    10,     0,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,     7,    25,    26,
      27,    28,    29,    30,     0,     0,     0,     0,     0,     0,
       8,     0,   115,    36,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     9,    10,     0,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
     135,    25,    26,    27,    28,    29,    30,     0,     0,     0,
       0,   152,   136,   137,   138,   115,    36,     0,     0,    60,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    61,    62,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    57,    58,    59,     7,     0,
       0,     0,    60,     0,     0,     0,     0,     0,     0,     0,
       0,     8,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    61,    62,     0,     9,    10,     0,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,     7,    25,    26,    27,    28,    29,    30,     0,     0,
       0,     0,     0,    33,     8,     0,   115,    36,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     9,    10,     0,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     0,    25,    26,    27,    28,    29,
      30,     0,     0,     0,     0,     0,    57,    58,    59,   115,
      36,     0,     0,    60,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    61,    62,     0,     0,     0,   135,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    57,
      58,    59,     7,     0,     0,     0,    60,     0,     0,     0,
       0,     0,     0,     0,     0,     8,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    61,    62,     0,     9,    10,
       0,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,     7,    25,    26,    27,    28,
      29,    30,     0,     0,   234,     0,     0,     0,     8,     0,
     115,    36,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     9,    10,     0,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,     0,    25,
      26,    27,    28,    29,    30,     0,     0,   235,     0,     0,
      57,    58,    59,   115,    36,     0,     0,    60,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    61,    62,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    57,    58,    59,     7,     0,     0,     0,
      60,     0,     0,     0,     0,     0,     0,     0,     0,     8,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    61,
      62,     0,     9,    10,     0,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,     7,
      25,    26,    27,    28,    29,    30,     0,     0,   236,     0,
       0,     0,     8,     0,   115,    36,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     9,    10,     0,   311,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     0,    25,    26,    27,    28,    29,    30,     0,
       0,     0,     0,     0,    57,    58,    59,   115,    36,     0,
       0,    60,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      61,    62,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   312,     0,     0,    57,    58,    59,
       7,     0,     0,     0,    60,     0,     0,     0,     0,     0,
       0,     0,     0,     8,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    61,    62,     0,     9,    10,     0,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,     7,    25,    26,    27,    28,    29,    30,
     440,     0,     0,     0,     0,     0,     8,     0,   115,    36,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     9,
      10,     0,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,     0,    25,    26,    27,
      28,    29,    30,     0,     0,     0,     0,     0,    57,    58,
      59,   115,    36,     0,     0,    60,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    61,    62,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    57,    58,    59,     7,     0,     0,     0,    60,     0,
       0,     0,     0,     0,     0,     0,     0,     8,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    61,    62,     0,
       9,    10,     0,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,     7,    25,    26,
      27,    28,    29,    30,     0,     0,     0,     0,     0,     0,
       8,     0,   115,    36,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     9,    10,     0,   311,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,    25,    26,    27,    28,    29,    30,     0,     0,     0,
       0,     0,    57,    58,    59,   115,    36,     0,     0,    60,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    61,   321,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    57,    58,    59,     0,     0,
       0,     0,    60,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    61,    62
};

static const yytype_int16 yycheck[] =
{
      25,    75,   196,   225,   160,   225,   383,     3,   147,   231,
      63,   383,   168,    55,    39,     3,    41,   247,   248,   141,
     250,     3,     3,    57,    40,    65,    37,    48,    49,    54,
      48,    49,    66,    55,    55,     0,    48,    49,    96,    97,
       4,   136,    64,    55,    19,    20,    57,    34,    35,    36,
      75,    25,    26,    27,    28,    52,   178,    54,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,    57,    63,    40,   136,   136,    61,
      61,   213,   214,   136,   136,    65,    41,    65,    43,    44,
     136,    11,   469,    64,   136,   116,    65,   469,    94,   124,
      55,    56,    57,   225,   116,   335,   245,   337,   485,   231,
     332,    55,   268,   485,   135,    70,    55,    37,    38,   349,
     136,    55,    55,   135,    30,    31,    32,    33,    55,    55,
     155,    41,    87,    43,    44,    55,    56,    57,    58,    59,
      60,   102,   103,   365,   169,    55,    56,    57,   104,    69,
      70,   373,    65,   373,   179,    21,   378,   379,   380,    22,
      70,    37,    38,    39,    40,    65,    23,   397,    24,   202,
     203,   204,   205,   403,   404,   137,    63,     8,   372,   137,
      11,    12,    13,    14,    15,    63,    17,    18,    19,    20,
      21,    22,    23,    24,   136,   269,   116,   109,   110,   111,
     112,    55,   227,    64,   116,   210,   211,   212,   330,    55,
     332,    66,   368,    65,   436,   135,   136,   206,   207,   208,
     209,    55,    64,     3,   136,    65,    57,    58,    59,    74,
      63,   256,   257,   258,     4,   260,   261,   105,    41,    63,
      43,    44,    64,   365,   474,   475,    66,   136,   470,    61,
     136,   373,    55,    56,    57,    64,   378,   379,   380,   333,
     416,     3,     3,    57,    63,     3,    63,    70,   342,   136,
     344,   136,   103,    86,    65,    63,    63,    55,    61,    90,
       3,    55,    67,   505,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,   455,
     456,   103,   458,   459,   102,   136,   137,   138,    55,    29,
      63,    63,   135,   387,   436,    97,   135,   135,    61,     3,
     136,    65,    61,    63,     3,     3,    63,    63,   402,    63,
      63,    63,    63,   143,   135,   135,    65,   256,   494,    53,
     264,   390,   390,   400,   399,   505,   197,   200,   470,   198,
     229,   199,   508,    16,   201,    16,   373,   330,   469,   486,
     380,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   393,    -1,
      -1,    -1,    -1,    -1,   448,    -1,    -1,    -1,     0,     1,
      -1,   406,   407,   505,   215,   216,   217,    -1,    -1,    11,
     221,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    24,   234,   235,   236,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,   457,    55,    56,    57,    58,    59,    60,   513,
      62,    -1,    -1,    65,    66,    -1,    68,    69,    70,    71,
      72,    73,    -1,   478,    76,    -1,    -1,    -1,    -1,    81,
      82,    -1,    -1,    85,    -1,    -1,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    -1,    -1,   100,   101,
     311,     1,    -1,   314,    -1,    -1,   108,   109,   110,   111,
      -1,    11,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   135,   136,    -1,    -1,    37,    38,    -1,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    55,    56,    57,    58,    59,
      60,    -1,    62,    -1,    -1,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    81,    82,    -1,    -1,    85,    -1,    -1,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    -1,    -1,
     100,   101,    -1,    -1,    -1,    -1,    -1,    -1,   108,   109,
     110,   111,    11,    -1,    -1,    -1,   116,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,   136,    -1,    37,    38,
      -1,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    55,    56,    57,    58,
      59,    60,    -1,    62,    -1,    -1,    65,    66,    -1,    68,
      69,    70,    71,    72,    73,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    81,    82,    -1,    -1,    85,    -1,    -1,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    -1,
      -1,   100,   101,    -1,    -1,    -1,    -1,    -1,    -1,   108,
     109,   110,   111,    11,    -1,    -1,    -1,   116,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   135,   136,    -1,    37,
      38,    -1,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    55,    56,    57,
      58,    59,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   109,   110,   111,    11,    -1,    -1,    -1,   116,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,    -1,
      37,    38,    -1,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    11,    55,    56,
      57,    58,    59,    60,    -1,    -1,    -1,    -1,    -1,    -1,
      24,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    38,    -1,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      97,    55,    56,    57,    58,    59,    60,    -1,    -1,    -1,
      -1,    65,   109,   110,   111,    69,    70,    -1,    -1,   116,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   109,   110,   111,    11,    -1,
      -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   135,   136,    -1,    37,    38,    -1,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    11,    55,    56,    57,    58,    59,    60,    -1,    -1,
      -1,    -1,    -1,    66,    24,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    -1,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    55,    56,    57,    58,    59,
      60,    -1,    -1,    -1,    -1,    -1,   109,   110,   111,    69,
      70,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   135,   136,    -1,    -1,    -1,    97,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,
     110,   111,    11,    -1,    -1,    -1,   116,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,   136,    -1,    37,    38,
      -1,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    11,    55,    56,    57,    58,
      59,    60,    -1,    -1,    63,    -1,    -1,    -1,    24,    -1,
      69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    38,    -1,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    55,
      56,    57,    58,    59,    60,    -1,    -1,    63,    -1,    -1,
     109,   110,   111,    69,    70,    -1,    -1,   116,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   135,   136,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   109,   110,   111,    11,    -1,    -1,    -1,
     116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,
     136,    -1,    37,    38,    -1,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    11,
      55,    56,    57,    58,    59,    60,    -1,    -1,    63,    -1,
      -1,    -1,    24,    -1,    69,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    55,    56,    57,    58,    59,    60,    -1,
      -1,    -1,    -1,    -1,   109,   110,   111,    69,    70,    -1,
      -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     135,   136,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   106,    -1,    -1,   109,   110,   111,
      11,    -1,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   135,   136,    -1,    37,    38,    -1,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    11,    55,    56,    57,    58,    59,    60,
      61,    -1,    -1,    -1,    -1,    -1,    24,    -1,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      38,    -1,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    55,    56,    57,
      58,    59,    60,    -1,    -1,    -1,    -1,    -1,   109,   110,
     111,    69,    70,    -1,    -1,   116,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   135,   136,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   109,   110,   111,    11,    -1,    -1,    -1,   116,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,    -1,
      37,    38,    -1,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    11,    55,    56,
      57,    58,    59,    60,    -1,    -1,    -1,    -1,    -1,    -1,
      24,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    38,    -1,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    55,    56,    57,    58,    59,    60,    -1,    -1,    -1,
      -1,    -1,   109,   110,   111,    69,    70,    -1,    -1,   116,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   109,   110,   111,    -1,    -1,
      -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   135,   136
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   140,   141,   142,     0,   143,     1,    11,    24,    37,
      38,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    55,    56,    57,    58,    59,
      60,    62,    65,    66,    68,    69,    70,    71,    72,    73,
      76,    81,    82,    85,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,   100,   101,   108,   109,   110,   111,
     116,   135,   136,   144,   145,   146,   148,   151,   154,   158,
     161,   164,   166,   171,   175,   177,   178,   179,   183,   185,
     192,   196,   204,   210,   211,   213,   215,   216,   219,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   242,   245,   248,
     252,   257,   262,    65,   243,    69,   236,    57,   244,   236,
     236,   236,   236,   236,    55,   238,   245,   236,   236,   236,
     236,   236,   236,   236,   236,    97,   109,   110,   111,   221,
     241,   249,   136,   147,    65,   136,   186,   193,    65,    64,
     221,   136,    65,   221,    65,    55,    55,    55,   149,   152,
     155,    55,    55,   136,   180,   181,   180,   221,   217,    55,
     236,   236,   236,   104,   146,   221,    65,    65,     3,    94,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    29,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    30,    31,    32,    33,
      34,    35,    36,    48,    49,    37,    38,    39,    40,   236,
      52,    54,    41,    43,    44,    55,    56,    57,    70,    87,
     137,   253,   137,    63,    63,    63,    63,    63,   136,   220,
     223,   250,   251,   205,   143,   184,    55,   187,   136,   187,
     194,    64,    66,    65,   221,   172,   167,    55,    55,   144,
     159,   162,    64,   182,     3,    65,   144,   221,   165,   176,
     223,   221,   223,   223,   223,   223,   223,   223,   223,   223,
     223,   223,   223,   223,   223,   223,   223,   223,   224,   226,
     227,   228,   229,   230,   231,   231,   231,   231,   232,   232,
     232,   232,   233,   233,   233,   234,   234,   236,   236,   236,
     236,    40,   106,   220,   235,   246,   247,   239,   221,   240,
     237,   136,   220,   254,   255,    37,    57,   236,   236,   236,
       3,    61,    74,   206,    67,   187,    40,   136,   188,   189,
     190,   191,   182,   182,   182,   197,    63,    96,    97,   136,
     174,   168,   179,   221,   221,   221,   156,   221,   221,   109,
     110,   111,   112,   116,   136,     4,   181,   105,   218,    63,
     144,   146,    64,     3,    63,   136,    61,   136,    64,     3,
       3,   256,    57,   258,   251,   220,   146,   182,   182,    63,
       3,    63,   146,    57,   146,   195,   102,   103,   198,   199,
     201,   203,   212,   136,   136,   182,    86,    65,    63,    63,
      90,   160,   163,   220,    55,   144,   214,   224,   247,   220,
     220,   255,    61,   263,    48,    49,    55,   116,   135,   257,
     259,   260,   261,   262,     3,   146,     4,    40,   190,   191,
      61,   221,    55,    55,   182,    67,   201,   199,   202,   146,
     182,   182,   221,   169,   221,   150,   153,    55,    63,    63,
      63,   136,   144,   135,   264,   265,   135,   135,    61,     3,
     207,   220,    63,    61,   136,    63,   146,    63,    65,   144,
     144,   221,   144,   144,    63,     3,     3,    61,   261,   208,
     209,   220,   182,   182,   173,   170,   221,    63,    48,    49,
     116,   135,   257,   262,   265,     3,    63,   144,    63,   157,
     135,   135,   209,   200,   144,    65,   146
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
#line 227 "syntax/tjs.y"
    { sb->PushContextStack(TJS_W("global"),
												ctTopLevel); ;}
    break;

  case 4:

/* Line 1464 of yacc.c  */
#line 229 "syntax/tjs.y"
    { sb->PopContextStack(); ;}
    break;

  case 7:

/* Line 1464 of yacc.c  */
#line 236 "syntax/tjs.y"
    { if(sb->CompileErrorCount>20)
												YYABORT;
											  else yyerrok; ;}
    break;

  case 11:

/* Line 1464 of yacc.c  */
#line 250 "syntax/tjs.y"
    { cc->CreateExprCode((yyvsp[(1) - (2)].np)); ;}
    break;

  case 21:

/* Line 1464 of yacc.c  */
#line 260 "syntax/tjs.y"
    { cc->DoBreak(); ;}
    break;

  case 22:

/* Line 1464 of yacc.c  */
#line 261 "syntax/tjs.y"
    { cc->DoContinue(); ;}
    break;

  case 23:

/* Line 1464 of yacc.c  */
#line 262 "syntax/tjs.y"
    { cc->DoDebugger(); ;}
    break;

  case 34:

/* Line 1464 of yacc.c  */
#line 277 "syntax/tjs.y"
    { cc->EnterBlock(); ;}
    break;

  case 35:

/* Line 1464 of yacc.c  */
#line 279 "syntax/tjs.y"
    { cc->ExitBlock(); ;}
    break;

  case 36:

/* Line 1464 of yacc.c  */
#line 290 "syntax/tjs.y"
    { cc->EnterForCode(); ;}
    break;

  case 37:

/* Line 1464 of yacc.c  */
#line 291 "syntax/tjs.y"
    { cc->CreateForExprCode((yyvsp[(4) - (5)].np));
											  cc->SetForThirdExprCode(NULL); ;}
    break;

  case 38:

/* Line 1464 of yacc.c  */
#line 293 "syntax/tjs.y"
    { cc->ExitForCode(); ;}
    break;

  case 39:

/* Line 1464 of yacc.c  */
#line 304 "syntax/tjs.y"
    { cc->EnterForCode(); ;}
    break;

  case 40:

/* Line 1464 of yacc.c  */
#line 305 "syntax/tjs.y"
    { cc->CreateForExprCode(cc->MakeNP1(T_EXCRAMATION, (yyvsp[(4) - (5)].np)));
											  cc->SetForThirdExprCode(NULL); ;}
    break;

  case 41:

/* Line 1464 of yacc.c  */
#line 307 "syntax/tjs.y"
    { cc->ExitForCode(); ;}
    break;

  case 42:

/* Line 1464 of yacc.c  */
#line 326 "syntax/tjs.y"
    { cc->EnterDoWhileCode(); cc->EnterBlock(); ;}
    break;

  case 43:

/* Line 1464 of yacc.c  */
#line 327 "syntax/tjs.y"
    { cc->ExitBlock(); ;}
    break;

  case 44:

/* Line 1464 of yacc.c  */
#line 329 "syntax/tjs.y"
    { cc->CreateDoWhileExprCode((yyvsp[(7) - (8)].np)); ;}
    break;

  case 45:

/* Line 1464 of yacc.c  */
#line 330 "syntax/tjs.y"
    { cc->ExitDoWhileCode(); ;}
    break;

  case 46:

/* Line 1464 of yacc.c  */
#line 335 "syntax/tjs.y"
    { cc->EnterIfCode(); ;}
    break;

  case 47:

/* Line 1464 of yacc.c  */
#line 336 "syntax/tjs.y"
    { cc->CreateIfExprCode((yyvsp[(4) - (4)].np)); ;}
    break;

  case 48:

/* Line 1464 of yacc.c  */
#line 337 "syntax/tjs.y"
    { cc->ExitIfCode(); ;}
    break;

  case 49:

/* Line 1464 of yacc.c  */
#line 349 "syntax/tjs.y"
    { cc->EnterIfCode(); ;}
    break;

  case 50:

/* Line 1464 of yacc.c  */
#line 350 "syntax/tjs.y"
    { cc->CreateIfExprCode(cc->MakeNP1(T_EXCRAMATION, (yyvsp[(4) - (4)].np))); ;}
    break;

  case 51:

/* Line 1464 of yacc.c  */
#line 351 "syntax/tjs.y"
    { cc->ExitIfCode(); ;}
    break;

  case 52:

/* Line 1464 of yacc.c  */
#line 356 "syntax/tjs.y"
    { cc->EnterElseCode(); ;}
    break;

  case 53:

/* Line 1464 of yacc.c  */
#line 357 "syntax/tjs.y"
    { cc->ExitElseCode(); ;}
    break;

  case 54:

/* Line 1464 of yacc.c  */
#line 376 "syntax/tjs.y"
    { cc->EnterForCode(); ;}
    break;

  case 55:

/* Line 1464 of yacc.c  */
#line 380 "syntax/tjs.y"
    { cc->ExitForCode(); ;}
    break;

  case 58:

/* Line 1464 of yacc.c  */
#line 388 "syntax/tjs.y"
    { cc->CreateExprCode((yyvsp[(1) - (1)].np)); ;}
    break;

  case 59:

/* Line 1464 of yacc.c  */
#line 393 "syntax/tjs.y"
    { cc->CreateForExprCode(NULL); ;}
    break;

  case 60:

/* Line 1464 of yacc.c  */
#line 394 "syntax/tjs.y"
    { cc->CreateForExprCode((yyvsp[(1) - (1)].np)); ;}
    break;

  case 61:

/* Line 1464 of yacc.c  */
#line 399 "syntax/tjs.y"
    { cc->SetForThirdExprCode(NULL); ;}
    break;

  case 62:

/* Line 1464 of yacc.c  */
#line 400 "syntax/tjs.y"
    { cc->SetForThirdExprCode((yyvsp[(1) - (1)].np)); ;}
    break;

  case 63:

/* Line 1464 of yacc.c  */
#line 423 "syntax/tjs.y"
    { cc->EnterForCode(); ;}
    break;

  case 64:

/* Line 1464 of yacc.c  */
#line 424 "syntax/tjs.y"
    { tjs_char *temp = cc->GetTemporaryVariableName();
	  											  { // var $1 = Iterator.from(expr);
	  											    // [1] Iterator.from
	  											    auto iter = cc->MakeNP0(T_SYMBOL);
	  											    auto from = cc->MakeNP0(T_SYMBOL);
	  											    iter->SetValue(tTJSVariant("Iterator"));
	  											    from->SetValue(tTJSVariant("from"));
	  											    auto caller = cc->MakeNP2(T_DOT, iter, from);
	  											    // [2] [1](expr)
	  											    auto arg = cc->MakeNP1(T_ARG, (yyvsp[(6) - (7)].np));
	  											    auto call = cc->MakeNP2(T_LPARENTHESIS, caller, arg);
	  											    // [3] var $1 = [2]
	  											    cc->InitLocalVariable(temp, call);
	  											  }
	  											  { // $1.moveNext();
	  											    // [1] $1.moveNext
	  											    auto t1 = cc->MakeNP0(T_SYMBOL);
	  											    auto next = cc->MakeNP0(T_SYMBOL);
	  											    t1->SetValue(tTJSVariant(temp));
	  											    next->SetValue(tTJSVariant("moveNext"));
	  											    auto caller = cc->MakeNP2(T_DOT, t1, next);
	  											    // [2] [1]()
	  											    auto arg = cc->MakeNP1(T_ARG, nullptr);
	  											    auto call = cc->MakeNP2(T_LPARENTHESIS, caller, arg);
	  											    cc->CreateForExprCode(call);
	  											  }
	  											  cc->SetForThirdExprCode(nullptr);
	  											  { // $$$ id = $1.current();
	  											    // [1] $1.current
	  											    auto t1 = cc->MakeNP0(T_SYMBOL);
	  											    auto cur = cc->MakeNP0(T_SYMBOL);
	  											    t1->SetValue(tTJSVariant(temp));
	  											    cur->SetValue(tTJSVariant("current"));
	  											    auto caller = cc->MakeNP2(T_DOT, t1, cur);
	  											    // [2] [1]()
	  											    auto arg = cc->MakeNP1(T_ARG, nullptr);
	  											    auto call = cc->MakeNP2(T_LPARENTHESIS, caller, arg);
	  											    // [3] $$$ id = [2]
	  											    cc->CreateExprCode(cc->MakeNP2(T_EQUAL, (yyvsp[(4) - (7)].np), call));
	  											  }
	  											  delete[] temp;
	  											;}
    break;

  case 65:

/* Line 1464 of yacc.c  */
#line 466 "syntax/tjs.y"
    { cc->ExitForCode(); ;}
    break;

  case 66:

/* Line 1464 of yacc.c  */
#line 470 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP0(T_SYMBOL); 
												  (yyval.np)->SetValue(lx->GetString((yyvsp[(2) - (3)].num)));
												  cc->AddLocalVariable(lx->GetString((yyvsp[(2) - (3)].num))); ;}
    break;

  case 67:

/* Line 1464 of yacc.c  */
#line 473 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP0(T_SYMBOL); 
												  (yyval.np)->SetValue(lx->GetString((yyvsp[(2) - (3)].num)));
												  cc->AddLocalVariable(lx->GetString((yyvsp[(2) - (3)].num))); ;}
    break;

  case 68:

/* Line 1464 of yacc.c  */
#line 476 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP0(T_SYMBOL);
												  (yyval.np)->SetValue(lx->GetString((yyvsp[(1) - (2)].num))); ;}
    break;

  case 69:

/* Line 1464 of yacc.c  */
#line 490 "syntax/tjs.y"
    { cc->ExitForCode(); ;}
    break;

  case 70:

/* Line 1464 of yacc.c  */
#line 491 "syntax/tjs.y"
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

  case 71:

/* Line 1464 of yacc.c  */
#line 509 "syntax/tjs.y"
    { cc->ExitForCode(); ;}
    break;

  case 72:

/* Line 1464 of yacc.c  */
#line 513 "syntax/tjs.y"
    { cc->EnterForCode();
												  cc->CreateForExprCode(NULL);
												  cc->SetForThirdExprCode(NULL); ;}
    break;

  case 78:

/* Line 1464 of yacc.c  */
#line 538 "syntax/tjs.y"
    { cc->AddLocalVariable(
												lx->GetString((yyvsp[(1) - (2)].num))); ;}
    break;

  case 79:

/* Line 1464 of yacc.c  */
#line 540 "syntax/tjs.y"
    { cc->InitLocalVariable(
											  lx->GetString((yyvsp[(1) - (4)].num)), (yyvsp[(4) - (4)].np)); ;}
    break;

  case 87:

/* Line 1464 of yacc.c  */
#line 557 "syntax/tjs.y"
    { sb->PushContextStack(
												lx->GetString((yyvsp[(2) - (2)].num)),
											  ctFunction);
											  cc->EnterBlock();;}
    break;

  case 88:

/* Line 1464 of yacc.c  */
#line 562 "syntax/tjs.y"
    { cc->ExitBlock(); sb->PopContextStack(); ;}
    break;

  case 89:

/* Line 1464 of yacc.c  */
#line 567 "syntax/tjs.y"
    { sb->PushContextStack(
												TJS_W("(anonymous)"),
											  ctExprFunction);
											  cc->EnterBlock(); ;}
    break;

  case 90:

/* Line 1464 of yacc.c  */
#line 572 "syntax/tjs.y"
    { cc->ExitBlock();
											  tTJSVariant v(cc);
											  sb->PopContextStack();
											  (yyval.np) = cc->MakeNP0(T_CONSTVAL);
											  (yyval.np)->SetValue(v); ;}
    break;

  case 99:

/* Line 1464 of yacc.c  */
#line 599 "syntax/tjs.y"
    { cc->AddFunctionDeclArg(
												lx->GetString((yyvsp[(1) - (2)].num)), NULL); ;}
    break;

  case 100:

/* Line 1464 of yacc.c  */
#line 601 "syntax/tjs.y"
    { cc->AddFunctionDeclArg(
												lx->GetString((yyvsp[(1) - (4)].num)), (yyvsp[(4) - (4)].np)); ;}
    break;

  case 101:

/* Line 1464 of yacc.c  */
#line 606 "syntax/tjs.y"
    { cc->AddFunctionDeclArgCollapse(
												NULL); ;}
    break;

  case 102:

/* Line 1464 of yacc.c  */
#line 608 "syntax/tjs.y"
    { cc->AddFunctionDeclArgCollapse(
												lx->GetString((yyvsp[(1) - (3)].num))); ;}
    break;

  case 103:

/* Line 1464 of yacc.c  */
#line 624 "syntax/tjs.y"
    { sb->PushContextStack(TJS_W("(anonymous)"), ctExprFunction); cc->EnterBlock(); ;}
    break;

  case 104:

/* Line 1464 of yacc.c  */
#line 628 "syntax/tjs.y"
    { cc->ExitBlock(); tTJSVariant v(cc); sb->PopContextStack(); (yyval.np) = cc->MakeNP0(T_CONSTVAL); (yyval.np)->SetValue(v); ;}
    break;

  case 105:

/* Line 1464 of yacc.c  */
#line 632 "syntax/tjs.y"
    { cc->AddFunctionDeclArg(lx->GetString((yyvsp[(1) - (2)].num)), NULL); ;}
    break;

  case 107:

/* Line 1464 of yacc.c  */
#line 637 "syntax/tjs.y"
    { cc->ReturnFromFunc(NULL); ;}
    break;

  case 108:

/* Line 1464 of yacc.c  */
#line 638 "syntax/tjs.y"
    { cc->ReturnFromFunc((yyvsp[(2) - (3)].np)); ;}
    break;

  case 110:

/* Line 1464 of yacc.c  */
#line 645 "syntax/tjs.y"
    { sb->PushContextStack(
												lx->GetString((yyvsp[(2) - (3)].num)),
												ctProperty); ;}
    break;

  case 111:

/* Line 1464 of yacc.c  */
#line 649 "syntax/tjs.y"
    { sb->PopContextStack(); ;}
    break;

  case 116:

/* Line 1464 of yacc.c  */
#line 660 "syntax/tjs.y"
    { sb->PushContextStack(
												TJS_W("(setter)"),
												ctPropertySetter);
											  cc->EnterBlock();
											  cc->SetPropertyDeclArg(
												lx->GetString((yyvsp[(3) - (5)].num))); ;}
    break;

  case 117:

/* Line 1464 of yacc.c  */
#line 666 "syntax/tjs.y"
    { cc->ExitBlock();
											  sb->PopContextStack(); ;}
    break;

  case 118:

/* Line 1464 of yacc.c  */
#line 671 "syntax/tjs.y"
    { sb->PushContextStack(
												TJS_W("(getter)"),
												ctPropertyGetter);
											  cc->EnterBlock(); ;}
    break;

  case 119:

/* Line 1464 of yacc.c  */
#line 675 "syntax/tjs.y"
    { cc->ExitBlock();
											  sb->PopContextStack(); ;}
    break;

  case 122:

/* Line 1464 of yacc.c  */
#line 687 "syntax/tjs.y"
    { sb->PushContextStack(
												lx->GetString((yyvsp[(2) - (2)].num)),
												ctClass); ;}
    break;

  case 123:

/* Line 1464 of yacc.c  */
#line 691 "syntax/tjs.y"
    { sb->PopContextStack(); ;}
    break;

  case 125:

/* Line 1464 of yacc.c  */
#line 696 "syntax/tjs.y"
    { cc->CreateExtendsExprCode((yyvsp[(2) - (2)].np), true); ;}
    break;

  case 126:

/* Line 1464 of yacc.c  */
#line 697 "syntax/tjs.y"
    { cc->CreateExtendsExprCode((yyvsp[(2) - (3)].np), false); ;}
    break;

  case 130:

/* Line 1464 of yacc.c  */
#line 707 "syntax/tjs.y"
    { cc->CreateExtendsExprCode((yyvsp[(1) - (1)].np), false); ;}
    break;

  case 131:

/* Line 1464 of yacc.c  */
#line 712 "syntax/tjs.y"
    { cc->ReturnFromFunc(NULL); ;}
    break;

  case 132:

/* Line 1464 of yacc.c  */
#line 713 "syntax/tjs.y"
    { cc->ReturnFromFunc((yyvsp[(2) - (3)].np)); ;}
    break;

  case 133:

/* Line 1464 of yacc.c  */
#line 720 "syntax/tjs.y"
    { cc->EnterSwitchCode((yyvsp[(3) - (4)].np)); ;}
    break;

  case 134:

/* Line 1464 of yacc.c  */
#line 721 "syntax/tjs.y"
    { cc->ExitSwitchCode(); ;}
    break;

  case 135:

/* Line 1464 of yacc.c  */
#line 727 "syntax/tjs.y"
    { cc->EnterWithCode((yyvsp[(3) - (4)].np)); ;}
    break;

  case 136:

/* Line 1464 of yacc.c  */
#line 728 "syntax/tjs.y"
    { cc->ExitWithCode(); ;}
    break;

  case 137:

/* Line 1464 of yacc.c  */
#line 733 "syntax/tjs.y"
    { cc->ProcessCaseCode((yyvsp[(2) - (3)].np)); ;}
    break;

  case 138:

/* Line 1464 of yacc.c  */
#line 734 "syntax/tjs.y"
    { cc->ProcessCaseCode(NULL); ;}
    break;

  case 139:

/* Line 1464 of yacc.c  */
#line 739 "syntax/tjs.y"
    { cc->EnterTryCode(); ;}
    break;

  case 140:

/* Line 1464 of yacc.c  */
#line 742 "syntax/tjs.y"
    { cc->ExitTryCode(); ;}
    break;

  case 141:

/* Line 1464 of yacc.c  */
#line 746 "syntax/tjs.y"
    { cc->EnterCatchCode(NULL); ;}
    break;

  case 142:

/* Line 1464 of yacc.c  */
#line 747 "syntax/tjs.y"
    { cc->EnterCatchCode(NULL); ;}
    break;

  case 143:

/* Line 1464 of yacc.c  */
#line 748 "syntax/tjs.y"
    { cc->EnterCatchCode(
												lx->GetString((yyvsp[(3) - (4)].num))); ;}
    break;

  case 144:

/* Line 1464 of yacc.c  */
#line 754 "syntax/tjs.y"
    { cc->ProcessThrowCode((yyvsp[(2) - (3)].np)); ;}
    break;

  case 145:

/* Line 1464 of yacc.c  */
#line 759 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 146:

/* Line 1464 of yacc.c  */
#line 763 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 147:

/* Line 1464 of yacc.c  */
#line 764 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_IF, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 148:

/* Line 1464 of yacc.c  */
#line 769 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 149:

/* Line 1464 of yacc.c  */
#line 770 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_COMMA, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 150:

/* Line 1464 of yacc.c  */
#line 775 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 151:

/* Line 1464 of yacc.c  */
#line 776 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_SWAP, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 152:

/* Line 1464 of yacc.c  */
#line 777 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_EQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 153:

/* Line 1464 of yacc.c  */
#line 778 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_AMPERSANDEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 154:

/* Line 1464 of yacc.c  */
#line 779 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_VERTLINEEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 155:

/* Line 1464 of yacc.c  */
#line 780 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_CHEVRONEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 156:

/* Line 1464 of yacc.c  */
#line 781 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_MINUSEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 157:

/* Line 1464 of yacc.c  */
#line 782 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_PLUSEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 158:

/* Line 1464 of yacc.c  */
#line 783 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_PERCENTEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 159:

/* Line 1464 of yacc.c  */
#line 784 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_SLASHEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 160:

/* Line 1464 of yacc.c  */
#line 785 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_BACKSLASHEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 161:

/* Line 1464 of yacc.c  */
#line 786 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_ASTERISKEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 162:

/* Line 1464 of yacc.c  */
#line 787 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_LOGICALOREQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 163:

/* Line 1464 of yacc.c  */
#line 788 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_LOGICALANDEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 164:

/* Line 1464 of yacc.c  */
#line 789 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_RARITHSHIFTEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 165:

/* Line 1464 of yacc.c  */
#line 790 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_LARITHSHIFTEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 166:

/* Line 1464 of yacc.c  */
#line 791 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_RBITSHIFTEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 167:

/* Line 1464 of yacc.c  */
#line 796 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 168:

/* Line 1464 of yacc.c  */
#line 799 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP3(T_QUESTION, (yyvsp[(1) - (5)].np), (yyvsp[(3) - (5)].np), (yyvsp[(5) - (5)].np)); ;}
    break;

  case 169:

/* Line 1464 of yacc.c  */
#line 805 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 170:

/* Line 1464 of yacc.c  */
#line 806 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_LOGICALOR, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 171:

/* Line 1464 of yacc.c  */
#line 810 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 172:

/* Line 1464 of yacc.c  */
#line 812 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_LOGICALAND, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 173:

/* Line 1464 of yacc.c  */
#line 816 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 174:

/* Line 1464 of yacc.c  */
#line 817 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_VERTLINE, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 175:

/* Line 1464 of yacc.c  */
#line 821 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 176:

/* Line 1464 of yacc.c  */
#line 822 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_CHEVRON, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 177:

/* Line 1464 of yacc.c  */
#line 826 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 178:

/* Line 1464 of yacc.c  */
#line 827 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_AMPERSAND, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 179:

/* Line 1464 of yacc.c  */
#line 831 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 180:

/* Line 1464 of yacc.c  */
#line 832 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_NOTEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 181:

/* Line 1464 of yacc.c  */
#line 833 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_EQUALEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 182:

/* Line 1464 of yacc.c  */
#line 834 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_DISCNOTEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 183:

/* Line 1464 of yacc.c  */
#line 835 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_DISCEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 184:

/* Line 1464 of yacc.c  */
#line 839 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 185:

/* Line 1464 of yacc.c  */
#line 840 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_LT, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 186:

/* Line 1464 of yacc.c  */
#line 841 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_GT, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 187:

/* Line 1464 of yacc.c  */
#line 842 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_LTOREQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 188:

/* Line 1464 of yacc.c  */
#line 843 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_GTOREQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 189:

/* Line 1464 of yacc.c  */
#line 847 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 190:

/* Line 1464 of yacc.c  */
#line 848 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_RARITHSHIFT, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 191:

/* Line 1464 of yacc.c  */
#line 849 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_LARITHSHIFT, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 192:

/* Line 1464 of yacc.c  */
#line 850 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_RBITSHIFT, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 193:

/* Line 1464 of yacc.c  */
#line 855 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 194:

/* Line 1464 of yacc.c  */
#line 856 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_PLUS, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 195:

/* Line 1464 of yacc.c  */
#line 857 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_MINUS, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 196:

/* Line 1464 of yacc.c  */
#line 861 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 197:

/* Line 1464 of yacc.c  */
#line 862 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_PERCENT, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 198:

/* Line 1464 of yacc.c  */
#line 863 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_SLASH, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 199:

/* Line 1464 of yacc.c  */
#line 864 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_BACKSLASH, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 200:

/* Line 1464 of yacc.c  */
#line 865 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_ASTERISK, (yyvsp[(1) - (2)].np), (yyvsp[(2) - (2)].np)); ;}
    break;

  case 201:

/* Line 1464 of yacc.c  */
#line 869 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (2)].np); ;}
    break;

  case 202:

/* Line 1464 of yacc.c  */
#line 873 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 203:

/* Line 1464 of yacc.c  */
#line 874 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_EXCRAMATION, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 204:

/* Line 1464 of yacc.c  */
#line 875 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_TILDE, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 205:

/* Line 1464 of yacc.c  */
#line 876 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_DECREMENT, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 206:

/* Line 1464 of yacc.c  */
#line 877 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_INCREMENT, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 207:

/* Line 1464 of yacc.c  */
#line 878 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(2) - (2)].np); (yyval.np)->SetOpecode(T_NEW); ;}
    break;

  case 208:

/* Line 1464 of yacc.c  */
#line 879 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_INVALIDATE, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 209:

/* Line 1464 of yacc.c  */
#line 880 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_ISVALID, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 210:

/* Line 1464 of yacc.c  */
#line 881 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_ISVALID, (yyvsp[(1) - (2)].np)); ;}
    break;

  case 211:

/* Line 1464 of yacc.c  */
#line 882 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_DELETE, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 212:

/* Line 1464 of yacc.c  */
#line 883 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_TYPEOF, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 213:

/* Line 1464 of yacc.c  */
#line 884 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_SHARP, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 214:

/* Line 1464 of yacc.c  */
#line 885 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_DOLLAR, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 215:

/* Line 1464 of yacc.c  */
#line 886 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_UPLUS, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 216:

/* Line 1464 of yacc.c  */
#line 887 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_UMINUS, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 217:

/* Line 1464 of yacc.c  */
#line 888 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_IGNOREPROP, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 218:

/* Line 1464 of yacc.c  */
#line 889 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_PROPACCESS, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 219:

/* Line 1464 of yacc.c  */
#line 890 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_INSTANCEOF, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 220:

/* Line 1464 of yacc.c  */
#line 891 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_INT, (yyvsp[(4) - (4)].np)); ;}
    break;

  case 221:

/* Line 1464 of yacc.c  */
#line 892 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_INT, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 222:

/* Line 1464 of yacc.c  */
#line 893 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_REAL, (yyvsp[(4) - (4)].np)); ;}
    break;

  case 223:

/* Line 1464 of yacc.c  */
#line 894 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_REAL, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 224:

/* Line 1464 of yacc.c  */
#line 895 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_STRING, (yyvsp[(4) - (4)].np)); ;}
    break;

  case 225:

/* Line 1464 of yacc.c  */
#line 896 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_STRING, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 226:

/* Line 1464 of yacc.c  */
#line 900 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 227:

/* Line 1464 of yacc.c  */
#line 902 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_INCONTEXTOF, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 228:

/* Line 1464 of yacc.c  */
#line 906 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 229:

/* Line 1464 of yacc.c  */
#line 907 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(2) - (3)].np); ;}
    break;

  case 230:

/* Line 1464 of yacc.c  */
#line 908 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_LBRACKET, (yyvsp[(1) - (4)].np), (yyvsp[(3) - (4)].np)); ;}
    break;

  case 231:

/* Line 1464 of yacc.c  */
#line 909 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 232:

/* Line 1464 of yacc.c  */
#line 910 "syntax/tjs.y"
    { lx->SetNextIsBareWord(); ;}
    break;

  case 233:

/* Line 1464 of yacc.c  */
#line 911 "syntax/tjs.y"
    { tTJSExprNode * node = cc->MakeNP0(T_CONSTVAL);
												  node->SetValue(lx->GetValue((yyvsp[(4) - (4)].num)));
												  (yyval.np) = cc->MakeNP2(T_DOT, (yyvsp[(1) - (4)].np), node); ;}
    break;

  case 234:

/* Line 1464 of yacc.c  */
#line 914 "syntax/tjs.y"
    { lx->SetNextIsBareWord(); ;}
    break;

  case 235:

/* Line 1464 of yacc.c  */
#line 915 "syntax/tjs.y"
    { /* syntactic sugar of '(Dictionary.*T_SYMBOL* incontexof *priority_expr*)' */
												  auto dict = cc->MakeNP0(T_SYMBOL);
												  auto method = cc->MakeNP0(T_CONSTVAL);
												  dict->SetValue(tTJSVariant("Dictionary"));
												  method->SetValue(lx->GetValue((yyvsp[(4) - (4)].num)));
												  auto func = cc->MakeNP2(T_DOT, dict, method);
												  (yyval.np) = cc->MakeNP2(T_INCONTEXTOF, func, (yyvsp[(1) - (4)].np)); ;}
    break;

  case 236:

/* Line 1464 of yacc.c  */
#line 922 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_POSTINCREMENT, (yyvsp[(1) - (2)].np)); ;}
    break;

  case 237:

/* Line 1464 of yacc.c  */
#line 923 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_POSTDECREMENT, (yyvsp[(1) - (2)].np)); ;}
    break;

  case 238:

/* Line 1464 of yacc.c  */
#line 924 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_EVAL, (yyvsp[(1) - (2)].np)); ;}
    break;

  case 239:

/* Line 1464 of yacc.c  */
#line 925 "syntax/tjs.y"
    { lx->SetNextIsBareWord(); ;}
    break;

  case 240:

/* Line 1464 of yacc.c  */
#line 926 "syntax/tjs.y"
    { tTJSExprNode * node = cc->MakeNP0(T_CONSTVAL);
												  node->SetValue(lx->GetValue((yyvsp[(3) - (3)].num)));
												  (yyval.np) = cc->MakeNP1(T_WITHDOT, node); ;}
    break;

  case 241:

/* Line 1464 of yacc.c  */
#line 933 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP0(T_CONSTVAL);
												  (yyval.np)->SetValue(lx->GetValue((yyvsp[(1) - (1)].num))); ;}
    break;

  case 242:

/* Line 1464 of yacc.c  */
#line 935 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP0(T_SYMBOL);
												  (yyval.np)->SetValue(tTJSVariant(
													lx->GetString((yyvsp[(1) - (1)].num)))); ;}
    break;

  case 243:

/* Line 1464 of yacc.c  */
#line 938 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP0(T_THIS); ;}
    break;

  case 244:

/* Line 1464 of yacc.c  */
#line 939 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP0(T_SUPER); ;}
    break;

  case 245:

/* Line 1464 of yacc.c  */
#line 940 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 246:

/* Line 1464 of yacc.c  */
#line 941 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 247:

/* Line 1464 of yacc.c  */
#line 942 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP0(T_GLOBAL); ;}
    break;

  case 248:

/* Line 1464 of yacc.c  */
#line 943 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP0(T_VOID); ;}
    break;

  case 249:

/* Line 1464 of yacc.c  */
#line 944 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 250:

/* Line 1464 of yacc.c  */
#line 945 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 251:

/* Line 1464 of yacc.c  */
#line 946 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 252:

/* Line 1464 of yacc.c  */
#line 947 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 253:

/* Line 1464 of yacc.c  */
#line 948 "syntax/tjs.y"
    { lx->SetStartOfRegExp(); ;}
    break;

  case 254:

/* Line 1464 of yacc.c  */
#line 949 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP0(T_REGEXP);
												  (yyval.np)->SetValue(lx->GetValue((yyvsp[(3) - (3)].num))); ;}
    break;

  case 255:

/* Line 1464 of yacc.c  */
#line 951 "syntax/tjs.y"
    { lx->SetStartOfRegExp(); ;}
    break;

  case 256:

/* Line 1464 of yacc.c  */
#line 952 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP0(T_REGEXP);
												  (yyval.np)->SetValue(lx->GetValue((yyvsp[(3) - (3)].num))); ;}
    break;

  case 257:

/* Line 1464 of yacc.c  */
#line 959 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_LPARENTHESIS, (yyvsp[(1) - (4)].np), (yyvsp[(3) - (4)].np)); ;}
    break;

  case 258:

/* Line 1464 of yacc.c  */
#line 964 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP0(T_OMIT); ;}
    break;

  case 259:

/* Line 1464 of yacc.c  */
#line 965 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_ARG, (yyvsp[(1) - (1)].np)); ;}
    break;

  case 260:

/* Line 1464 of yacc.c  */
#line 966 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_ARG, (yyvsp[(3) - (3)].np), (yyvsp[(1) - (3)].np)); ;}
    break;

  case 261:

/* Line 1464 of yacc.c  */
#line 970 "syntax/tjs.y"
    { (yyval.np) = NULL; ;}
    break;

  case 262:

/* Line 1464 of yacc.c  */
#line 971 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_EXPANDARG, NULL); ;}
    break;

  case 263:

/* Line 1464 of yacc.c  */
#line 972 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_EXPANDARG, (yyvsp[(1) - (1)].np)); ;}
    break;

  case 264:

/* Line 1464 of yacc.c  */
#line 973 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 265:

/* Line 1464 of yacc.c  */
#line 979 "syntax/tjs.y"
    { tTJSExprNode *node =
										  cc->MakeNP0(T_INLINEARRAY);
										  cc->PushCurrentNode(node); ;}
    break;

  case 266:

/* Line 1464 of yacc.c  */
#line 983 "syntax/tjs.y"
    { (yyval.np) = cn; cc->PopCurrentNode(); ;}
    break;

  case 267:

/* Line 1464 of yacc.c  */
#line 988 "syntax/tjs.y"
    { cn->Add((yyvsp[(1) - (1)].np)); ;}
    break;

  case 268:

/* Line 1464 of yacc.c  */
#line 989 "syntax/tjs.y"
    { cn->Add((yyvsp[(3) - (3)].np)); ;}
    break;

  case 269:

/* Line 1464 of yacc.c  */
#line 994 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_ARRAYARG, NULL); ;}
    break;

  case 270:

/* Line 1464 of yacc.c  */
#line 995 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_ARRAYARG, (yyvsp[(1) - (1)].np)); ;}
    break;

  case 271:

/* Line 1464 of yacc.c  */
#line 1000 "syntax/tjs.y"
    { tTJSExprNode *node =
										  cc->MakeNP0(T_INLINEDIC);
										  cc->PushCurrentNode(node); ;}
    break;

  case 272:

/* Line 1464 of yacc.c  */
#line 1005 "syntax/tjs.y"
    { (yyval.np) = cn; cc->PopCurrentNode(); ;}
    break;

  case 274:

/* Line 1464 of yacc.c  */
#line 1012 "syntax/tjs.y"
    { cn->Add((yyvsp[(1) - (1)].np)); ;}
    break;

  case 275:

/* Line 1464 of yacc.c  */
#line 1013 "syntax/tjs.y"
    { cn->Add((yyvsp[(3) - (3)].np)); ;}
    break;

  case 276:

/* Line 1464 of yacc.c  */
#line 1018 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_DICELM, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 277:

/* Line 1464 of yacc.c  */
#line 1019 "syntax/tjs.y"
    { tTJSVariant val(lx->GetString((yyvsp[(1) - (3)].num)));
										  tTJSExprNode *node0 = cc->MakeNP0(T_CONSTVAL);
										  node0->SetValue(val);
										  (yyval.np) = cc->MakeNP2(T_DICELM, node0, (yyvsp[(3) - (3)].np)); ;}
    break;

  case 280:

/* Line 1464 of yacc.c  */
#line 1035 "syntax/tjs.y"
    { tTJSExprNode *node =
										  cc->MakeNP0(T_CONSTVAL);
										  iTJSDispatch2 * dsp = TJSCreateArrayObject();
										  node->SetValue(tTJSVariant(dsp, dsp));
										  dsp->Release();
										  cc->PushCurrentNode(node); ;}
    break;

  case 281:

/* Line 1464 of yacc.c  */
#line 1042 "syntax/tjs.y"
    { (yyval.np) = cn; cc->PopCurrentNode(); ;}
    break;

  case 286:

/* Line 1464 of yacc.c  */
#line 1060 "syntax/tjs.y"
    { cn->AddArrayElement(- lx->GetValue((yyvsp[(2) - (2)].num))); ;}
    break;

  case 287:

/* Line 1464 of yacc.c  */
#line 1061 "syntax/tjs.y"
    { cn->AddArrayElement(+ lx->GetValue((yyvsp[(2) - (2)].num))); ;}
    break;

  case 288:

/* Line 1464 of yacc.c  */
#line 1062 "syntax/tjs.y"
    { cn->AddArrayElement(lx->GetValue((yyvsp[(1) - (1)].num))); ;}
    break;

  case 289:

/* Line 1464 of yacc.c  */
#line 1063 "syntax/tjs.y"
    { cn->AddArrayElement(tTJSVariant());  ;}
    break;

  case 290:

/* Line 1464 of yacc.c  */
#line 1064 "syntax/tjs.y"
    { cn->AddArrayElement((yyvsp[(1) - (1)].np)->GetValue()); ;}
    break;

  case 291:

/* Line 1464 of yacc.c  */
#line 1065 "syntax/tjs.y"
    { cn->AddArrayElement((yyvsp[(1) - (1)].np)->GetValue()); ;}
    break;

  case 292:

/* Line 1464 of yacc.c  */
#line 1070 "syntax/tjs.y"
    { tTJSExprNode *node =
										  cc->MakeNP0(T_CONSTVAL);
										  iTJSDispatch2 * dsp = TJSCreateDictionaryObject();
										  node->SetValue(tTJSVariant(dsp, dsp));
										  dsp->Release();
										  cc->PushCurrentNode(node); ;}
    break;

  case 293:

/* Line 1464 of yacc.c  */
#line 1077 "syntax/tjs.y"
    { (yyval.np) = cn; cc->PopCurrentNode(); ;}
    break;

  case 297:

/* Line 1464 of yacc.c  */
#line 1090 "syntax/tjs.y"
    { cn->AddDictionaryElement(lx->GetValue((yyvsp[(1) - (4)].num)), - lx->GetValue((yyvsp[(4) - (4)].num))); ;}
    break;

  case 298:

/* Line 1464 of yacc.c  */
#line 1091 "syntax/tjs.y"
    { cn->AddDictionaryElement(lx->GetValue((yyvsp[(1) - (4)].num)), + lx->GetValue((yyvsp[(4) - (4)].num))); ;}
    break;

  case 299:

/* Line 1464 of yacc.c  */
#line 1092 "syntax/tjs.y"
    { cn->AddDictionaryElement(lx->GetValue((yyvsp[(1) - (3)].num)), lx->GetValue((yyvsp[(3) - (3)].num))); ;}
    break;

  case 300:

/* Line 1464 of yacc.c  */
#line 1093 "syntax/tjs.y"
    { cn->AddDictionaryElement(lx->GetValue((yyvsp[(1) - (3)].num)), tTJSVariant()); ;}
    break;

  case 301:

/* Line 1464 of yacc.c  */
#line 1094 "syntax/tjs.y"
    { cn->AddDictionaryElement(lx->GetValue((yyvsp[(1) - (3)].num)), (yyvsp[(3) - (3)].np)->GetValue()); ;}
    break;

  case 302:

/* Line 1464 of yacc.c  */
#line 1095 "syntax/tjs.y"
    { cn->AddDictionaryElement(lx->GetValue((yyvsp[(1) - (3)].num)), (yyvsp[(3) - (3)].np)->GetValue()); ;}
    break;



/* Line 1464 of yacc.c  */
#line 4064 "tjs.tab.c"
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
#line 1100 "syntax/tjs.y"



}
