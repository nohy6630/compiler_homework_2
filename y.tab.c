/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "kim.y"

     #include <stdio.h>
     #include <stdlib.h>
     int yyerror(char *s);
     int yylex();

#line 78 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IDENTIFIER = 258,              /* IDENTIFIER  */
    TYPE_IDENTIFIER = 259,         /* TYPE_IDENTIFIER  */
    CHARACTER_CONSTANT = 260,      /* CHARACTER_CONSTANT  */
    STRING_LITERAL = 261,          /* STRING_LITERAL  */
    FLOAT_CONSTANT = 262,          /* FLOAT_CONSTANT  */
    INTEGER_CONSTANT = 263,        /* INTEGER_CONSTANT  */
    ASSIGN = 264,                  /* ASSIGN  */
    MINUS = 265,                   /* MINUS  */
    PLUS = 266,                    /* PLUS  */
    SEMICOLON = 267,               /* SEMICOLON  */
    AMP = 268,                     /* AMP  */
    PERCENT = 269,                 /* PERCENT  */
    SLASH = 270,                   /* SLASH  */
    STAR = 271,                    /* STAR  */
    EXCL = 272,                    /* EXCL  */
    COMMA = 273,                   /* COMMA  */
    PERIOD = 274,                  /* PERIOD  */
    COLON = 275,                   /* COLON  */
    RR = 276,                      /* RR  */
    LR = 277,                      /* LR  */
    RB = 278,                      /* RB  */
    LB = 279,                      /* LB  */
    RP = 280,                      /* RP  */
    LP = 281,                      /* LP  */
    DOTDOTDOT = 282,               /* DOTDOTDOT  */
    BARBAR = 283,                  /* BARBAR  */
    AMPAMP = 284,                  /* AMPAMP  */
    NEQ = 285,                     /* NEQ  */
    EQL = 286,                     /* EQL  */
    GEQ = 287,                     /* GEQ  */
    LEQ = 288,                     /* LEQ  */
    GTR = 289,                     /* GTR  */
    LSS = 290,                     /* LSS  */
    ARROW = 291,                   /* ARROW  */
    MINUSMINUS = 292,              /* MINUSMINUS  */
    PLUSPLUS = 293,                /* PLUSPLUS  */
    WHILE_SYM = 294,               /* WHILE_SYM  */
    UNION_SYM = 295,               /* UNION_SYM  */
    TYPEDEF_SYM = 296,             /* TYPEDEF_SYM  */
    SWITCH_SYM = 297,              /* SWITCH_SYM  */
    STRUCT_SYM = 298,              /* STRUCT_SYM  */
    STATIC_SYM = 299,              /* STATIC_SYM  */
    SIZEOF_SYM = 300,              /* SIZEOF_SYM  */
    RETURN_SYM = 301,              /* RETURN_SYM  */
    IF_SYM = 302,                  /* IF_SYM  */
    FOR_SYM = 303,                 /* FOR_SYM  */
    ENUM_SYM = 304,                /* ENUM_SYM  */
    ELSE_SYM = 305,                /* ELSE_SYM  */
    DO_SYM = 306,                  /* DO_SYM  */
    DEFAULT_SYM = 307,             /* DEFAULT_SYM  */
    CONTINUE_SYM = 308,            /* CONTINUE_SYM  */
    CASE_SYM = 309,                /* CASE_SYM  */
    BREAK_SYM = 310,               /* BREAK_SYM  */
    AUTO_SYM = 311,                /* AUTO_SYM  */
    EOR = 312,                     /* EOR  */
    SHIL = 313,                    /* SHIL  */
    SHIR = 314,                    /* SHIR  */
    BAR = 315,                     /* BAR  */
    WHAT = 316,                    /* WHAT  */
    REGISTER_SYM = 317,            /* REGISTER_SYM  */
    EXTERN_SYM = 318,              /* EXTERN_SYM  */
    CONST_SYM = 319,               /* CONST_SYM  */
    VOLATILE_SYM = 320,            /* VOLATILE_SYM  */
    GOTO_SYM = 321                 /* GOTO_SYM  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define IDENTIFIER 258
#define TYPE_IDENTIFIER 259
#define CHARACTER_CONSTANT 260
#define STRING_LITERAL 261
#define FLOAT_CONSTANT 262
#define INTEGER_CONSTANT 263
#define ASSIGN 264
#define MINUS 265
#define PLUS 266
#define SEMICOLON 267
#define AMP 268
#define PERCENT 269
#define SLASH 270
#define STAR 271
#define EXCL 272
#define COMMA 273
#define PERIOD 274
#define COLON 275
#define RR 276
#define LR 277
#define RB 278
#define LB 279
#define RP 280
#define LP 281
#define DOTDOTDOT 282
#define BARBAR 283
#define AMPAMP 284
#define NEQ 285
#define EQL 286
#define GEQ 287
#define LEQ 288
#define GTR 289
#define LSS 290
#define ARROW 291
#define MINUSMINUS 292
#define PLUSPLUS 293
#define WHILE_SYM 294
#define UNION_SYM 295
#define TYPEDEF_SYM 296
#define SWITCH_SYM 297
#define STRUCT_SYM 298
#define STATIC_SYM 299
#define SIZEOF_SYM 300
#define RETURN_SYM 301
#define IF_SYM 302
#define FOR_SYM 303
#define ENUM_SYM 304
#define ELSE_SYM 305
#define DO_SYM 306
#define DEFAULT_SYM 307
#define CONTINUE_SYM 308
#define CASE_SYM 309
#define BREAK_SYM 310
#define AUTO_SYM 311
#define EOR 312
#define SHIL 313
#define SHIR 314
#define BAR 315
#define WHAT 316
#define REGISTER_SYM 317
#define EXTERN_SYM 318
#define CONST_SYM 319
#define VOLATILE_SYM 320
#define GOTO_SYM 321

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_TYPE_IDENTIFIER = 4,            /* TYPE_IDENTIFIER  */
  YYSYMBOL_CHARACTER_CONSTANT = 5,         /* CHARACTER_CONSTANT  */
  YYSYMBOL_STRING_LITERAL = 6,             /* STRING_LITERAL  */
  YYSYMBOL_FLOAT_CONSTANT = 7,             /* FLOAT_CONSTANT  */
  YYSYMBOL_INTEGER_CONSTANT = 8,           /* INTEGER_CONSTANT  */
  YYSYMBOL_ASSIGN = 9,                     /* ASSIGN  */
  YYSYMBOL_MINUS = 10,                     /* MINUS  */
  YYSYMBOL_PLUS = 11,                      /* PLUS  */
  YYSYMBOL_SEMICOLON = 12,                 /* SEMICOLON  */
  YYSYMBOL_AMP = 13,                       /* AMP  */
  YYSYMBOL_PERCENT = 14,                   /* PERCENT  */
  YYSYMBOL_SLASH = 15,                     /* SLASH  */
  YYSYMBOL_STAR = 16,                      /* STAR  */
  YYSYMBOL_EXCL = 17,                      /* EXCL  */
  YYSYMBOL_COMMA = 18,                     /* COMMA  */
  YYSYMBOL_PERIOD = 19,                    /* PERIOD  */
  YYSYMBOL_COLON = 20,                     /* COLON  */
  YYSYMBOL_RR = 21,                        /* RR  */
  YYSYMBOL_LR = 22,                        /* LR  */
  YYSYMBOL_RB = 23,                        /* RB  */
  YYSYMBOL_LB = 24,                        /* LB  */
  YYSYMBOL_RP = 25,                        /* RP  */
  YYSYMBOL_LP = 26,                        /* LP  */
  YYSYMBOL_DOTDOTDOT = 27,                 /* DOTDOTDOT  */
  YYSYMBOL_BARBAR = 28,                    /* BARBAR  */
  YYSYMBOL_AMPAMP = 29,                    /* AMPAMP  */
  YYSYMBOL_NEQ = 30,                       /* NEQ  */
  YYSYMBOL_EQL = 31,                       /* EQL  */
  YYSYMBOL_GEQ = 32,                       /* GEQ  */
  YYSYMBOL_LEQ = 33,                       /* LEQ  */
  YYSYMBOL_GTR = 34,                       /* GTR  */
  YYSYMBOL_LSS = 35,                       /* LSS  */
  YYSYMBOL_ARROW = 36,                     /* ARROW  */
  YYSYMBOL_MINUSMINUS = 37,                /* MINUSMINUS  */
  YYSYMBOL_PLUSPLUS = 38,                  /* PLUSPLUS  */
  YYSYMBOL_WHILE_SYM = 39,                 /* WHILE_SYM  */
  YYSYMBOL_UNION_SYM = 40,                 /* UNION_SYM  */
  YYSYMBOL_TYPEDEF_SYM = 41,               /* TYPEDEF_SYM  */
  YYSYMBOL_SWITCH_SYM = 42,                /* SWITCH_SYM  */
  YYSYMBOL_STRUCT_SYM = 43,                /* STRUCT_SYM  */
  YYSYMBOL_STATIC_SYM = 44,                /* STATIC_SYM  */
  YYSYMBOL_SIZEOF_SYM = 45,                /* SIZEOF_SYM  */
  YYSYMBOL_RETURN_SYM = 46,                /* RETURN_SYM  */
  YYSYMBOL_IF_SYM = 47,                    /* IF_SYM  */
  YYSYMBOL_FOR_SYM = 48,                   /* FOR_SYM  */
  YYSYMBOL_ENUM_SYM = 49,                  /* ENUM_SYM  */
  YYSYMBOL_ELSE_SYM = 50,                  /* ELSE_SYM  */
  YYSYMBOL_DO_SYM = 51,                    /* DO_SYM  */
  YYSYMBOL_DEFAULT_SYM = 52,               /* DEFAULT_SYM  */
  YYSYMBOL_CONTINUE_SYM = 53,              /* CONTINUE_SYM  */
  YYSYMBOL_CASE_SYM = 54,                  /* CASE_SYM  */
  YYSYMBOL_BREAK_SYM = 55,                 /* BREAK_SYM  */
  YYSYMBOL_AUTO_SYM = 56,                  /* AUTO_SYM  */
  YYSYMBOL_EOR = 57,                       /* EOR  */
  YYSYMBOL_SHIL = 58,                      /* SHIL  */
  YYSYMBOL_SHIR = 59,                      /* SHIR  */
  YYSYMBOL_BAR = 60,                       /* BAR  */
  YYSYMBOL_WHAT = 61,                      /* WHAT  */
  YYSYMBOL_REGISTER_SYM = 62,              /* REGISTER_SYM  */
  YYSYMBOL_EXTERN_SYM = 63,                /* EXTERN_SYM  */
  YYSYMBOL_CONST_SYM = 64,                 /* CONST_SYM  */
  YYSYMBOL_VOLATILE_SYM = 65,              /* VOLATILE_SYM  */
  YYSYMBOL_GOTO_SYM = 66,                  /* GOTO_SYM  */
  YYSYMBOL_YYACCEPT = 67,                  /* $accept  */
  YYSYMBOL_program = 68,                   /* program  */
  YYSYMBOL_translation_unit = 69,          /* translation_unit  */
  YYSYMBOL_external_declaration = 70,      /* external_declaration  */
  YYSYMBOL_function_definition = 71,       /* function_definition  */
  YYSYMBOL_declaration = 72,               /* declaration  */
  YYSYMBOL_declaration_specifiers = 73,    /* declaration_specifiers  */
  YYSYMBOL_storage_class_specifier = 74,   /* storage_class_specifier  */
  YYSYMBOL_type_qualifier = 75,            /* type_qualifier  */
  YYSYMBOL_init_declarator_list = 76,      /* init_declarator_list  */
  YYSYMBOL_init_declarator = 77,           /* init_declarator  */
  YYSYMBOL_type_specifier = 78,            /* type_specifier  */
  YYSYMBOL_struct_specifier = 79,          /* struct_specifier  */
  YYSYMBOL_struct_or_union = 80,           /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 81,   /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 82,        /* struct_declaration  */
  YYSYMBOL_specifier_qualifier_list = 83,  /* specifier_qualifier_list  */
  YYSYMBOL_struct_declarator_list = 84,    /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 85,         /* struct_declarator  */
  YYSYMBOL_enum_specifier = 86,            /* enum_specifier  */
  YYSYMBOL_enumerator_list = 87,           /* enumerator_list  */
  YYSYMBOL_enumerator = 88,                /* enumerator  */
  YYSYMBOL_declarator = 89,                /* declarator  */
  YYSYMBOL_pointer = 90,                   /* pointer  */
  YYSYMBOL_direct_declarator = 91,         /* direct_declarator  */
  YYSYMBOL_constant_expression_opt = 92,   /* constant_expression_opt  */
  YYSYMBOL_parameter_type_list_opt = 93,   /* parameter_type_list_opt  */
  YYSYMBOL_parameter_type_list = 94,       /* parameter_type_list  */
  YYSYMBOL_parameter_list = 95,            /* parameter_list  */
  YYSYMBOL_parameter_declaration = 96,     /* parameter_declaration  */
  YYSYMBOL_abstract_declarator_opt = 97,   /* abstract_declarator_opt  */
  YYSYMBOL_abstract_declarator = 98,       /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 99, /* direct_abstract_declarator  */
  YYSYMBOL_initializer = 100,              /* initializer  */
  YYSYMBOL_initializer_list = 101,         /* initializer_list  */
  YYSYMBOL_statement = 102,                /* statement  */
  YYSYMBOL_labeled_statement = 103,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 104,       /* compound_statement  */
  YYSYMBOL_declaration_list = 105,         /* declaration_list  */
  YYSYMBOL_statement_list = 106,           /* statement_list  */
  YYSYMBOL_expression_statement = 107,     /* expression_statement  */
  YYSYMBOL_selection_statement = 108,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 109,      /* iteration_statement  */
  YYSYMBOL_expression_opt = 110,           /* expression_opt  */
  YYSYMBOL_jump_statement = 111,           /* jump_statement  */
  YYSYMBOL_primary_expression = 112,       /* primary_expression  */
  YYSYMBOL_postfix_expression = 113,       /* postfix_expression  */
  YYSYMBOL_arg_expression_list_opt = 114,  /* arg_expression_list_opt  */
  YYSYMBOL_arg_expression_list = 115,      /* arg_expression_list  */
  YYSYMBOL_unary_expression = 116,         /* unary_expression  */
  YYSYMBOL_cast_expression = 117,          /* cast_expression  */
  YYSYMBOL_type_name = 118,                /* type_name  */
  YYSYMBOL_multiplicative_expression = 119, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 120,      /* additive_expression  */
  YYSYMBOL_shift_expression = 121,         /* shift_expression  */
  YYSYMBOL_relational_expression = 122,    /* relational_expression  */
  YYSYMBOL_equality_expression = 123,      /* equality_expression  */
  YYSYMBOL_and_expression = 124,           /* and_expression  */
  YYSYMBOL_exclusive_or_expression = 125,  /* exclusive_or_expression  */
  YYSYMBOL_inclusive_or_expression = 126,  /* inclusive_or_expression  */
  YYSYMBOL_logical_and_expression = 127,   /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 128,    /* logical_or_expression  */
  YYSYMBOL_conditional_expression = 129,   /* conditional_expression  */
  YYSYMBOL_assignment_expression = 130,    /* assignment_expression  */
  YYSYMBOL_comma_expression = 131,         /* comma_expression  */
  YYSYMBOL_expression = 132,               /* expression  */
  YYSYMBOL_constant_expression = 133       /* constant_expression  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  35
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   811

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  67
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  67
/* YYNRULES -- Number of rules.  */
#define YYNRULES  184
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  319

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   321


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      65,    66
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    16,    16,    20,    21,    25,    26,    30,    31,    35,
      36,    40,    41,    42,    43,    44,    45,    49,    50,    51,
      52,    53,    57,    58,    62,    63,    67,    68,    72,    73,
      74,    78,    79,    80,    84,    85,    89,    90,    94,    98,
      99,   100,   101,   105,   106,   110,   111,   112,   116,   117,
     118,   122,   123,   127,   128,   132,   133,   137,   138,   139,
     140,   144,   145,   146,   147,   151,   152,   156,   157,   161,
     162,   166,   167,   171,   172,   176,   177,   181,   182,   183,
     187,   188,   189,   190,   191,   195,   196,   197,   201,   202,
     206,   207,   208,   209,   210,   211,   215,   216,   217,   221,
     225,   226,   230,   231,   235,   236,   240,   241,   242,   246,
     247,   248,   252,   253,   257,   258,   259,   260,   264,   265,
     266,   267,   268,   269,   273,   274,   275,   276,   277,   278,
     279,   283,   284,   288,   289,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   306,   307,   311,   312,   316,
     317,   318,   319,   323,   324,   325,   329,   330,   331,   335,
     336,   337,   338,   339,   343,   344,   345,   349,   350,   354,
     355,   359,   360,   364,   365,   369,   370,   374,   375,   379,
     380,   384,   385,   389,   393
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IDENTIFIER",
  "TYPE_IDENTIFIER", "CHARACTER_CONSTANT", "STRING_LITERAL",
  "FLOAT_CONSTANT", "INTEGER_CONSTANT", "ASSIGN", "MINUS", "PLUS",
  "SEMICOLON", "AMP", "PERCENT", "SLASH", "STAR", "EXCL", "COMMA",
  "PERIOD", "COLON", "RR", "LR", "RB", "LB", "RP", "LP", "DOTDOTDOT",
  "BARBAR", "AMPAMP", "NEQ", "EQL", "GEQ", "LEQ", "GTR", "LSS", "ARROW",
  "MINUSMINUS", "PLUSPLUS", "WHILE_SYM", "UNION_SYM", "TYPEDEF_SYM",
  "SWITCH_SYM", "STRUCT_SYM", "STATIC_SYM", "SIZEOF_SYM", "RETURN_SYM",
  "IF_SYM", "FOR_SYM", "ENUM_SYM", "ELSE_SYM", "DO_SYM", "DEFAULT_SYM",
  "CONTINUE_SYM", "CASE_SYM", "BREAK_SYM", "AUTO_SYM", "EOR", "SHIL",
  "SHIR", "BAR", "WHAT", "REGISTER_SYM", "EXTERN_SYM", "CONST_SYM",
  "VOLATILE_SYM", "GOTO_SYM", "$accept", "program", "translation_unit",
  "external_declaration", "function_definition", "declaration",
  "declaration_specifiers", "storage_class_specifier", "type_qualifier",
  "init_declarator_list", "init_declarator", "type_specifier",
  "struct_specifier", "struct_or_union", "struct_declaration_list",
  "struct_declaration", "specifier_qualifier_list",
  "struct_declarator_list", "struct_declarator", "enum_specifier",
  "enumerator_list", "enumerator", "declarator", "pointer",
  "direct_declarator", "constant_expression_opt",
  "parameter_type_list_opt", "parameter_type_list", "parameter_list",
  "parameter_declaration", "abstract_declarator_opt",
  "abstract_declarator", "direct_abstract_declarator", "initializer",
  "initializer_list", "statement", "labeled_statement",
  "compound_statement", "declaration_list", "statement_list",
  "expression_statement", "selection_statement", "iteration_statement",
  "expression_opt", "jump_statement", "primary_expression",
  "postfix_expression", "arg_expression_list_opt", "arg_expression_list",
  "unary_expression", "cast_expression", "type_name",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "comma_expression",
  "expression", "constant_expression", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-255)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-62)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     519,  -255,  -255,    -9,    86,  -255,  -255,  -255,  -255,    13,
    -255,  -255,  -255,  -255,  -255,    23,   519,  -255,  -255,  -255,
      93,   418,   418,   418,  -255,    19,  -255,    -3,    27,    89,
      46,  -255,    48,    73,   118,  -255,  -255,  -255,    16,  -255,
      11,  -255,  -255,  -255,    77,   140,  -255,  -255,    89,   696,
     418,  -255,  -255,   118,   137,     6,  -255,  -255,    86,   660,
    -255,   140,   140,   140,    71,  -255,   713,   418,  -255,  -255,
    -255,  -255,  -255,   696,   696,   696,   696,   696,   365,   749,
     749,   766,   125,  -255,   199,   165,  -255,   217,   141,    96,
     208,   146,   169,   128,    90,   164,   -10,  -255,  -255,   178,
    -255,  -255,    44,   177,  -255,   189,  -255,    36,   696,   118,
    -255,  -255,   204,   660,  -255,  -255,   466,  -255,  -255,  -255,
    -255,   166,   491,   428,    54,  -255,   197,  -255,  -255,    93,
     254,  -255,  -255,  -255,  -255,  -255,  -255,    84,   209,   213,
     696,  -255,  -255,   365,  -255,  -255,   221,   696,   696,   241,
    -255,  -255,   696,   696,   696,   696,   696,   696,   696,   696,
     696,   696,   696,   696,   696,   696,   696,   696,   696,   696,
     696,   696,   696,   696,   508,  -255,    43,  -255,  -255,   102,
    -255,   561,  -255,   234,  -255,  -255,    83,  -255,  -255,   713,
     696,   231,  -255,  -255,   227,   230,   696,   246,   247,   311,
     257,   262,   696,   266,   276,  -255,  -255,  -255,  -255,  -255,
    -255,  -255,   270,   550,   107,  -255,   696,  -255,   258,  -255,
     261,   260,   268,  -255,  -255,  -255,  -255,  -255,  -255,   217,
     217,   141,   141,    96,    96,    96,    96,   208,   208,   146,
     169,   128,    90,   164,   267,  -255,   265,   264,   269,   102,
     696,   418,  -255,  -255,  -255,   624,  -255,  -255,  -255,   311,
     696,   696,   278,  -255,   696,   696,   256,   311,  -255,   277,
    -255,   286,  -255,  -255,  -255,  -255,  -255,   696,   696,  -255,
    -255,  -255,   280,   279,  -255,  -255,  -255,   285,   287,  -255,
     288,   299,   289,  -255,   311,  -255,  -255,  -255,  -255,  -255,
     311,   311,   311,   696,   696,  -255,  -255,  -255,   275,   314,
     304,   311,   696,   318,  -255,   306,  -255,   311,  -255
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    61,    30,    59,     0,    35,    19,    34,    18,     0,
      17,    20,    21,    22,    23,     0,     2,     3,     5,     6,
       0,    12,    13,    11,    28,     0,    29,     0,     0,    56,
      57,    60,     0,    50,     0,     1,     4,     9,     0,    24,
      26,    15,    16,    14,    33,     0,   100,     8,    55,    65,
      67,    58,    62,     0,    53,     0,    51,    10,     0,     0,
       7,     0,    40,    39,     0,    36,     0,   102,   118,   121,
     122,   120,   119,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   124,   135,   145,   149,   153,   156,   159,
     164,   167,   169,   171,   173,   175,   177,   179,   181,   183,
     184,    66,    75,     0,    68,    69,    71,     0,     0,     0,
      49,    25,    26,     0,    27,    85,     0,    42,    41,    32,
      37,   118,     0,     0,     0,    43,    45,    46,   101,     0,
       0,   145,   141,   142,   138,   139,   140,   147,     0,     0,
       0,   137,   136,     0,   143,    63,     0,     0,   131,     0,
     130,   129,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    65,    67,    73,    77,    74,    76,    78,
      64,     0,    48,     0,    52,    88,     0,    31,    38,     0,
       0,   118,   104,    99,     0,     0,   112,     0,     0,     0,
       0,     0,     0,     0,     0,   103,    90,    91,    92,    93,
      94,    95,     0,    67,    77,   148,     0,   123,     0,   127,
       0,     0,   132,   133,   128,   180,   152,   151,   150,   155,
     154,   157,   158,   163,   162,   161,   160,   166,   165,   168,
     170,   172,   174,   176,     0,   182,     0,     0,     0,    79,
      65,    67,    70,    72,    54,     0,    86,    44,    47,     0,
       0,     0,     0,   113,     0,   112,     0,     0,   115,     0,
     116,     0,   105,   146,   144,   125,   126,     0,     0,    81,
      82,    80,     0,     0,    87,    89,    98,     0,     0,   114,
       0,     0,     0,    97,     0,   117,   134,   178,    83,    84,
       0,     0,     0,   112,     0,    96,   109,   108,   106,     0,
       0,     0,   112,     0,   107,     0,   110,     0,   111
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -255,  -255,  -255,   316,  -255,   271,    65,  -255,   136,  -255,
     281,   -19,  -255,  -255,   273,   -55,   147,  -255,   151,  -255,
     282,   232,     5,     1,   -27,  -160,   -48,  -255,  -255,   155,
    -255,   -87,  -162,  -110,  -255,   -72,  -255,    66,  -255,  -255,
    -255,  -255,  -255,  -254,  -255,  -255,  -255,  -255,  -255,     3,
     -37,   200,    64,    68,    87,   104,   176,   179,   183,   175,
     182,  -255,    67,  -140,  -255,   -49,   -60
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    15,    16,    17,    18,    19,   102,    21,    22,    38,
      39,    23,    24,    25,    64,    65,    66,   124,   125,    26,
      55,    56,    32,    28,    29,    82,   247,   104,   105,   106,
     177,   248,   179,   114,   186,   205,   206,   207,    67,   130,
     208,   209,   210,   262,   211,    83,    84,   221,   222,    85,
      86,   138,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   212,   101
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     100,    48,   103,   185,    31,    27,   127,     3,   223,   120,
     115,   291,   225,   246,   249,   178,    33,   100,   170,    46,
      59,    27,    44,    35,   109,    40,    63,   110,    57,   139,
       1,    51,   245,    46,    58,    34,   132,   133,   134,   135,
     136,    45,    63,    63,    63,    63,     1,     1,   183,   309,
     215,   171,   249,     4,   109,    13,    14,   182,   315,   100,
       3,   120,     3,   112,   115,    20,   188,   173,   173,   174,
     174,   126,   189,    52,   139,     2,   131,   131,   131,   131,
     131,    20,   141,   142,   144,   135,    41,    42,    43,     1,
     282,   139,   119,    47,   139,    53,     1,    63,   220,    61,
       3,   255,     3,   176,   256,    37,    60,   175,   173,     3,
     213,     5,     4,    49,     7,    50,   226,   227,   228,     4,
       9,    54,   244,    31,   100,   131,   250,   266,   251,   127,
     258,   173,   129,   213,   112,    13,    14,   296,   214,    30,
     100,   100,   269,   137,     2,   285,   108,   263,   145,    48,
     168,   156,   157,   100,   158,   159,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   131,   131,   152,   176,   164,   165,   -61,   273,
       5,    62,   166,     7,   -61,   167,   -61,   286,   137,     9,
     -61,   -61,   -61,   169,   126,   293,   172,    62,    62,    62,
      62,   100,   180,   283,    13,    14,   115,   181,   137,   117,
     118,   287,   288,    59,   214,   290,   263,   190,   146,   131,
     229,   230,   305,   147,   219,   148,   231,   232,   306,   307,
     308,   153,   154,   155,   216,   149,   150,   151,   217,   314,
     160,   161,   162,   163,   224,   318,   254,   233,   234,   235,
     236,   259,    62,   260,   263,   310,   261,   191,    30,    69,
      70,    71,    72,   263,    73,    74,   192,    75,   237,   238,
      76,    77,   264,   265,   268,   193,    46,   267,   270,   271,
      78,   131,   272,   274,   275,   276,   277,   278,   279,   280,
     289,    79,    80,   194,   281,   292,   195,   294,   295,    81,
     196,   197,   198,   298,   299,   199,   200,   201,   202,   203,
     300,   303,   301,   302,   191,   304,    69,    70,    71,    72,
     204,    73,    74,   192,    75,   311,   312,    76,    77,   313,
     316,   317,    36,    46,   116,   107,   253,    78,   128,   111,
     257,   184,   239,   218,   242,   297,   240,     0,    79,    80,
     194,   241,   243,   195,     0,     0,    81,   196,   197,   198,
       0,     0,   199,   200,   201,   202,   203,     0,    68,     2,
      69,    70,    71,    72,     0,    73,    74,   204,    75,     0,
       0,    76,    77,     0,     0,     0,     0,     0,     0,     0,
       0,    78,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    79,    80,     0,     5,     6,     0,     7,     8,
      81,     0,     0,     0,     9,     0,     0,     0,     0,     0,
       0,    10,     2,     0,     0,     0,     0,    11,    12,    13,
      14,   121,     2,    69,    70,    71,    72,     0,    73,    74,
       0,    75,     0,     0,   122,    77,     0,     0,     0,     0,
       0,     0,     0,     0,   123,     0,     0,     0,     5,     6,
       0,     7,     8,     0,     0,    79,    80,     9,     5,     6,
       2,     7,     8,    81,    10,     0,     0,     9,     0,     0,
      11,    12,    13,    14,    10,     0,     0,   187,     0,     0,
      11,    12,    13,    14,    68,     0,    69,    70,    71,    72,
       0,    73,    74,     0,    75,     0,     5,   122,    77,     7,
       0,     1,     2,     0,     0,     9,     0,    78,     0,     0,
       0,     0,     1,     2,     3,     0,     0,     0,    79,    80,
      13,    14,   173,     0,   174,     3,    81,     0,     0,     0,
       0,     0,     0,     0,     0,     4,     0,     0,     5,     6,
       0,     7,     8,     0,     2,    13,    14,     9,     0,     5,
       6,     0,     7,     8,    10,     2,     3,     0,     9,     0,
      11,    12,    13,    14,   173,    10,   213,     0,     0,     0,
       0,    11,    12,    13,    14,     0,     0,     0,   252,     0,
       5,     6,     0,     7,     8,     0,     0,     0,     0,     9,
       0,     5,     6,     0,     7,     8,    10,     0,     0,     0,
       9,     0,    11,    12,    13,    14,     0,    10,     0,     0,
       0,     0,     0,    11,    12,    13,    14,    68,     0,    69,
      70,    71,    72,     0,    73,    74,     0,    75,     0,     0,
      76,    77,     0,     0,     0,   284,   113,     0,     0,     0,
      78,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    79,    80,    68,     0,    69,    70,    71,    72,    81,
      73,    74,     0,    75,     0,     0,    76,    77,     0,     0,
       0,     0,   113,     0,     0,     0,    78,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    79,    80,    68,
       0,    69,    70,    71,    72,    81,    73,    74,     0,    75,
       0,     0,    76,    77,     0,     0,   121,     0,    69,    70,
      71,    72,    78,    73,    74,     0,    75,     0,     0,   122,
      77,     0,     0,    79,    80,     0,     0,     0,     0,   123,
       0,    81,     0,     0,     0,     0,     0,     0,     0,     0,
      79,    80,    68,     0,    69,    70,    71,    72,    81,    73,
      74,     0,    75,     0,     0,    76,    77,     0,     0,    68,
       0,    69,    70,    71,    72,   140,    73,    74,     0,    75,
       0,     0,    76,    77,     0,     0,    79,    80,     0,     0,
       0,     0,   143,     0,    81,     0,     0,     0,     0,     0,
       0,     0,     0,    79,    80,     0,     0,     0,     0,     0,
       0,    81
};

