
/*  A Bison parser, made from parser.y
    by GNU Bison version 1.28  */

#define YYBISON 1  /* Identify Bison output.  */

#define	Super	258
#define	Class	259
#define	Public	260
#define	Static	261
#define	Void	262
#define	Main	263
#define	If	264
#define	Else	265
#define	While	266
#define	Extends	267
#define	Integer	268
#define	Boolean	269
#define	String	270
#define	True	271
#define	False	272
#define	Id	273
#define	IntegerIteral	274
#define	Char	275
#define	And	276
#define	This	277
#define	New	278
#define	Println	279
#define	Return	280

#line 1 "parser.y"

#include <stdio.h>
#include "node.h"

extern int yylineno;

int yylex();
void yyerror(char *s);

#line 11 "parser.y"
typedef union {
    struct Node* node;
    double d;
} YYSTYPE;
#include <stdio.h>

#ifndef __cplusplus
#ifndef __STDC__
#define const
#endif
#endif



#define	YYFINAL		199
#define	YYFLAG		-32768
#define	YYNTBASE	45

#define YYTRANSLATE(x) ((unsigned)(x) <= 280 ? yytranslate[x] : 64)

static const char yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,    21,     2,     2,     2,     2,     2,     2,     7,
     8,    20,    18,     4,    19,    16,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,    14,     3,    12,
    17,    11,    13,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     9,     2,     6,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,    10,     2,     5,     2,     2,     2,     2,     2,
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
     2,     2,     2,     2,     2,     1,    15,    22,    23,    24,
    25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
    35,    36,    37,    38,    39,    40,    41,    42,    43,    44
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     4,    13,    30,    31,    34,    42,    43,    46,    47,
    50,    54,    60,    61,    64,    75,    85,    99,   120,   121,
   123,   125,   129,   132,   133,   135,   137,   140,   142,   146,
   148,   150,   152,   156,   166,   169,   175,   181,   187,   192,
   200,   204,   211,   212,   214,   218,   222,   226,   234,   238,
   242,   246,   253,   255,   257,   259,   262,   266,   268,   272,
   276,   278
};

static const short yyrhs[] = {    47,
    46,    47,     0,    24,    23,    63,    49,    10,    50,    52,
     5,     0,    24,    23,    63,    12,    59,    49,    12,    13,
    22,    59,    11,    11,    10,    50,    52,     5,     0,     0,
    48,    47,     0,    23,    63,    49,    10,    50,    52,     5,
     0,     0,    31,    63,     0,     0,    50,    51,     0,    59,
    63,     3,     0,    59,    63,    17,    62,     3,     0,     0,
    53,    52,     0,    24,    59,    63,     7,    54,     8,    10,
    50,    57,     5,     0,    24,    63,     7,    54,     8,    10,
    50,    57,     5,     0,    24,    25,    26,    27,     7,    34,
     9,     6,    63,     8,    10,    57,     5,     0,    24,    25,
    12,    59,    49,    12,    13,    22,    59,    11,    11,    59,
    63,     7,    54,     8,    10,    50,    57,     5,     0,     0,
    55,     0,    56,     0,    56,     4,    55,     0,    59,    63,
     0,     0,    58,     0,    60,     0,    58,    60,     0,    32,
     0,    32,     9,     6,     0,    33,     0,    34,     0,    63,
     0,    10,    57,     5,     0,    59,    63,    17,    42,    59,
     7,    61,     8,     3,     0,    29,    60,     0,    28,     7,
    62,     8,    60,     0,    30,     7,    62,     8,    60,     0,
    43,     7,    62,     8,     3,     0,    63,    17,    62,     3,
     0,    63,     9,    62,     6,    17,    62,     3,     0,    44,
    62,     3,     0,    41,    16,    63,    17,    63,     3,     0,
     0,    62,     0,    62,    40,    62,     0,    62,    12,    62,
     0,    62,    11,    62,     0,    62,    11,    38,    13,    62,
    14,    62,     0,    62,    18,    62,     0,    62,    19,    62,
     0,    62,    20,    62,     0,    62,    16,    63,     7,    61,
     8,     0,    35,     0,    36,     0,    63,     0,    21,    62,
     0,     7,    62,     8,     0,    38,     0,    38,     4,    38,
     0,    63,     4,    63,     0,    39,     0,    37,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
    42,    56,    62,    72,    77,    85,    94,    99,   107,   112,
   120,   126,   134,   139,   148,   155,   163,   170,   182,   187,
   195,   201,   210,   229,   234,   242,   248,   256,   262,   267,
   272,   277,   285,   291,   298,   303,   309,   315,   321,   326,
   332,   337,   345,   350,   359,   365,   370,   375,   380,   385,
   390,   396,   402,   407,   412,   423,   428,   433,   438,   443,
   448,   456
};
#endif


#if YYDEBUG != 0 || defined (YYERROR_VERBOSE)

static const char * const yytname[] = {   "$","error","$undefined.","';'","','",
"'}'","']'","'('","')'","'['","'{'","'>'","'<'","'?'","':'","\"&&\"","'.'","'='",
"'+'","'-'","'*'","'!'","Super","Class","Public","Static","Void","Main","If",
"Else","While","Extends","Integer","Boolean","String","True","False","Id","IntegerIteral",
"Char","And","This","New","Println","Return","Start","PublicClass","OtherClass",
"ClassDefinition","ExtendStatement","VarDefinitions","VarDefinition","MethodDeclarations",
"MethodDeclaration","Params","ParamList","ParamDefinition","Statements","StatementList",
"Type","Statement","Expressions","Expression","Identifier", NULL
};
#endif

