/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Using locations.  */
#define YYLSP_NEEDED 0

/* Substitute the variable and function names.  */
#define yyparse zendparse
#define yylex   zendlex
#define yyerror zenderror
#define yylval  zendlval
#define yychar  zendchar
#define yydebug zenddebug
#define yynerrs zendnerrs


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     T_REQUIRE_ONCE = 258,
     T_REQUIRE = 259,
     T_EVAL = 260,
     T_INCLUDE_ONCE = 261,
     T_INCLUDE = 262,
     T_LOGICAL_OR = 263,
     T_LOGICAL_XOR = 264,
     T_LOGICAL_AND = 265,
     T_PRINT = 266,
     T_SR_EQUAL = 267,
     T_SL_EQUAL = 268,
     T_XOR_EQUAL = 269,
     T_OR_EQUAL = 270,
     T_AND_EQUAL = 271,
     T_MOD_EQUAL = 272,
     T_CONCAT_EQUAL = 273,
     T_DIV_EQUAL = 274,
     T_MUL_EQUAL = 275,
     T_MINUS_EQUAL = 276,
     T_PLUS_EQUAL = 277,
     T_BOOLEAN_OR = 278,
     T_BOOLEAN_AND = 279,
     T_IS_NOT_IDENTICAL = 280,
     T_IS_IDENTICAL = 281,
     T_IS_NOT_EQUAL = 282,
     T_IS_EQUAL = 283,
     T_IS_GREATER_OR_EQUAL = 284,
     T_IS_SMALLER_OR_EQUAL = 285,
     T_SR = 286,
     T_SL = 287,
     T_INSTANCEOF = 288,
     T_UNSET_CAST = 289,
     T_BOOL_CAST = 290,
     T_OBJECT_CAST = 291,
     T_ARRAY_CAST = 292,
     T_STRING_CAST = 293,
     T_DOUBLE_CAST = 294,
     T_INT_CAST = 295,
     T_DEC = 296,
     T_INC = 297,
     T_CLONE = 298,
     T_NEW = 299,
     T_EXIT = 300,
     T_IF = 301,
     T_ELSEIF = 302,
     T_ELSE = 303,
     T_ENDIF = 304,
     T_LNUMBER = 305,
     T_DNUMBER = 306,
     T_STRING = 307,
     T_STRING_VARNAME = 308,
     T_VARIABLE = 309,
     T_NUM_STRING = 310,
     T_INLINE_HTML = 311,
     T_CHARACTER = 312,
     T_BAD_CHARACTER = 313,
     T_ENCAPSED_AND_WHITESPACE = 314,
     T_CONSTANT_ENCAPSED_STRING = 315,
     T_ECHO = 316,
     T_DO = 317,
     T_WHILE = 318,
     T_ENDWHILE = 319,
     T_FOR = 320,
     T_ENDFOR = 321,
     T_FOREACH = 322,
     T_ENDFOREACH = 323,
     T_DECLARE = 324,
     T_ENDDECLARE = 325,
     T_AS = 326,
     T_SWITCH = 327,
     T_ENDSWITCH = 328,
     T_CASE = 329,
     T_DEFAULT = 330,
     T_BREAK = 331,
     T_CONTINUE = 332,
     T_FUNCTION = 333,
     T_CONST = 334,
     T_RETURN = 335,
     T_TRY = 336,
     T_CATCH = 337,
     T_THROW = 338,
     T_USE = 339,
     T_GLOBAL = 340,
     T_PUBLIC = 341,
     T_PROTECTED = 342,
     T_PRIVATE = 343,
     T_FINAL = 344,
     T_ABSTRACT = 345,
     T_STATIC = 346,
     T_VAR = 347,
     T_UNSET = 348,
     T_ISSET = 349,
     T_EMPTY = 350,
     T_HALT_COMPILER = 351,
     T_CLASS = 352,
     T_INTERFACE = 353,
     T_EXTENDS = 354,
     T_IMPLEMENTS = 355,
     T_OBJECT_OPERATOR = 356,
     T_DOUBLE_ARROW = 357,
     T_LIST = 358,
     T_ARRAY = 359,
     T_CLASS_C = 360,
     T_METHOD_C = 361,
     T_FUNC_C = 362,
     T_LINE = 363,
     T_FILE = 364,
     T_COMMENT = 365,
     T_DOC_COMMENT = 366,
     T_OPEN_TAG = 367,
     T_OPEN_TAG_WITH_ECHO = 368,
     T_CLOSE_TAG = 369,
     T_WHITESPACE = 370,
     T_START_HEREDOC = 371,
     T_END_HEREDOC = 372,
     T_DOLLAR_OPEN_CURLY_BRACES = 373,
     T_CURLY_OPEN = 374,
     T_PAAMAYIM_NEKUDOTAYIM = 375
   };
#endif
/* Tokens.  */
#define T_REQUIRE_ONCE 258
#define T_REQUIRE 259
#define T_EVAL 260
#define T_INCLUDE_ONCE 261
#define T_INCLUDE 262
#define T_LOGICAL_OR 263
#define T_LOGICAL_XOR 264
#define T_LOGICAL_AND 265
#define T_PRINT 266
#define T_SR_EQUAL 267
#define T_SL_EQUAL 268
#define T_XOR_EQUAL 269
#define T_OR_EQUAL 270
#define T_AND_EQUAL 271
#define T_MOD_EQUAL 272
#define T_CONCAT_EQUAL 273
#define T_DIV_EQUAL 274
#define T_MUL_EQUAL 275
#define T_MINUS_EQUAL 276
#define T_PLUS_EQUAL 277
#define T_BOOLEAN_OR 278
#define T_BOOLEAN_AND 279
#define T_IS_NOT_IDENTICAL 280
#define T_IS_IDENTICAL 281
#define T_IS_NOT_EQUAL 282
#define T_IS_EQUAL 283
#define T_IS_GREATER_OR_EQUAL 284
#define T_IS_SMALLER_OR_EQUAL 285
#define T_SR 286
#define T_SL 287
#define T_INSTANCEOF 288
#define T_UNSET_CAST 289
#define T_BOOL_CAST 290
#define T_OBJECT_CAST 291
#define T_ARRAY_CAST 292
#define T_STRING_CAST 293
#define T_DOUBLE_CAST 294
#define T_INT_CAST 295
#define T_DEC 296
#define T_INC 297
#define T_CLONE 298
#define T_NEW 299
#define T_EXIT 300
#define T_IF 301
#define T_ELSEIF 302
#define T_ELSE 303
#define T_ENDIF 304
#define T_LNUMBER 305
#define T_DNUMBER 306
#define T_STRING 307
#define T_STRING_VARNAME 308
#define T_VARIABLE 309
#define T_NUM_STRING 310
#define T_INLINE_HTML 311
#define T_CHARACTER 312
#define T_BAD_CHARACTER 313
#define T_ENCAPSED_AND_WHITESPACE 314
#define T_CONSTANT_ENCAPSED_STRING 315
#define T_ECHO 316
#define T_DO 317
#define T_WHILE 318
#define T_ENDWHILE 319
#define T_FOR 320
#define T_ENDFOR 321
#define T_FOREACH 322
#define T_ENDFOREACH 323
#define T_DECLARE 324
#define T_ENDDECLARE 325
#define T_AS 326
#define T_SWITCH 327
#define T_ENDSWITCH 328
#define T_CASE 329
#define T_DEFAULT 330
#define T_BREAK 331
#define T_CONTINUE 332
#define T_FUNCTION 333
#define T_CONST 334
#define T_RETURN 335
#define T_TRY 336
#define T_CATCH 337
#define T_THROW 338
#define T_USE 339
#define T_GLOBAL 340
#define T_PUBLIC 341
#define T_PROTECTED 342
#define T_PRIVATE 343
#define T_FINAL 344
#define T_ABSTRACT 345
#define T_STATIC 346
#define T_VAR 347
#define T_UNSET 348
#define T_ISSET 349
#define T_EMPTY 350
#define T_HALT_COMPILER 351
#define T_CLASS 352
#define T_INTERFACE 353
#define T_EXTENDS 354
#define T_IMPLEMENTS 355
#define T_OBJECT_OPERATOR 356
#define T_DOUBLE_ARROW 357
#define T_LIST 358
#define T_ARRAY 359
#define T_CLASS_C 360
#define T_METHOD_C 361
#define T_FUNC_C 362
#define T_LINE 363
#define T_FILE 364
#define T_COMMENT 365
#define T_DOC_COMMENT 366
#define T_OPEN_TAG 367
#define T_OPEN_TAG_WITH_ECHO 368
#define T_CLOSE_TAG 369
#define T_WHITESPACE 370
#define T_START_HEREDOC 371
#define T_END_HEREDOC 372
#define T_DOLLAR_OPEN_CURLY_BRACES 373
#define T_CURLY_OPEN 374
#define T_PAAMAYIM_NEKUDOTAYIM 375




/* Copy the first part of user declarations.  */


/*
   +----------------------------------------------------------------------+
   | Zend Engine                                                          |
   +----------------------------------------------------------------------+
   | Copyright (c) 1998-2006 Zend Technologies Ltd. (http://www.zend.com) |
   +----------------------------------------------------------------------+
   | This source file is subject to version 2.00 of the Zend license,     |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.zend.com/license/2_00.txt.                                |
   | If you did not receive a copy of the Zend license and are unable to  |
   | obtain it through the world-wide-web, please send a note to          |
   | license@zend.com so we can mail you a copy immediately.              |
   +----------------------------------------------------------------------+
   | Authors: Andi Gutmans <andi@zend.com>                                |
   |          Zeev Suraski <zeev@zend.com>                                |
   +----------------------------------------------------------------------+
*/

/* $Id: zend_language_parser.y 263383 2008-07-24 11:47:14Z dmitry $ */

/*
 * LALR shift/reduce conflicts and how they are resolved:
 *
 * - 2 shift/reduce conflicts due to the dangeling elseif/else ambiguity.  Solved by shift.
 *
 */


#include "zend_compile.h"
#include "zend.h"
#include "zend_list.h"
#include "zend_globals.h"
#include "zend_API.h"
#include "zend_constants.h"