static const yytype_int16 yycheck[] =
{
      49,    28,    50,   113,     3,     0,    66,    16,   148,    64,
      59,   265,   152,   173,   176,   102,     3,    66,    28,    22,
       9,    16,     3,     0,    18,    20,    45,    21,    12,    78,
       3,    30,   172,    22,    18,    22,    73,    74,    75,    76,
      77,    22,    61,    62,    63,    64,     3,     3,   108,   303,
     137,    61,   214,    26,    18,    64,    65,    21,   312,   108,
      16,   116,    16,    58,   113,     0,    12,    24,    24,    26,
      26,    66,    18,    25,   123,     4,    73,    74,    75,    76,
      77,    16,    79,    80,    81,   122,    21,    22,    23,     3,
     250,   140,    21,    27,   143,    22,     3,   116,   147,    22,
      16,    18,    16,   102,    21,    12,    40,   102,    24,    16,
      26,    40,    26,    24,    43,    26,   153,   154,   155,    26,
      49,     3,   171,   122,   173,   122,    24,   199,    26,   189,
     190,    24,    67,    26,   129,    64,    65,   277,   137,     3,
     189,   190,   202,    78,     4,   255,     9,   196,    23,   176,
      60,    10,    11,   202,    58,    59,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,     9,   174,    30,    31,    12,   216,
      40,    45,    13,    43,    18,    57,    20,   259,   123,    49,
      24,    25,    26,    29,   189,   267,    18,    61,    62,    63,
      64,   250,    25,   251,    64,    65,   255,    18,   143,    62,
      63,   260,   261,     9,   213,   264,   265,    20,    19,   216,
     156,   157,   294,    24,     3,    26,   158,   159,   300,   301,
     302,    14,    15,    16,    25,    36,    37,    38,    25,   311,
      32,    33,    34,    35,     3,   317,    12,   160,   161,   162,
     163,    20,   116,    26,   303,   304,    26,     3,   122,     5,
       6,     7,     8,   312,    10,    11,    12,    13,   164,   165,
      16,    17,    26,    26,    12,    21,    22,    20,    12,     3,
      26,   278,    12,    25,    23,    25,    18,    20,    23,    25,
      12,    37,    38,    39,    25,    39,    42,    20,    12,    45,
      46,    47,    48,    23,    25,    51,    52,    53,    54,    55,
      25,    12,    25,    25,     3,    26,     5,     6,     7,     8,
      66,    10,    11,    12,    13,    50,    12,    16,    17,    25,
      12,    25,    16,    22,    61,    53,   181,    26,    67,    58,
     189,   109,   166,   143,   169,   278,   167,    -1,    37,    38,
      39,   168,   170,    42,    -1,    -1,    45,    46,    47,    48,
      -1,    -1,    51,    52,    53,    54,    55,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    66,    13,    -1,
      -1,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    38,    -1,    40,    41,    -1,    43,    44,
      45,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    56,     4,    -1,    -1,    -1,    -1,    62,    63,    64,
      65,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    13,    -1,    -1,    16,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    40,    41,
      -1,    43,    44,    -1,    -1,    37,    38,    49,    40,    41,
       4,    43,    44,    45,    56,    -1,    -1,    49,    -1,    -1,
      62,    63,    64,    65,    56,    -1,    -1,    21,    -1,    -1,
      62,    63,    64,    65,     3,    -1,     5,     6,     7,     8,
      -1,    10,    11,    -1,    13,    -1,    40,    16,    17,    43,
      -1,     3,     4,    -1,    -1,    49,    -1,    26,    -1,    -1,
      -1,    -1,     3,     4,    16,    -1,    -1,    -1,    37,    38,
      64,    65,    24,    -1,    26,    16,    45,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    40,    41,
      -1,    43,    44,    -1,     4,    64,    65,    49,    -1,    40,
      41,    -1,    43,    44,    56,     4,    16,    -1,    49,    -1,
      62,    63,    64,    65,    24,    56,    26,    -1,    -1,    -1,
      -1,    62,    63,    64,    65,    -1,    -1,    -1,    27,    -1,
      40,    41,    -1,    43,    44,    -1,    -1,    -1,    -1,    49,
      -1,    40,    41,    -1,    43,    44,    56,    -1,    -1,    -1,
      49,    -1,    62,    63,    64,    65,    -1,    56,    -1,    -1,
      -1,    -1,    -1,    62,    63,    64,    65,     3,    -1,     5,
       6,     7,     8,    -1,    10,    11,    -1,    13,    -1,    -1,
      16,    17,    -1,    -1,    -1,    21,    22,    -1,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    38,     3,    -1,     5,     6,     7,     8,    45,
      10,    11,    -1,    13,    -1,    -1,    16,    17,    -1,    -1,
      -1,    -1,    22,    -1,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,     3,
      -1,     5,     6,     7,     8,    45,    10,    11,    -1,    13,
      -1,    -1,    16,    17,    -1,    -1,     3,    -1,     5,     6,
       7,     8,    26,    10,    11,    -1,    13,    -1,    -1,    16,
      17,    -1,    -1,    37,    38,    -1,    -1,    -1,    -1,    26,
      -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    38,     3,    -1,     5,     6,     7,     8,    45,    10,
      11,    -1,    13,    -1,    -1,    16,    17,    -1,    -1,     3,
      -1,     5,     6,     7,     8,    26,    10,    11,    -1,    13,
      -1,    -1,    16,    17,    -1,    -1,    37,    38,    -1,    -1,
      -1,    -1,    26,    -1,    45,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    38,    -1,    -1,    -1,    -1,    -1,
      -1,    45
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,    16,    26,    40,    41,    43,    44,    49,
      56,    62,    63,    64,    65,    68,    69,    70,    71,    72,
      73,    74,    75,    78,    79,    80,    86,    89,    90,    91,
      75,    90,    89,     3,    22,     0,    70,    12,    76,    77,
      89,    73,    73,    73,     3,    22,    22,   104,    91,    24,
      26,    90,    25,    22,     3,    87,    88,    12,    18,     9,
     104,    22,    75,    78,    81,    82,    83,   105,     3,     5,
       6,     7,     8,    10,    11,    13,    16,    17,    26,    37,
      38,    45,    92,   112,   113,   116,   117,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,    73,    93,    94,    95,    96,    87,     9,    18,
      21,    77,    89,    22,   100,   132,    81,    83,    83,    21,
      82,     3,    16,    26,    84,    85,    89,   133,    72,    73,
     106,   116,   117,   117,   117,   117,   117,    73,   118,   132,
      26,   116,   116,    26,   116,    23,    19,    24,    26,    36,
      37,    38,     9,    14,    15,    16,    10,    11,    58,    59,
      32,    33,    34,    35,    30,    31,    13,    57,    60,    29,
      28,    61,    18,    24,    26,    89,    90,    97,    98,    99,
      25,    18,    21,   133,    88,   100,   101,    21,    12,    18,
      20,     3,    12,    21,    39,    42,    46,    47,    48,    51,
      52,    53,    54,    55,    66,   102,   103,   104,   107,   108,
     109,   111,   132,    26,    90,    98,    25,    25,   118,     3,
     132,   114,   115,   130,     3,   130,   117,   117,   117,   119,
     119,   120,   120,   121,   121,   121,   121,   122,   122,   123,
     124,   125,   126,   127,   132,   130,    92,    93,    98,    99,
      24,    26,    27,    96,    12,    18,    21,    85,   133,    20,
      26,    26,   110,   132,    26,    26,   102,    20,    12,   133,
      12,     3,    12,   117,    25,    23,    25,    18,    20,    23,
      25,    25,    92,    93,    21,   100,   102,   132,   132,    12,
     132,   110,    39,   102,    20,    12,   130,   129,    23,    25,
      25,    25,    25,    12,    26,   102,   102,   102,   102,   110,
     132,    50,    12,    25,   102,   110,    12,    25,   102
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    67,    68,    69,    69,    70,    70,    71,    71,    72,
      72,    73,    73,    73,    73,    73,    73,    74,    74,    74,
      74,    74,    75,    75,    76,    76,    77,    77,    78,    78,
      78,    79,    79,    79,    80,    80,    81,    81,    82,    83,
      83,    83,    83,    84,    84,    85,    85,    85,    86,    86,
      86,    87,    87,    88,    88,    89,    89,    90,    90,    90,
      90,    91,    91,    91,    91,    92,    92,    93,    93,    94,
      94,    95,    95,    96,    96,    97,    97,    98,    98,    98,
      99,    99,    99,    99,    99,   100,   100,   100,   101,   101,
     102,   102,   102,   102,   102,   102,   103,   103,   103,   104,
     105,   105,   106,   106,   107,   107,   108,   108,   108,   109,
     109,   109,   110,   110,   111,   111,   111,   111,   112,   112,
     112,   112,   112,   112,   113,   113,   113,   113,   113,   113,
     113,   114,   114,   115,   115,   116,   116,   116,   116,   116,
     116,   116,   116,   116,   116,   117,   117,   118,   118,   119,
     119,   119,   119,   120,   120,   120,   121,   121,   121,   122,
     122,   122,   122,   122,   123,   123,   123,   124,   124,   125,
     125,   126,   126,   127,   127,   128,   128,   129,   129,   130,
     130,   131,   131,   132,   133
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     3,     2,     2,
       3,     1,     1,     1,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     3,     1,     1,
       1,     5,     4,     2,     1,     1,     1,     2,     3,     1,
       1,     2,     2,     1,     3,     1,     1,     3,     5,     4,
       2,     1,     3,     1,     4,     2,     1,     2,     3,     1,
       2,     1,     3,     4,     4,     0,     1,     0,     1,     1,
       3,     1,     3,     2,     2,     0,     1,     1,     1,     2,
       3,     3,     3,     4,     4,     1,     3,     4,     1,     3,
       1,     1,     1,     1,     1,     1,     4,     3,     3,     4,
       0,     2,     0,     2,     1,     2,     5,     7,     5,     5,
       7,     9,     0,     1,     3,     2,     2,     3,     1,     1,
       1,     1,     1,     3,     1,     4,     4,     3,     3,     2,
       2,     0,     1,     1,     3,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     4,     1,     4,     1,     2,     1,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     5,     1,
       3,     1,     3,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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

#line 1715 "y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 396 "kim.y"

extern char *yytext;

int yyerror(char *s) 
{
     printf("%s\n",s);
     exit(1);
}

int main()
{
     yyparse();
     printf("검사 통과\n");
}

int yywrap()
{
     return 1;
}