static const short yyr1[] = {     0,
    45,    46,    46,    47,    47,    48,    49,    49,    50,    50,
    51,    51,    52,    52,    53,    53,    53,    53,    54,    54,
    55,    55,    56,    57,    57,    58,    58,    59,    59,    59,
    59,    59,    60,    60,    60,    60,    60,    60,    60,    60,
    60,    60,    61,    61,    62,    62,    62,    62,    62,    62,
    62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
    62,    63
};

static const short yyr2[] = {     0,
     3,     8,    16,     0,     2,     7,     0,     2,     0,     2,
     3,     5,     0,     2,    10,     9,    13,    20,     0,     1,
     1,     3,     2,     0,     1,     1,     2,     1,     3,     1,
     1,     1,     3,     9,     2,     5,     5,     5,     4,     7,
     3,     6,     0,     1,     3,     3,     3,     7,     3,     3,
     3,     6,     1,     1,     1,     2,     3,     1,     3,     3,
     1,     1
};

static const short yydefact[] = {     4,
     0,     0,     4,    62,     7,     0,     4,     5,     0,     0,
     0,     1,     8,     9,     7,    13,     0,     0,     0,    28,
    30,    31,    10,     0,    13,     0,    32,     7,     9,     0,
     0,    32,     0,     6,    14,     0,     0,    13,     0,     0,
     0,    19,    29,    11,     0,     0,     0,     7,     0,    19,
     0,    20,    21,     0,     0,     0,    53,    54,    58,    61,
     0,    55,     0,     2,     0,     0,     0,     0,     0,    23,
     0,    56,     0,    12,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     9,    22,    57,    59,
    58,    47,    46,     0,    49,    50,    51,    45,    60,     0,
     0,     0,     9,    24,     0,    43,     0,     0,     0,    24,
    24,     0,     0,     0,     0,     0,     0,     0,    25,     0,
    26,    32,     0,     0,    44,     0,     0,     0,     0,     0,
     0,     0,    35,     0,     0,     0,     0,    16,    27,     0,
     0,     0,     0,    52,     9,     0,     0,    15,    33,     0,
     0,     0,     0,     0,    41,     0,     0,     0,    48,    13,
     0,    24,     0,     0,     0,     0,     0,     0,     0,    39,
     0,     0,     0,    36,    37,     0,    38,     0,     0,     3,
     0,    17,    42,    43,     0,    19,     0,    40,     0,     0,
     0,    34,     9,    24,     0,    18,     0,     0,     0
};

static const short yydefgoto[] = {   197,
     7,     2,     3,    10,    16,    23,    24,    25,    51,    52,
    53,   118,   119,   131,   121,   124,    61,    62
};

static const short yypact[] = {    -6,
     8,    28,    -6,-32768,    25,    38,    -6,-32768,     8,    55,
     8,-32768,-32768,-32768,     2,    51,    89,    59,    10,    61,
-32768,-32768,-32768,    69,    53,     8,-32768,    25,-32768,    -7,
     8,    73,    87,-32768,-32768,    19,    83,    51,    89,    70,
    92,    89,-32768,-32768,   317,    88,    97,    25,    98,    89,
    96,-32768,   102,     8,   317,   317,-32768,-32768,   107,-32768,
   163,   109,    93,-32768,   112,    80,   117,   119,    89,-32768,
   270,-32768,    94,-32768,   323,   317,     8,   317,   317,   317,
   317,     8,    89,   114,   122,   123,-32768,-32768,-32768,-32768,
    35,-32768,-32768,   128,    -9,    -9,    39,-32768,-32768,   125,
   116,   133,-32768,   223,   317,   317,   129,    89,     8,   223,
   223,   134,   223,   135,   132,   137,   317,   144,   223,     8,
-32768,    46,   352,   147,   362,   146,   151,   149,   164,   165,
     8,   317,-32768,   317,     8,   317,   186,-32768,-32768,    43,
   317,   317,   317,-32768,-32768,   161,   167,-32768,-32768,   156,
   283,   296,   169,   309,-32768,   206,   257,   196,   362,    51,
    89,   223,   136,   223,   223,     8,   177,    89,   170,-32768,
   183,     8,   187,-32768,-32768,   188,-32768,   189,   317,-32768,
   193,-32768,-32768,   317,   219,    89,   201,-32768,   202,   191,
   207,-32768,-32768,   223,   213,-32768,   211,   220,-32768
};

static const short yypgoto[] = {-32768,
-32768,    20,-32768,     6,   -25,-32768,   -14,-32768,   -49,   150,
-32768,   -98,-32768,   -10,   -93,    17,    11,    -1
};


#define	YYLAST		402