#define YYERROR_VERBOSE
#define YYSTYPE znode
#ifdef ZTS
# define YYPARSE_PARAM tsrm_ls
# define YYLEX_PARAM tsrm_ls
#endif




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

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */


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
# if YYENABLE_NLS
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
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
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
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3964

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  149
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  166
/* YYNRULES -- Number of rules.  */
#define YYNRULES  410
/* YYNRULES -- Number of states.  */
#define YYNSTATES  771

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   375

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    48,   147,     2,   145,    47,    31,     2,
     140,   141,    45,    42,     8,    43,    44,    46,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    26,   142,
      36,    13,    37,    25,    51,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    61,     2,   148,    30,     2,   146,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   143,    29,   144,    50,     2,     2,     2,
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
       5,     6,     7,     9,    10,    11,    12,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    27,    28,
      32,    33,    34,    35,    38,    39,    40,    41,    49,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     6,    10,    11,    13,    15,    17,
      22,    23,    27,    28,    30,    32,    34,    39,    41,    45,
      46,    47,    57,    58,    59,    72,    73,    74,    82,    83,
      84,    94,    95,    96,    97,   110,   111,   118,   121,   125,
     128,   132,   135,   139,   143,   147,   151,   155,   157,   160,
     164,   170,   171,   172,   183,   184,   185,   196,   197,   204,
     206,   207,   208,   209,   210,   211,   230,   234,   236,   237,
     239,   242,   243,   244,   255,   257,   261,   263,   265,   269,
     271,   273,   274,   276,   277,   278,   290,   291,   300,   301,
     309,   311,   314,   317,   318,   321,   323,   324,   327,   328,
     331,   333,   337,   338,   341,   343,   346,   348,   353,   355,
     360,   362,   367,   371,   377,   381,   386,   391,   397,   398,
     399,   406,   407,   413,   415,   417,   419,   424,   425,   426,
     434,   435,   436,   445,   446,   449,   450,   454,   456,   457,
     460,   464,   470,   475,   480,   486,   494,   501,   502,   504,
     506,   508,   509,   511,   513,   516,   520,   524,   529,   533,
     535,   537,   540,   545,   549,   555,   557,   561,   564,   565,
     566,   571,   574,   575,   576,   587,   589,   593,   595,   597,
     598,   600,   602,   605,   607,   609,   611,   613,   615,   617,
     621,   627,   629,   633,   639,   644,   648,   650,   651,   653,
     654,   659,   661,   662,   670,   674,   679,   680,   688,   689,
     694,   697,   701,   705,   709,   713,   717,   721,   725,   729,
     733,   737,   741,   744,   747,   750,   753,   754,   759,   760,
     765,   766,   771,   772,   777,   781,   785,   789,   793,   797,
     801,   805,   809,   813,   817,   821,   825,   828,   831,   834,
     837,   841,   845,   849,   853,   857,   861,   865,   869,   873,
     877,   878,   879,   887,   889,   892,   895,   898,   901,   904,
     907,   910,   913,   914,   918,   920,   925,   929,   932,   933,
     939,   940,   948,   949,   957,   958,   964,   966,   968,   970,
     971,   972,   979,   981,   984,   985,   988,   989,   992,   996,
     997,  1001,  1003,  1005,  1007,  1009,  1011,  1013,  1015,  1017,
    1019,  1021,  1024,  1027,  1032,  1034,  1038,  1040,  1042,  1044,
    1046,  1050,  1054,  1055,  1058,  1059,  1061,  1067,  1071,  1075,
    1077,  1079,  1081,  1083,  1085,  1087,  1088,  1089,  1097,  1099,
    1102,  1103,  1104,  1109,  1110,  1115,  1116,  1118,  1121,  1125,
    1127,  1129,  1131,  1134,  1136,  1141,  1146,  1148,  1150,  1155,
    1156,  1158,  1160,  1161,  1164,  1169,  1174,  1176,  1178,  1182,
    1184,  1187,  1191,  1193,  1195,  1196,  1202,  1203,  1204,  1207,
    1213,  1217,  1221,  1223,  1230,  1235,  1240,  1243,  1246,  1249,
    1250,  1252,  1253,  1259,  1263,  1267,  1274,  1278,  1280,  1282,
    1284,  1289,  1294,  1297,  1300,  1305,  1308,  1311,  1313,  1314,
    1319
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     150,     0,    -1,   151,    -1,    -1,   151,   152,   153,    -1,
      -1,   157,    -1,   189,    -1,   190,    -1,   115,   140,   141,
     142,    -1,    -1,   154,   155,   156,    -1,    -1,   157,    -1,
     189,    -1,   190,    -1,   115,   140,   141,   142,    -1,   158,
      -1,   143,   154,   144,    -1,    -1,    -1,    65,   140,   278,
     141,   159,   157,   160,   216,   220,    -1,    -1,    -1,    65,
     140,   278,   141,    26,   161,   154,   162,   218,   221,    68,
     142,    -1,    -1,    -1,    82,   140,   163,   278,   141,   164,
     215,    -1,    -1,    -1,    81,   165,   157,    82,   140,   166,
     278,   141,   142,    -1,    -1,    -1,    -1,    84,   140,   243,
     142,   167,   243,   142,   168,   243,   141,   169,   206,    -1,
      -1,    91,   140,   278,   141,   170,   210,    -1,    95,   142,
      -1,    95,   278,   142,    -1,    96,   142,    -1,    96,   278,
     142,    -1,    99,   142,    -1,    99,   246,   142,    -1,    99,
     282,   142,    -1,   104,   227,   142,    -1,   110,   229,   142,
      -1,    80,   242,   142,    -1,    75,    -1,   278,   142,    -1,
     103,   188,   142,    -1,   112,   140,   186,   141,   142,    -1,
      -1,    -1,    86,   140,   282,    90,   171,   205,   204,   141,
     172,   207,    -1,    -1,    -1,    86,   140,   246,    90,   173,
     282,   204,   141,   174,   207,    -1,    -1,    88,   175,   140,
     209,   141,   208,    -1,   142,    -1,    -1,    -1,    -1,    -1,
      -1,   100,   176,   143,   154,   144,   101,   140,   177,   262,
     178,    73,   141,   179,   143,   154,   144,   180,   181,    -1,
     102,   278,   142,    -1,   182,    -1,    -1,   183,    -1,   182,
     183,    -1,    -1,    -1,   101,   140,   262,   184,    73,   141,
     185,   143,   154,   144,    -1,   187,    -1,   186,     8,   187,
      -1,   282,    -1,    79,    -1,   140,    79,   141,    -1,   192,
      -1,   195,    -1,    -1,    31,    -1,    -1,    -1,    97,   193,
     191,    71,   194,   140,   222,   141,   143,   154,   144,    -1,
      -1,   198,    71,   199,   196,   202,   143,   230,   144,    -1,
      -1,   200,    71,   197,   201,   143,   230,   144,    -1,   116,
      -1,   109,   116,    -1,   108,   116,    -1,    -1,   118,   262,
      -1,   117,    -1,    -1,   118,   203,    -1,    -1,   119,   203,
      -1,   262,    -1,   203,     8,   262,    -1,    -1,   121,   205,
      -1,   282,    -1,    31,   282,    -1,   157,    -1,    26,   154,
      85,   142,    -1,   157,    -1,    26,   154,    87,   142,    -1,
     157,    -1,    26,   154,    89,   142,    -1,    71,    13,   272,
      -1,   209,     8,    71,    13,   272,    -1,   143,   211,   144,
      -1,   143,   142,   211,   144,    -1,    26,   211,    92,   142,
      -1,    26,   142,   211,    92,   142,    -1,    -1,    -1,   211,
      93,   278,   214,   212,   154,    -1,    -1,   211,    94,   214,
     213,   154,    -1,    26,    -1,   142,    -1,   157,    -1,    26,
     154,    83,   142,    -1,    -1,    -1,   216,    66,   140,   278,
     141,   217,   157,    -1,    -1,    -1,   218,    66,   140,   278,
     141,    26,   219,   154,    -1,    -1,    67,   157,    -1,    -1,
      67,    26,   154,    -1,   223,    -1,    -1,   224,    73,    -1,
     224,    31,    73,    -1,   224,    31,    73,    13,   272,    -1,
     224,    73,    13,   272,    -1,   223,     8,   224,    73,    -1,
     223,     8,   224,    31,    73,    -1,   223,     8,   224,    31,
      73,    13,   272,    -1,   223,     8,   224,    73,    13,   272,
      -1,    -1,    71,    -1,   123,    -1,   226,    -1,    -1,   246,
      -1,   282,    -1,    31,   280,    -1,   226,     8,   246,    -1,
     226,     8,   282,    -1,   226,     8,    31,   280,    -1,   227,
       8,   228,    -1,   228,    -1,    73,    -1,   145,   279,    -1,
     145,   143,   278,   144,    -1,   229,     8,    73,    -1,   229,
       8,    73,    13,   272,    -1,    73,    -1,    73,    13,   272,
      -1,   230,   231,    -1,    -1,    -1,   236,   232,   240,   142,
      -1,   241,   142,    -1,    -1,    -1,   237,    97,   233,   191,
      71,   234,   140,   222,   141,   235,    -1,   142,    -1,   143,
     154,   144,    -1,   238,    -1,   111,    -1,    -1,   238,    -1,
     239,    -1,   238,   239,    -1,   105,    -1,   106,    -1,   107,
      -1,   110,    -1,   109,    -1,   108,    -1,   240,     8,    73,
      -1,   240,     8,    73,    13,   272,    -1,    73,    -1,    73,
      13,   272,    -1,   241,     8,    71,    13,   272,    -1,    98,
      71,    13,   272,    -1,   242,     8,   278,    -1,   278,    -1,
      -1,   244,    -1,    -1,   244,     8,   245,   278,    -1,   278,
      -1,    -1,   122,   140,   247,   302,   141,    13,   278,    -1,
     282,    13,   278,    -1,   282,    13,    31,   282,    -1,    -1,
     282,    13,    31,    63,   263,   248,   270,    -1,    -1,    63,
     263,   249,   270,    -1,    62,   278,    -1,   282,    24,   278,
      -1,   282,    23,   278,    -1,   282,    22,   278,    -1,   282,
      21,   278,    -1,   282,    20,   278,    -1,   282,    19,   278,
      -1,   282,    18,   278,    -1,   282,    17,   278,    -1,   282,
      16,   278,    -1,   282,    15,   278,    -1,   282,    14,   278,
      -1,   281,    60,    -1,    60,   281,    -1,   281,    59,    -1,
      59,   281,    -1,    -1,   278,    27,   250,   278,    -1,    -1,
     278,    28,   251,   278,    -1,    -1,   278,     9,   252,   278,
      -1,    -1,   278,    11,   253,   278,    -1,   278,    10,   278,
      -1,   278,    29,   278,    -1,   278,    31,   278,    -1,   278,
      30,   278,    -1,   278,    44,   278,    -1,   278,    42,   278,
      -1,   278,    43,   278,    -1,   278,    45,   278,    -1,   278,
      46,   278,    -1,   278,    47,   278,    -1,   278,    41,   278,
      -1,   278,    40,   278,    -1,    42,   278,    -1,    43,   278,
      -1,    48,   278,    -1,    50,   278,    -1,   278,    33,   278,
      -1,   278,    32,   278,    -1,   278,    35,   278,    -1,   278,
      34,   278,    -1,   278,    36,   278,    -1,   278,    39,   278,
      -1,   278,    37,   278,    -1,   278,    38,   278,    -1,   278,
      49,   263,    -1,   140,   278,   141,    -1,    -1,    -1,   278,
      25,   254,   278,    26,   255,   278,    -1,   311,    -1,    58,
     278,    -1,    57,   278,    -1,    56,   278,    -1,    55,   278,
      -1,    54,   278,    -1,    53,   278,    -1,    52,   278,    -1,
      64,   269,    -1,    -1,    51,   256,   278,    -1,   274,    -1,
     123,   140,   305,   141,    -1,   146,   307,   146,    -1,    12,
     278,    -1,    -1,    71,   140,   258,   225,   141,    -1,    -1,
     262,   139,    71,   140,   259,   225,   141,    -1,    -1,   262,
     139,   290,   140,   260,   225,   141,    -1,    -1,   290,   140,
     261,   225,   141,    -1,    71,    -1,    71,    -1,   264,    -1,
      -1,    -1,   293,   120,   265,   297,   266,   267,    -1,   293,
      -1,   267,   268,    -1,    -1,   120,   297,    -1,    -1,   140,
     141,    -1,   140,   278,   141,    -1,    -1,   140,   225,   141,
      -1,    69,    -1,    70,    -1,    79,    -1,   127,    -1,   128,
      -1,   124,    -1,   125,    -1,   126,    -1,   271,    -1,    71,
      -1,    42,   272,    -1,    43,   272,    -1,   123,   140,   275,
     141,    -1,   273,    -1,    71,   139,    71,    -1,    71,    -1,
      72,    -1,   314,    -1,   271,    -1,   147,   307,   147,    -1,
     135,   307,   136,    -1,    -1,   277,   276,    -1,    -1,     8,
      -1,   277,     8,   272,   121,   272,    -1,   277,     8,   272,
      -1,   272,   121,   272,    -1,   272,    -1,   279,    -1,   246,
      -1,   282,    -1,   282,    -1,   282,    -1,    -1,    -1,   292,
     120,   283,   297,   284,   288,   285,    -1,   292,    -1,   285,
     286,    -1,    -1,    -1,   120,   297,   287,   288,    -1,    -1,
     140,   289,   225,   141,    -1,    -1,   294,    -1,   301,   294,
      -1,   262,   139,   290,    -1,   293,    -1,   257,    -1,   294,
      -1,   301,   294,    -1,   291,    -1,   294,    61,   296,   148,
      -1,   294,   143,   278,   144,    -1,   295,    -1,    73,    -1,
     145,   143,   278,   144,    -1,    -1,   278,    -1,   299,    -1,
      -1,   290,   298,    -1,   299,    61,   296,   148,    -1,   299,
     143,   278,   144,    -1,   300,    -1,    71,    -1,   143,   278,
     144,    -1,   145,    -1,   301,   145,    -1,   302,     8,   303,
      -1,   303,    -1,   282,    -1,    -1,   122,   140,   304,   302,
     141,    -1,    -1,    -1,   306,   276,    -1,   306,     8,   278,
     121,   278,    -1,   306,     8,   278,    -1,   278,   121,   278,
      -1,   278,    -1,   306,     8,   278,   121,    31,   280,    -1,
     306,     8,    31,   280,    -1,   278,   121,    31,   280,    -1,
      31,   280,    -1,   307,   308,    -1,   307,    78,    -1,    -1,
      73,    -1,    -1,    73,    61,   309,   310,   148,    -1,    73,
     120,    71,    -1,   137,   278,   144,    -1,   137,    72,    61,
     278,   148,   144,    -1,   138,   282,   144,    -1,    71,    -1,
      74,    -1,    73,    -1,   113,   140,   312,   141,    -1,   114,
     140,   282,   141,    -1,     7,   278,    -1,     6,   278,    -1,
       5,   140,   278,   141,    -1,     4,   278,    -1,     3,   278,
      -1,   282,    -1,    -1,   312,     8,   313,   282,    -1,   262,
     139,    71,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   150,   150,   154,   154,   155,   160,   161,   162,   163,
     168,   168,   169,   174,   175,   176,   177,   182,   186,   187,
     187,   187,   188,   188,   188,   189,   189,   189,   190,   190,
     190,   194,   196,   198,   191,   200,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   216,   217,   215,   220,   221,   219,   223,   223,   224,
     225,   226,   227,   228,   229,   225,   231,   236,   237,   241,
     242,   247,   247,   247,   252,   253,   257,   261,   262,   267,
     271,   276,   277,   282,   282,   282,   288,   287,   294,   293,
     303,   304,   305,   309,   310,   314,   317,   319,   322,   324,
     328,   329,   333,   334,   339,   340,   344,   345,   350,   351,
     356,   357,   362,   363,   368,   369,   370,   371,   376,   377,
     377,   378,   378,   383,   384,   389,   390,   395,   397,   397,
     401,   403,   403,   407,   409,   413,   415,   420,   421,   426,
     427,   428,   429,   430,   431,   432,   433,   438,   439,   440,
     445,   446,   451,   452,   453,   454,   455,   456,   460,   461,
     466,   467,   468,   473,   474,   475,   476,   482,   483,   488,
     488,   489,   490,   490,   490,   496,   497,   501,   502,   506,
     507,   511,   512,   516,   517,   518,   519,   520,   521,   525,
     526,   527,   528,   532,   533,   537,   538,   543,   544,   548,
     548,   549,   553,   553,   554,   555,   556,   556,   557,   557,
     558,   559,   560,   561,   562,   563,   564,   565,   566,   567,
     568,   569,   570,   571,   572,   573,   574,   574,   575,   575,
     576,   576,   577,   577,   578,   579,   580,   581,   582,   583,
     584,   585,   586,   587,   588,   589,   590,   591,   592,   593,
     594,   595,   596,   597,   598,   599,   600,   601,   602,   603,
     604,   605,   604,   607,   608,   609,   610,   611,   612,   613,
     614,   615,   616,   616,   617,   618,   619,   620,   624,   624,
     627,   627,   630,   630,   633,   633,   639,   643,   644,   649,
     650,   649,   652,   657,   658,   663,   667,   668,   669,   674,
     675,   680,   681,   682,   683,   684,   685,   686,   687,   692,
     693,   694,   695,   696,   697,   701,   705,   706,   707,   708,
     709,   710,   715,   716,   719,   721,   725,   726,   727,   728,
     732,   733,   738,   743,   748,   753,   754,   753,   756,   760,
     761,   766,   766,   770,   770,   774,   778,   779,   783,   788,
     789,   794,   795,   796,   800,   801,   802,   807,   808,   812,
     813,   818,   819,   819,   823,   824,   825,   829,   830,   834,
     835,   839,   840,   845,   846,   846,   847,   852,   853,   857,
     858,   859,   860,   861,   862,   863,   864,   868,   869,   870,
     877,   878,   878,   879,   880,   881,   882,   887,   888,   889,
     894,   895,   896,   897,   898,   899,   900,   904,   905,   905,
     909
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_REQUIRE_ONCE", "T_REQUIRE", "T_EVAL",
  "T_INCLUDE_ONCE", "T_INCLUDE", "','", "T_LOGICAL_OR", "T_LOGICAL_XOR",
  "T_LOGICAL_AND", "T_PRINT", "'='", "T_SR_EQUAL", "T_SL_EQUAL",
  "T_XOR_EQUAL", "T_OR_EQUAL", "T_AND_EQUAL", "T_MOD_EQUAL",
  "T_CONCAT_EQUAL", "T_DIV_EQUAL", "T_MUL_EQUAL", "T_MINUS_EQUAL",
  "T_PLUS_EQUAL", "'?'", "':'", "T_BOOLEAN_OR", "T_BOOLEAN_AND", "'|'",
  "'^'", "'&'", "T_IS_NOT_IDENTICAL", "T_IS_IDENTICAL", "T_IS_NOT_EQUAL",
  "T_IS_EQUAL", "'<'", "'>'", "T_IS_GREATER_OR_EQUAL",
  "T_IS_SMALLER_OR_EQUAL", "T_SR", "T_SL", "'+'", "'-'", "'.'", "'*'",
  "'/'", "'%'", "'!'", "T_INSTANCEOF", "'~'", "'@'", "T_UNSET_CAST",
  "T_BOOL_CAST", "T_OBJECT_CAST", "T_ARRAY_CAST", "T_STRING_CAST",
  "T_DOUBLE_CAST", "T_INT_CAST", "T_DEC", "T_INC", "'['", "T_CLONE",
  "T_NEW", "T_EXIT", "T_IF", "T_ELSEIF", "T_ELSE", "T_ENDIF", "T_LNUMBER",
  "T_DNUMBER", "T_STRING", "T_STRING_VARNAME", "T_VARIABLE",
  "T_NUM_STRING", "T_INLINE_HTML", "T_CHARACTER", "T_BAD_CHARACTER",
  "T_ENCAPSED_AND_WHITESPACE", "T_CONSTANT_ENCAPSED_STRING", "T_ECHO",
  "T_DO", "T_WHILE", "T_ENDWHILE", "T_FOR", "T_ENDFOR", "T_FOREACH",
  "T_ENDFOREACH", "T_DECLARE", "T_ENDDECLARE", "T_AS", "T_SWITCH",
  "T_ENDSWITCH", "T_CASE", "T_DEFAULT", "T_BREAK", "T_CONTINUE",
  "T_FUNCTION", "T_CONST", "T_RETURN", "T_TRY", "T_CATCH", "T_THROW",
  "T_USE", "T_GLOBAL", "T_PUBLIC", "T_PROTECTED", "T_PRIVATE", "T_FINAL",
  "T_ABSTRACT", "T_STATIC", "T_VAR", "T_UNSET", "T_ISSET", "T_EMPTY",
  "T_HALT_COMPILER", "T_CLASS", "T_INTERFACE", "T_EXTENDS", "T_IMPLEMENTS",
  "T_OBJECT_OPERATOR", "T_DOUBLE_ARROW", "T_LIST", "T_ARRAY", "T_CLASS_C",
  "T_METHOD_C", "T_FUNC_C", "T_LINE", "T_FILE", "T_COMMENT",
  "T_DOC_COMMENT", "T_OPEN_TAG", "T_OPEN_TAG_WITH_ECHO", "T_CLOSE_TAG",
  "T_WHITESPACE", "T_START_HEREDOC", "T_END_HEREDOC",
  "T_DOLLAR_OPEN_CURLY_BRACES", "T_CURLY_OPEN", "T_PAAMAYIM_NEKUDOTAYIM",
  "'('", "')'", "';'", "'{'", "'}'", "'$'", "'`'", "'\"'", "']'",
  "$accept", "start", "top_statement_list", "@1", "top_statement",
  "inner_statement_list", "@2", "inner_statement", "statement",
  "unticked_statement", "@3", "@4", "@5", "@6", "@7", "@8", "@9", "@10",
  "@11", "@12", "@13", "@14", "@15", "@16", "@17", "@18", "@19", "@20",
  "@21", "@22", "@23", "@24", "additional_catches",
  "non_empty_additional_catches", "additional_catch", "@25", "@26",
  "unset_variables", "unset_variable", "use_filename",
  "function_declaration_statement", "class_declaration_statement",
  "is_reference", "unticked_function_declaration_statement", "@27", "@28",
  "unticked_class_declaration_statement", "@29", "@30", "class_entry_type",
  "extends_from", "interface_entry", "interface_extends_list",
  "implements_list", "interface_list", "foreach_optional_arg",
  "foreach_variable", "for_statement", "foreach_statement",
  "declare_statement", "declare_list", "switch_case_list", "case_list",
  "@31", "@32", "case_separator", "while_statement", "elseif_list", "@33",
  "new_elseif_list", "@34", "else_single", "new_else_single",
  "parameter_list", "non_empty_parameter_list", "optional_class_type",
  "function_call_parameter_list", "non_empty_function_call_parameter_list",
  "global_var_list", "global_var", "static_var_list",
  "class_statement_list", "class_statement", "@35", "@36", "@37",
  "method_body", "variable_modifiers", "method_modifiers",
  "non_empty_member_modifiers", "member_modifier",
  "class_variable_declaration", "class_constant_declaration",
  "echo_expr_list", "for_expr", "non_empty_for_expr", "@38",
  "expr_without_variable", "@39", "@40", "@41", "@42", "@43", "@44", "@45",
  "@46", "@47", "@48", "function_call", "@49", "@50", "@51", "@52",
  "fully_qualified_class_name", "class_name_reference",
  "dynamic_class_name_reference", "@53", "@54",
  "dynamic_class_name_variable_properties",
  "dynamic_class_name_variable_property", "exit_expr", "ctor_arguments",
  "common_scalar", "static_scalar", "static_class_constant", "scalar",
  "static_array_pair_list", "possible_comma",
  "non_empty_static_array_pair_list", "expr", "r_variable", "w_variable",
  "rw_variable", "variable", "@55", "@56", "variable_properties",
  "variable_property", "@57", "method_or_not", "@58",
  "variable_without_objects", "static_member",
  "base_variable_with_function_calls", "base_variable",
  "reference_variable", "compound_variable", "dim_offset",
  "object_property", "@59", "object_dim_list", "variable_name",
  "simple_indirect_reference", "assignment_list",
  "assignment_list_element", "@60", "array_pair_list",
  "non_empty_array_pair_list", "encaps_list", "encaps_var", "@61",
  "encaps_var_offset", "internal_functions_in_yacc", "isset_variables",
  "@62", "class_constant", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,    44,   263,
     264,   265,   266,    61,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,    63,    58,   278,   279,   124,
      94,    38,   280,   281,   282,   283,    60,    62,   284,   285,
     286,   287,    43,    45,    46,    42,    47,    37,    33,   288,
     126,    64,   289,   290,   291,   292,   293,   294,   295,   296,
     297,    91,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
      40,    41,    59,   123,   125,    36,    96,    34,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   149,   150,   152,   151,   151,   153,   153,   153,   153,
     155,   154,   154,   156,   156,   156,   156,   157,   158,   159,
     160,   158,   161,   162,   158,   163,   164,   158,   165,   166,
     158,   167,   168,   169,   158,   170,   158,   158,   158,   158,
     158,   158,   158,   158,   158,   158,   158,   158,   158,   158,
     158,   171,   172,   158,   173,   174,   158,   175,   158,   158,
     176,   177,   178,   179,   180,   158,   158,   181,   181,   182,
     182,   184,   185,   183,   186,   186,   187,   188,   188,   189,
     190,   191,   191,   193,   194,   192,   196,   195,   197,   195,
     198,   198,   198,   199,   199,   200,   201,   201,   202,   202,
     203,   203,   204,   204,   205,   205,   206,   206,   207,   207,
     208,   208,   209,   209,   210,   210,   210,   210,   211,   212,
     211,   213,   211,   214,   214,   215,   215,   216,   217,   216,
     218,   219,   218,   220,   220,   221,   221,   222,   222,   223,
     223,   223,   223,   223,   223,   223,   223,   224,   224,   224,
     225,   225,   226,   226,   226,   226,   226,   226,   227,   227,
     228,   228,   228,   229,   229,   229,   229,   230,   230,   232,
     231,   231,   233,   234,   231,   235,   235,   236,   236,   237,
     237,   238,   238,   239,   239,   239,   239,   239,   239,   240,
     240,   240,   240,   241,   241,   242,   242,   243,   243,   245,
     244,   244,   247,   246,   246,   246,   248,   246,   249,   246,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   250,   246,   251,   246,
     252,   246,   253,   246,   246,   246,   246,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     254,   255,   246,   246,   246,   246,   246,   246,   246,   246,
     246,   246,   256,   246,   246,   246,   246,   246,   258,   257,
     259,   257,   260,   257,   261,   257,   262,   263,   263,   265,
     266,   264,   264,   267,   267,   268,   269,   269,   269,   270,
     270,   271,   271,   271,   271,   271,   271,   271,   271,   272,
     272,   272,   272,   272,   272,   273,   274,   274,   274,   274,
     274,   274,   275,   275,   276,   276,   277,   277,   277,   277,
     278,   278,   279,   280,   281,   283,   284,   282,   282,   285,
     285,   287,   286,   289,   288,   288,   290,   290,   291,   292,
     292,   293,   293,   293,   294,   294,   294,   295,   295,   296,
     296,   297,   298,   297,   299,   299,   299,   300,   300,   301,
     301,   302,   302,   303,   304,   303,   303,   305,   305,   306,
     306,   306,   306,   306,   306,   306,   306,   307,   307,   307,
     308,   309,   308,   308,   308,   308,   308,   310,   310,   310,
     311,   311,   311,   311,   311,   311,   311,   312,   313,   312,
     314
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     3,     0,     1,     1,     1,     4,
       0,     3,     0,     1,     1,     1,     4,     1,     3,     0,
       0,     9,     0,     0,    12,     0,     0,     7,     0,     0,
       9,     0,     0,     0,    12,     0,     6,     2,     3,     2,
       3,     2,     3,     3,     3,     3,     3,     1,     2,     3,
       5,     0,     0,    10,     0,     0,    10,     0,     6,     1,
       0,     0,     0,     0,     0,    18,     3,     1,     0,     1,
       2,     0,     0,    10,     1,     3,     1,     1,     3,     1,
       1,     0,     1,     0,     0,    11,     0,     8,     0,     7,
       1,     2,     2,     0,     2,     1,     0,     2,     0,     2,
       1,     3,     0,     2,     1,     2,     1,     4,     1,     4,
       1,     4,     3,     5,     3,     4,     4,     5,     0,     0,
       6,     0,     5,     1,     1,     1,     4,     0,     0,     7,
       0,     0,     8,     0,     2,     0,     3,     1,     0,     2,
       3,     5,     4,     4,     5,     7,     6,     0,     1,     1,
       1,     0,     1,     1,     2,     3,     3,     4,     3,     1,
       1,     2,     4,     3,     5,     1,     3,     2,     0,     0,
       4,     2,     0,     0,    10,     1,     3,     1,     1,     0,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     3,
       5,     1,     3,     5,     4,     3,     1,     0,     1,     0,
       4,     1,     0,     7,     3,     4,     0,     7,     0,     4,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     2,     2,     0,     4,     0,     4,
       0,     4,     0,     4,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     2,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       0,     0,     7,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     0,     3,     1,     4,     3,     2,     0,     5,
       0,     7,     0,     7,     0,     5,     1,     1,     1,     0,
       0,     6,     1,     2,     0,     2,     0,     2,     3,     0,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     4,     1,     3,     1,     1,     1,     1,
       3,     3,     0,     2,     0,     1,     5,     3,     3,     1,
       1,     1,     1,     1,     1,     0,     0,     7,     1,     2,
       0,     0,     4,     0,     4,     0,     1,     2,     3,     1,
       1,     1,     2,     1,     4,     4,     1,     1,     4,     0,
       1,     1,     0,     2,     4,     4,     1,     1,     3,     1,
       2,     3,     1,     1,     0,     5,     0,     0,     2,     5,
       3,     3,     1,     6,     4,     4,     2,     2,     2,     0,
       1,     0,     5,     3,     3,     6,     3,     1,     1,     1,
       4,     4,     2,     2,     4,     2,     2,     1,     0,     4,
       3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       5,     0,     3,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   272,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   296,     0,   301,
     302,   316,   317,   357,    47,   303,     0,    28,     0,     0,
       0,    57,     0,     0,     0,    83,     0,    60,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    90,    95,
       0,     0,   306,   307,   308,   304,   305,   389,     0,    59,
      12,   369,   389,   389,     4,     6,    17,     7,     8,    79,
      80,     0,     0,   331,   350,     0,   319,   274,     0,   330,
       0,   332,     0,   353,   338,   349,   351,   356,     0,   263,
     318,   406,   405,     0,   403,   402,   277,   246,   247,   248,
     249,     0,   270,   269,   268,   267,   266,   265,   264,   286,
       0,   225,   334,   223,   210,   287,     0,   208,   288,   292,
     351,     0,     0,   271,     0,   278,     0,   196,     0,    25,
     197,     0,     0,     0,    37,     0,    39,     0,    81,    41,
     331,     0,   332,     0,     0,    77,     0,     0,   160,     0,
       0,   159,    92,    91,   165,     0,     0,     0,     0,     0,
     202,   377,     0,     0,    10,     0,     0,     0,    93,    88,
       0,   230,     0,   232,   260,   226,   228,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    48,   224,   222,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   284,   335,   359,     0,   370,   352,     0,   273,
       0,     0,   299,   289,   352,   297,     0,     0,   151,     0,
      46,     0,     0,     0,   198,   201,   331,   332,     0,     0,
      38,    40,    82,     0,    42,    43,    12,    66,     0,    49,
       0,   161,   332,     0,    44,     0,     0,    45,     0,    74,
      76,   407,     0,     0,     0,   376,     0,   382,     0,   324,
     390,   388,   321,     0,     0,   387,   259,    18,     0,     0,
     276,   320,     0,    86,    96,   410,   348,   346,     0,     0,
     234,     0,     0,     0,     0,   235,   237,   236,   251,   250,
     253,   252,   254,   256,   257,   255,   245,   244,   239,   240,
     238,   241,   242,   243,   258,     0,   204,   221,   220,   219,
     218,   217,   216,   215,   214,   213,   212,   211,   151,     0,
     360,     0,     0,   404,     0,   348,   151,   209,     0,   298,
      19,     0,     0,   150,   331,   332,   195,     0,     0,    31,
     199,    54,    51,     0,     0,    35,    84,    10,    78,     0,
     158,     0,     0,   310,     0,   309,   166,   314,   163,     0,
       0,   408,   400,   401,     9,     0,   373,     0,   372,   386,
     333,     0,   275,   325,   378,   391,     0,   317,     0,     0,
       0,    11,    13,    14,    15,   358,   286,    94,    98,     0,
       0,   280,   282,   347,   231,   233,     0,   227,   229,     0,
     205,     0,   367,     0,   362,   336,   361,   366,   354,   355,
       0,   290,    22,     0,   154,   279,     0,    29,    26,   197,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   162,
     311,   312,     0,   322,     0,    75,    50,     0,   374,   376,
       0,     0,   381,     0,   380,     0,   393,     0,   394,   396,
       0,     0,     0,    97,   100,   168,   151,   151,   261,   206,
     285,     0,   363,   345,   359,     0,   300,   294,    12,    20,
       0,   331,   332,     0,     0,     0,   200,   102,     0,   102,
     104,   112,     0,    12,   110,    58,   118,   118,    36,   147,
       0,   315,   329,     0,   324,   164,   409,   376,   371,     0,
     385,   384,     0,   397,   399,   398,     0,     0,     0,    99,
     168,     0,   179,     0,     0,     0,   299,   368,   343,   340,
       0,     0,   291,    10,   127,   157,     0,    12,   125,    27,
      32,     0,     0,   105,     0,     0,    10,   118,     0,   118,
       0,   148,   149,     0,   137,     0,    61,     0,   313,   325,
     323,     0,   203,     0,   379,   392,     0,    16,   179,   101,
       0,   183,   184,   185,   188,   187,   186,   178,    89,   167,
     169,     0,   177,   181,     0,   281,   283,   262,   207,   151,
     337,   364,   365,     0,   293,   130,   133,     0,    10,   197,
     103,    55,    52,   113,     0,     0,     0,     0,     0,     0,
     114,     0,   147,     0,   139,     0,   328,   327,   375,   383,
     395,    87,     0,     0,   172,   182,     0,   171,     0,     0,
     339,   295,   135,     0,     0,    21,    30,     0,     0,     0,
       0,   111,     0,   116,     0,   123,   124,   121,   115,    12,
       0,   140,     0,    62,     0,     0,   191,     0,    81,     0,
     344,   341,     0,     0,     0,     0,   134,   126,    33,    12,
     108,    56,    53,   117,   119,    12,    10,     0,   143,     0,
     142,     0,   326,   194,     0,     0,   170,     0,     0,   345,
       0,    12,     0,     0,     0,    10,    12,    10,    85,   144,
       0,   141,     0,   192,   189,   173,   193,   342,     0,    10,
      24,   128,    12,   106,    34,     0,    10,     0,   146,    63,
       0,     0,     0,     0,    10,   109,   145,     0,   190,   147,
     131,   129,     0,    12,     0,    12,   107,    10,     0,    10,
      64,   175,    12,   174,    68,    10,     0,    65,    67,    69,
     176,     0,    70,    71,     0,     0,    72,     0,    12,    10,
      73
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     4,    74,   174,   288,   401,   680,    76,
     433,   544,   488,   605,   242,   494,   138,   493,   439,   609,
     704,   446,   442,   650,   441,   649,   142,   153,   625,   691,
     737,   754,   757,   758,   759,   764,   767,   268,   269,   157,
      77,    78,   253,    79,   148,   447,    80,   408,   294,    81,
     293,    82,   410,   472,   473,   552,   499,   724,   681,   505,
     364,   508,   558,   706,   685,   657,   549,   606,   733,   642,
     745,   645,   674,   563,   564,   565,   352,   353,   160,   161,
     165,   532,   589,   633,   668,   731,   753,   590,   591,   592,
     593,   667,   594,   136,   243,   244,   440,    83,   275,   536,
     232,   303,   304,   299,   301,   302,   535,   111,    84,   238,
     476,   477,   338,    85,   127,   128,   348,   487,   542,   604,
     133,   347,    86,   376,   377,    87,   513,   394,   514,    88,
      89,   389,    90,    91,   339,   483,   600,   640,   699,   539,
     599,    92,    93,    94,    95,    96,    97,   341,   425,   482,
     426,   427,    98,   387,   388,   517,   278,   279,   172,   285,
     465,   526,    99,   272,   457,   100
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -433
static const yytype_int16 yypact[] =
{
    -433,    70,    83,  -433,   789,  2849,  2849,   -74,  2849,  2849,
    2849,  2849,  2849,  2849,  2849,  -433,  2849,  2849,  2849,  2849,
    2849,  2849,  2849,    29,    29,  2849,    41,   -55,   -29,  -433,
    -433,   -31,  -433,  -433,  -433,  -433,  2849,  -433,   -25,   -20,
      45,  -433,    49,  1671,  1797,  -433,  1923,  -433,  2849,   -30,
      15,   -27,    54,   107,    62,   102,   104,   106,  -433,  -433,
     111,   119,  -433,  -433,  -433,  -433,  -433,  -433,  2849,  -433,
    -433,    53,  -433,  -433,  -433,  -433,  -433,  -433,  -433,  -433,
    -433,   200,   203,  -433,  -433,   138,  -433,  -433,  3166,  -433,
      46,  1058,   152,  -433,   178,  -433,    25,  -433,    22,  -433,
    -433,  3838,  3838,  2849,  3838,  3838,  2102,  -433,  -433,   254,
    -433,  2849,  -433,  -433,  -433,  -433,  -433,  -433,  -433,   165,
     177,  -433,  -433,  -433,  -433,   188,   201,  -433,  -433,   211,
     -50,    22,  2049,  -433,  2849,  -433,     5,  3838,  1545,  -433,
    2849,  2849,   202,  2849,  -433,  3208,  -433,  3249,   324,  -433,
     215,  3838,    58,   217,  3290,  -433,   279,   219,  -433,    -6,
       7,  -433,  -433,  -433,   346,     9,    29,    29,    29,   222,
    -433,  2149,   172,  3331,   223,  2849,   197,   -34,   247,  -433,
     117,  -433,  2849,  -433,  -433,  -433,  -433,  2849,  2849,  2849,
    2849,  2849,  2849,  2849,  2849,  2849,  2849,  2849,  2849,  2849,
    2849,  2849,  2849,  2849,  2849,  2849,    41,  -433,  -433,  -433,
    2249,  2849,  2849,  2849,  2849,  2849,  2849,  2849,  2849,  2849,
    2849,  2849,  -433,  -433,  2849,  2849,    53,    26,  3372,  -433,
     121,    56,   226,  -433,   -50,  -433,  3413,  3454,  2349,  2849,
    -433,   286,  2849,   240,   375,  3838,   294,   932,   314,  3495,
    -433,  -433,  -433,   316,  -433,  -433,  -433,  -433,   250,  -433,
    2849,  -433,  -433,    15,  -433,   628,   315,  -433,     0,  -433,
    -433,  -433,    34,   251,   261,   -15,    29,  3700,   253,   381,
     -51,  -433,  -433,  2949,    29,  -433,  -433,  -433,   915,   779,
    -433,  -433,   322,  -433,   287,   266,   268,   -50,    22,  2849,
    3915,  2849,  2849,  2849,  2849,  1537,  1662,  1787,  1913,  1913,
    1913,  1913,  1158,  1158,  1158,  1158,   355,   355,   248,   248,
     248,   254,   254,   254,  -433,   -10,  2102,  2102,  2102,  2102,
    2102,  2102,  2102,  2102,  2102,  2102,  2102,  2102,  2349,    50,
    3838,   262,  1727,  -433,   266,  -433,  2349,  -433,    50,  -433,
     385,    29,   272,   406,    35,   356,  3838,   277,  3536,  -433,
    -433,  -433,  -433,   407,    37,  -433,  -433,   278,  -433,  1853,
    -433,   628,   628,   284,   285,  -433,  -433,  -433,   413,    29,
     291,  -433,  -433,  -433,  -433,   289,  -433,    38,  -433,  -433,
    -433,  2449,  -433,  2549,  -433,  -433,   357,   369,  1979,   297,
     305,  -433,  -433,  -433,  -433,  -433,  -433,  -433,   327,   322,
     310,  -433,  -433,   -50,  3878,  2102,  3797,  2301,  2400,    41,
    -433,   313,  -433,  2849,  -433,  -433,   -21,  -433,  -433,  -433,
     317,  -433,  -433,  1545,  -433,  -433,  2649,  -433,  -433,  2849,
    2849,    29,    19,   628,   386,  1041,   -12,   319,   361,  -433,
    -433,  -433,   393,   628,   628,  -433,  -433,    29,  -433,   -15,
     452,    29,  3838,    29,  3741,   194,  -433,  2849,  -433,  -433,
     325,   322,   326,   460,  -433,  -433,  2349,  2349,  -433,  -433,
    -433,  3005,  -433,   330,  2849,  2849,  -433,  -433,  -433,  -433,
      29,    40,   636,  2849,  1167,   329,  3838,   351,    29,   351,
    -433,  -433,   461,  -433,  -433,  -433,   331,   334,  -433,    30,
     339,  -433,   360,   341,   476,  -433,  -433,   -15,  -433,  2849,
    -433,  -433,  2749,  -433,  -433,  -433,   337,   545,   345,   460,
    -433,   322,   604,   347,   348,  2849,   226,  -433,  -433,  -433,
     342,  3072,   371,    31,  -433,  -433,  3577,  -433,  -433,  -433,
    -433,    19,   354,  -433,   358,   628,   409,  -433,   252,  -433,
     170,  -433,  -433,   362,   496,    65,  -433,   628,  -433,   628,
    -433,    43,  2102,    29,  3838,  -433,   366,  -433,   832,  -433,
     434,  -433,  -433,  -433,  -433,  -433,  -433,  -433,  -433,  -433,
    -433,   414,   216,  -433,    10,  -433,  -433,  2202,  -433,  2349,
     392,  -433,  -433,    50,  -433,  -433,   190,   364,   430,  2849,
    -433,  -433,  -433,  -433,   372,   259,   374,  2849,   -17,   192,
    -433,   376,    23,   444,   505,   322,  -433,   399,  -433,  -433,
    -433,  -433,   509,   451,  -433,  -433,   456,  -433,   388,    50,
    -433,  -433,   221,   390,  1545,  -433,  -433,   389,   391,  1293,
    1293,  -433,   394,  -433,  3125,  -433,  -433,  -433,  -433,  -433,
      85,   521,   628,  -433,   628,   628,   524,    12,   324,   526,
    -433,  -433,   400,   515,   474,  2849,  -433,  -433,  -433,  -433,
    -433,  -433,  -433,  -433,  -433,  -433,   404,   470,   536,   628,
    -433,   479,  -433,  -433,   628,   484,  -433,   489,   628,   330,
    2849,  -433,   419,  3618,  1419,   475,  -433,   186,  -433,   550,
     628,  -433,   423,  -433,   552,  -433,  -433,  -433,  3659,   498,
    -433,  -433,  -433,  -433,  -433,   426,   189,   628,  -433,  -433,
     628,   431,   567,  1545,   510,  -433,  -433,   454,  -433,    30,
    -433,  -433,   457,  -433,   462,  -433,  -433,   463,   158,    66,
    -433,  -433,  -433,  -433,   497,   465,   464,  -433,   497,  -433,
    -433,   322,  -433,  -433,   528,   469,  -433,   468,  -433,   472,
    -433
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -433,  -433,  -433,  -433,  -433,  -199,  -433,  -433,     2,  -433,
    -433,  -433,  -433,  -433,  -433,  -433,  -433,  -433,  -433,  -433,
    -433,  -433,  -433,  -433,  -433,  -433,  -433,  -433,  -433,  -433,
    -433,  -433,  -433,  -433,  -153,  -433,  -433,  -433,   227,  -433,
     332,   335,   -56,  -433,  -433,  -433,  -433,  -433,  -433,  -433,
    -433,  -433,  -433,  -433,   142,   115,    67,  -433,   -33,  -433,
    -433,  -433,  -310,  -433,  -433,   -35,  -433,  -433,  -433,  -433,
    -433,  -433,  -433,  -117,  -433,     4,  -315,  -433,  -433,   365,
    -433,    94,  -433,  -433,  -433,  -433,  -433,  -433,  -433,  -433,
      39,  -433,  -433,  -433,  -432,  -433,  -433,     1,  -433,  -433,
    -433,  -433,  -433,  -433,  -433,  -433,  -433,  -433,  -433,  -433,
    -433,  -433,  -433,   -23,  -194,  -433,  -433,  -433,  -433,  -433,
    -433,    99,   -22,    72,  -433,  -433,  -433,   116,  -433,    16,
     477,  -335,   288,   283,  -433,  -433,  -433,  -433,  -433,   -62,
    -433,  -176,  -433,  -433,   -24,    -7,  -433,   154,  -343,  -433,
    -433,  -433,    42,   130,   204,  -433,  -433,  -433,   265,  -433,
    -433,  -433,  -433,  -433,  -433,  -433
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -348
static const yytype_int16 yytable[] =
{
     120,   120,   129,   126,   296,   431,    75,   495,   379,   655,
     395,   224,   324,   239,   506,   263,   434,   266,   636,   130,
     695,   101,   102,   421,   104,   105,   106,   107,   108,   109,
     110,   430,   112,   113,   114,   115,   116,   117,   118,   280,
     484,   124,   381,  -152,   281,   444,   459,   150,  -155,   155,
     498,   459,   137,   419,   296,   345,   119,   367,    33,   145,
     147,   119,   151,    33,   154,   119,   103,    33,   131,   396,
       3,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,    -2,   173,   132,   224,   224,   158,   162,
     119,   227,    33,   225,   561,    33,   623,   -23,   -23,   -23,
     119,   561,    33,   283,   284,   208,   209,   385,  -286,   135,
     156,   134,   125,   291,    33,   139,   687,  -334,  -334,   228,
     140,   422,   485,    33,   234,   656,   520,   229,   521,    33,
      71,   507,  -132,  -132,  -132,    71,   120,   260,   624,    71,
     241,   380,   246,   120,   120,   120,   562,   240,   236,   264,
     237,   267,   637,   562,   696,   545,   245,   151,   688,   249,
     159,   533,   534,   424,    71,  -346,  -347,   226,   225,   225,
     163,  -138,   424,   297,    71,   382,  -152,   648,   445,   460,
     164,  -155,   129,   126,   628,   141,    71,   277,   295,   143,
      33,   289,   344,   423,    33,    71,   175,   560,   300,   130,
     255,    71,   166,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   298,   297,   297,   479,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   629,   354,
     340,   342,   167,   375,   168,   280,   169,   615,   131,   619,
     281,   170,   120,   120,   151,   356,   643,   644,   358,   171,
     641,   120,    71,   617,   618,   523,    71,   524,   525,   407,
     280,   178,   298,   298,   179,   281,   369,   180,  -122,  -122,
    -122,  -120,  -120,  -120,   638,   617,   618,   672,   673,   543,
     402,   413,   222,   203,   204,   205,   671,   206,   223,   398,
     751,   752,   120,   206,   556,   135,   122,   122,   282,   283,
     284,   121,   123,  -180,   620,   414,   230,   415,   416,   417,
     418,   581,   582,   583,   584,   585,   586,  -286,   120,   152,
    -122,   233,   297,  -120,   283,   284,   658,   176,   177,   354,
     231,   297,   248,   290,   616,   617,   618,   354,   608,   375,
     375,   652,   617,   618,   151,   252,   120,   254,   258,   265,
     256,   259,   151,   274,  -153,   292,   346,   287,   357,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   298,   359,   360,   361,   363,   474,   366,   378,   393,
     298,   368,   383,   406,   392,   129,   126,   200,   201,   202,
     203,   204,   205,   384,   206,   409,   411,   462,   412,   464,
     428,   432,   130,   435,   436,  -334,  -334,   437,   120,   120,
     443,   375,   448,   452,   247,   453,   454,   424,   466,   458,
     467,   375,   375,   456,   120,   489,   120,   491,   120,   481,
     120,   469,   262,   450,   451,   470,   471,   504,   474,   270,
     271,   273,   151,   475,   480,   245,   496,   502,   486,   509,
     686,   131,   510,   424,   511,   519,   528,   120,   531,   530,
     538,   550,   551,   557,   555,   120,   559,   354,   354,   566,
     705,   567,   568,   527,   569,   575,   707,   577,   595,   596,
     601,   603,   151,   151,   120,   611,   548,  -153,   614,   612,
     340,   541,   719,   621,   622,   632,   646,   726,   579,   546,
     630,   634,   639,   647,   651,   501,   653,   661,   662,   659,
     664,   355,   665,   734,   666,   512,   515,   669,   120,   670,
     675,   677,   678,   375,   689,   572,   683,   694,   574,   698,
     700,   701,   702,   709,   747,   375,   749,   375,   708,   710,
     120,   597,   712,   755,   181,   182,   183,   714,   386,   390,
     715,   720,   725,   727,   729,   730,  -136,   399,   735,   769,
     184,   739,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   740,   206,   742,   297,   743,   756,   746,
     354,   765,   663,   748,   761,   762,   455,   750,   420,   760,
     766,   768,   697,   529,   554,   151,   770,   682,   610,   684,
     403,   355,   744,   404,   578,   245,   660,   613,   370,   355,
     570,   635,   297,   654,   390,   598,   261,   717,   540,   626,
     375,   627,   375,   375,  -156,   298,   676,   571,     0,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,     0,   270,   518,     0,     0,     0,   375,     0,     0,
     371,   372,   375,     0,     0,     0,   375,     0,     0,     0,
       0,   298,     0,     0,     0,     0,     0,     0,   375,     0,
       0,   703,     0,   576,     0,  -334,  -334,    29,    30,   373,
       0,     0,   580,     0,     0,   375,   723,    35,   375,   581,
     582,   583,   584,   585,   586,   587,   718,     0,     0,   492,
       0,     0,     0,     0,   497,   500,     0,     0,     0,     0,
       0,     0,     0,     0,   690,   741,   692,   693,   763,     0,
     516,     0,   386,     0,   390,     0,   390,     0,   588,     0,
       0,   374,    62,    63,    64,    65,    66,     0,     0,   355,
     355,   711,     0,     0,     0,     0,   713,     0,     0,     0,
     716,     0,     0,   390,     0,     0,     0,  -156,     0,     0,
       0,   553,   728,     0,     0,     0,     0,     0,   181,   182,
     183,     0,     5,     6,     7,     8,     9,     0,     0,   736,
     386,    10,   738,     0,   184,     0,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,     0,   206,     0,
       0,    11,    12,     0,   500,     0,     0,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,    25,    26,    27,    28,     0,   390,     0,    29,    30,
      31,    32,    33,     0,    34,     0,     0,     0,    35,    36,
      37,    38,     0,    39,     0,    40,     0,    41,     0,     0,
      42,     0,   355,     0,    43,    44,    45,     0,    46,    47,
       0,    48,    49,    50,     0,     0,     0,    51,    52,    53,
       0,    54,    55,    56,    57,    58,    59,     0,     0,     0,
       0,    60,    61,    62,    63,    64,    65,    66,     5,     6,
       7,     8,     9,   405,    67,     0,     0,    10,     0,    68,
     580,    69,    70,     0,    71,    72,    73,   581,   582,   583,
     584,   585,   586,   587,     0,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,    11,    12,     0,
       0,     0,     0,    13,     0,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,   631,    25,    26,    27,
      28,     0,     0,     0,    29,    30,    31,    32,    33,     0,
      34,  -334,  -334,     0,    35,    36,    37,    38,     0,    39,
       0,    40,     0,    41,     0,     0,    42,     0,     0,     0,
      43,    44,    45,     0,    46,    47,     0,    48,    49,    50,
       0,     0,   362,    51,    52,    53,     0,    54,    55,    56,
     400,    58,    59,     0,     0,     0,     0,    60,    61,    62,
      63,    64,    65,    66,     5,     6,     7,     8,     9,     0,
      67,     0,     0,    10,     0,    68,     0,    69,    70,     0,
      71,    72,    73,     0,     0,     0,     0,   503,     0,     0,
       0,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,    11,    12,     0,     0,     0,     0,    13,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     0,    25,    26,    27,    28,     0,     0,     0,
      29,    30,    31,    32,    33,     0,    34,  -334,  -334,     0,
      35,    36,    37,    38,     0,    39,     0,    40,     0,    41,
       0,     0,    42,     0,     0,     0,    43,    44,     0,     0,
      46,    47,     0,    48,    49,    50,     0,     0,     0,     0,
       0,    53,     0,    54,    55,    56,     0,     0,     0,     0,
       0,     0,     0,    60,    61,    62,    63,    64,    65,    66,
       5,     6,     7,     8,     9,     0,    67,     0,     0,    10,
       0,    68,     0,    69,    70,     0,    71,    72,    73,     0,
       0,     0,     0,   547,  -348,  -348,  -348,  -348,   198,   199,
     200,   201,   202,   203,   204,   205,     0,   206,     0,    11,
      12,     0,     0,     0,     0,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,     0,    25,
      26,    27,    28,     0,     0,     0,    29,    30,    31,    32,
      33,     0,    34,     0,     0,     0,    35,    36,    37,    38,
       0,    39,     0,    40,     0,    41,     0,     0,    42,     0,
       0,     0,    43,    44,     0,     0,    46,    47,     0,    48,
      49,    50,     0,     0,     0,     0,     0,    53,     0,    54,
      55,    56,     0,     0,     0,     0,     0,     0,     0,    60,
      61,    62,    63,    64,    65,    66,     5,     6,     7,     8,
       9,     0,    67,     0,     0,    10,     0,    68,     0,    69,
      70,     0,    71,    72,    73,     0,     0,     0,     0,   679,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    11,    12,     0,     0,     0,
       0,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     0,    25,    26,    27,    28,     0,
       0,     0,    29,    30,    31,    32,    33,     0,    34,     0,
       0,     0,    35,    36,    37,    38,     0,    39,     0,    40,
       0,    41,     0,     0,    42,     0,     0,     0,    43,    44,
       0,     0,    46,    47,     0,    48,    49,    50,     0,     0,
       0,     0,     0,    53,     0,    54,    55,    56,     0,     0,
       0,     0,     0,     0,     0,    60,    61,    62,    63,    64,
      65,    66,     5,     6,     7,     8,     9,     0,    67,     0,
       0,    10,     0,    68,     0,    69,    70,     0,    71,    72,
      73,     0,     0,     0,     0,   722,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    11,    12,     0,     0,     0,     0,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,    25,    26,    27,    28,     0,     0,     0,    29,    30,
      31,    32,    33,     0,    34,     0,     0,     0,    35,    36,
      37,    38,     0,    39,     0,    40,     0,    41,     0,     0,
      42,     0,     0,     0,    43,    44,     0,     0,    46,    47,
       0,    48,    49,    50,     0,     0,     0,     0,     0,    53,
       0,    54,    55,    56,     0,     0,     0,     0,     0,     0,
       0,    60,    61,    62,    63,    64,    65,    66,     5,     6,
       7,     8,     9,     0,    67,     0,     0,    10,     0,    68,
       0,    69,    70,     0,    71,    72,    73,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,     0,   206,    11,    12,     0,
       0,     0,     0,    13,     0,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,     0,    25,    26,    27,
      28,     0,     0,     0,    29,    30,    31,    32,    33,     0,
      34,     0,     0,     0,    35,    36,    37,    38,     0,    39,
       0,    40,     0,    41,     0,     0,    42,     0,     0,     0,
      43,    44,     0,     0,    46,    47,     0,    48,    49,    50,
       0,     0,     0,     0,     0,    53,     0,    54,    55,    56,
       0,     0,     0,     0,     0,     0,     0,    60,    61,    62,
      63,    64,    65,    66,     5,     6,     7,     8,     9,     0,
      67,     0,     0,    10,     0,    68,     0,    69,    70,     0,
      71,    72,    73,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
       0,   206,     0,    11,    12,     0,     0,     0,     0,    13,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     0,    25,    26,    27,   181,   182,   183,     0,
      29,    30,    31,    32,    33,     0,     0,     0,     0,     0,
      35,     0,   184,     0,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,     0,   206,     0,     0,     0,
       0,     0,     0,     0,    55,    56,     0,     0,     0,     0,
       0,     0,     0,    60,    61,    62,    63,    64,    65,    66,
       5,     6,     7,     8,     9,     0,    67,     0,     0,    10,
       0,    68,     0,   144,     0,     0,    71,    72,    73,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,     0,   206,     0,     0,    11,
      12,     0,     0,     0,     0,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,     0,    25,
      26,    27,   181,   182,   183,     0,    29,    30,    31,    32,
      33,   429,     0,     0,     0,     0,    35,     0,   184,     0,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,     0,   206,     0,     0,     0,     0,     0,     0,     0,
      55,    56,     0,     0,     0,     0,     0,     0,     0,    60,
      61,    62,    63,    64,    65,    66,     5,     6,     7,     8,
       9,     0,    67,     0,     0,    10,     0,    68,     0,   146,
       0,     0,    71,    72,    73,  -348,  -348,  -348,  -348,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,     0,   206,     0,     0,    11,    12,     0,     0,     0,
       0,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     0,    25,    26,    27,   181,   182,
     183,     0,    29,    30,    31,    32,    33,   449,     0,     0,
       0,     0,    35,     0,   184,     0,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,     0,   206,     0,
       0,     0,     0,     0,     0,     0,    55,    56,     0,     0,
       0,     0,     0,     0,     0,    60,    61,    62,    63,    64,
      65,    66,     5,     6,     7,     8,     9,     0,    67,     0,
       0,    10,     0,    68,     0,   149,     0,     0,    71,    72,
      73,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    11,    12,     0,     0,     0,     0,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,    25,    26,    27,     0,     0,     0,     0,    29,    30,
      31,    32,    33,   468,     0,     0,     0,   184,    35,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
       0,   206,     5,     6,     7,     8,     9,     0,     0,     0,
       0,    10,    55,    56,     0,     0,     0,     0,     0,     0,
       0,    60,    61,    62,    63,    64,    65,    66,     0,     0,
     276,     0,     0,     0,    67,     0,     0,     0,     0,    68,
     235,    11,    12,     0,    71,    72,    73,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,    25,    26,    27,     0,     0,     0,     0,    29,    30,
      31,    32,    33,     0,     0,     0,     0,     0,    35,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
       0,   206,     5,     6,     7,     8,     9,     0,     0,     0,
       0,    10,    55,    56,     0,     0,     0,     0,     0,     0,
       0,    60,    61,    62,    63,    64,    65,    66,     0,     0,
     325,     0,     0,     0,    67,     0,     0,     0,     0,    68,
       0,    11,    12,     0,    71,    72,    73,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,    25,    26,    27,     0,     0,     0,     0,    29,    30,
      31,    32,    33,     0,     0,     0,     0,     0,    35,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,     0,
     206,     0,     5,     6,     7,     8,     9,     0,     0,     0,
       0,    10,    55,    56,     0,     0,     0,     0,     0,     0,
       0,    60,    61,    62,    63,    64,    65,    66,     0,     0,
     351,     0,     0,     0,    67,     0,     0,     0,     0,    68,
       0,    11,    12,     0,    71,    72,    73,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,    25,    26,    27,     0,     0,     0,     0,    29,    30,
      31,    32,    33,     0,     0,     0,     0,     0,    35,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,     0,   206,
       0,     0,     5,     6,     7,     8,     9,     0,     0,     0,
       0,    10,    55,    56,     0,     0,     0,     0,     0,     0,
       0,    60,    61,    62,    63,    64,    65,    66,     0,     0,
     461,     0,     0,     0,    67,     0,     0,     0,     0,    68,
       0,    11,    12,     0,    71,    72,    73,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,    25,    26,    27,     0,     0,     0,     0,    29,    30,
      31,    32,    33,     0,     0,     0,     0,     0,    35,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     5,     6,     7,     8,     9,     0,     0,     0,
       0,    10,    55,    56,     0,     0,     0,     0,     0,     0,
       0,    60,    61,    62,    63,    64,    65,    66,     0,     0,
     463,     0,     0,     0,    67,     0,     0,     0,     0,    68,
       0,    11,    12,     0,    71,    72,    73,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,    25,    26,    27,     0,     0,     0,     0,    29,    30,
      31,    32,    33,     0,     0,     0,     0,     0,    35,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     5,     6,     7,     8,     9,     0,     0,     0,
       0,    10,    55,    56,     0,     0,     0,     0,     0,     0,
       0,    60,    61,    62,    63,    64,    65,    66,     0,     0,
     490,     0,     0,     0,    67,     0,     0,     0,     0,    68,
       0,    11,    12,     0,    71,    72,    73,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,    25,    26,    27,     0,     0,     0,     0,    29,    30,
      31,    32,    33,     0,     0,     0,     0,     0,    35,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     5,     6,     7,     8,     9,     0,     0,     0,
       0,    10,    55,    56,     0,     0,     0,     0,     0,     0,
       0,    60,    61,    62,    63,    64,    65,    66,     0,     0,
     573,     0,     0,     0,    67,     0,     0,     0,     0,    68,
       0,    11,    12,     0,    71,    72,    73,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,    25,    26,    27,     0,     0,     0,     0,    29,    30,
      31,    32,    33,     0,     0,     0,     0,     0,    35,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     5,     6,     7,     8,     9,     0,     0,     0,
       0,    10,    55,    56,     0,     0,     0,     0,     0,     0,
       0,    60,    61,    62,    63,    64,    65,    66,     0,     0,
       0,     0,     0,     0,    67,     0,     0,     0,     0,    68,
       0,    11,    12,     0,    71,    72,    73,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,    25,    26,    27,     0,     0,     0,     0,    29,    30,
      31,    32,    33,     0,     0,     0,     0,     0,    35,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     5,     6,     7,     8,     9,     0,     0,     0,
       0,    10,    55,    56,     0,     0,     0,     0,     0,     0,
       0,    60,    61,    62,    63,    64,    65,    66,     0,     0,
       0,     0,     0,     0,    67,     0,     0,     0,     0,    68,
       0,    11,    12,     0,    71,    72,    73,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,    25,    26,    27,   181,   182,   183,     0,    29,    30,
      31,   397,    33,     0,     0,     0,     0,     0,    35,     0,
     184,     0,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,     0,   206,     0,     0,     0,     0,     0,
       0,     0,    55,    56,     0,     0,     0,     0,     0,     0,
       0,    60,    61,    62,    63,    64,    65,    66,     0,     0,
       0,   181,   182,   183,    67,     0,     0,     0,     0,    68,
       0,     0,     0,     0,    71,    72,    73,   184,     0,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
       0,   206,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   181,   182,   183,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   537,
     184,   655,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,     0,   206,   181,   182,   183,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   184,     0,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,     0,   206,   602,   181,   182,   183,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   184,     0,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,     0,   206,   181,   182,
     183,     0,     0,     0,     0,     0,     0,   656,     0,     0,
       0,     0,     0,     0,   184,     0,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,     0,   206,   181,
     182,   183,     0,     0,     0,     0,     0,     0,   207,     0,
       0,     0,     0,     0,     0,   184,     0,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,     0,   206,
     181,   182,   183,     0,     0,     0,     0,     0,     0,     0,
     250,     0,     0,     0,     0,     0,   184,     0,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,     0,
     206,   181,   182,   183,     0,     0,     0,     0,     0,     0,
       0,   251,     0,     0,     0,     0,     0,   184,     0,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
       0,   206,   181,   182,   183,     0,     0,     0,     0,     0,
       0,     0,   257,     0,     0,     0,     0,     0,   184,     0,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,     0,   206,   181,   182,   183,     0,     0,     0,     0,
       0,     0,   286,     0,     0,     0,     0,     0,     0,   184,
       0,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,     0,   206,   181,   182,   183,     0,     0,     0,
       0,     0,     0,   343,     0,     0,     0,     0,     0,     0,
     184,     0,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,     0,   206,   181,   182,   183,     0,     0,
       0,     0,     0,     0,   349,     0,     0,     0,     0,     0,
       0,   184,     0,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,     0,   206,   181,   182,   183,     0,
       0,     0,     0,     0,     0,   350,     0,     0,     0,     0,
       0,     0,   184,     0,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,     0,   206,   181,   182,   183,
       0,     0,     0,     0,     0,     0,   365,     0,     0,     0,
       0,     0,     0,   184,     0,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,     0,   206,   181,   182,
     183,     0,     0,     0,     0,     0,     0,   438,     0,     0,
       0,     0,     0,     0,   184,     0,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,     0,   206,   181,
     182,   183,     0,     0,     0,     0,     0,     0,   607,     0,
       0,     0,     0,     0,     0,   184,     0,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,     0,   206,
     181,   182,   183,     0,     0,     0,     0,     0,     0,   721,
       0,     0,     0,     0,     0,     0,   184,     0,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,     0,
     206,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     732,     0,     0,     0,     0,     0,   181,   182,   183,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   391,   184,   478,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,     0,   206,   181,   182,   183,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   522,   184,     0,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,     0,   206,   182,   183,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   184,     0,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   183,   206,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     184,     0,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,     0,   206
};

static const yytype_int16 yycheck[] =
{
      23,    24,    26,    26,   180,   348,     4,   439,     8,    26,
      61,    61,   206,     8,    26,     8,   351,     8,     8,    26,
       8,     5,     6,   338,     8,     9,    10,    11,    12,    13,
      14,   346,    16,    17,    18,    19,    20,    21,    22,    73,
      61,    25,     8,     8,    78,     8,     8,    46,     8,    79,
      31,     8,    36,    63,   230,   231,    71,   256,    73,    43,
      44,    71,    46,    73,    48,    71,   140,    73,    26,   120,
       0,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,     0,    68,   140,    61,    61,    73,   116,
      71,    98,    73,   143,    71,    73,    31,    66,    67,    68,
      71,    71,    73,   137,   138,    59,    60,   122,   139,   140,
     140,   140,    71,   147,    73,   140,    31,    59,    60,   103,
     140,    71,   143,    73,   131,   142,   461,   111,   463,    73,
     145,   143,    66,    67,    68,   145,   159,   143,    73,   145,
     138,   141,   141,   166,   167,   168,   123,   142,   132,   142,
     134,   142,   142,   123,   142,   490,   140,   141,    73,   143,
     145,   476,   477,   339,   145,   140,   140,   145,   143,   143,
     116,   141,   348,   180,   145,   141,   141,   609,   141,   141,
      73,   141,   206,   206,   141,   140,   145,   171,    71,   140,
      73,   175,    71,   143,    73,   145,   143,   507,   182,   206,
     142,   145,   140,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   180,   230,   231,   419,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   573,   238,
     224,   225,   140,   265,   140,    73,   140,   557,   206,   559,
      78,   140,   275,   276,   238,   239,    66,    67,   242,   140,
     603,   284,   145,    93,    94,    71,   145,    73,    74,   292,
      73,    71,   230,   231,    71,    78,   260,   139,    92,    93,
      94,    92,    93,    94,   599,    93,    94,    66,    67,   488,
     288,   298,   140,    45,    46,    47,   639,    49,   120,   283,
     142,   143,   325,    49,   503,   140,    23,    24,   136,   137,
     138,    23,    24,    97,   144,   299,   139,   301,   302,   303,
     304,   105,   106,   107,   108,   109,   110,   139,   351,    46,
     144,   120,   339,   144,   137,   138,   144,    72,    73,   338,
     139,   348,   140,   146,    92,    93,    94,   346,   547,   371,
     372,    92,    93,    94,   338,    31,   379,   142,    79,    13,
     143,   142,   346,   141,     8,   118,   140,   144,    82,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,   339,   142,     8,    90,    71,   409,    71,    73,     8,
     348,   141,   141,    71,   141,   419,   419,    42,    43,    44,
      45,    46,    47,   142,    49,   118,   140,   391,   140,   393,
     148,    26,   419,   141,     8,    59,    60,   140,   441,   442,
      13,   443,   144,   139,   141,   140,    13,   603,    71,   140,
      61,   453,   454,   142,   457,   433,   459,   436,   461,   423,
     463,   144,   159,   371,   372,   140,   119,   445,   471,   166,
     167,   168,   436,   143,   141,   439,   440,    71,   141,   140,
     659,   419,   101,   639,    71,    13,   141,   490,     8,   143,
     140,   142,   121,   142,    13,   498,   142,   476,   477,   140,
     679,   121,   141,   467,     8,   148,   685,   142,   141,   141,
     148,   120,   476,   477,   517,   141,   494,   141,    89,   141,
     484,   485,   701,   141,     8,    71,   142,   706,   531,   493,
     144,    97,   120,    83,   142,   443,   142,    73,    13,   143,
     121,   238,    13,   722,    73,   453,   454,    71,   551,   141,
     140,   142,   141,   555,    13,   519,   142,    13,   522,    13,
     140,    26,    68,    73,   743,   567,   745,   569,   144,    13,
     573,   535,    73,   752,     9,    10,    11,    73,   275,   276,
      71,   142,    87,    13,   141,    13,    68,   284,   142,   768,
      25,   140,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    26,    49,    85,   603,   143,   101,   142,
     599,    73,   625,   141,   140,   758,   379,   144,   325,   144,
     141,   143,   668,   471,   499,   599,   144,   650,   551,   654,
     288,   338,   739,   288,   530,   609,   622,   555,   263,   346,
     514,   592,   639,   617,   351,   536,   159,   699,   484,   567,
     662,   569,   664,   665,     8,   603,   644,   517,    -1,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    -1,   379,   459,    -1,    -1,    -1,   689,    -1,    -1,
      42,    43,   694,    -1,    -1,    -1,   698,    -1,    -1,    -1,
      -1,   639,    -1,    -1,    -1,    -1,    -1,    -1,   710,    -1,
      -1,   675,    -1,   148,    -1,    59,    60,    69,    70,    71,
      -1,    -1,    98,    -1,    -1,   727,   704,    79,   730,   105,
     106,   107,   108,   109,   110,   111,   700,    -1,    -1,   436,
      -1,    -1,    -1,    -1,   441,   442,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   662,   733,   664,   665,   761,    -1,
     457,    -1,   459,    -1,   461,    -1,   463,    -1,   144,    -1,
      -1,   123,   124,   125,   126,   127,   128,    -1,    -1,   476,
     477,   689,    -1,    -1,    -1,    -1,   694,    -1,    -1,    -1,
     698,    -1,    -1,   490,    -1,    -1,    -1,   141,    -1,    -1,
      -1,   498,   710,    -1,    -1,    -1,    -1,    -1,     9,    10,
      11,    -1,     3,     4,     5,     6,     7,    -1,    -1,   727,
     517,    12,   730,    -1,    25,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
      -1,    42,    43,    -1,   551,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    62,    63,    64,    65,    -1,   573,    -1,    69,    70,
      71,    72,    73,    -1,    75,    -1,    -1,    -1,    79,    80,
      81,    82,    -1,    84,    -1,    86,    -1,    88,    -1,    -1,
      91,    -1,   599,    -1,    95,    96,    97,    -1,    99,   100,
      -1,   102,   103,   104,    -1,    -1,    -1,   108,   109,   110,
      -1,   112,   113,   114,   115,   116,   117,    -1,    -1,    -1,
      -1,   122,   123,   124,   125,   126,   127,   128,     3,     4,
       5,     6,     7,   144,   135,    -1,    -1,    12,    -1,   140,
      98,   142,   143,    -1,   145,   146,   147,   105,   106,   107,
     108,   109,   110,   111,    -1,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,   144,    62,    63,    64,
      65,    -1,    -1,    -1,    69,    70,    71,    72,    73,    -1,
      75,    59,    60,    -1,    79,    80,    81,    82,    -1,    84,
      -1,    86,    -1,    88,    -1,    -1,    91,    -1,    -1,    -1,
      95,    96,    97,    -1,    99,   100,    -1,   102,   103,   104,
      -1,    -1,    90,   108,   109,   110,    -1,   112,   113,   114,
     115,   116,   117,    -1,    -1,    -1,    -1,   122,   123,   124,
     125,   126,   127,   128,     3,     4,     5,     6,     7,    -1,
     135,    -1,    -1,    12,    -1,   140,    -1,   142,   143,    -1,
     145,   146,   147,    -1,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    -1,    62,    63,    64,    65,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    -1,    75,    59,    60,    -1,
      79,    80,    81,    82,    -1,    84,    -1,    86,    -1,    88,
      -1,    -1,    91,    -1,    -1,    -1,    95,    96,    -1,    -1,
      99,   100,    -1,   102,   103,   104,    -1,    -1,    -1,    -1,
      -1,   110,    -1,   112,   113,   114,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   122,   123,   124,   125,   126,   127,   128,
       3,     4,     5,     6,     7,    -1,   135,    -1,    -1,    12,
      -1,   140,    -1,   142,   143,    -1,   145,   146,   147,    -1,
      -1,    -1,    -1,    26,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    62,
      63,    64,    65,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    -1,    75,    -1,    -1,    -1,    79,    80,    81,    82,
      -1,    84,    -1,    86,    -1,    88,    -1,    -1,    91,    -1,
      -1,    -1,    95,    96,    -1,    -1,    99,   100,    -1,   102,
     103,   104,    -1,    -1,    -1,    -1,    -1,   110,    -1,   112,
     113,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,
     123,   124,   125,   126,   127,   128,     3,     4,     5,     6,
       7,    -1,   135,    -1,    -1,    12,    -1,   140,    -1,   142,
     143,    -1,   145,   146,   147,    -1,    -1,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    -1,    62,    63,    64,    65,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    -1,    75,    -1,
      -1,    -1,    79,    80,    81,    82,    -1,    84,    -1,    86,
      -1,    88,    -1,    -1,    91,    -1,    -1,    -1,    95,    96,
      -1,    -1,    99,   100,    -1,   102,   103,   104,    -1,    -1,
      -1,    -1,    -1,   110,    -1,   112,   113,   114,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   122,   123,   124,   125,   126,
     127,   128,     3,     4,     5,     6,     7,    -1,   135,    -1,
      -1,    12,    -1,   140,    -1,   142,   143,    -1,   145,   146,
     147,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    62,    63,    64,    65,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    -1,    75,    -1,    -1,    -1,    79,    80,
      81,    82,    -1,    84,    -1,    86,    -1,    88,    -1,    -1,
      91,    -1,    -1,    -1,    95,    96,    -1,    -1,    99,   100,
      -1,   102,   103,   104,    -1,    -1,    -1,    -1,    -1,   110,
      -1,   112,   113,   114,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   122,   123,   124,   125,   126,   127,   128,     3,     4,
       5,     6,     7,    -1,   135,    -1,    -1,    12,    -1,   140,
      -1,   142,   143,    -1,   145,   146,   147,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    64,
      65,    -1,    -1,    -1,    69,    70,    71,    72,    73,    -1,
      75,    -1,    -1,    -1,    79,    80,    81,    82,    -1,    84,
      -1,    86,    -1,    88,    -1,    -1,    91,    -1,    -1,    -1,
      95,    96,    -1,    -1,    99,   100,    -1,   102,   103,   104,
      -1,    -1,    -1,    -1,    -1,   110,    -1,   112,   113,   114,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,   123,   124,
     125,   126,   127,   128,     3,     4,     5,     6,     7,    -1,
     135,    -1,    -1,    12,    -1,   140,    -1,   142,   143,    -1,
     145,   146,   147,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    -1,    62,    63,    64,     9,    10,    11,    -1,
      69,    70,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    25,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   113,   114,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   122,   123,   124,   125,   126,   127,   128,
       3,     4,     5,     6,     7,    -1,   135,    -1,    -1,    12,
      -1,   140,    -1,   142,    -1,    -1,   145,   146,   147,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    62,
      63,    64,     9,    10,    11,    -1,    69,    70,    71,    72,
      73,   144,    -1,    -1,    -1,    -1,    79,    -1,    25,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     113,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,
     123,   124,   125,   126,   127,   128,     3,     4,     5,     6,
       7,    -1,   135,    -1,    -1,    12,    -1,   140,    -1,   142,
      -1,    -1,   145,   146,   147,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    -1,    62,    63,    64,     9,    10,
      11,    -1,    69,    70,    71,    72,    73,   144,    -1,    -1,
      -1,    -1,    79,    -1,    25,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   122,   123,   124,   125,   126,
     127,   128,     3,     4,     5,     6,     7,    -1,   135,    -1,
      -1,    12,    -1,   140,    -1,   142,    -1,    -1,   145,   146,
     147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    62,    63,    64,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    73,   144,    -1,    -1,    -1,    25,    79,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,   113,   114,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   122,   123,   124,   125,   126,   127,   128,    -1,    -1,
      31,    -1,    -1,    -1,   135,    -1,    -1,    -1,    -1,   140,
     141,    42,    43,    -1,   145,   146,   147,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    62,    63,    64,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    -1,    -1,    -1,    -1,    -1,    79,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,   113,   114,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   122,   123,   124,   125,   126,   127,   128,    -1,    -1,
      31,    -1,    -1,    -1,   135,    -1,    -1,    -1,    -1,   140,
      -1,    42,    43,    -1,   145,   146,   147,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    62,    63,    64,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    -1,    -1,    -1,    -1,    -1,    79,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    -1,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,   113,   114,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   122,   123,   124,   125,   126,   127,   128,    -1,    -1,
      31,    -1,    -1,    -1,   135,    -1,    -1,    -1,    -1,   140,
      -1,    42,    43,    -1,   145,   146,   147,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    62,    63,    64,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    -1,    -1,    -1,    -1,    -1,    79,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      -1,    -1,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,   113,   114,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   122,   123,   124,   125,   126,   127,   128,    -1,    -1,
      31,    -1,    -1,    -1,   135,    -1,    -1,    -1,    -1,   140,
      -1,    42,    43,    -1,   145,   146,   147,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    62,    63,    64,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,   113,   114,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   122,   123,   124,   125,   126,   127,   128,    -1,    -1,
      31,    -1,    -1,    -1,   135,    -1,    -1,    -1,    -1,   140,
      -1,    42,    43,    -1,   145,   146,   147,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    62,    63,    64,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,   113,   114,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   122,   123,   124,   125,   126,   127,   128,    -1,    -1,
      31,    -1,    -1,    -1,   135,    -1,    -1,    -1,    -1,   140,
      -1,    42,    43,    -1,   145,   146,   147,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    62,    63,    64,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,   113,   114,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   122,   123,   124,   125,   126,   127,   128,    -1,    -1,
      31,    -1,    -1,    -1,   135,    -1,    -1,    -1,    -1,   140,
      -1,    42,    43,    -1,   145,   146,   147,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    62,    63,    64,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,   113,   114,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   122,   123,   124,   125,   126,   127,   128,    -1,    -1,
      -1,    -1,    -1,    -1,   135,    -1,    -1,    -1,    -1,   140,
      -1,    42,    43,    -1,   145,   146,   147,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    62,    63,    64,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,   113,   114,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   122,   123,   124,   125,   126,   127,   128,    -1,    -1,
      -1,    -1,    -1,    -1,   135,    -1,    -1,    -1,    -1,   140,
      -1,    42,    43,    -1,   145,   146,   147,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    62,    63,    64,     9,    10,    11,    -1,    69,    70,
      71,    72,    73,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      25,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   113,   114,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   122,   123,   124,   125,   126,   127,   128,    -1,    -1,
      -1,     9,    10,    11,   135,    -1,    -1,    -1,    -1,   140,
      -1,    -1,    -1,    -1,   145,   146,   147,    25,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,   144,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,   142,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,   142,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     142,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   142,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   142,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,   141,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,   141,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,   141,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,   141,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,   141,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,   141,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,   141,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,   141,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     141,    -1,    -1,    -1,    -1,    -1,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   121,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   121,    25,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    11,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   150,   151,     0,   152,     3,     4,     5,     6,     7,
      12,    42,    43,    48,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    62,    63,    64,    65,    69,
      70,    71,    72,    73,    75,    79,    80,    81,    82,    84,
      86,    88,    91,    95,    96,    97,    99,   100,   102,   103,
     104,   108,   109,   110,   112,   113,   114,   115,   116,   117,
     122,   123,   124,   125,   126,   127,   128,   135,   140,   142,
     143,   145,   146,   147,   153,   157,   158,   189,   190,   192,
     195,   198,   200,   246,   257,   262,   271,   274,   278,   279,
     281,   282,   290,   291,   292,   293,   294,   295,   301,   311,
     314,   278,   278,   140,   278,   278,   278,   278,   278,   278,
     278,   256,   278,   278,   278,   278,   278,   278,   278,    71,
     262,   281,   282,   281,   278,    71,   262,   263,   264,   293,
     294,   301,   140,   269,   140,   140,   242,   278,   165,   140,
     140,   140,   175,   140,   142,   278,   142,   278,   193,   142,
     246,   278,   282,   176,   278,    79,   140,   188,    73,   145,
     227,   228,   116,   116,    73,   229,   140,   140,   140,   140,
     140,   140,   307,   278,   154,   143,   307,   307,    71,    71,
     139,     9,    10,    11,    25,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    49,   142,    59,    60,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,   140,   120,    61,   143,   145,   294,   278,   278,
     139,   139,   249,   120,   294,   141,   278,   278,   258,     8,
     142,   157,   163,   243,   244,   278,   246,   282,   140,   278,
     142,   142,    31,   191,   142,   142,   143,   142,    79,   142,
     143,   279,   282,     8,   142,    13,     8,   142,   186,   187,
     282,   282,   312,   282,   141,   247,    31,   278,   305,   306,
      73,    78,   136,   137,   138,   308,   141,   144,   155,   278,
     146,   147,   118,   199,   197,    71,   290,   294,   301,   252,
     278,   253,   254,   250,   251,   278,   278,   278,   278,   278,
     278,   278,   278,   278,   278,   278,   278,   278,   278,   278,
     278,   278,   278,   278,   263,    31,   278,   278,   278,   278,
     278,   278,   278,   278,   278,   278,   278,   278,   261,   283,
     278,   296,   278,   141,    71,   290,   140,   270,   265,   141,
     141,    31,   225,   226,   246,   282,   278,    82,   278,   142,
       8,    90,    90,    71,   209,   141,    71,   154,   141,   278,
     228,    42,    43,    71,   123,   271,   272,   273,    73,     8,
     141,     8,   141,   141,   142,   122,   282,   302,   303,   280,
     282,   121,   141,     8,   276,    61,   120,    72,   278,   282,
     115,   156,   157,   189,   190,   144,    71,   262,   196,   118,
     201,   140,   140,   294,   278,   278,   278,   278,   278,    63,
     282,   225,    71,   143,   290,   297,   299,   300,   148,   144,
     225,   297,    26,   159,   280,   141,     8,   140,   141,   167,
     245,   173,   171,    13,     8,   141,   170,   194,   144,   144,
     272,   272,   139,   140,    13,   187,   142,   313,   140,     8,
     141,    31,   278,    31,   278,   309,    71,    61,   144,   144,
     140,   119,   202,   203,   262,   143,   259,   260,    26,   263,
     141,   278,   298,   284,    61,   143,   141,   266,   161,   157,
      31,   246,   282,   166,   164,   243,   278,   282,    31,   205,
     282,   272,    71,    26,   157,   208,    26,   143,   210,   140,
     101,    71,   272,   275,   277,   272,   282,   304,   303,    13,
     280,   280,   121,    71,    73,    74,   310,   278,   141,   203,
     143,     8,   230,   225,   225,   255,   248,   144,   140,   288,
     296,   278,   267,   154,   160,   280,   278,    26,   157,   215,
     142,   121,   204,   282,   204,    13,   154,   142,   211,   142,
     211,    71,   123,   222,   223,   224,   140,   121,   141,     8,
     276,   302,   278,    31,   278,   148,   148,   142,   230,   262,
      98,   105,   106,   107,   108,   109,   110,   111,   144,   231,
     236,   237,   238,   239,   241,   141,   141,   278,   270,   289,
     285,   148,   144,   120,   268,   162,   216,   141,   154,   168,
     205,   141,   141,   272,    89,   211,    92,    93,    94,   211,
     144,   141,     8,    31,    73,   177,   272,   272,   141,   280,
     144,   144,    71,   232,    97,   239,     8,   142,   225,   120,
     286,   297,   218,    66,    67,   220,   142,    83,   243,   174,
     172,   142,    92,   142,   278,    26,   142,   214,   144,   143,
     224,    73,    13,   262,   121,    13,    73,   240,   233,    71,
     141,   297,    66,    67,   221,   140,   157,   142,   141,    26,
     157,   207,   207,   142,   214,   213,   154,    31,    73,    13,
     272,   178,   272,   272,    13,     8,   142,   191,    13,   287,
     140,    26,    68,   278,   169,   154,   212,   154,   144,    73,
      13,   272,    73,   272,    73,    71,   272,   288,   278,   154,
     142,   141,    26,   157,   206,    87,   154,    13,   272,   141,
      13,   234,   141,   217,   154,   142,   272,   179,   272,   140,
      26,   157,    85,   143,   222,   219,   142,   154,   141,   154,
     144,   142,   143,   235,   180,   154,   101,   181,   182,   183,
     144,   140,   183,   262,   184,    73,   141,   185,   143,   154,
     144
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
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

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
# if YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
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






/*----------.
| yyparse.  |
`----------*/

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
  /* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;

  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
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

    { zend_do_extended_info(TSRMLS_C); }
    break;

  case 4:

    { HANDLE_INTERACTIVE(); }
    break;

  case 7:

    { zend_do_early_binding(TSRMLS_C); }
    break;

  case 8:

    { zend_do_early_binding(TSRMLS_C); }
    break;

  case 9:

    { zend_do_halt_compiler_register(TSRMLS_C); YYACCEPT; }
    break;

  case 10:

    { zend_do_extended_info(TSRMLS_C); }
    break;

  case 11:

    { HANDLE_INTERACTIVE(); }
    break;

  case 16:

    { zend_error(E_COMPILE_ERROR, "__HALT_COMPILER() can only be used from the outermost scope"); }
    break;

  case 17:

    { zend_do_ticks(TSRMLS_C); }
    break;

  case 19:

    { zend_do_if_cond(&(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 20:

    { zend_do_if_after_statement(&(yyvsp[(4) - (6)]), 1 TSRMLS_CC); }
    break;

  case 21:

    { zend_do_if_end(TSRMLS_C); }
    break;

  case 22:

    { zend_do_if_cond(&(yyvsp[(3) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 23:

    { zend_do_if_after_statement(&(yyvsp[(4) - (7)]), 1 TSRMLS_CC); }
    break;

  case 24:

    { zend_do_if_end(TSRMLS_C); }
    break;

  case 25:

    { (yyvsp[(1) - (2)]).u.opline_num = get_next_op_number(CG(active_op_array));  }
    break;

  case 26:

    { zend_do_while_cond(&(yyvsp[(4) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 27:

    { zend_do_while_end(&(yyvsp[(1) - (7)]), &(yyvsp[(5) - (7)]) TSRMLS_CC); }
    break;

  case 28:

    { (yyvsp[(1) - (1)]).u.opline_num = get_next_op_number(CG(active_op_array));  zend_do_do_while_begin(TSRMLS_C); }
    break;

  case 29:

    { (yyvsp[(5) - (5)]).u.opline_num = get_next_op_number(CG(active_op_array)); }
    break;

  case 30:

    { zend_do_do_while_end(&(yyvsp[(1) - (9)]), &(yyvsp[(5) - (9)]), &(yyvsp[(7) - (9)]) TSRMLS_CC); }
    break;

  case 31:

    { zend_do_free(&(yyvsp[(3) - (4)]) TSRMLS_CC); (yyvsp[(4) - (4)]).u.opline_num = get_next_op_number(CG(active_op_array)); }
    break;

  case 32:

    { zend_do_extended_info(TSRMLS_C); zend_do_for_cond(&(yyvsp[(6) - (7)]), &(yyvsp[(7) - (7)]) TSRMLS_CC); }
    break;

  case 33:

    { zend_do_free(&(yyvsp[(9) - (10)]) TSRMLS_CC); zend_do_for_before_statement(&(yyvsp[(4) - (10)]), &(yyvsp[(7) - (10)]) TSRMLS_CC); }
    break;

  case 34:

    { zend_do_for_end(&(yyvsp[(7) - (12)]) TSRMLS_CC); }
    break;

  case 35:

    { zend_do_switch_cond(&(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 36:

    { zend_do_switch_end(&(yyvsp[(6) - (6)]) TSRMLS_CC); }
    break;

  case 37:

    { zend_do_brk_cont(ZEND_BRK, NULL TSRMLS_CC); }
    break;

  case 38:

    { zend_do_brk_cont(ZEND_BRK, &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 39:

    { zend_do_brk_cont(ZEND_CONT, NULL TSRMLS_CC); }
    break;

  case 40:

    { zend_do_brk_cont(ZEND_CONT, &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 41:

    { zend_do_return(NULL, 0 TSRMLS_CC); }
    break;

  case 42:

    { zend_do_return(&(yyvsp[(2) - (3)]), 0 TSRMLS_CC); }
    break;

  case 43:

    { zend_do_return(&(yyvsp[(2) - (3)]), 1 TSRMLS_CC); }
    break;

  case 47:

    { zend_do_echo(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 48:

    { zend_do_free(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 49:

    { zend_error(E_COMPILE_ERROR,"use: Not yet supported. Please use include_once() or require_once()");  zval_dtor(&(yyvsp[(2) - (3)]).u.constant); }
    break;

  case 51:

    { zend_do_foreach_begin(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]), 1 TSRMLS_CC); }
    break;

  case 52:

    { zend_do_foreach_cont(&(yyvsp[(1) - (8)]), &(yyvsp[(2) - (8)]), &(yyvsp[(4) - (8)]), &(yyvsp[(6) - (8)]), &(yyvsp[(7) - (8)]) TSRMLS_CC); }
    break;

  case 53:

    { zend_do_foreach_end(&(yyvsp[(1) - (10)]), &(yyvsp[(4) - (10)]) TSRMLS_CC); }
    break;

  case 54:

    { zend_do_foreach_begin(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]), 0 TSRMLS_CC); }
    break;

  case 55:

    { zend_check_writable_variable(&(yyvsp[(6) - (8)])); zend_do_foreach_cont(&(yyvsp[(1) - (8)]), &(yyvsp[(2) - (8)]), &(yyvsp[(4) - (8)]), &(yyvsp[(6) - (8)]), &(yyvsp[(7) - (8)]) TSRMLS_CC); }
    break;

  case 56:

    { zend_do_foreach_end(&(yyvsp[(1) - (10)]), &(yyvsp[(4) - (10)]) TSRMLS_CC); }
    break;

  case 57:

    { (yyvsp[(1) - (1)]).u.opline_num = get_next_op_number(CG(active_op_array)); zend_do_declare_begin(TSRMLS_C); }
    break;

  case 58:

    { zend_do_declare_end(&(yyvsp[(1) - (6)]) TSRMLS_CC); }
    break;

  case 60:

    { zend_do_try(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 61:

    { zend_initialize_try_catch_element(&(yyvsp[(1) - (7)]) TSRMLS_CC); }
    break;

  case 62:

    { zend_do_first_catch(&(yyvsp[(7) - (9)]) TSRMLS_CC); }
    break;

  case 63:

    { zend_do_begin_catch(&(yyvsp[(1) - (12)]), &(yyvsp[(9) - (12)]), &(yyvsp[(11) - (12)]), 1 TSRMLS_CC); }
    break;

  case 64:

    { zend_do_end_catch(&(yyvsp[(1) - (16)]) TSRMLS_CC); }
    break;

  case 65:

    { zend_do_mark_last_catch(&(yyvsp[(7) - (18)]), &(yyvsp[(18) - (18)]) TSRMLS_CC); }
    break;

  case 66:

    { zend_do_throw(&(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 67:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 68:

    { (yyval).u.opline_num = -1; }
    break;

  case 69:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 70:

    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 71:

    { (yyval).u.opline_num = get_next_op_number(CG(active_op_array)); }
    break;

  case 72:

    { zend_do_begin_catch(&(yyvsp[(1) - (6)]), &(yyvsp[(3) - (6)]), &(yyvsp[(5) - (6)]), 0 TSRMLS_CC); }
    break;

  case 73:

    { zend_do_end_catch(&(yyvsp[(1) - (10)]) TSRMLS_CC); }
    break;

  case 76:

    { zend_do_end_variable_parse(BP_VAR_UNSET, 0 TSRMLS_CC); zend_do_unset(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 77:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 78:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 79:

    { zend_do_ticks(TSRMLS_C); }
    break;

  case 80:

    { zend_do_ticks(TSRMLS_C); }
    break;

  case 81:

    { (yyval).op_type = ZEND_RETURN_VAL; }
    break;

  case 82:

    { (yyval).op_type = ZEND_RETURN_REF; }
    break;

  case 83:

    { (yyvsp[(1) - (1)]).u.opline_num = CG(zend_lineno); }
    break;

  case 84:

    { zend_do_begin_function_declaration(&(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), 0, (yyvsp[(3) - (4)]).op_type, NULL TSRMLS_CC); }
    break;

  case 85:

    { zend_do_end_function_declaration(&(yyvsp[(1) - (11)]) TSRMLS_CC); }
    break;

  case 86:

    { zend_do_begin_class_declaration(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 87:

    { zend_do_end_class_declaration(&(yyvsp[(1) - (8)]), &(yyvsp[(2) - (8)]) TSRMLS_CC); }
    break;

  case 88:

    { zend_do_begin_class_declaration(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]), NULL TSRMLS_CC); }
    break;

  case 89:

    { zend_do_end_class_declaration(&(yyvsp[(1) - (7)]), &(yyvsp[(2) - (7)]) TSRMLS_CC); }
    break;

  case 90:

    { (yyval).u.opline_num = CG(zend_lineno); (yyval).u.EA.type = 0; }
    break;

  case 91:

    { (yyval).u.opline_num = CG(zend_lineno); (yyval).u.EA.type = ZEND_ACC_EXPLICIT_ABSTRACT_CLASS; }
    break;

  case 92:

    { (yyval).u.opline_num = CG(zend_lineno); (yyval).u.EA.type = ZEND_ACC_FINAL_CLASS; }
    break;

  case 93:

    { (yyval).op_type = IS_UNUSED; }
    break;

  case 94:

    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 95:

    { (yyval).u.opline_num = CG(zend_lineno); (yyval).u.EA.type = ZEND_ACC_INTERFACE; }
    break;

  case 100:

    { zend_do_implements_interface(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 101:

    { zend_do_implements_interface(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 102:

    { (yyval).op_type = IS_UNUSED; }
    break;

  case 103:

    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 104:

    { zend_check_writable_variable(&(yyvsp[(1) - (1)])); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 105:

    { zend_check_writable_variable(&(yyvsp[(2) - (2)])); (yyval) = (yyvsp[(2) - (2)]);  (yyval).u.EA.type |= ZEND_PARSED_REFERENCE_VARIABLE; }
    break;

  case 112:

    { zend_do_declare_stmt(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 113:

    { zend_do_declare_stmt(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 114:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 115:

    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 116:

    { (yyval) = (yyvsp[(2) - (4)]); }
    break;

  case 117:

    { (yyval) = (yyvsp[(3) - (5)]); }
    break;

  case 118:

    { (yyval).op_type = IS_UNUSED; }
    break;

  case 119:

    { zend_do_extended_info(TSRMLS_C);  zend_do_case_before_statement(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 120:

    { zend_do_case_after_statement(&(yyval), &(yyvsp[(2) - (6)]) TSRMLS_CC); (yyval).op_type = IS_CONST; }
    break;

  case 121:

    { zend_do_extended_info(TSRMLS_C);  zend_do_default_before_statement(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 122:

    { zend_do_case_after_statement(&(yyval), &(yyvsp[(2) - (5)]) TSRMLS_CC); (yyval).op_type = IS_CONST; }
    break;

  case 128:

    { zend_do_if_cond(&(yyvsp[(4) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 129:

    { zend_do_if_after_statement(&(yyvsp[(5) - (7)]), 0 TSRMLS_CC); }
    break;

  case 131:

    { zend_do_if_cond(&(yyvsp[(4) - (6)]), &(yyvsp[(5) - (6)]) TSRMLS_CC); }
    break;

  case 132:

    { zend_do_if_after_statement(&(yyvsp[(5) - (8)]), 0 TSRMLS_CC); }
    break;

  case 139:

    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(2) - (2)]), 0 TSRMLS_CC); (yyval).op_type = IS_CONST; Z_LVAL((yyval).u.constant)=1; Z_TYPE((yyval).u.constant)=IS_LONG; INIT_PZVAL(&(yyval).u.constant); zend_do_receive_arg(ZEND_RECV, &tmp, &(yyval), NULL, &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]), 0 TSRMLS_CC); }
    break;

  case 140:

    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(3) - (3)]), 0 TSRMLS_CC); (yyval).op_type = IS_CONST; Z_LVAL((yyval).u.constant)=1; Z_TYPE((yyval).u.constant)=IS_LONG; INIT_PZVAL(&(yyval).u.constant); zend_do_receive_arg(ZEND_RECV, &tmp, &(yyval), NULL, &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 1 TSRMLS_CC); }
    break;

  case 141:

    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(3) - (5)]), 0 TSRMLS_CC); (yyval).op_type = IS_CONST; Z_LVAL((yyval).u.constant)=1; Z_TYPE((yyval).u.constant)=IS_LONG; INIT_PZVAL(&(yyval).u.constant); zend_do_receive_arg(ZEND_RECV_INIT, &tmp, &(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(1) - (5)]), &(yyvsp[(3) - (5)]), 1 TSRMLS_CC); }
    break;

  case 142:

    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(2) - (4)]), 0 TSRMLS_CC); (yyval).op_type = IS_CONST; Z_LVAL((yyval).u.constant)=1; Z_TYPE((yyval).u.constant)=IS_LONG; INIT_PZVAL(&(yyval).u.constant); zend_do_receive_arg(ZEND_RECV_INIT, &tmp, &(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), 0 TSRMLS_CC); }
    break;

  case 143:

    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(4) - (4)]), 0 TSRMLS_CC); (yyval)=(yyvsp[(1) - (4)]); Z_LVAL((yyval).u.constant)++; zend_do_receive_arg(ZEND_RECV, &tmp, &(yyval), NULL, &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]), 0 TSRMLS_CC); }
    break;

  case 144:

    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(5) - (5)]), 0 TSRMLS_CC); (yyval)=(yyvsp[(1) - (5)]); Z_LVAL((yyval).u.constant)++; zend_do_receive_arg(ZEND_RECV, &tmp, &(yyval), NULL, &(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]), 1 TSRMLS_CC); }
    break;

  case 145:

    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(5) - (7)]), 0 TSRMLS_CC); (yyval)=(yyvsp[(1) - (7)]); Z_LVAL((yyval).u.constant)++; zend_do_receive_arg(ZEND_RECV_INIT, &tmp, &(yyval), &(yyvsp[(7) - (7)]), &(yyvsp[(3) - (7)]), &(yyvsp[(5) - (7)]), 1 TSRMLS_CC); }
    break;

  case 146:

    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(4) - (6)]), 0 TSRMLS_CC); (yyval)=(yyvsp[(1) - (6)]); Z_LVAL((yyval).u.constant)++; zend_do_receive_arg(ZEND_RECV_INIT, &tmp, &(yyval), &(yyvsp[(6) - (6)]), &(yyvsp[(3) - (6)]), &(yyvsp[(4) - (6)]), 0 TSRMLS_CC); }
    break;

  case 147:

    { (yyval).op_type = IS_UNUSED; }
    break;

  case 148:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 149:

    { (yyval).op_type = IS_CONST; Z_TYPE((yyval).u.constant)=IS_NULL;}
    break;

  case 150:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 151:

    { Z_LVAL((yyval).u.constant) = 0; }
    break;

  case 152:

    { Z_LVAL((yyval).u.constant) = 1;  zend_do_pass_param(&(yyvsp[(1) - (1)]), ZEND_SEND_VAL, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 153:

    { Z_LVAL((yyval).u.constant) = 1;  zend_do_pass_param(&(yyvsp[(1) - (1)]), ZEND_SEND_VAR, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 154:

    { Z_LVAL((yyval).u.constant) = 1;  zend_do_pass_param(&(yyvsp[(2) - (2)]), ZEND_SEND_REF, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 155:

    { Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (3)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(3) - (3)]), ZEND_SEND_VAL, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 156:

    { Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (3)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(3) - (3)]), ZEND_SEND_VAR, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 157:

    { Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (4)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(4) - (4)]), ZEND_SEND_REF, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 158:

    { zend_do_fetch_global_variable(&(yyvsp[(3) - (3)]), NULL, ZEND_FETCH_GLOBAL_LOCK TSRMLS_CC); }
    break;

  case 159:

    { zend_do_fetch_global_variable(&(yyvsp[(1) - (1)]), NULL, ZEND_FETCH_GLOBAL_LOCK TSRMLS_CC); }
    break;

  case 160:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 161:

    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 162:

    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 163:

    { zend_do_fetch_static_variable(&(yyvsp[(3) - (3)]), NULL, ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 164:

    { zend_do_fetch_static_variable(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]), ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 165:

    { zend_do_fetch_static_variable(&(yyvsp[(1) - (1)]), NULL, ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 166:

    { zend_do_fetch_static_variable(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 169:

    { CG(access_type) = Z_LVAL((yyvsp[(1) - (1)]).u.constant); }
    break;

  case 172:

    { (yyvsp[(2) - (2)]).u.opline_num = CG(zend_lineno); }
    break;

  case 173:

    { zend_do_begin_function_declaration(&(yyvsp[(2) - (5)]), &(yyvsp[(5) - (5)]), 1, (yyvsp[(4) - (5)]).op_type, &(yyvsp[(1) - (5)]) TSRMLS_CC); }
    break;

  case 174:

    { zend_do_abstract_method(&(yyvsp[(5) - (10)]), &(yyvsp[(1) - (10)]), &(yyvsp[(10) - (10)]) TSRMLS_CC); zend_do_end_function_declaration(&(yyvsp[(2) - (10)]) TSRMLS_CC); }
    break;

  case 175:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_ABSTRACT; }
    break;

  case 176:

    { Z_LVAL((yyval).u.constant) = 0;	}
    break;

  case 177:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 178:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 179:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 180:

    { (yyval) = (yyvsp[(1) - (1)]);  if (!(Z_LVAL((yyval).u.constant) & ZEND_ACC_PPP_MASK)) { Z_LVAL((yyval).u.constant) |= ZEND_ACC_PUBLIC; } }
    break;

  case 181:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 182:

    { Z_LVAL((yyval).u.constant) = zend_do_verify_access_types(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)])); }
    break;

  case 183:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 184:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PROTECTED; }
    break;

  case 185:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PRIVATE; }
    break;

  case 186:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_STATIC; }
    break;

  case 187:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_ABSTRACT; }
    break;

  case 188:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_FINAL; }
    break;

  case 189:

    { zend_do_declare_property(&(yyvsp[(3) - (3)]), NULL, CG(access_type) TSRMLS_CC); }
    break;

  case 190:

    { zend_do_declare_property(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]), CG(access_type) TSRMLS_CC); }
    break;

  case 191:

    { zend_do_declare_property(&(yyvsp[(1) - (1)]), NULL, CG(access_type) TSRMLS_CC); }
    break;

  case 192:

    { zend_do_declare_property(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), CG(access_type) TSRMLS_CC); }
    break;

  case 193:

    { zend_do_declare_class_constant(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 194:

    { zend_do_declare_class_constant(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 195:

    { zend_do_echo(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 196:

    { zend_do_echo(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 197:

    { (yyval).op_type = IS_CONST;  Z_TYPE((yyval).u.constant) = IS_BOOL;  Z_LVAL((yyval).u.constant) = 1; }
    break;

  case 198:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 199:

    { zend_do_free(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 200:

    { (yyval) = (yyvsp[(4) - (4)]); }
    break;

  case 201:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 202:

    { zend_do_list_init(TSRMLS_C); }
    break;

  case 203:

    { zend_do_list_end(&(yyval), &(yyvsp[(7) - (7)]) TSRMLS_CC); }
    break;

  case 204:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_assign(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 205:

    { zend_check_writable_variable(&(yyvsp[(1) - (4)])); zend_do_end_variable_parse(BP_VAR_W, 0 TSRMLS_CC); zend_do_end_variable_parse(BP_VAR_W, 0 TSRMLS_CC); zend_do_assign_ref(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 206:

    { zend_error(E_STRICT, "Assigning the return value of new by reference is deprecated");  zend_check_writable_variable(&(yyvsp[(1) - (5)])); zend_do_extended_fcall_begin(TSRMLS_C); zend_do_begin_new_object(&(yyvsp[(4) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 207:

    { zend_do_end_new_object(&(yyvsp[(3) - (7)]), &(yyvsp[(4) - (7)]), &(yyvsp[(7) - (7)]) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); zend_do_end_variable_parse(BP_VAR_W, 0 TSRMLS_CC); (yyvsp[(3) - (7)]).u.EA.type = ZEND_PARSED_NEW; zend_do_assign_ref(&(yyval), &(yyvsp[(1) - (7)]), &(yyvsp[(3) - (7)]) TSRMLS_CC); }
    break;

  case 208:

    { zend_do_extended_fcall_begin(TSRMLS_C); zend_do_begin_new_object(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 209:

    { zend_do_end_new_object(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 210:

    { zend_do_clone(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 211:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_ADD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 212:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SUB, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 213:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_MUL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 214:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_DIV, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 215:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_CONCAT, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 216:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_MOD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 217:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_AND, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 218:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_OR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 219:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 220:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 221:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 222:

    { zend_do_post_incdec(&(yyval), &(yyvsp[(1) - (2)]), ZEND_POST_INC TSRMLS_CC); }
    break;

  case 223:

    { zend_do_pre_incdec(&(yyval), &(yyvsp[(2) - (2)]), ZEND_PRE_INC TSRMLS_CC); }
    break;

  case 224:

    { zend_do_post_incdec(&(yyval), &(yyvsp[(1) - (2)]), ZEND_POST_DEC TSRMLS_CC); }
    break;

  case 225:

    { zend_do_pre_incdec(&(yyval), &(yyvsp[(2) - (2)]), ZEND_PRE_DEC TSRMLS_CC); }
    break;

  case 226:

    { zend_do_boolean_or_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 227:

    { zend_do_boolean_or_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 228:

    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 229:

    { zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 230:

    { zend_do_boolean_or_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 231:

    { zend_do_boolean_or_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 232:

    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 233:

    { zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 234:

    { zend_do_binary_op(ZEND_BOOL_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 235:

    { zend_do_binary_op(ZEND_BW_OR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 236:

    { zend_do_binary_op(ZEND_BW_AND, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 237:

    { zend_do_binary_op(ZEND_BW_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 238:

    { zend_do_binary_op(ZEND_CONCAT, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 239:

    { zend_do_binary_op(ZEND_ADD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 240:

    { zend_do_binary_op(ZEND_SUB, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 241:

    { zend_do_binary_op(ZEND_MUL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 242:

    { zend_do_binary_op(ZEND_DIV, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 243:

    { zend_do_binary_op(ZEND_MOD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 244:

    { zend_do_binary_op(ZEND_SL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 245:

    { zend_do_binary_op(ZEND_SR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 246:

    { Z_LVAL((yyvsp[(1) - (2)]).u.constant)=0; Z_TYPE((yyvsp[(1) - (2)]).u.constant)=IS_LONG; (yyvsp[(1) - (2)]).op_type = IS_CONST; INIT_PZVAL(&(yyvsp[(1) - (2)]).u.constant); zend_do_binary_op(ZEND_ADD, &(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 247:

    { Z_LVAL((yyvsp[(1) - (2)]).u.constant)=0; Z_TYPE((yyvsp[(1) - (2)]).u.constant)=IS_LONG; (yyvsp[(1) - (2)]).op_type = IS_CONST; INIT_PZVAL(&(yyvsp[(1) - (2)]).u.constant); zend_do_binary_op(ZEND_SUB, &(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 248:

    { zend_do_unary_op(ZEND_BOOL_NOT, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 249:

    { zend_do_unary_op(ZEND_BW_NOT, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 250:

    { zend_do_binary_op(ZEND_IS_IDENTICAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 251:

    { zend_do_binary_op(ZEND_IS_NOT_IDENTICAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 252:

    { zend_do_binary_op(ZEND_IS_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 253:

    { zend_do_binary_op(ZEND_IS_NOT_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 254:

    { zend_do_binary_op(ZEND_IS_SMALLER, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 255:

    { zend_do_binary_op(ZEND_IS_SMALLER_OR_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 256:

    { zend_do_binary_op(ZEND_IS_SMALLER, &(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 257:

    { zend_do_binary_op(ZEND_IS_SMALLER_OR_EQUAL, &(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 258:

    { zend_do_instanceof(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 0 TSRMLS_CC); }
    break;

  case 259:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 260:

    { zend_do_begin_qm_op(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 261:

    { zend_do_qm_true(&(yyvsp[(4) - (5)]), &(yyvsp[(2) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 262:

    { zend_do_qm_false(&(yyval), &(yyvsp[(7) - (7)]), &(yyvsp[(2) - (7)]), &(yyvsp[(5) - (7)]) TSRMLS_CC); }
    break;

  case 263:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 264:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_LONG TSRMLS_CC); }
    break;

  case 265:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_DOUBLE TSRMLS_CC); }
    break;

  case 266:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_STRING TSRMLS_CC); }
    break;

  case 267:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_ARRAY TSRMLS_CC); }
    break;

  case 268:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_OBJECT TSRMLS_CC); }
    break;

  case 269:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_BOOL TSRMLS_CC); }
    break;

  case 270:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_NULL TSRMLS_CC); }
    break;

  case 271:

    { zend_do_exit(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 272:

    { zend_do_begin_silence(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 273:

    { zend_do_end_silence(&(yyvsp[(1) - (3)]) TSRMLS_CC); (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 274:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 275:

    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 276:

    { zend_do_shell_exec(&(yyval), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 277:

    { zend_do_print(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 278:

    { (yyvsp[(2) - (2)]).u.opline_num = zend_do_begin_function_call(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 279:

    { zend_do_end_function_call(&(yyvsp[(1) - (5)]), &(yyval), &(yyvsp[(4) - (5)]), 0, (yyvsp[(2) - (5)]).u.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 280:

    { zend_do_begin_class_member_function_call(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 281:

    { zend_do_end_function_call(NULL, &(yyval), &(yyvsp[(6) - (7)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 282:

    { zend_do_end_variable_parse(BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_class_member_function_call(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 283:

    { zend_do_end_function_call(NULL, &(yyval), &(yyvsp[(6) - (7)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 284:

    { zend_do_end_variable_parse(BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_dynamic_function_call(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 285:

    { zend_do_end_function_call(&(yyvsp[(1) - (5)]), &(yyval), &(yyvsp[(4) - (5)]), 0, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 286:

    { zend_do_fetch_class(&(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 287:

    { zend_do_fetch_class(&(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 288:

    { zend_do_end_variable_parse(BP_VAR_R, 0 TSRMLS_CC); zend_do_fetch_class(&(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 289:

    { zend_do_push_object(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 290:

    { zend_do_push_object(&(yyvsp[(4) - (4)]) TSRMLS_CC); zend_do_declare_implicit_property(TSRMLS_C); }
    break;

  case 291:

    { zend_do_pop_object(&(yyval) TSRMLS_CC); (yyval).u.EA.type = ZEND_PARSED_MEMBER; }
    break;

  case 292:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 295:

    { zend_do_push_object(&(yyvsp[(2) - (2)]) TSRMLS_CC); zend_do_declare_implicit_property(TSRMLS_C); }
    break;

  case 296:

    { memset(&(yyval), 0, sizeof(znode)); (yyval).op_type = IS_UNUSED; }
    break;

  case 297:

    { memset(&(yyval), 0, sizeof(znode)); (yyval).op_type = IS_UNUSED; }
    break;

  case 298:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 299:

    { Z_LVAL((yyval).u.constant)=0; }
    break;

  case 300:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 301:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 302:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 303:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 304:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 305:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 306:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 307:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 308:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 309:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 310:

    { zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(1) - (1)]), ZEND_CT TSRMLS_CC); }
    break;

  case 311:

    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 312:

    { zval minus_one;  Z_TYPE(minus_one) = IS_LONG; Z_LVAL(minus_one) = -1;  mul_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant, &minus_one TSRMLS_CC);  (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 313:

    { (yyval) = (yyvsp[(3) - (4)]); Z_TYPE((yyval).u.constant) = IS_CONSTANT_ARRAY; }
    break;

  case 314:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 315:

    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_CT TSRMLS_CC); }
    break;

  case 316:

    { zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(1) - (1)]), ZEND_RT TSRMLS_CC); }
    break;

  case 317:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 318:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 319:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 320:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 321:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 322:

    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); }
    break;

  case 323:

    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 326:

    { zend_do_add_static_array_element(&(yyval), &(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)])); }
    break;

  case 327:

    { zend_do_add_static_array_element(&(yyval), NULL, &(yyvsp[(3) - (3)])); }
    break;

  case 328:

    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); zend_do_add_static_array_element(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)])); }
    break;

  case 329:

    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); zend_do_add_static_array_element(&(yyval), NULL, &(yyvsp[(1) - (1)])); }
    break;

  case 330:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 331:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 332:

    { zend_do_end_variable_parse(BP_VAR_R, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 333:

    { zend_do_end_variable_parse(BP_VAR_W, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]);
				zend_check_writable_variable(&(yyvsp[(1) - (1)])); }
    break;

  case 334:

    { zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]);
				zend_check_writable_variable(&(yyvsp[(1) - (1)])); }
    break;

  case 335:

    { zend_do_push_object(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 336:

    { zend_do_push_object(&(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 337:

    { zend_do_pop_object(&(yyval) TSRMLS_CC); (yyval).u.EA.type = (yyvsp[(1) - (7)]).u.EA.type | ((yyvsp[(7) - (7)]).u.EA.type ? (yyvsp[(7) - (7)]).u.EA.type : (yyvsp[(6) - (7)]).u.EA.type); }
    break;

  case 338:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 339:

    { (yyval).u.EA.type = (yyvsp[(2) - (2)]).u.EA.type; }
    break;

  case 340:

    { (yyval).u.EA.type = 0; }
    break;

  case 341:

    { zend_do_push_object(&(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 342:

    { (yyval).u.EA.type = (yyvsp[(4) - (4)]).u.EA.type; }
    break;

  case 343:

    { zend_do_pop_object(&(yyvsp[(1) - (1)]) TSRMLS_CC); zend_do_begin_method_call(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 344:

    { zend_do_end_function_call(&(yyvsp[(1) - (4)]), &(yyval), &(yyvsp[(3) - (4)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);
			  zend_do_push_object(&(yyval) TSRMLS_CC); (yyval).u.EA.type = ZEND_PARSED_METHOD_CALL; }
    break;

  case 345:

    { zend_do_declare_implicit_property(TSRMLS_C); (yyval).u.EA.type = ZEND_PARSED_MEMBER; }
    break;

  case 346:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 347:

    { zend_do_indirect_references(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 348:

    { (yyval) = (yyvsp[(3) - (3)]); zend_do_fetch_static_member(&(yyval), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 349:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 350:

    { zend_do_begin_variable_parse(TSRMLS_C); (yyval) = (yyvsp[(1) - (1)]); (yyval).u.EA.type = ZEND_PARSED_FUNCTION_CALL; }
    break;

  case 351:

    { (yyval) = (yyvsp[(1) - (1)]); (yyval).u.EA.type = ZEND_PARSED_VARIABLE; }
    break;

  case 352:

    { zend_do_indirect_references(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); (yyval).u.EA.type = ZEND_PARSED_VARIABLE; }
    break;

  case 353:

    { (yyval) = (yyvsp[(1) - (1)]); (yyval).u.EA.type = ZEND_PARSED_STATIC_MEMBER; }
    break;

  case 354:

    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 355:

    { fetch_string_offset(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 356:

    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 357:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 358:

    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 359:

    { (yyval).op_type = IS_UNUSED; }
    break;

  case 360:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 361:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 362:

    { zend_do_end_variable_parse(BP_VAR_R, 0 TSRMLS_CC); }
    break;

  case 363:

    { znode tmp_znode;  zend_do_pop_object(&tmp_znode TSRMLS_CC);  zend_do_fetch_property(&(yyval), &tmp_znode, &(yyvsp[(1) - (2)]) TSRMLS_CC);}
    break;

  case 364:

    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 365:

    { fetch_string_offset(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 366:

    { znode tmp_znode;  zend_do_pop_object(&tmp_znode TSRMLS_CC);  zend_do_fetch_property(&(yyval), &tmp_znode, &(yyvsp[(1) - (1)]) TSRMLS_CC);}
    break;

  case 367:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 368:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 369:

    { Z_LVAL((yyval).u.constant) = 1; }
    break;

  case 370:

    { Z_LVAL((yyval).u.constant)++; }
    break;

  case 373:

    { zend_do_add_list_element(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 374:

    { zend_do_new_list_begin(TSRMLS_C); }
    break;

  case 375:

    { zend_do_new_list_end(TSRMLS_C); }
    break;

  case 376:

    { zend_do_add_list_element(NULL TSRMLS_CC); }
    break;

  case 377:

    { zend_do_init_array(&(yyval), NULL, NULL, 0 TSRMLS_CC); }
    break;

  case 378:

    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 379:

    { zend_do_add_array_element(&(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(3) - (5)]), 0 TSRMLS_CC); }
    break;

  case 380:

    { zend_do_add_array_element(&(yyval), &(yyvsp[(3) - (3)]), NULL, 0 TSRMLS_CC); }
    break;

  case 381:

    { zend_do_init_array(&(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]), 0 TSRMLS_CC); }
    break;

  case 382:

    { zend_do_init_array(&(yyval), &(yyvsp[(1) - (1)]), NULL, 0 TSRMLS_CC); }
    break;

  case 383:

    { zend_do_add_array_element(&(yyval), &(yyvsp[(6) - (6)]), &(yyvsp[(3) - (6)]), 1 TSRMLS_CC); }
    break;

  case 384:

    { zend_do_add_array_element(&(yyval), &(yyvsp[(4) - (4)]), NULL, 1 TSRMLS_CC); }
    break;

  case 385:

    { zend_do_init_array(&(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(1) - (4)]), 1 TSRMLS_CC); }
    break;

  case 386:

    { zend_do_init_array(&(yyval), &(yyvsp[(2) - (2)]), NULL, 1 TSRMLS_CC); }
    break;

  case 387:

    { zend_do_end_variable_parse(BP_VAR_R, 0 TSRMLS_CC);  zend_do_add_variable(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 388:

    { zend_do_add_string(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 389:

    { zend_do_init_string(&(yyval) TSRMLS_CC); }
    break;

  case 390:

    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 391:

    { zend_do_begin_variable_parse(TSRMLS_C); }
    break;

  case 392:

    { fetch_array_begin(&(yyval), &(yyvsp[(1) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 393:

    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyvsp[(2) - (3)]), &(yyvsp[(1) - (3)]), 1 TSRMLS_CC); zend_do_fetch_property(&(yyval), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 394:

    { zend_do_begin_variable_parse(TSRMLS_C);  fetch_simple_variable(&(yyval), &(yyvsp[(2) - (3)]), 1 TSRMLS_CC); }
    break;

  case 395:

    { zend_do_begin_variable_parse(TSRMLS_C);  fetch_array_begin(&(yyval), &(yyvsp[(2) - (6)]), &(yyvsp[(4) - (6)]) TSRMLS_CC); }
    break;

  case 396:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 397:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 398:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 399:

    { fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 400:

    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 401:

    { zend_do_isset_or_isempty(ZEND_ISEMPTY, &(yyval), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 402:

    { zend_do_include_or_eval(ZEND_INCLUDE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 403:

    { zend_do_include_or_eval(ZEND_INCLUDE_ONCE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 404:

    { zend_do_include_or_eval(ZEND_EVAL, &(yyval), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 405:

    { zend_do_include_or_eval(ZEND_REQUIRE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 406:

    { zend_do_include_or_eval(ZEND_REQUIRE_ONCE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 407:

    { zend_do_isset_or_isempty(ZEND_ISSET, &(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 408:

    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 409:

    { znode tmp; zend_do_isset_or_isempty(ZEND_ISSET, &tmp, &(yyvsp[(4) - (4)]) TSRMLS_CC); zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &tmp, &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 410:

    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_RT TSRMLS_CC); }
    break;


/* Line 1267 of yacc.c.  */

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
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  if (yyn == YYFINAL)
    YYACCEPT;

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
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





/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * indent-tabs-mode: t
 * End:
 */

