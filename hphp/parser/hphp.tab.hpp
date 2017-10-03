// @generated
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



/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG

#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
#ifndef YYTOKEN_MAP
#define YYTOKEN_MAP enum yytokentype
#define YYTOKEN(num, name) name = num,
#endif
   YYTOKEN_MAP
  {
    YYTOKEN(258, T_INCLUDE)
    YYTOKEN(259, T_INCLUDE_ONCE)
    YYTOKEN(260, T_EVAL)
    YYTOKEN(261, T_REQUIRE)
    YYTOKEN(262, T_REQUIRE_ONCE)
    YYTOKEN(263, T_LAMBDA_ARROW)
    YYTOKEN(264, T_LOGICAL_OR)
    YYTOKEN(265, T_LOGICAL_XOR)
    YYTOKEN(266, T_LOGICAL_AND)
    YYTOKEN(267, T_PRINT)
    YYTOKEN(268, T_PLUS_EQUAL)
    YYTOKEN(269, T_MINUS_EQUAL)
    YYTOKEN(270, T_MUL_EQUAL)
    YYTOKEN(271, T_DIV_EQUAL)
    YYTOKEN(272, T_CONCAT_EQUAL)
    YYTOKEN(273, T_MOD_EQUAL)
    YYTOKEN(274, T_AND_EQUAL)
    YYTOKEN(275, T_OR_EQUAL)
    YYTOKEN(276, T_XOR_EQUAL)
    YYTOKEN(277, T_SL_EQUAL)
    YYTOKEN(278, T_SR_EQUAL)
    YYTOKEN(279, T_POW_EQUAL)
    YYTOKEN(280, T_AWAIT)
    YYTOKEN(281, T_YIELD)
    YYTOKEN(282, T_YIELD_FROM)
    YYTOKEN(283, T_PIPE)
    YYTOKEN(284, T_COALESCE)
    YYTOKEN(285, T_BOOLEAN_OR)
    YYTOKEN(286, T_BOOLEAN_AND)
    YYTOKEN(287, T_IS_EQUAL)
    YYTOKEN(288, T_IS_NOT_EQUAL)
    YYTOKEN(289, T_IS_IDENTICAL)
    YYTOKEN(290, T_IS_NOT_IDENTICAL)
    YYTOKEN(291, T_IS_SMALLER_OR_EQUAL)
    YYTOKEN(292, T_IS_GREATER_OR_EQUAL)
    YYTOKEN(293, T_SPACESHIP)
    YYTOKEN(294, T_SL)
    YYTOKEN(295, T_SR)
    YYTOKEN(296, T_INSTANCEOF)
    YYTOKEN(297, T_INC)
    YYTOKEN(298, T_DEC)
    YYTOKEN(299, T_INT_CAST)
    YYTOKEN(300, T_DOUBLE_CAST)
    YYTOKEN(301, T_STRING_CAST)
    YYTOKEN(302, T_ARRAY_CAST)
    YYTOKEN(303, T_OBJECT_CAST)
    YYTOKEN(304, T_BOOL_CAST)
    YYTOKEN(305, T_UNSET_CAST)
    YYTOKEN(306, T_POW)
    YYTOKEN(307, T_NEW)
    YYTOKEN(308, T_CLONE)
    YYTOKEN(309, T_EXIT)
    YYTOKEN(310, T_IF)
    YYTOKEN(311, T_ELSEIF)
    YYTOKEN(312, T_ELSE)
    YYTOKEN(313, T_ENDIF)
    YYTOKEN(314, T_LNUMBER)
    YYTOKEN(315, T_DNUMBER)
    YYTOKEN(316, T_ONUMBER)
    YYTOKEN(317, T_STRING)
    YYTOKEN(318, T_STRING_VARNAME)
    YYTOKEN(319, T_VARIABLE)
    YYTOKEN(320, T_PIPE_VAR)
    YYTOKEN(321, T_NUM_STRING)
    YYTOKEN(322, T_INLINE_HTML)
    YYTOKEN(323, T_HASHBANG)
    YYTOKEN(324, T_CHARACTER)
    YYTOKEN(325, T_BAD_CHARACTER)
    YYTOKEN(326, T_ENCAPSED_AND_WHITESPACE)
    YYTOKEN(327, T_CONSTANT_ENCAPSED_STRING)
    YYTOKEN(328, T_ECHO)
    YYTOKEN(329, T_DO)
    YYTOKEN(330, T_WHILE)
    YYTOKEN(331, T_ENDWHILE)
    YYTOKEN(332, T_FOR)
    YYTOKEN(333, T_ENDFOR)
    YYTOKEN(334, T_FOREACH)
    YYTOKEN(335, T_ENDFOREACH)
    YYTOKEN(336, T_DECLARE)
    YYTOKEN(337, T_ENDDECLARE)
    YYTOKEN(338, T_AS)
    YYTOKEN(339, T_SUPER)
    YYTOKEN(340, T_SWITCH)
    YYTOKEN(341, T_ENDSWITCH)
    YYTOKEN(342, T_CASE)
    YYTOKEN(343, T_DEFAULT)
    YYTOKEN(344, T_BREAK)
    YYTOKEN(345, T_GOTO)
    YYTOKEN(346, T_CONTINUE)
    YYTOKEN(347, T_FUNCTION)
    YYTOKEN(348, T_CONST)
    YYTOKEN(349, T_RETURN)
    YYTOKEN(350, T_TRY)
    YYTOKEN(351, T_CATCH)
    YYTOKEN(352, T_THROW)
    YYTOKEN(353, T_USING)
    YYTOKEN(354, T_USE)
    YYTOKEN(355, T_GLOBAL)
    YYTOKEN(356, T_STATIC)
    YYTOKEN(357, T_ABSTRACT)
    YYTOKEN(358, T_FINAL)
    YYTOKEN(359, T_PRIVATE)
    YYTOKEN(360, T_PROTECTED)
    YYTOKEN(361, T_PUBLIC)
    YYTOKEN(362, T_VAR)
    YYTOKEN(363, T_UNSET)
    YYTOKEN(364, T_ISSET)
    YYTOKEN(365, T_EMPTY)
    YYTOKEN(366, T_HALT_COMPILER)
    YYTOKEN(367, T_CLASS)
    YYTOKEN(368, T_INTERFACE)
    YYTOKEN(369, T_EXTENDS)
    YYTOKEN(370, T_IMPLEMENTS)
    YYTOKEN(371, T_OBJECT_OPERATOR)
    YYTOKEN(372, T_NULLSAFE_OBJECT_OPERATOR)
    YYTOKEN(373, T_DOUBLE_ARROW)
    YYTOKEN(374, T_LIST)
    YYTOKEN(375, T_ARRAY)
    YYTOKEN(376, T_DICT)
    YYTOKEN(377, T_VEC)
    YYTOKEN(378, T_VARRAY)
    YYTOKEN(379, T_DARRAY)
    YYTOKEN(380, T_KEYSET)
    YYTOKEN(381, T_CALLABLE)
    YYTOKEN(382, T_CLASS_C)
    YYTOKEN(383, T_METHOD_C)
    YYTOKEN(384, T_FUNC_C)
    YYTOKEN(385, T_LINE)
    YYTOKEN(386, T_FILE)
    YYTOKEN(387, T_COMMENT)
    YYTOKEN(388, T_DOC_COMMENT)
    YYTOKEN(389, T_OPEN_TAG)
    YYTOKEN(390, T_OPEN_TAG_WITH_ECHO)
    YYTOKEN(391, T_CLOSE_TAG)
    YYTOKEN(392, T_WHITESPACE)
    YYTOKEN(393, T_START_HEREDOC)
    YYTOKEN(394, T_END_HEREDOC)
    YYTOKEN(395, T_DOLLAR_OPEN_CURLY_BRACES)
    YYTOKEN(396, T_CURLY_OPEN)
    YYTOKEN(397, T_DOUBLE_COLON)
    YYTOKEN(398, T_NAMESPACE)
    YYTOKEN(399, T_NS_C)
    YYTOKEN(400, T_DIR)
    YYTOKEN(401, T_NS_SEPARATOR)
    YYTOKEN(402, T_XHP_LABEL)
    YYTOKEN(403, T_XHP_TEXT)
    YYTOKEN(404, T_XHP_ATTRIBUTE)
    YYTOKEN(405, T_XHP_CATEGORY)
    YYTOKEN(406, T_XHP_CATEGORY_LABEL)
    YYTOKEN(407, T_XHP_CHILDREN)
    YYTOKEN(408, T_ENUM)
    YYTOKEN(409, T_XHP_REQUIRED)
    YYTOKEN(410, T_TRAIT)
    YYTOKEN(411, T_ELLIPSIS)
    YYTOKEN(412, T_INSTEADOF)
    YYTOKEN(413, T_TRAIT_C)
    YYTOKEN(414, T_HH_ERROR)
    YYTOKEN(415, T_FINALLY)
    YYTOKEN(416, T_XHP_TAG_LT)
    YYTOKEN(417, T_XHP_TAG_GT)
    YYTOKEN(418, T_TYPELIST_LT)
    YYTOKEN(419, T_TYPELIST_GT)
    YYTOKEN(420, T_UNRESOLVED_LT)
    YYTOKEN(421, T_COLLECTION)
    YYTOKEN(422, T_SHAPE)
    YYTOKEN(423, T_TYPE)
    YYTOKEN(424, T_UNRESOLVED_TYPE)
    YYTOKEN(425, T_NEWTYPE)
    YYTOKEN(426, T_UNRESOLVED_NEWTYPE)
    YYTOKEN(427, T_COMPILER_HALT_OFFSET)
    YYTOKEN(428, T_ASYNC)
    YYTOKEN(429, T_LAMBDA_OP)
    YYTOKEN(430, T_LAMBDA_CP)
    YYTOKEN(431, T_UNRESOLVED_OP)
    YYTOKEN(432, T_WHERE)
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif





#ifndef YYTOKEN_MIN
#define YYTOKEN_MIN 258
#endif

#ifndef YYTOKEN_MAX
#define YYTOKEN_MAX 432
#endif