static const short yytable[] = {     5,
    67,    75,    76,    38,    39,    26,    28,    13,    31,    15,
    35,   129,   130,    17,    27,    27,     1,    32,    40,   133,
    18,    44,     8,    47,    36,   139,    12,    26,    48,    41,
    81,    54,     9,    37,    30,    45,    27,    27,    73,    54,
    27,    20,    21,    22,     4,    44,     4,   105,    27,    75,
    76,     6,    70,    65,   141,     9,    78,    79,    54,   156,
    11,   104,   142,   173,    14,    71,    72,    27,    29,    33,
   174,   175,   100,    34,    19,    94,    19,   110,    81,    42,
    99,    27,    20,    21,    22,    92,    93,     4,    95,    96,
    97,    98,    43,   120,    46,   195,    49,   127,    50,   120,
    63,    64,   122,    68,    66,    69,    27,   128,   122,   122,
    73,   122,    82,    85,    83,   123,   125,   122,   140,   160,
    20,    21,    22,    84,    86,     4,   101,   137,    87,   150,
   102,    90,   103,   153,   106,   107,   189,   108,   109,   126,
   132,   134,   151,   136,   152,   171,   154,   135,   138,    26,
   172,   157,   158,   159,   144,   145,   147,   178,    27,    27,
   122,   146,   122,   122,   176,    74,    27,   194,   148,   149,
   181,   161,   163,    75,    76,    54,   162,   168,    77,   177,
    78,    79,    80,   120,    27,   166,   179,   180,   155,   185,
   183,   182,   122,   192,   125,   184,    75,    76,   170,   186,
   187,    77,    81,    78,    79,    80,    75,    76,   190,   191,
   198,    77,    55,    78,    79,    80,   193,   196,    88,   199,
     0,   188,     0,     0,     0,    81,    56,     0,     0,    75,
    76,     0,   111,     0,    77,    81,    78,    79,    80,     0,
    57,    58,     4,    59,    60,     0,     0,   168,     0,     0,
   112,   113,   114,     0,    20,    21,    22,     0,    81,     4,
     0,     0,   169,   115,     0,   116,   117,    75,    76,     0,
     0,     0,    77,     0,    78,    79,    80,    89,     0,     0,
    75,    76,     0,     0,     0,    77,     0,    78,    79,    80,
   164,     0,     0,    75,    76,     0,    81,     0,    77,     0,
    78,    79,    80,   165,     0,     0,    75,    76,     0,    81,
     0,    77,     0,    78,    79,    80,   167,     0,     0,    75,
    76,     0,    81,    55,    77,     0,    78,    79,    80,    55,
     0,     0,     0,     0,     0,    81,     0,    56,     0,     0,
     0,     0,     0,    56,     0,     0,     0,     0,    81,     0,
     0,    57,    58,     4,    59,    60,     0,    57,    58,     4,
    91,    60,    75,    76,     0,   143,     0,    77,     0,    78,
    79,    80,    75,    76,     0,     0,     0,    77,     0,    78,
    79,    80,     0,     0,     0,     0,     0,     0,     0,     0,
     0,    81,     0,     0,     0,     0,     0,     0,     0,     0,
     0,    81
};

static const short yycheck[] = {     1,
    50,    11,    12,    29,    12,    16,    17,     9,    19,    11,
    25,   110,   111,    12,    16,    17,    23,    19,    26,   113,
    15,     3,     3,    38,    26,   119,     7,    38,    39,    31,
    40,    42,    31,    28,    25,    17,    38,    39,     4,    50,
    42,    32,    33,    34,    37,     3,    37,    13,    50,    11,
    12,    24,    54,    48,     9,    31,    18,    19,    69,    17,
    23,    87,    17,   162,    10,    55,    56,    69,    10,     9,
   164,   165,    83,     5,    24,    77,    24,   103,    40,     7,
    82,    83,    32,    33,    34,    75,    76,    37,    78,    79,
    80,    81,     6,   104,    12,   194,    27,   108,     7,   110,
    13,     5,   104,     8,     7,     4,   108,   109,   110,   111,
     4,   113,     4,    34,    22,   105,   106,   119,   120,   145,
    32,    33,    34,    12,     8,    37,    13,   117,    10,   131,
     9,    38,    10,   135,     7,    11,   186,    22,     6,    11,
     7,     7,   132,     7,   134,   160,   136,    16,     5,   160,
   161,   141,   142,   143,     8,    10,     8,   168,   160,   161,
   162,    11,   164,   165,   166,     3,   168,   193,     5,     5,
   172,    11,    17,    11,    12,   186,    10,    42,    16,     3,
    18,    19,    20,   194,   186,    17,    17,     5,     3,   179,
     3,     5,   194,     3,   184,     7,    11,    12,     3,     7,
   184,    16,    40,    18,    19,    20,    11,    12,     8,     8,
     0,    16,     7,    18,    19,    20,    10,     5,    69,     0,
    -1,     3,    -1,    -1,    -1,    40,    21,    -1,    -1,    11,
    12,    -1,    10,    -1,    16,    40,    18,    19,    20,    -1,
    35,    36,    37,    38,    39,    -1,    -1,    42,    -1,    -1,
    28,    29,    30,    -1,    32,    33,    34,    -1,    40,    37,
    -1,    -1,     6,    41,    -1,    43,    44,    11,    12,    -1,
    -1,    -1,    16,    -1,    18,    19,    20,     8,    -1,    -1,
    11,    12,    -1,    -1,    -1,    16,    -1,    18,    19,    20,
     8,    -1,    -1,    11,    12,    -1,    40,    -1,    16,    -1,
    18,    19,    20,     8,    -1,    -1,    11,    12,    -1,    40,
    -1,    16,    -1,    18,    19,    20,     8,    -1,    -1,    11,
    12,    -1,    40,     7,    16,    -1,    18,    19,    20,     7,
    -1,    -1,    -1,    -1,    -1,    40,    -1,    21,    -1,    -1,
    -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    40,    -1,
    -1,    35,    36,    37,    38,    39,    -1,    35,    36,    37,
    38,    39,    11,    12,    -1,    14,    -1,    16,    -1,    18,
    19,    20,    11,    12,    -1,    -1,    -1,    16,    -1,    18,
    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    40
};
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "bison.simple"

/* Skeleton output parser for bison,
   Copyright (C) 1984, 1989, 1990 Bob Corbett and Richard Stallman

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 1, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.  */


#ifndef alloca
#ifdef __GNUC__
#define alloca __builtin_alloca
#else /* not GNU C.  */
#if (!defined (__STDC__) && defined (sparc)) || defined (__sparc__) || defined (__sparc)
#include <alloca.h>
#else /* not sparc */
#if (defined (MSDOS) || defined(WIN32)) && !defined (__TURBOC__)
#include <malloc.h>
#else /* not MSDOS, or __TURBOC__ */
#if defined(_AIX)
#include <malloc.h>
 #pragma alloca
#endif /* not _AIX */
#endif /* not MSDOS, or __TURBOC__ */
#endif /* not sparc.  */
#endif /* not GNU C.  */
#endif /* alloca not defined.  */

/* This is the parser code that is written into each bison parser
  when the %semantic_parser declaration is not specified in the grammar.
  It was written by Richard Stallman by simplifying the hairy parser
  used when %semantic_parser is specified.  */

/* Note: there must be only one dollar sign in this file.
   It is replaced by the list of actions, each action
   as one case of the switch.  */

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	return(0)
#define YYABORT 	return(1)
#define YYERROR		goto yyerrlab1
/* Like YYERROR except do call yyerror.
   This remains here temporarily to ease the
   transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */
#define YYFAIL		goto yyerrlab
#define YYRECOVERING()  (!!yyerrstatus)
#define YYBACKUP(token, value) \
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    { yychar = (token), yylval = (value);			\
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { yyerror ("syntax error: cannot back up"); YYERROR; }	\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

#ifndef YYPURE
#define YYLEX		yylex()
#endif

#ifdef YYPURE
#ifdef YYLSP_NEEDED
#define YYLEX		yylex(&yylval, &yylloc)
#else
#define YYLEX		yylex(&yylval)
#endif
#endif

/* If nonreentrant, generate the variables here */

#ifndef YYPURE

int	yychar;			/*  the lookahead symbol		*/
YYSTYPE	yylval;			/*  the semantic value of the		*/
				/*  lookahead symbol			*/

#ifdef YYLSP_NEEDED
YYLTYPE yylloc;			/*  location data for the lookahead	*/
				/*  symbol				*/
#endif

int yynerrs;			/*  number of parse errors so far       */
#endif  /* not YYPURE */

#if YYDEBUG != 0
int yydebug;			/*  nonzero means print parse trace	*/
/* Since this is uninitialized, it does not stop multiple parsers
   from coexisting.  */
#endif

/*  YYINITDEPTH indicates the initial size of the parser's stacks	*/

#ifndef	YYINITDEPTH
#define YYINITDEPTH 200
#endif

/*  YYMAXDEPTH is the maximum size the stacks can grow to
    (effective only if the built-in stack extension method is used).  */

#if YYMAXDEPTH == 0
#undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
#define YYMAXDEPTH 10000
#endif

#if __GNUC__ > 1		/* GNU C and GNU C++ define this.  */
#define __yy_bcopy(FROM,TO,COUNT)	__builtin_memcpy(TO,FROM,COUNT)
#else				/* not GNU C or C++ */
#ifndef __cplusplus

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_bcopy (from, to, count)
     char *from;
     char *to;
     int count;
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#else /* __cplusplus */

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_bcopy (char *from, char *to, int count)
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#endif
#endif


#line 169 "bison.simple"
int
yyparse()
{
  register int yystate;
  register int yyn;
  register short *yyssp;
  register YYSTYPE *yyvsp;
  int yyerrstatus;	/*  number of tokens to shift before error messages enabled */
  int yychar1;		/*  lookahead token as an internal (translated) token number */

  short	yyssa[YYINITDEPTH];	/*  the state stack			*/
  YYSTYPE yyvsa[YYINITDEPTH];	/*  the semantic value stack		*/

  short *yyss = yyssa;		/*  refer to the stacks thru separate pointers */
  YYSTYPE *yyvs = yyvsa;	/*  to allow yyoverflow to reallocate them elsewhere */

#ifdef YYLSP_NEEDED
  YYLTYPE yylsa[YYINITDEPTH];	/*  the location stack			*/
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;

#define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#else
#define YYPOPSTACK   (yyvsp--, yyssp--)
#endif

  int yystacksize = YYINITDEPTH;

#ifdef YYPURE
  int yychar;
  YYSTYPE yylval;
  int yynerrs;
#ifdef YYLSP_NEEDED
  YYLTYPE yylloc;
#endif
#endif

  YYSTYPE yyval;		/*  the variable used to return		*/
				/*  semantic values from the action	*/
				/*  routines				*/

  int yylen;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Starting parse\n");
#endif

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss - 1;
  yyvsp = yyvs;
#ifdef YYLSP_NEEDED
  yylsp = yyls;
#endif

/* Push a new state, which is found in  yystate  .  */
/* In all cases, when you get here, the value and location stacks
   have just been pushed. so pushing a state here evens the stacks.  */
yynewstate:

  *++yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Give user a chance to reallocate the stack */
      /* Use copies of these so that the &'s don't force the real ones into memory. */
      YYSTYPE *yyvs1 = yyvs;
      short *yyss1 = yyss;
#ifdef YYLSP_NEEDED
      YYLTYPE *yyls1 = yyls;
#endif

      /* Get the current used size of the three stacks, in elements.  */
      int size = yyssp - yyss + 1;

#ifdef yyoverflow
      /* Each stack pointer address is followed by the size of
	 the data in use in that stack, in bytes.  */
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
#ifdef YYLSP_NEEDED
		 &yyls1, size * sizeof (*yylsp),
#endif
		 &yystacksize);

      yyss = yyss1; yyvs = yyvs1;
#ifdef YYLSP_NEEDED
      yyls = yyls1;
#endif
#else /* no yyoverflow */
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	{
	  yyerror("parser stack overflow");
	  return 2;
	}
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;
      yyss = (short *) alloca (yystacksize * sizeof (*yyssp));
      __yy_bcopy ((char *)yyss1, (char *)yyss, size * sizeof (*yyssp));
      yyvs = (YYSTYPE *) alloca (yystacksize * sizeof (*yyvsp));
      __yy_bcopy ((char *)yyvs1, (char *)yyvs, size * sizeof (*yyvsp));
#ifdef YYLSP_NEEDED
      yyls = (YYLTYPE *) alloca (yystacksize * sizeof (*yylsp));
      __yy_bcopy ((char *)yyls1, (char *)yyls, size * sizeof (*yylsp));
#endif
#endif /* no yyoverflow */

      yyssp = yyss + size - 1;
      yyvsp = yyvs + size - 1;
#ifdef YYLSP_NEEDED
      yylsp = yyls + size - 1;
#endif

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Stack size increased to %d\n", yystacksize);
#endif

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Entering state %d\n", yystate);
#endif

  goto yybackup;
 yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Reading a token: ");
#endif
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (yychar <= 0)		/* This means end of input. */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more */

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Now at end of input.\n");
#endif
    }
  else
    {
      yychar1 = YYTRANSLATE(yychar);

#if YYDEBUG != 0
      if (yydebug)
	{
	  fprintf (stderr, "Next token is %d (%s", yychar, yytname[yychar1]);
	  /* Give the individual parser a way to print the precise meaning
	     of a token, for further debugging info.  */
#ifdef YYPRINT
	  YYPRINT (stderr, yychar, yylval);
#endif
	  fprintf (stderr, ")\n");
	}
#endif
    }

  yyn += yychar1;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != yychar1)
    goto yydefault;

  yyn = yytable[yyn];

  /* yyn is what to do for this token type in this state.
     Negative => reduce, -yyn is rule number.
     Positive => shift, yyn is new state.
       New state is final state => don't bother to shift,
       just return success.
     0, or most negative number => error.  */

  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrlab;

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting token %d (%s), ", yychar, yytname[yychar1]);
#endif

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  /* count tokens shifted since error; after three, turn off error status.  */
  if (yyerrstatus) yyerrstatus--;

  yystate = yyn;
  goto yynewstate;

/* Do the default action for the current state.  */
yydefault:

  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;

/* Do a reduction.  yyn is the number of a rule to reduce with.  */
yyreduce:
  yylen = yyr2[yyn];
  yyval = yyvsp[1-yylen]; /* implement default value of the action */

#if YYDEBUG != 0
  if (yydebug)
    {
      int i;

      fprintf (stderr, "Reducing via rule %d (line %d), ",
	       yyn, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (i = yyprhs[yyn]; yyrhs[i] > 0; i++)
	fprintf (stderr, "%s ", yytname[yyrhs[i]]);
      fprintf (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif


  switch (yyn) {

case 1:
#line 43 "parser.y"
{
								yyval.node = new_node("Start", 3, yyvsp[-2].node, yyvsp[-1].node, yyvsp[0].node);
								yyval.node->line = yylineno;
								{
									printf("Syntax tree:\n");
									Print(yyval.node, 0);
								}
							;
    break;}
case 2:
#line 57 "parser.y"
{
								yyval.node = new_node("PublicClass", 8, yyvsp[-7].node, yyvsp[-6].node, yyvsp[-5].node, yyvsp[-4].node, yyvsp[-3].node, yyvsp[-2].node, yyvsp[-1].node, yyvsp[0].node);
								yyval.node->line = yylineno;
							;
    break;}
case 3:
#line 63 "parser.y"
{
								yyval.node = new_node("PublicClass", 16, yyvsp[-15].node, yyvsp[-14].node, yyvsp[-13].node, yyvsp[-12].node, yyvsp[-11].node, yyvsp[-10].node, yyvsp[-9].node, yyvsp[-8].node, yyvsp[-7].node, yyvsp[-6].node,
																	yyvsp[-5].node, yyvsp[-4].node, yyvsp[-3].node, yyvsp[-2].node, yyvsp[-1].node, yyvsp[0].node);
								yyval.node->line = yylineno;
							;
    break;}
case 4:
#line 74 "parser.y"
{
			yyval.node = NULL;
		;
    break;}
case 5:
#line 78 "parser.y"
{
			yyval.node = new_node("OtherClass", 2, yyvsp[-1].node, yyvsp[0].node);
			yyval.node->line = yylineno;
		;
    break;}
case 6:
#line 86 "parser.y"
{
			yyval.node = new_node("ClassDefinition", 7, yyvsp[-6].node, yyvsp[-5].node, yyvsp[-4].node, yyvsp[-3].node,
												 yyvsp[-2].node, yyvsp[-1].node, yyvsp[0].node);
			yyval.node->line = yylineno;
		;
    break;}
case 7:
#line 96 "parser.y"
{
			yyval.node = NULL;
		;
    break;}
case 8:
#line 100 "parser.y"
{
			yyval.node = new_node("ExtendStatement", 2, yyvsp[-1].node, yyvsp[0].node);
			yyval.node->line = yylineno;
		;
    break;}
case 9:
#line 108 "parser.y"
{
			yyval.node = NULL;
		;
    break;}
case 10:
#line 113 "parser.y"
{
			yyval.node = new_node("VarDefinitions", 2, yyvsp[-1].node, yyvsp[0].node);
			yyval.node->line = yylineno;
		;
    break;}
case 11:
#line 121 "parser.y"
{
			yyval.node = new_node("VarDefinition", 3, yyvsp[-2].node, yyvsp[-1].node, yyvsp[0].node);
			yyval.node->line = yylineno;
		;
    break;}
case 12:
#line 127 "parser.y"
{
			yyval.node = new_node("VarDefinition", 5, yyvsp[-4].node, yyvsp[-3].node, yyvsp[-2].node, yyvsp[-1].node, yyvsp[0].node);
			yyval.node->line = yylineno;
		;
    break;}
case 13:
#line 135 "parser.y"
{
			yyval.node = NULL;
		;
    break;}
case 14:
#line 140 "parser.y"
{
			yyval.node = new_node("MethodDeclarations", 2, yyvsp[-1].node, yyvsp[0].node);
			yyval.node->line = yylineno;
		;
    break;}
case 15:
#line 149 "parser.y"
{
									yyval.node = new_node("MethodDeclaration", 10, yyvsp[-9].node, yyvsp[-8].node, yyvsp[-7].node, yyvsp[-6].node,
																		   yyvsp[-5].node, yyvsp[-4].node, yyvsp[-3].node,
																		   yyvsp[-2].node, yyvsp[-1].node, yyvsp[0].node);
									yyval.node->line = yylineno;
								;
    break;}
case 16:
#line 156 "parser.y"
{
									yyval.node = new_node("ConstructionMethod", 9, yyvsp[-8].node, yyvsp[-7].node, yyvsp[-6].node, yyvsp[-5].node,
																		   yyvsp[-4].node, yyvsp[-3].node, yyvsp[-2].node,
																		   yyvsp[-1].node, yyvsp[0].node);
									yyval.node->line = yylineno;
								;
    break;}
case 17:
#line 164 "parser.y"
{//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
									yyval.node = new_node("Main", 13, yyvsp[-12].node, yyvsp[-11].node, yyvsp[-10].node, yyvsp[-9].node, yyvsp[-8].node,
															   yyvsp[-7].node, yyvsp[-6].node, yyvsp[-5].node, yyvsp[-4].node, yyvsp[-3].node, yyvsp[-2].node,
															   yyvsp[-1].node, yyvsp[0].node);
									yyval.node->line = yylineno;
								;
    break;}
case 18:
#line 171 "parser.y"
{
									yyval.node = new_node("GenericsMethod", 20, yyvsp[-19].node, yyvsp[-18].node, yyvsp[-17].node, yyvsp[-16].node,
																		   yyvsp[-15].node, yyvsp[-14].node, yyvsp[-13].node,
																		   yyvsp[-12].node, yyvsp[-11].node, yyvsp[-10].node, yyvsp[-9].node,
																		   yyvsp[-8].node, yyvsp[-7].node, yyvsp[-6].node, yyvsp[-5].node, yyvsp[-4].node, yyvsp[-3].node, yyvsp[-2].node, yyvsp[-1].node, yyvsp[0].node );
									yyval.node->line = yylineno;
								
								;
    break;}
case 19:
#line 183 "parser.y"
{
			yyval.node = NULL;
		;
    break;}
case 20:
#line 188 "parser.y"
{
			yyval.node = new_node("ParamList", 1, yyvsp[0].node );
			yyval.node->line = yylineno;
		;
    break;}
case 21:
#line 196 "parser.y"
{
			yyval.node = new_node("ParamDefinition", 1, yyvsp[0].node );
			yyval.node->line = yylineno;
		;
    break;}
case 22:
#line 202 "parser.y"
{
			yyval.node = new_node("ParamDefinition", 3, yyvsp[-2].node, yyvsp[-1].node, yyvsp[0].node );
			yyval.node->line = yylineno;
		;
    break;}
case 23:
#line 211 "parser.y"
{
			yyval.node = new_node("ParamDefinition", 2, yyvsp[-1].node, yyvsp[0].node);
			yyval.node->line = yylineno;
		;
    break;}
case 24:
#line 231 "parser.y"
{
			yyval.node = NULL;
		;
    break;}
case 25:
#line 235 "parser.y"
{
			yyval.node = new_node("Statements", 1, yyvsp[0].node);
			yyval.node->line = yylineno;
		;
    break;}
case 26:
#line 244 "parser.y"
{
			yyval.node = new_node("StatementList", 1, yyvsp[0].node);
			yyval.node->line = yylineno;
		;
    break;}
case 27:
#line 249 "parser.y"
{
			yyval.node = new_node("StatementList", 2, yyvsp[-1].node, yyvsp[0].node);
			yyval.node->line = yylineno;
		;
    break;}
case 28:
#line 258 "parser.y"
{
			yyval.node = new_node("Type", 1, yyvsp[0].node);
			yyval.node->line = yylineno;
		;
    break;}
case 29:
#line 263 "parser.y"
{
			yyval.node = new_node("Type", 3, yyvsp[-2].node, yyvsp[-1].node, yyvsp[0].node);
			yyval.node->line = yylineno;
		;
    break;}
case 30:
#line 268 "parser.y"
{
			yyval.node = new_node("Type", 1, yyvsp[0].node);
			yyval.node->line = yylineno;
		;
    break;}
case 31:
#line 273 "parser.y"
{
			yyval.node = new_node("Type", 1, yyvsp[0].node);
			yyval.node->line = yylineno;
		;
    break;}
case 32:
#line 278 "parser.y"
{
			yyval.node = new_node("Type", 1, yyvsp[0].node);
			yyval.node->line = yylineno;
		;
    break;}
case 33:
#line 287 "parser.y"
{
			yyval.node = new_node("Statement", 3, yyvsp[-2].node, yyvsp[-1].node, yyvsp[0].node);
			yyval.node->line = yylineno;
		;
    break;}
case 34:
#line 292 "parser.y"
{
			yyval.node = new_node("Statement", 9, yyvsp[-8].node, yyvsp[-7].node, yyvsp[-6].node, yyvsp[-5].node,
										  yyvsp[-4].node, yyvsp[-3].node, yyvsp[-2].node, yyvsp[-1].node,
										  yyvsp[0].node);
			yyval.node->line = yylineno;
		;
    break;}
case 35:
#line 299 "parser.y"
{
			yyval.node = new_node("ElseStatement", 2, yyvsp[-1].node, yyvsp[0].node);
			yyval.node->line = yylineno;
		;
    break;}
case 36:
#line 304 "parser.y"
{
			yyval.node = new_node("IfStatement", 5, yyvsp[-4].node, yyvsp[-3].node, yyvsp[-2].node, yyvsp[-1].node,
										  yyvsp[0].node);
			yyval.node->line = yylineno;
		;
    break;}
case 37:
#line 310 "parser.y"
{
			yyval.node = new_node("Statement", 5, yyvsp[-4].node, yyvsp[-3].node, yyvsp[-2].node, yyvsp[-1].node,
										  yyvsp[0].node);
			yyval.node->line = yylineno;
		;
    break;}
case 38:
#line 316 "parser.y"
{
			yyval.node = new_node("Statement", 5, yyvsp[-4].node, yyvsp[-3].node, yyvsp[-2].node, yyvsp[-1].node,
										  yyvsp[0].node);
			yyval.node->line = yylineno;
		;
    break;}
case 39:
#line 322 "parser.y"
{
			yyval.node = new_node("Statement", 4, yyvsp[-3].node, yyvsp[-2].node, yyvsp[-1].node, yyvsp[0].node);
			yyval.node->line = yylineno;
		;
    break;}
case 40:
#line 327 "parser.y"
{
			yyval.node = new_node("Statement", 7, yyvsp[-6].node, yyvsp[-5].node, yyvsp[-4].node, yyvsp[-3].node,
										  yyvsp[-2].node, yyvsp[-1].node, yyvsp[0].node);
			yyval.node->line = yylineno;
		;
    break;}
case 41:
#line 333 "parser.y"
{
			yyval.node = new_node("Statement", 2, yyvsp[-2].node, yyvsp[-1].node);
			yyval.node->line = yylineno;
		;
    break;}
case 42:
#line 338 "parser.y"
{
			yyval.node = new_node("Statement", 6, yyvsp[-5].node, yyvsp[-4].node, yyvsp[-3].node, yyvsp[-2].node, yyvsp[-1].node, yyvsp[0].node);
			yyval.node->line = yylineno;
		;
    break;}
case 43:
#line 347 "parser.y"
{
			yyval.node = NULL;
		;
    break;}
case 44:
#line 351 "parser.y"
{
			yyval.node = new_node("Expressions", 1, yyvsp[0].node);
			yyval.node->line = yylineno;
		;
    break;}
case 45:
#line 361 "parser.y"
{
			yyval.node = new_node("Expression", 3, yyvsp[-2].node, yyvsp[-1].node, yyvsp[0].node);
			yyval.node->line = yylineno;
		;
    break;}
case 46:
#line 366 "parser.y"
{
			yyval.node = new_node("Expression", 3, yyvsp[-2].node, yyvsp[-1].node, yyvsp[0].node);
			yyval.node->line = yylineno;
		;
    break;}
case 47:
#line 371 "parser.y"
{
			yyval.node = new_node("Expression", 3, yyvsp[-2].node, yyvsp[-1].node, yyvsp[0].node);
			yyval.node->line = yylineno;
		;
    break;}
case 48:
#line 376 "parser.y"
{
			yyval.node = new_node("'?'Expression", 7, yyvsp[-6].node, yyvsp[-5].node, yyvsp[-4].node, yyvsp[-3].node, yyvsp[-2].node, yyvsp[-1].node, yyvsp[0].node);
			yyval.node->line = yylineno;
		;
    break;}
case 49:
#line 381 "parser.y"
{
			yyval.node = new_node("Expression", 3, yyvsp[-2].node, yyvsp[-1].node, yyvsp[0].node);
			yyval.node->line = yylineno;
		;
    break;}
case 50:
#line 386 "parser.y"
{
			yyval.node = new_node("Expression", 3, yyvsp[-2].node, yyvsp[-1].node, yyvsp[0].node);
			yyval.node->line = yylineno;
		;
    break;}
case 51:
#line 391 "parser.y"
{
			yyval.node = new_node("Expression", 3, yyvsp[-2].node, yyvsp[-1].node, yyvsp[0].node);
			yyval.node->line = yylineno;
		;
    break;}
case 52:
#line 397 "parser.y"
{
			yyval.node = new_node("MethodCall", 6, yyvsp[-5].node, yyvsp[-4].node, yyvsp[-3].node,
										   yyvsp[-2].node, yyvsp[-1].node, yyvsp[0].node);
			yyval.node->line = yylineno;
		;
    break;}
case 53:
#line 403 "parser.y"
{
			yyval.node = new_node("Boolean", 1, yyvsp[0].node);
			yyval.node->line = yylineno;
		;
    break;}
case 54:
#line 408 "parser.y"
{
			yyval.node = new_node("Boolean", 1, yyvsp[0].node);
			yyval.node->line = yylineno;
		;
    break;}
case 55:
#line 413 "parser.y"
{
			yyval.node = new_node("Expression", 1, yyvsp[0].node);
			yyval.node->line = yylineno;
		;
    break;}
case 56:
#line 424 "parser.y"
{
			yyval.node = new_node("Expression", 2, yyvsp[-1].node, yyvsp[0].node);
			yyval.node->line = yylineno;
		;
    break;}
case 57:
#line 429 "parser.y"
{
			yyval.node = new_node("Expression", 3, yyvsp[-2].node, yyvsp[-1].node, yyvsp[0].node);
			yyval.node->line = yylineno;
		;
    break;}
case 58:
#line 434 "parser.y"
{
			yyval.node = new_node("Num", 1, yyvsp[0].node);
			yyval.node->line = yylineno;
		;
    break;}
case 59:
#line 439 "parser.y"
{
			yyval.node = new_node("Params", 3, yyvsp[-2].node, yyvsp[-1].node, yyvsp[0].node);
			yyval.node->line = yylineno;
		;
    break;}
case 60:
#line 444 "parser.y"
{
			yyval.node = new_node("Params", 3, yyvsp[-2].node, yyvsp[-1].node, yyvsp[0].node);
			yyval.node->line = yylineno;
		;
    break;}
case 61:
#line 449 "parser.y"
{
			yyval.node = new_node("String", 1, yyvsp[0].node);
			yyval.node->line = yylineno;
		;
    break;}
case 62:
#line 457 "parser.y"
{
			yyval.node = new_node("ID", 1, yyvsp[0].node);
			yyval.node->line = yylineno;
		;
    break;}
}
   /* the action file gets copied in in place of this dollarsign */
#line 442 "bison.simple"

  yyvsp -= yylen;
  yyssp -= yylen;
#ifdef YYLSP_NEEDED
  yylsp -= yylen;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;

#ifdef YYLSP_NEEDED
  yylsp++;
  if (yylen == 0)
    {
      yylsp->first_line = yylloc.first_line;
      yylsp->first_column = yylloc.first_column;
      yylsp->last_line = (yylsp-1)->last_line;
      yylsp->last_column = (yylsp-1)->last_column;
      yylsp->text = 0;
    }
  else
    {
      yylsp->last_line = (yylsp+yylen-1)->last_line;
      yylsp->last_column = (yylsp+yylen-1)->last_column;
    }
#endif

  /* Now "shift" the result of the reduction.
     Determine what state that goes to,
     based on the state we popped back to
     and the rule number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  goto yynewstate;

yyerrlab:   /* here on detecting error */

  if (! yyerrstatus)
    /* If not already recovering from an error, report this error.  */
    {
      ++yynerrs;

#ifdef YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (yyn > YYFLAG && yyn < YYLAST)
	{
	  int size = 0;
	  char *msg;
	  int x, count;

	  count = 0;
	  for (x = 0; x < (sizeof(yytname) / sizeof(char *)); x++)
	    if (yycheck[x + yyn] == x)
	      size += strlen(yytname[x]) + 15, count++;
	  msg = (char *) malloc(size + 15);
	  if (msg != 0)
	    {
	      strcpy(msg, "parse error");

	      if (count < 5)
		{
		  count = 0;
		  for (x = 0; x < (sizeof(yytname) / sizeof(char *)); x++)
		    if (yycheck[x + yyn] == x)
		      {
			strcat(msg, count == 0 ? ", expecting `" : " or `");
			strcat(msg, yytname[x]);
			strcat(msg, "'");
			count++;
		      }
		}
	      yyerror(msg);
	      free(msg);
	    }
	  else
	    yyerror ("parse error; also virtual memory exceeded");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror("parse error");
    }

  goto yyerrlab1;
yyerrlab1:   /* here on error raised explicitly by an action */

  if (yyerrstatus == 3)
    {
      /* if just tried and failed to reuse lookahead token after an error, discard it.  */

      /* return failure if at end of input */
      if (yychar == YYEOF)
	YYABORT;

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Discarding token %d (%s).\n", yychar, yytname[yychar1]);
#endif

      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token
     after shifting the error token.  */

  yyerrstatus = 3;		/* Each real token shifted decrements this */

  goto yyerrhandle;

yyerrdefault:  /* current state does not do anything special for the error token. */

#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */
  yyn = yydefact[yystate];  /* If its default is to accept any token, ok.  Otherwise pop it.*/
  if (yyn) goto yydefault;
#endif

yyerrpop:   /* pop the current state because it cannot handle the error token */

  if (yyssp == yyss) YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#ifdef YYLSP_NEEDED
  yylsp--;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "Error: state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

yyerrhandle:

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yyerrdefault;

  yyn += YYTERROR;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != YYTERROR)
    goto yyerrdefault;

  yyn = yytable[yyn];
  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrpop;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrpop;

  if (yyn == YYFINAL)
    YYACCEPT;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting error token, ");
#endif

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  yystate = yyn;
  goto yynewstate;
}
#line 463 "parser.y"

void yyerror(char *s) {
    fprintf(stderr, "line %d: %s \n", yylineno, s);
}

int main(void) {
    yyparse();
    return 0;
}
