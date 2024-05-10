#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 138
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 79
#define ALIAS_COUNT 0
#define TOKEN_COUNT 48
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_SEMI = 1,
  anon_sym_LBRACE = 2,
  anon_sym_COLON = 3,
  anon_sym_RBRACE = 4,
  sym_else_statement = 5,
  sym_elseif_statement = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  anon_sym_PLUS = 9,
  anon_sym_DASH = 10,
  anon_sym_STAR = 11,
  anon_sym_SLASH = 12,
  anon_sym_AMP_AMP = 13,
  anon_sym_PIPE_PIPE = 14,
  anon_sym_CARET_CARET = 15,
  anon_sym_GT = 16,
  anon_sym_LT = 17,
  anon_sym_EQ_EQ = 18,
  anon_sym_LT_EQ = 19,
  anon_sym_GT_EQ = 20,
  anon_sym_BANG_EQ = 21,
  anon_sym_EQ = 22,
  anon_sym_PLUS_EQ = 23,
  anon_sym_DASH_EQ = 24,
  anon_sym_STAR_EQ = 25,
  anon_sym_SLASH_EQ = 26,
  anon_sym_SQUOTE = 27,
  aux_sym_string_literal_token1 = 28,
  anon_sym_DQUOTE = 29,
  aux_sym_string_literal_token2 = 30,
  sym_int_literal = 31,
  aux_sym_identifier_token1 = 32,
  anon_sym_COMMA = 33,
  anon_sym_SLASH_SLASH = 34,
  aux_sym_comment_token1 = 35,
  anon_sym_LBRACK = 36,
  anon_sym_RBRACK = 37,
  sym_function_keyword = 38,
  sym_if_keyword = 39,
  sym_while_keyword = 40,
  sym_break_keyword = 41,
  sym_case_keyword = 42,
  sym_switch_keyword = 43,
  sym_for_keyword = 44,
  sym_continue_keyword = 45,
  anon_sym_PLUS_PLUS = 46,
  anon_sym_var = 47,
  sym_source_file = 48,
  sym_statement = 49,
  sym_function_call = 50,
  sym_if_statement = 51,
  sym_while_statement = 52,
  sym_break_statement = 53,
  sym_switch_statement = 54,
  sym_for_statement = 55,
  sym_mathamatical_operator = 56,
  sym_conditional_operator = 57,
  sym_comparative_operator = 58,
  sym_assignment_operator = 59,
  sym_string_literal = 60,
  sym_identifier = 61,
  sym_block = 62,
  sym_parameter_list = 63,
  sym_condition_list = 64,
  sym_function = 65,
  sym_comment = 66,
  sym_expresion = 67,
  sym_mathamatical_expresion = 68,
  sym_relational_expresion = 69,
  sym_array = 70,
  sym_function_declaration = 71,
  sym_variable_declaration = 72,
  sym_array_decleration = 73,
  aux_sym_source_file_repeat1 = 74,
  aux_sym_switch_statement_repeat1 = 75,
  aux_sym_switch_statement_repeat2 = 76,
  aux_sym_parameter_list_repeat1 = 77,
  aux_sym_condition_list_repeat1 = 78,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COLON] = ":",
  [anon_sym_RBRACE] = "}",
  [sym_else_statement] = "else_statement",
  [sym_elseif_statement] = "elseif_statement",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_CARET_CARET] = "^^",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_EQ] = "=",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_SLASH_EQ] = "/=",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_literal_token2] = "string_literal_token2",
  [sym_int_literal] = "int_literal",
  [aux_sym_identifier_token1] = "identifier_token1",
  [anon_sym_COMMA] = ",",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_function_keyword] = "function_keyword",
  [sym_if_keyword] = "if_keyword",
  [sym_while_keyword] = "while_keyword",
  [sym_break_keyword] = "break_keyword",
  [sym_case_keyword] = "case_keyword",
  [sym_switch_keyword] = "switch_keyword",
  [sym_for_keyword] = "for_keyword",
  [sym_continue_keyword] = "continue_keyword",
  [anon_sym_PLUS_PLUS] = "++",
  [anon_sym_var] = "var",
  [sym_source_file] = "source_file",
  [sym_statement] = "statement",
  [sym_function_call] = "function_call",
  [sym_if_statement] = "if_statement",
  [sym_while_statement] = "while_statement",
  [sym_break_statement] = "break_statement",
  [sym_switch_statement] = "switch_statement",
  [sym_for_statement] = "for_statement",
  [sym_mathamatical_operator] = "mathamatical_operator",
  [sym_conditional_operator] = "conditional_operator",
  [sym_comparative_operator] = "comparative_operator",
  [sym_assignment_operator] = "assignment_operator",
  [sym_string_literal] = "string_literal",
  [sym_identifier] = "identifier",
  [sym_block] = "block",
  [sym_parameter_list] = "parameter_list",
  [sym_condition_list] = "condition_list",
  [sym_function] = "function",
  [sym_comment] = "comment",
  [sym_expresion] = "expresion",
  [sym_mathamatical_expresion] = "mathamatical_expresion",
  [sym_relational_expresion] = "relational_expresion",
  [sym_array] = "array",
  [sym_function_declaration] = "function_declaration",
  [sym_variable_declaration] = "variable_declaration",
  [sym_array_decleration] = "array_decleration",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_switch_statement_repeat1] = "switch_statement_repeat1",
  [aux_sym_switch_statement_repeat2] = "switch_statement_repeat2",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_condition_list_repeat1] = "condition_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_else_statement] = sym_else_statement,
  [sym_elseif_statement] = sym_elseif_statement,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_CARET_CARET] = anon_sym_CARET_CARET,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_DASH_EQ] = anon_sym_DASH_EQ,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_SLASH_EQ] = anon_sym_SLASH_EQ,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_literal_token2] = aux_sym_string_literal_token2,
  [sym_int_literal] = sym_int_literal,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_function_keyword] = sym_function_keyword,
  [sym_if_keyword] = sym_if_keyword,
  [sym_while_keyword] = sym_while_keyword,
  [sym_break_keyword] = sym_break_keyword,
  [sym_case_keyword] = sym_case_keyword,
  [sym_switch_keyword] = sym_switch_keyword,
  [sym_for_keyword] = sym_for_keyword,
  [sym_continue_keyword] = sym_continue_keyword,
  [anon_sym_PLUS_PLUS] = anon_sym_PLUS_PLUS,
  [anon_sym_var] = anon_sym_var,
  [sym_source_file] = sym_source_file,
  [sym_statement] = sym_statement,
  [sym_function_call] = sym_function_call,
  [sym_if_statement] = sym_if_statement,
  [sym_while_statement] = sym_while_statement,
  [sym_break_statement] = sym_break_statement,
  [sym_switch_statement] = sym_switch_statement,
  [sym_for_statement] = sym_for_statement,
  [sym_mathamatical_operator] = sym_mathamatical_operator,
  [sym_conditional_operator] = sym_conditional_operator,
  [sym_comparative_operator] = sym_comparative_operator,
  [sym_assignment_operator] = sym_assignment_operator,
  [sym_string_literal] = sym_string_literal,
  [sym_identifier] = sym_identifier,
  [sym_block] = sym_block,
  [sym_parameter_list] = sym_parameter_list,
  [sym_condition_list] = sym_condition_list,
  [sym_function] = sym_function,
  [sym_comment] = sym_comment,
  [sym_expresion] = sym_expresion,
  [sym_mathamatical_expresion] = sym_mathamatical_expresion,
  [sym_relational_expresion] = sym_relational_expresion,
  [sym_array] = sym_array,
  [sym_function_declaration] = sym_function_declaration,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_array_decleration] = sym_array_decleration,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_switch_statement_repeat1] = aux_sym_switch_statement_repeat1,
  [aux_sym_switch_statement_repeat2] = aux_sym_switch_statement_repeat2,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_condition_list_repeat1] = aux_sym_condition_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_else_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_elseif_statement] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_int_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_function_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_if_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_while_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_break_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_case_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_switch_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_for_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_continue_keyword] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_while_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_break_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_switch_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_for_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_mathamatical_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_comparative_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_condition_list] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_expresion] = {
    .visible = true,
    .named = true,
  },
  [sym_mathamatical_expresion] = {
    .visible = true,
    .named = true,
  },
  [sym_relational_expresion] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_array_decleration] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_switch_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_switch_statement_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_condition_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 17,
  [19] = 19,
  [20] = 16,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 4,
  [26] = 26,
  [27] = 3,
  [28] = 28,
  [29] = 2,
  [30] = 30,
  [31] = 9,
  [32] = 32,
  [33] = 6,
  [34] = 10,
  [35] = 5,
  [36] = 36,
  [37] = 8,
  [38] = 38,
  [39] = 36,
  [40] = 11,
  [41] = 41,
  [42] = 42,
  [43] = 12,
  [44] = 7,
  [45] = 38,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 47,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 42,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 32,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 72,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 80,
  [83] = 83,
  [84] = 75,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 103,
  [105] = 102,
  [106] = 106,
  [107] = 107,
  [108] = 107,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 118,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 128,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 131,
  [135] = 125,
  [136] = 133,
  [137] = 137,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(59);
      ADVANCE_MAP(
        '!', 9,
        '"', 97,
        '&', 5,
        '\'', 94,
        '(', 68,
        ')', 69,
        '*', 75,
        '+', 71,
        ',', 138,
        '-', 73,
        '/', 78,
        ':', 62,
        ';', 60,
        '<', 83,
        '=', 89,
        '>', 82,
        '[', 142,
        ']', 143,
        '^', 13,
        'b', 41,
        'c', 14,
        'e', 34,
        'f', 39,
        'i', 24,
        's', 51,
        'v', 16,
        'w', 27,
        '{', 61,
        '|', 52,
        '}', 63,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '!', 9,
        '"', 97,
        '\'', 94,
        '(', 68,
        '*', 74,
        '+', 70,
        '-', 72,
        '/', 76,
        '<', 83,
        '=', 12,
        '>', 82,
        '[', 142,
        'b', 127,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(97);
      if (lookahead == '\'') ADVANCE(94);
      if (lookahead == ')') ADVANCE(69);
      if (lookahead == ',') ADVANCE(138);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(97);
      if (lookahead == '\'') ADVANCE(94);
      if (lookahead == 'f') ADVANCE(134);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 5:
      if (lookahead == '&') ADVANCE(79);
      END_STATE();
    case 6:
      if (lookahead == '+') ADVANCE(159);
      if (lookahead == '=') ADVANCE(90);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(139);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '=') ADVANCE(93);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(87);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(92);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(91);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(84);
      END_STATE();
    case 13:
      if (lookahead == '^') ADVANCE(81);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(44);
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(26);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(48);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 24:
      if (lookahead == 'f') ADVANCE(146);
      END_STATE();
    case 25:
      if (lookahead == 'f') ADVANCE(66);
      END_STATE();
    case 26:
      if (lookahead == 'h') ADVANCE(153);
      END_STATE();
    case 27:
      if (lookahead == 'h') ADVANCE(29);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 32:
      if (lookahead == 'k') ADVANCE(150);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(42);
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 44:
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 45:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 49:
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 50:
      if (lookahead == 'v') ADVANCE(102);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 51:
      if (lookahead == 'w') ADVANCE(30);
      END_STATE();
    case 52:
      if (lookahead == '|') ADVANCE(80);
      END_STATE();
    case 53:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(96);
      END_STATE();
    case 54:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(99);
      END_STATE();
    case 55:
      if (eof) ADVANCE(59);
      ADVANCE_MAP(
        '!', 9,
        '&', 5,
        '(', 68,
        ')', 69,
        '*', 75,
        '+', 71,
        ',', 138,
        '-', 73,
        '/', 78,
        ':', 62,
        ';', 60,
        '<', 83,
        '=', 89,
        '>', 82,
        '[', 142,
        ']', 143,
        '^', 13,
        'b', 127,
        'c', 124,
        'f', 125,
        'i', 109,
        's', 136,
        'v', 102,
        'w', 112,
        '{', 61,
        '|', 52,
        '}', 63,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 56:
      if (eof) ADVANCE(59);
      ADVANCE_MAP(
        '!', 9,
        '&', 5,
        ')', 69,
        '*', 74,
        '+', 70,
        ',', 138,
        '-', 72,
        '/', 77,
        ':', 62,
        ';', 60,
        '<', 83,
        '=', 12,
        '>', 82,
        '[', 142,
        ']', 143,
        '^', 13,
        'b', 127,
        'c', 124,
        'f', 125,
        'i', 109,
        's', 136,
        'v', 102,
        'w', 112,
        '{', 61,
        '|', 52,
        '}', 63,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 57:
      if (eof) ADVANCE(59);
      ADVANCE_MAP(
        '(', 68,
        ')', 69,
        '*', 10,
        '+', 6,
        '-', 11,
        '/', 8,
        ';', 60,
        '=', 88,
        '[', 142,
        'b', 127,
        'c', 124,
        'f', 125,
        'i', 109,
        's', 136,
        'v', 102,
        'w', 112,
        '{', 61,
        '}', 63,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 58:
      if (eof) ADVANCE(59);
      ADVANCE_MAP(
        '/', 7,
        ';', 60,
        'b', 127,
        'c', 124,
        'e', 118,
        'f', 125,
        'i', 109,
        's', 136,
        'v', 102,
        'w', 112,
        '{', 61,
        '}', 63,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_else_statement);
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_else_statement);
      if (lookahead == 'i') ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_elseif_statement);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_elseif_statement);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(159);
      if (lookahead == '=') ADVANCE(90);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(91);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(92);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(139);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '=') ADVANCE(93);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_CARET_CARET);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(86);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(85);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(84);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(99);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_int_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'f') ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'f') ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'h') ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'h') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'k') ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(128);
      if (lookahead == 'u') ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(161);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'w') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(141);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_function_keyword);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_function_keyword);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_if_keyword);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_if_keyword);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_while_keyword);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_while_keyword);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_break_keyword);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_break_keyword);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_case_keyword);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_switch_keyword);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_switch_keyword);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_for_keyword);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_for_keyword);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_continue_keyword);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_continue_keyword);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_var);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 55},
  [2] = {.lex_state = 55},
  [3] = {.lex_state = 56},
  [4] = {.lex_state = 56},
  [5] = {.lex_state = 56},
  [6] = {.lex_state = 56},
  [7] = {.lex_state = 56},
  [8] = {.lex_state = 56},
  [9] = {.lex_state = 56},
  [10] = {.lex_state = 56},
  [11] = {.lex_state = 56},
  [12] = {.lex_state = 56},
  [13] = {.lex_state = 56},
  [14] = {.lex_state = 56},
  [15] = {.lex_state = 55},
  [16] = {.lex_state = 55},
  [17] = {.lex_state = 55},
  [18] = {.lex_state = 55},
  [19] = {.lex_state = 55},
  [20] = {.lex_state = 55},
  [21] = {.lex_state = 56},
  [22] = {.lex_state = 57},
  [23] = {.lex_state = 57},
  [24] = {.lex_state = 56},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 56},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 56},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 58},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 56},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 56},
  [39] = {.lex_state = 56},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 58},
  [42] = {.lex_state = 58},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 56},
  [46] = {.lex_state = 55},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 55},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 55},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 55},
  [53] = {.lex_state = 56},
  [54] = {.lex_state = 55},
  [55] = {.lex_state = 55},
  [56] = {.lex_state = 55},
  [57] = {.lex_state = 55},
  [58] = {.lex_state = 55},
  [59] = {.lex_state = 55},
  [60] = {.lex_state = 55},
  [61] = {.lex_state = 56},
  [62] = {.lex_state = 56},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 55},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 55},
  [67] = {.lex_state = 55},
  [68] = {.lex_state = 55},
  [69] = {.lex_state = 55},
  [70] = {.lex_state = 56},
  [71] = {.lex_state = 55},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 57},
  [89] = {.lex_state = 57},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 57},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 50},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 50},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 3},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 53},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 54},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 53},
  [136] = {.lex_state = 54},
  [137] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_else_statement] = ACTIONS(1),
    [sym_elseif_statement] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_CARET_CARET] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_int_literal] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_function_keyword] = ACTIONS(1),
    [sym_if_keyword] = ACTIONS(1),
    [sym_while_keyword] = ACTIONS(1),
    [sym_break_keyword] = ACTIONS(1),
    [sym_case_keyword] = ACTIONS(1),
    [sym_switch_keyword] = ACTIONS(1),
    [sym_for_keyword] = ACTIONS(1),
    [sym_continue_keyword] = ACTIONS(1),
    [anon_sym_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(127),
    [sym_statement] = STATE(19),
    [sym_function_call] = STATE(54),
    [sym_if_statement] = STATE(54),
    [sym_while_statement] = STATE(54),
    [sym_break_statement] = STATE(54),
    [sym_switch_statement] = STATE(54),
    [sym_for_statement] = STATE(54),
    [sym_identifier] = STATE(88),
    [sym_block] = STATE(54),
    [sym_function] = STATE(118),
    [sym_comment] = STATE(54),
    [sym_function_declaration] = STATE(54),
    [sym_variable_declaration] = STATE(54),
    [sym_array_decleration] = STATE(54),
    [aux_sym_source_file_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_SLASH_SLASH] = ACTIONS(9),
    [sym_function_keyword] = ACTIONS(11),
    [sym_if_keyword] = ACTIONS(13),
    [sym_while_keyword] = ACTIONS(15),
    [sym_break_keyword] = ACTIONS(17),
    [sym_switch_keyword] = ACTIONS(19),
    [sym_for_keyword] = ACTIONS(21),
    [sym_continue_keyword] = ACTIONS(23),
    [anon_sym_var] = ACTIONS(25),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 16,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
      aux_sym_identifier_token1,
      sym_function_keyword,
      sym_if_keyword,
      sym_while_keyword,
      sym_break_keyword,
      sym_switch_keyword,
      sym_for_keyword,
      sym_continue_keyword,
      anon_sym_var,
    ACTIONS(27), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PLUS_PLUS,
  [46] = 8,
    ACTIONS(37), 1,
      anon_sym_SLASH,
    STATE(73), 1,
      sym_mathamatical_operator,
    STATE(82), 1,
      sym_comparative_operator,
    ACTIONS(39), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(35), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(41), 4,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(43), 9,
      aux_sym_identifier_token1,
      sym_function_keyword,
      sym_if_keyword,
      sym_while_keyword,
      sym_break_keyword,
      sym_switch_keyword,
      sym_for_keyword,
      sym_continue_keyword,
      anon_sym_var,
    ACTIONS(33), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [97] = 8,
    ACTIONS(37), 1,
      anon_sym_SLASH,
    STATE(73), 1,
      sym_mathamatical_operator,
    STATE(82), 1,
      sym_comparative_operator,
    ACTIONS(39), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(35), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(41), 4,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(47), 9,
      aux_sym_identifier_token1,
      sym_function_keyword,
      sym_if_keyword,
      sym_while_keyword,
      sym_break_keyword,
      sym_switch_keyword,
      sym_for_keyword,
      sym_continue_keyword,
      anon_sym_var,
    ACTIONS(45), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [148] = 2,
    ACTIONS(51), 12,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      aux_sym_identifier_token1,
      sym_function_keyword,
      sym_if_keyword,
      sym_while_keyword,
      sym_break_keyword,
      sym_switch_keyword,
      sym_for_keyword,
      sym_continue_keyword,
      anon_sym_var,
    ACTIONS(49), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [185] = 2,
    ACTIONS(55), 12,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      aux_sym_identifier_token1,
      sym_function_keyword,
      sym_if_keyword,
      sym_while_keyword,
      sym_break_keyword,
      sym_switch_keyword,
      sym_for_keyword,
      sym_continue_keyword,
      anon_sym_var,
    ACTIONS(53), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [222] = 2,
    ACTIONS(59), 12,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      aux_sym_identifier_token1,
      sym_function_keyword,
      sym_if_keyword,
      sym_while_keyword,
      sym_break_keyword,
      sym_switch_keyword,
      sym_for_keyword,
      sym_continue_keyword,
      anon_sym_var,
    ACTIONS(57), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [259] = 2,
    ACTIONS(63), 12,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      aux_sym_identifier_token1,
      sym_function_keyword,
      sym_if_keyword,
      sym_while_keyword,
      sym_break_keyword,
      sym_switch_keyword,
      sym_for_keyword,
      sym_continue_keyword,
      anon_sym_var,
    ACTIONS(61), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [296] = 2,
    ACTIONS(67), 12,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      aux_sym_identifier_token1,
      sym_function_keyword,
      sym_if_keyword,
      sym_while_keyword,
      sym_break_keyword,
      sym_switch_keyword,
      sym_for_keyword,
      sym_continue_keyword,
      anon_sym_var,
    ACTIONS(65), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [333] = 2,
    ACTIONS(71), 12,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      aux_sym_identifier_token1,
      sym_function_keyword,
      sym_if_keyword,
      sym_while_keyword,
      sym_break_keyword,
      sym_switch_keyword,
      sym_for_keyword,
      sym_continue_keyword,
      anon_sym_var,
    ACTIONS(69), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [370] = 2,
    ACTIONS(75), 12,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      aux_sym_identifier_token1,
      sym_function_keyword,
      sym_if_keyword,
      sym_while_keyword,
      sym_break_keyword,
      sym_switch_keyword,
      sym_for_keyword,
      sym_continue_keyword,
      anon_sym_var,
    ACTIONS(73), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [407] = 2,
    ACTIONS(79), 12,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      aux_sym_identifier_token1,
      sym_function_keyword,
      sym_if_keyword,
      sym_while_keyword,
      sym_break_keyword,
      sym_switch_keyword,
      sym_for_keyword,
      sym_continue_keyword,
      anon_sym_var,
    ACTIONS(77), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [444] = 9,
    ACTIONS(37), 1,
      anon_sym_SLASH,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    STATE(73), 1,
      sym_mathamatical_operator,
    STATE(82), 1,
      sym_comparative_operator,
    ACTIONS(39), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(35), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(41), 4,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(81), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_SLASH_SLASH,
    ACTIONS(83), 9,
      aux_sym_identifier_token1,
      sym_function_keyword,
      sym_if_keyword,
      sym_while_keyword,
      sym_break_keyword,
      sym_switch_keyword,
      sym_for_keyword,
      sym_continue_keyword,
      anon_sym_var,
  [491] = 9,
    ACTIONS(37), 1,
      anon_sym_SLASH,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    STATE(73), 1,
      sym_mathamatical_operator,
    STATE(82), 1,
      sym_comparative_operator,
    ACTIONS(39), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(35), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(41), 4,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(87), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_SLASH_SLASH,
    ACTIONS(89), 9,
      aux_sym_identifier_token1,
      sym_function_keyword,
      sym_if_keyword,
      sym_while_keyword,
      sym_break_keyword,
      sym_switch_keyword,
      sym_for_keyword,
      sym_continue_keyword,
      anon_sym_var,
  [538] = 16,
    ACTIONS(93), 1,
      anon_sym_LBRACE,
    ACTIONS(96), 1,
      aux_sym_identifier_token1,
    ACTIONS(99), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(102), 1,
      sym_function_keyword,
    ACTIONS(105), 1,
      sym_if_keyword,
    ACTIONS(108), 1,
      sym_while_keyword,
    ACTIONS(111), 1,
      sym_break_keyword,
    ACTIONS(114), 1,
      sym_switch_keyword,
    ACTIONS(117), 1,
      sym_for_keyword,
    ACTIONS(120), 1,
      sym_continue_keyword,
    ACTIONS(123), 1,
      anon_sym_var,
    STATE(88), 1,
      sym_identifier,
    STATE(118), 1,
      sym_function,
    ACTIONS(91), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(15), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(54), 11,
      sym_function_call,
      sym_if_statement,
      sym_while_statement,
      sym_break_statement,
      sym_switch_statement,
      sym_for_statement,
      sym_block,
      sym_comment,
      sym_function_declaration,
      sym_variable_declaration,
      sym_array_decleration,
  [599] = 16,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(11), 1,
      sym_function_keyword,
    ACTIONS(13), 1,
      sym_if_keyword,
    ACTIONS(15), 1,
      sym_while_keyword,
    ACTIONS(17), 1,
      sym_break_keyword,
    ACTIONS(19), 1,
      sym_switch_keyword,
    ACTIONS(21), 1,
      sym_for_keyword,
    ACTIONS(23), 1,
      sym_continue_keyword,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    STATE(88), 1,
      sym_identifier,
    STATE(118), 1,
      sym_function,
    STATE(15), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(54), 11,
      sym_function_call,
      sym_if_statement,
      sym_while_statement,
      sym_break_statement,
      sym_switch_statement,
      sym_for_statement,
      sym_block,
      sym_comment,
      sym_function_declaration,
      sym_variable_declaration,
      sym_array_decleration,
  [659] = 16,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(11), 1,
      sym_function_keyword,
    ACTIONS(13), 1,
      sym_if_keyword,
    ACTIONS(15), 1,
      sym_while_keyword,
    ACTIONS(17), 1,
      sym_break_keyword,
    ACTIONS(19), 1,
      sym_switch_keyword,
    ACTIONS(21), 1,
      sym_for_keyword,
    ACTIONS(23), 1,
      sym_continue_keyword,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(128), 1,
      anon_sym_RBRACE,
    STATE(88), 1,
      sym_identifier,
    STATE(118), 1,
      sym_function,
    STATE(16), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(54), 11,
      sym_function_call,
      sym_if_statement,
      sym_while_statement,
      sym_break_statement,
      sym_switch_statement,
      sym_for_statement,
      sym_block,
      sym_comment,
      sym_function_declaration,
      sym_variable_declaration,
      sym_array_decleration,
  [719] = 16,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(11), 1,
      sym_function_keyword,
    ACTIONS(13), 1,
      sym_if_keyword,
    ACTIONS(15), 1,
      sym_while_keyword,
    ACTIONS(17), 1,
      sym_break_keyword,
    ACTIONS(19), 1,
      sym_switch_keyword,
    ACTIONS(21), 1,
      sym_for_keyword,
    ACTIONS(23), 1,
      sym_continue_keyword,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(130), 1,
      anon_sym_RBRACE,
    STATE(88), 1,
      sym_identifier,
    STATE(118), 1,
      sym_function,
    STATE(20), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(54), 11,
      sym_function_call,
      sym_if_statement,
      sym_while_statement,
      sym_break_statement,
      sym_switch_statement,
      sym_for_statement,
      sym_block,
      sym_comment,
      sym_function_declaration,
      sym_variable_declaration,
      sym_array_decleration,
  [779] = 16,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(11), 1,
      sym_function_keyword,
    ACTIONS(13), 1,
      sym_if_keyword,
    ACTIONS(15), 1,
      sym_while_keyword,
    ACTIONS(17), 1,
      sym_break_keyword,
    ACTIONS(19), 1,
      sym_switch_keyword,
    ACTIONS(21), 1,
      sym_for_keyword,
    ACTIONS(23), 1,
      sym_continue_keyword,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
    STATE(88), 1,
      sym_identifier,
    STATE(118), 1,
      sym_function,
    STATE(15), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(54), 11,
      sym_function_call,
      sym_if_statement,
      sym_while_statement,
      sym_break_statement,
      sym_switch_statement,
      sym_for_statement,
      sym_block,
      sym_comment,
      sym_function_declaration,
      sym_variable_declaration,
      sym_array_decleration,
  [839] = 16,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(11), 1,
      sym_function_keyword,
    ACTIONS(13), 1,
      sym_if_keyword,
    ACTIONS(15), 1,
      sym_while_keyword,
    ACTIONS(17), 1,
      sym_break_keyword,
    ACTIONS(19), 1,
      sym_switch_keyword,
    ACTIONS(21), 1,
      sym_for_keyword,
    ACTIONS(23), 1,
      sym_continue_keyword,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(134), 1,
      anon_sym_RBRACE,
    STATE(88), 1,
      sym_identifier,
    STATE(118), 1,
      sym_function,
    STATE(15), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(54), 11,
      sym_function_call,
      sym_if_statement,
      sym_while_statement,
      sym_break_statement,
      sym_switch_statement,
      sym_for_statement,
      sym_block,
      sym_comment,
      sym_function_declaration,
      sym_variable_declaration,
      sym_array_decleration,
  [899] = 9,
    ACTIONS(37), 1,
      anon_sym_SLASH,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    STATE(73), 1,
      sym_mathamatical_operator,
    STATE(82), 1,
      sym_comparative_operator,
    ACTIONS(39), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(35), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(41), 4,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(136), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH_SLASH,
    ACTIONS(138), 9,
      aux_sym_identifier_token1,
      sym_function_keyword,
      sym_if_keyword,
      sym_while_keyword,
      sym_break_keyword,
      sym_switch_keyword,
      sym_for_keyword,
      sym_continue_keyword,
      anon_sym_var,
  [945] = 2,
    ACTIONS(31), 9,
      aux_sym_identifier_token1,
      sym_function_keyword,
      sym_if_keyword,
      sym_while_keyword,
      sym_break_keyword,
      sym_switch_keyword,
      sym_for_keyword,
      sym_continue_keyword,
      anon_sym_var,
    ACTIONS(27), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_SLASH_SLASH,
      anon_sym_PLUS_PLUS,
  [972] = 5,
    ACTIONS(146), 1,
      anon_sym_PLUS_PLUS,
    STATE(81), 1,
      sym_assignment_operator,
    ACTIONS(142), 5,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
    ACTIONS(140), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_SLASH_SLASH,
    ACTIONS(144), 9,
      aux_sym_identifier_token1,
      sym_function_keyword,
      sym_if_keyword,
      sym_while_keyword,
      sym_break_keyword,
      sym_switch_keyword,
      sym_for_keyword,
      sym_continue_keyword,
      anon_sym_var,
  [1005] = 10,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    ACTIONS(148), 1,
      anon_sym_RPAREN,
    STATE(73), 1,
      sym_mathamatical_operator,
    STATE(78), 1,
      sym_conditional_operator,
    STATE(82), 1,
      sym_comparative_operator,
    STATE(90), 1,
      aux_sym_condition_list_repeat1,
    ACTIONS(39), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(150), 3,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
    ACTIONS(35), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(41), 4,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
  [1045] = 7,
    STATE(72), 1,
      sym_mathamatical_operator,
    STATE(80), 1,
      sym_comparative_operator,
    ACTIONS(39), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(47), 2,
      aux_sym_identifier_token1,
      sym_break_keyword,
    ACTIONS(35), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(41), 4,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(45), 4,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_int_literal,
      anon_sym_LBRACK,
  [1078] = 8,
    ACTIONS(156), 1,
      anon_sym_LBRACK,
    STATE(72), 1,
      sym_mathamatical_operator,
    STATE(80), 1,
      sym_comparative_operator,
    ACTIONS(39), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(154), 2,
      aux_sym_identifier_token1,
      sym_break_keyword,
    ACTIONS(152), 3,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_int_literal,
    ACTIONS(35), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(41), 4,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
  [1113] = 7,
    STATE(72), 1,
      sym_mathamatical_operator,
    STATE(80), 1,
      sym_comparative_operator,
    ACTIONS(39), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(43), 2,
      aux_sym_identifier_token1,
      sym_break_keyword,
    ACTIONS(33), 4,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_int_literal,
      anon_sym_LBRACK,
    ACTIONS(35), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(41), 4,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
  [1146] = 7,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    STATE(73), 1,
      sym_mathamatical_operator,
    STATE(82), 1,
      sym_comparative_operator,
    ACTIONS(39), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(35), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(41), 4,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(158), 4,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
  [1178] = 3,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 4,
      anon_sym_GT,
      anon_sym_LT,
      aux_sym_identifier_token1,
      sym_break_keyword,
    ACTIONS(27), 12,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_int_literal,
      anon_sym_LBRACK,
  [1202] = 7,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    STATE(73), 1,
      sym_mathamatical_operator,
    STATE(82), 1,
      sym_comparative_operator,
    ACTIONS(39), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(160), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(35), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(41), 4,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
  [1233] = 2,
    ACTIONS(67), 4,
      anon_sym_GT,
      anon_sym_LT,
      aux_sym_identifier_token1,
      sym_break_keyword,
    ACTIONS(65), 12,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_int_literal,
      anon_sym_LBRACK,
  [1254] = 2,
    ACTIONS(162), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH_SLASH,
    ACTIONS(164), 11,
      sym_else_statement,
      sym_elseif_statement,
      aux_sym_identifier_token1,
      sym_function_keyword,
      sym_if_keyword,
      sym_while_keyword,
      sym_break_keyword,
      sym_switch_keyword,
      sym_for_keyword,
      sym_continue_keyword,
      anon_sym_var,
  [1275] = 2,
    ACTIONS(55), 4,
      anon_sym_GT,
      anon_sym_LT,
      aux_sym_identifier_token1,
      sym_break_keyword,
    ACTIONS(53), 12,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_int_literal,
      anon_sym_LBRACK,
  [1296] = 2,
    ACTIONS(71), 4,
      anon_sym_GT,
      anon_sym_LT,
      aux_sym_identifier_token1,
      sym_break_keyword,
    ACTIONS(69), 12,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_int_literal,
      anon_sym_LBRACK,
  [1317] = 2,
    ACTIONS(51), 4,
      anon_sym_GT,
      anon_sym_LT,
      aux_sym_identifier_token1,
      sym_break_keyword,
    ACTIONS(49), 12,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_int_literal,
      anon_sym_LBRACK,
  [1338] = 9,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    ACTIONS(166), 1,
      anon_sym_COMMA,
    ACTIONS(168), 1,
      anon_sym_RBRACK,
    STATE(73), 1,
      sym_mathamatical_operator,
    STATE(82), 1,
      sym_comparative_operator,
    STATE(103), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(39), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(35), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(41), 4,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
  [1373] = 2,
    ACTIONS(63), 4,
      anon_sym_GT,
      anon_sym_LT,
      aux_sym_identifier_token1,
      sym_break_keyword,
    ACTIONS(61), 12,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_int_literal,
      anon_sym_LBRACK,
  [1394] = 9,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    ACTIONS(166), 1,
      anon_sym_COMMA,
    ACTIONS(170), 1,
      anon_sym_RPAREN,
    STATE(73), 1,
      sym_mathamatical_operator,
    STATE(82), 1,
      sym_comparative_operator,
    STATE(102), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(39), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(35), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(41), 4,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
  [1429] = 9,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    ACTIONS(166), 1,
      anon_sym_COMMA,
    ACTIONS(172), 1,
      anon_sym_RBRACK,
    STATE(73), 1,
      sym_mathamatical_operator,
    STATE(82), 1,
      sym_comparative_operator,
    STATE(104), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(39), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(35), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(41), 4,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
  [1464] = 2,
    ACTIONS(75), 4,
      anon_sym_GT,
      anon_sym_LT,
      aux_sym_identifier_token1,
      sym_break_keyword,
    ACTIONS(73), 12,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_int_literal,
      anon_sym_LBRACK,
  [1485] = 3,
    ACTIONS(176), 2,
      sym_else_statement,
      sym_elseif_statement,
    ACTIONS(174), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH_SLASH,
    ACTIONS(178), 9,
      aux_sym_identifier_token1,
      sym_function_keyword,
      sym_if_keyword,
      sym_while_keyword,
      sym_break_keyword,
      sym_switch_keyword,
      sym_for_keyword,
      sym_continue_keyword,
      anon_sym_var,
  [1508] = 2,
    ACTIONS(180), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH_SLASH,
    ACTIONS(182), 11,
      sym_else_statement,
      sym_elseif_statement,
      aux_sym_identifier_token1,
      sym_function_keyword,
      sym_if_keyword,
      sym_while_keyword,
      sym_break_keyword,
      sym_switch_keyword,
      sym_for_keyword,
      sym_continue_keyword,
      anon_sym_var,
  [1529] = 2,
    ACTIONS(79), 4,
      anon_sym_GT,
      anon_sym_LT,
      aux_sym_identifier_token1,
      sym_break_keyword,
    ACTIONS(77), 12,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_int_literal,
      anon_sym_LBRACK,
  [1550] = 2,
    ACTIONS(59), 4,
      anon_sym_GT,
      anon_sym_LT,
      aux_sym_identifier_token1,
      sym_break_keyword,
    ACTIONS(57), 12,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_int_literal,
      anon_sym_LBRACK,
  [1571] = 9,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    ACTIONS(166), 1,
      anon_sym_COMMA,
    ACTIONS(184), 1,
      anon_sym_RPAREN,
    STATE(73), 1,
      sym_mathamatical_operator,
    STATE(82), 1,
      sym_comparative_operator,
    STATE(105), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(39), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(35), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(41), 4,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
  [1606] = 2,
    ACTIONS(140), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_SLASH_SLASH,
    ACTIONS(144), 9,
      aux_sym_identifier_token1,
      sym_function_keyword,
      sym_if_keyword,
      sym_while_keyword,
      sym_break_keyword,
      sym_switch_keyword,
      sym_for_keyword,
      sym_continue_keyword,
      anon_sym_var,
  [1626] = 10,
    ACTIONS(166), 1,
      anon_sym_COMMA,
    ACTIONS(186), 1,
      anon_sym_RPAREN,
    ACTIONS(188), 1,
      anon_sym_SQUOTE,
    ACTIONS(190), 1,
      anon_sym_DQUOTE,
    ACTIONS(192), 1,
      sym_int_literal,
    ACTIONS(194), 1,
      aux_sym_identifier_token1,
    STATE(38), 1,
      sym_expresion,
    STATE(108), 1,
      aux_sym_parameter_list_repeat1,
    STATE(118), 1,
      sym_function,
    STATE(6), 6,
      sym_function_call,
      sym_string_literal,
      sym_identifier,
      sym_mathamatical_expresion,
      sym_relational_expresion,
      sym_array,
  [1662] = 2,
    ACTIONS(81), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_SLASH_SLASH,
    ACTIONS(83), 9,
      aux_sym_identifier_token1,
      sym_function_keyword,
      sym_if_keyword,
      sym_while_keyword,
      sym_break_keyword,
      sym_switch_keyword,
      sym_for_keyword,
      sym_continue_keyword,
      anon_sym_var,
  [1682] = 10,
    ACTIONS(166), 1,
      anon_sym_COMMA,
    ACTIONS(188), 1,
      anon_sym_SQUOTE,
    ACTIONS(190), 1,
      anon_sym_DQUOTE,
    ACTIONS(192), 1,
      sym_int_literal,
    ACTIONS(194), 1,
      aux_sym_identifier_token1,
    ACTIONS(196), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      sym_expresion,
    STATE(107), 1,
      aux_sym_parameter_list_repeat1,
    STATE(118), 1,
      sym_function,
    STATE(6), 6,
      sym_function_call,
      sym_string_literal,
      sym_identifier,
      sym_mathamatical_expresion,
      sym_relational_expresion,
      sym_array,
  [1718] = 2,
    ACTIONS(198), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH_SLASH,
    ACTIONS(200), 9,
      aux_sym_identifier_token1,
      sym_function_keyword,
      sym_if_keyword,
      sym_while_keyword,
      sym_break_keyword,
      sym_switch_keyword,
      sym_for_keyword,
      sym_continue_keyword,
      anon_sym_var,
  [1737] = 9,
    ACTIONS(202), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      anon_sym_DQUOTE,
    ACTIONS(208), 1,
      sym_int_literal,
    ACTIONS(211), 1,
      aux_sym_identifier_token1,
    ACTIONS(214), 1,
      sym_break_keyword,
    STATE(26), 1,
      sym_expresion,
    STATE(51), 1,
      aux_sym_switch_statement_repeat1,
    STATE(122), 1,
      sym_function,
    STATE(33), 6,
      sym_function_call,
      sym_string_literal,
      sym_identifier,
      sym_mathamatical_expresion,
      sym_relational_expresion,
      sym_array,
  [1770] = 2,
    ACTIONS(216), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH_SLASH,
    ACTIONS(218), 9,
      aux_sym_identifier_token1,
      sym_function_keyword,
      sym_if_keyword,
      sym_while_keyword,
      sym_break_keyword,
      sym_switch_keyword,
      sym_for_keyword,
      sym_continue_keyword,
      anon_sym_var,
  [1789] = 7,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    ACTIONS(220), 1,
      anon_sym_RBRACK,
    STATE(73), 1,
      sym_mathamatical_operator,
    STATE(82), 1,
      sym_comparative_operator,
    ACTIONS(39), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(35), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(41), 4,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
  [1818] = 3,
    ACTIONS(224), 1,
      anon_sym_SEMI,
    ACTIONS(222), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH_SLASH,
    ACTIONS(226), 9,
      aux_sym_identifier_token1,
      sym_function_keyword,
      sym_if_keyword,
      sym_while_keyword,
      sym_break_keyword,
      sym_switch_keyword,
      sym_for_keyword,
      sym_continue_keyword,
      anon_sym_var,
  [1839] = 2,
    ACTIONS(180), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH_SLASH,
    ACTIONS(182), 9,
      aux_sym_identifier_token1,
      sym_function_keyword,
      sym_if_keyword,
      sym_while_keyword,
      sym_break_keyword,
      sym_switch_keyword,
      sym_for_keyword,
      sym_continue_keyword,
      anon_sym_var,
  [1858] = 2,
    ACTIONS(228), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH_SLASH,
    ACTIONS(230), 9,
      aux_sym_identifier_token1,
      sym_function_keyword,
      sym_if_keyword,
      sym_while_keyword,
      sym_break_keyword,
      sym_switch_keyword,
      sym_for_keyword,
      sym_continue_keyword,
      anon_sym_var,
  [1877] = 2,
    ACTIONS(232), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH_SLASH,
    ACTIONS(234), 9,
      aux_sym_identifier_token1,
      sym_function_keyword,
      sym_if_keyword,
      sym_while_keyword,
      sym_break_keyword,
      sym_switch_keyword,
      sym_for_keyword,
      sym_continue_keyword,
      anon_sym_var,
  [1896] = 2,
    ACTIONS(236), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH_SLASH,
    ACTIONS(238), 9,
      aux_sym_identifier_token1,
      sym_function_keyword,
      sym_if_keyword,
      sym_while_keyword,
      sym_break_keyword,
      sym_switch_keyword,
      sym_for_keyword,
      sym_continue_keyword,
      anon_sym_var,
  [1915] = 2,
    ACTIONS(240), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH_SLASH,
    ACTIONS(242), 9,
      aux_sym_identifier_token1,
      sym_function_keyword,
      sym_if_keyword,
      sym_while_keyword,
      sym_break_keyword,
      sym_switch_keyword,
      sym_for_keyword,
      sym_continue_keyword,
      anon_sym_var,
  [1934] = 2,
    ACTIONS(244), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH_SLASH,
    ACTIONS(246), 9,
      aux_sym_identifier_token1,
      sym_function_keyword,
      sym_if_keyword,
      sym_while_keyword,
      sym_break_keyword,
      sym_switch_keyword,
      sym_for_keyword,
      sym_continue_keyword,
      anon_sym_var,
  [1953] = 7,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    ACTIONS(248), 1,
      anon_sym_COLON,
    STATE(73), 1,
      sym_mathamatical_operator,
    STATE(82), 1,
      sym_comparative_operator,
    ACTIONS(39), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(35), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(41), 4,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
  [1982] = 7,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(250), 1,
      anon_sym_SEMI,
    STATE(73), 1,
      sym_mathamatical_operator,
    STATE(82), 1,
      sym_comparative_operator,
    ACTIONS(39), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(35), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(41), 4,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
  [2011] = 9,
    ACTIONS(252), 1,
      anon_sym_SQUOTE,
    ACTIONS(254), 1,
      anon_sym_DQUOTE,
    ACTIONS(256), 1,
      sym_int_literal,
    ACTIONS(258), 1,
      aux_sym_identifier_token1,
    ACTIONS(260), 1,
      sym_break_keyword,
    STATE(26), 1,
      sym_expresion,
    STATE(51), 1,
      aux_sym_switch_statement_repeat1,
    STATE(122), 1,
      sym_function,
    STATE(33), 6,
      sym_function_call,
      sym_string_literal,
      sym_identifier,
      sym_mathamatical_expresion,
      sym_relational_expresion,
      sym_array,
  [2044] = 2,
    ACTIONS(162), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH_SLASH,
    ACTIONS(164), 9,
      aux_sym_identifier_token1,
      sym_function_keyword,
      sym_if_keyword,
      sym_while_keyword,
      sym_break_keyword,
      sym_switch_keyword,
      sym_for_keyword,
      sym_continue_keyword,
      anon_sym_var,
  [2063] = 9,
    ACTIONS(252), 1,
      anon_sym_SQUOTE,
    ACTIONS(254), 1,
      anon_sym_DQUOTE,
    ACTIONS(256), 1,
      sym_int_literal,
    ACTIONS(258), 1,
      aux_sym_identifier_token1,
    ACTIONS(262), 1,
      sym_break_keyword,
    STATE(26), 1,
      sym_expresion,
    STATE(63), 1,
      aux_sym_switch_statement_repeat1,
    STATE(122), 1,
      sym_function,
    STATE(33), 6,
      sym_function_call,
      sym_string_literal,
      sym_identifier,
      sym_mathamatical_expresion,
      sym_relational_expresion,
      sym_array,
  [2096] = 2,
    ACTIONS(264), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH_SLASH,
    ACTIONS(266), 9,
      aux_sym_identifier_token1,
      sym_function_keyword,
      sym_if_keyword,
      sym_while_keyword,
      sym_break_keyword,
      sym_switch_keyword,
      sym_for_keyword,
      sym_continue_keyword,
      anon_sym_var,
  [2115] = 2,
    ACTIONS(268), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH_SLASH,
    ACTIONS(270), 9,
      aux_sym_identifier_token1,
      sym_function_keyword,
      sym_if_keyword,
      sym_while_keyword,
      sym_break_keyword,
      sym_switch_keyword,
      sym_for_keyword,
      sym_continue_keyword,
      anon_sym_var,
  [2134] = 2,
    ACTIONS(272), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH_SLASH,
    ACTIONS(274), 9,
      aux_sym_identifier_token1,
      sym_function_keyword,
      sym_if_keyword,
      sym_while_keyword,
      sym_break_keyword,
      sym_switch_keyword,
      sym_for_keyword,
      sym_continue_keyword,
      anon_sym_var,
  [2153] = 2,
    ACTIONS(276), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH_SLASH,
    ACTIONS(278), 9,
      aux_sym_identifier_token1,
      sym_function_keyword,
      sym_if_keyword,
      sym_while_keyword,
      sym_break_keyword,
      sym_switch_keyword,
      sym_for_keyword,
      sym_continue_keyword,
      anon_sym_var,
  [2172] = 6,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    STATE(73), 1,
      sym_mathamatical_operator,
    STATE(79), 1,
      sym_comparative_operator,
    ACTIONS(39), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(35), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(41), 4,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
  [2198] = 2,
    ACTIONS(280), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SLASH_SLASH,
    ACTIONS(282), 9,
      aux_sym_identifier_token1,
      sym_function_keyword,
      sym_if_keyword,
      sym_while_keyword,
      sym_break_keyword,
      sym_switch_keyword,
      sym_for_keyword,
      sym_continue_keyword,
      anon_sym_var,
  [2216] = 7,
    ACTIONS(252), 1,
      anon_sym_SQUOTE,
    ACTIONS(254), 1,
      anon_sym_DQUOTE,
    ACTIONS(256), 1,
      sym_int_literal,
    ACTIONS(284), 1,
      aux_sym_identifier_token1,
    STATE(25), 1,
      sym_expresion,
    STATE(122), 1,
      sym_function,
    STATE(33), 6,
      sym_function_call,
      sym_string_literal,
      sym_identifier,
      sym_mathamatical_expresion,
      sym_relational_expresion,
      sym_array,
  [2243] = 7,
    ACTIONS(188), 1,
      anon_sym_SQUOTE,
    ACTIONS(190), 1,
      anon_sym_DQUOTE,
    ACTIONS(192), 1,
      sym_int_literal,
    ACTIONS(194), 1,
      aux_sym_identifier_token1,
    STATE(4), 1,
      sym_expresion,
    STATE(118), 1,
      sym_function,
    STATE(6), 6,
      sym_function_call,
      sym_string_literal,
      sym_identifier,
      sym_mathamatical_expresion,
      sym_relational_expresion,
      sym_array,
  [2270] = 7,
    ACTIONS(188), 1,
      anon_sym_SQUOTE,
    ACTIONS(190), 1,
      anon_sym_DQUOTE,
    ACTIONS(192), 1,
      sym_int_literal,
    ACTIONS(194), 1,
      aux_sym_identifier_token1,
    STATE(61), 1,
      sym_expresion,
    STATE(118), 1,
      sym_function,
    STATE(6), 6,
      sym_function_call,
      sym_string_literal,
      sym_identifier,
      sym_mathamatical_expresion,
      sym_relational_expresion,
      sym_array,
  [2297] = 7,
    ACTIONS(188), 1,
      anon_sym_SQUOTE,
    ACTIONS(190), 1,
      anon_sym_DQUOTE,
    ACTIONS(192), 1,
      sym_int_literal,
    ACTIONS(194), 1,
      aux_sym_identifier_token1,
    STATE(39), 1,
      sym_expresion,
    STATE(118), 1,
      sym_function,
    STATE(6), 6,
      sym_function_call,
      sym_string_literal,
      sym_identifier,
      sym_mathamatical_expresion,
      sym_relational_expresion,
      sym_array,
  [2324] = 7,
    ACTIONS(188), 1,
      anon_sym_SQUOTE,
    ACTIONS(190), 1,
      anon_sym_DQUOTE,
    ACTIONS(192), 1,
      sym_int_literal,
    ACTIONS(194), 1,
      aux_sym_identifier_token1,
    STATE(70), 1,
      sym_expresion,
    STATE(118), 1,
      sym_function,
    STATE(6), 6,
      sym_function_call,
      sym_string_literal,
      sym_identifier,
      sym_mathamatical_expresion,
      sym_relational_expresion,
      sym_array,
  [2351] = 7,
    ACTIONS(188), 1,
      anon_sym_SQUOTE,
    ACTIONS(190), 1,
      anon_sym_DQUOTE,
    ACTIONS(192), 1,
      sym_int_literal,
    ACTIONS(194), 1,
      aux_sym_identifier_token1,
    STATE(30), 1,
      sym_expresion,
    STATE(118), 1,
      sym_function,
    STATE(6), 6,
      sym_function_call,
      sym_string_literal,
      sym_identifier,
      sym_mathamatical_expresion,
      sym_relational_expresion,
      sym_array,
  [2378] = 7,
    ACTIONS(188), 1,
      anon_sym_SQUOTE,
    ACTIONS(190), 1,
      anon_sym_DQUOTE,
    ACTIONS(192), 1,
      sym_int_literal,
    ACTIONS(194), 1,
      aux_sym_identifier_token1,
    STATE(28), 1,
      sym_expresion,
    STATE(118), 1,
      sym_function,
    STATE(6), 6,
      sym_function_call,
      sym_string_literal,
      sym_identifier,
      sym_mathamatical_expresion,
      sym_relational_expresion,
      sym_array,
  [2405] = 7,
    ACTIONS(188), 1,
      anon_sym_SQUOTE,
    ACTIONS(190), 1,
      anon_sym_DQUOTE,
    ACTIONS(192), 1,
      sym_int_literal,
    ACTIONS(194), 1,
      aux_sym_identifier_token1,
    STATE(62), 1,
      sym_expresion,
    STATE(118), 1,
      sym_function,
    STATE(6), 6,
      sym_function_call,
      sym_string_literal,
      sym_identifier,
      sym_mathamatical_expresion,
      sym_relational_expresion,
      sym_array,
  [2432] = 7,
    ACTIONS(252), 1,
      anon_sym_SQUOTE,
    ACTIONS(254), 1,
      anon_sym_DQUOTE,
    ACTIONS(256), 1,
      sym_int_literal,
    ACTIONS(284), 1,
      aux_sym_identifier_token1,
    STATE(27), 1,
      sym_expresion,
    STATE(122), 1,
      sym_function,
    STATE(33), 6,
      sym_function_call,
      sym_string_literal,
      sym_identifier,
      sym_mathamatical_expresion,
      sym_relational_expresion,
      sym_array,
  [2459] = 7,
    ACTIONS(188), 1,
      anon_sym_SQUOTE,
    ACTIONS(190), 1,
      anon_sym_DQUOTE,
    ACTIONS(192), 1,
      sym_int_literal,
    ACTIONS(194), 1,
      aux_sym_identifier_token1,
    STATE(14), 1,
      sym_expresion,
    STATE(118), 1,
      sym_function,
    STATE(6), 6,
      sym_function_call,
      sym_string_literal,
      sym_identifier,
      sym_mathamatical_expresion,
      sym_relational_expresion,
      sym_array,
  [2486] = 7,
    ACTIONS(188), 1,
      anon_sym_SQUOTE,
    ACTIONS(190), 1,
      anon_sym_DQUOTE,
    ACTIONS(192), 1,
      sym_int_literal,
    ACTIONS(194), 1,
      aux_sym_identifier_token1,
    STATE(3), 1,
      sym_expresion,
    STATE(118), 1,
      sym_function,
    STATE(6), 6,
      sym_function_call,
      sym_string_literal,
      sym_identifier,
      sym_mathamatical_expresion,
      sym_relational_expresion,
      sym_array,
  [2513] = 7,
    ACTIONS(188), 1,
      anon_sym_SQUOTE,
    ACTIONS(190), 1,
      anon_sym_DQUOTE,
    ACTIONS(192), 1,
      sym_int_literal,
    ACTIONS(194), 1,
      aux_sym_identifier_token1,
    STATE(24), 1,
      sym_expresion,
    STATE(118), 1,
      sym_function,
    STATE(6), 6,
      sym_function_call,
      sym_string_literal,
      sym_identifier,
      sym_mathamatical_expresion,
      sym_relational_expresion,
      sym_array,
  [2540] = 7,
    ACTIONS(188), 1,
      anon_sym_SQUOTE,
    ACTIONS(190), 1,
      anon_sym_DQUOTE,
    ACTIONS(192), 1,
      sym_int_literal,
    ACTIONS(194), 1,
      aux_sym_identifier_token1,
    STATE(36), 1,
      sym_expresion,
    STATE(118), 1,
      sym_function,
    STATE(6), 6,
      sym_function_call,
      sym_string_literal,
      sym_identifier,
      sym_mathamatical_expresion,
      sym_relational_expresion,
      sym_array,
  [2567] = 7,
    ACTIONS(188), 1,
      anon_sym_SQUOTE,
    ACTIONS(190), 1,
      anon_sym_DQUOTE,
    ACTIONS(192), 1,
      sym_int_literal,
    ACTIONS(194), 1,
      aux_sym_identifier_token1,
    STATE(53), 1,
      sym_expresion,
    STATE(118), 1,
      sym_function,
    STATE(6), 6,
      sym_function_call,
      sym_string_literal,
      sym_identifier,
      sym_mathamatical_expresion,
      sym_relational_expresion,
      sym_array,
  [2594] = 7,
    ACTIONS(188), 1,
      anon_sym_SQUOTE,
    ACTIONS(190), 1,
      anon_sym_DQUOTE,
    ACTIONS(192), 1,
      sym_int_literal,
    ACTIONS(194), 1,
      aux_sym_identifier_token1,
    STATE(13), 1,
      sym_expresion,
    STATE(118), 1,
      sym_function,
    STATE(6), 6,
      sym_function_call,
      sym_string_literal,
      sym_identifier,
      sym_mathamatical_expresion,
      sym_relational_expresion,
      sym_array,
  [2621] = 7,
    ACTIONS(188), 1,
      anon_sym_SQUOTE,
    ACTIONS(190), 1,
      anon_sym_DQUOTE,
    ACTIONS(192), 1,
      sym_int_literal,
    ACTIONS(194), 1,
      aux_sym_identifier_token1,
    STATE(21), 1,
      sym_expresion,
    STATE(118), 1,
      sym_function,
    STATE(6), 6,
      sym_function_call,
      sym_string_literal,
      sym_identifier,
      sym_mathamatical_expresion,
      sym_relational_expresion,
      sym_array,
  [2648] = 5,
    ACTIONS(286), 1,
      anon_sym_EQ,
    ACTIONS(288), 1,
      anon_sym_LBRACK,
    ACTIONS(290), 1,
      anon_sym_PLUS_PLUS,
    STATE(86), 1,
      sym_assignment_operator,
    ACTIONS(142), 4,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [2667] = 3,
    ACTIONS(290), 1,
      anon_sym_PLUS_PLUS,
    STATE(86), 1,
      sym_assignment_operator,
    ACTIONS(142), 5,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [2681] = 4,
    ACTIONS(292), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      sym_conditional_operator,
    STATE(92), 1,
      aux_sym_condition_list_repeat1,
    ACTIONS(150), 3,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
  [2696] = 2,
    STATE(87), 1,
      sym_assignment_operator,
    ACTIONS(142), 5,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [2707] = 4,
    ACTIONS(158), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      sym_conditional_operator,
    STATE(92), 1,
      aux_sym_condition_list_repeat1,
    ACTIONS(294), 3,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
  [2722] = 3,
    ACTIONS(299), 1,
      aux_sym_identifier_token1,
    ACTIONS(301), 1,
      sym_function_keyword,
    ACTIONS(297), 3,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_int_literal,
  [2734] = 4,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(303), 1,
      aux_sym_identifier_token1,
    STATE(89), 1,
      sym_identifier,
    STATE(132), 1,
      sym_variable_declaration,
  [2747] = 1,
    ACTIONS(297), 4,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_int_literal,
      aux_sym_identifier_token1,
  [2754] = 1,
    ACTIONS(305), 4,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_int_literal,
      aux_sym_identifier_token1,
  [2761] = 1,
    ACTIONS(307), 4,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_int_literal,
      aux_sym_identifier_token1,
  [2768] = 3,
    ACTIONS(309), 1,
      anon_sym_COMMA,
    STATE(98), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(160), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [2779] = 4,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(303), 1,
      aux_sym_identifier_token1,
    STATE(89), 1,
      sym_identifier,
    STATE(137), 1,
      sym_variable_declaration,
  [2792] = 1,
    ACTIONS(312), 4,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_int_literal,
      aux_sym_identifier_token1,
  [2799] = 3,
    ACTIONS(314), 1,
      anon_sym_RBRACE,
    ACTIONS(316), 1,
      sym_case_keyword,
    STATE(101), 1,
      aux_sym_switch_statement_repeat2,
  [2809] = 3,
    ACTIONS(166), 1,
      anon_sym_COMMA,
    ACTIONS(319), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      aux_sym_parameter_list_repeat1,
  [2819] = 3,
    ACTIONS(166), 1,
      anon_sym_COMMA,
    ACTIONS(321), 1,
      anon_sym_RBRACK,
    STATE(98), 1,
      aux_sym_parameter_list_repeat1,
  [2829] = 3,
    ACTIONS(166), 1,
      anon_sym_COMMA,
    ACTIONS(323), 1,
      anon_sym_RBRACK,
    STATE(98), 1,
      aux_sym_parameter_list_repeat1,
  [2839] = 3,
    ACTIONS(166), 1,
      anon_sym_COMMA,
    ACTIONS(325), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      aux_sym_parameter_list_repeat1,
  [2849] = 3,
    ACTIONS(327), 1,
      anon_sym_RBRACE,
    ACTIONS(329), 1,
      sym_case_keyword,
    STATE(101), 1,
      aux_sym_switch_statement_repeat2,
  [2859] = 3,
    ACTIONS(166), 1,
      anon_sym_COMMA,
    ACTIONS(184), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      aux_sym_parameter_list_repeat1,
  [2869] = 3,
    ACTIONS(166), 1,
      anon_sym_COMMA,
    ACTIONS(170), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      aux_sym_parameter_list_repeat1,
  [2879] = 3,
    ACTIONS(329), 1,
      sym_case_keyword,
    ACTIONS(331), 1,
      anon_sym_RBRACE,
    STATE(106), 1,
      aux_sym_switch_statement_repeat2,
  [2889] = 2,
    ACTIONS(333), 1,
      anon_sym_LBRACE,
    STATE(41), 1,
      sym_block,
  [2896] = 2,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    STATE(126), 1,
      sym_condition_list,
  [2903] = 2,
    ACTIONS(337), 1,
      anon_sym_LPAREN,
    STATE(120), 1,
      sym_parameter_list,
  [2910] = 1,
    ACTIONS(339), 2,
      anon_sym_RBRACE,
      sym_case_keyword,
  [2915] = 2,
    ACTIONS(337), 1,
      anon_sym_LPAREN,
    STATE(123), 1,
      sym_parameter_list,
  [2922] = 2,
    ACTIONS(341), 1,
      aux_sym_identifier_token1,
    STATE(114), 1,
      sym_identifier,
  [2929] = 2,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    STATE(110), 1,
      sym_condition_list,
  [2936] = 2,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    STATE(58), 1,
      sym_condition_list,
  [2943] = 2,
    ACTIONS(337), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      sym_parameter_list,
  [2950] = 1,
    ACTIONS(343), 2,
      anon_sym_RBRACE,
      sym_case_keyword,
  [2955] = 2,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    STATE(66), 1,
      sym_block,
  [2962] = 2,
    ACTIONS(341), 1,
      aux_sym_identifier_token1,
    STATE(23), 1,
      sym_identifier,
  [2969] = 2,
    ACTIONS(345), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_parameter_list,
  [2976] = 2,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    STATE(56), 1,
      sym_block,
  [2983] = 1,
    ACTIONS(347), 1,
      anon_sym_LPAREN,
  [2987] = 1,
    ACTIONS(349), 1,
      aux_sym_string_literal_token1,
  [2991] = 1,
    ACTIONS(351), 1,
      anon_sym_LBRACE,
  [2995] = 1,
    ACTIONS(353), 1,
      ts_builtin_sym_end,
  [2999] = 1,
    ACTIONS(355), 1,
      anon_sym_SQUOTE,
  [3003] = 1,
    ACTIONS(357), 1,
      aux_sym_comment_token1,
  [3007] = 1,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
  [3011] = 1,
    ACTIONS(359), 1,
      anon_sym_DQUOTE,
  [3015] = 1,
    ACTIONS(361), 1,
      anon_sym_RPAREN,
  [3019] = 1,
    ACTIONS(363), 1,
      aux_sym_string_literal_token2,
  [3023] = 1,
    ACTIONS(355), 1,
      anon_sym_DQUOTE,
  [3027] = 1,
    ACTIONS(365), 1,
      aux_sym_string_literal_token1,
  [3031] = 1,
    ACTIONS(367), 1,
      aux_sym_string_literal_token2,
  [3035] = 1,
    ACTIONS(369), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 46,
  [SMALL_STATE(4)] = 97,
  [SMALL_STATE(5)] = 148,
  [SMALL_STATE(6)] = 185,
  [SMALL_STATE(7)] = 222,
  [SMALL_STATE(8)] = 259,
  [SMALL_STATE(9)] = 296,
  [SMALL_STATE(10)] = 333,
  [SMALL_STATE(11)] = 370,
  [SMALL_STATE(12)] = 407,
  [SMALL_STATE(13)] = 444,
  [SMALL_STATE(14)] = 491,
  [SMALL_STATE(15)] = 538,
  [SMALL_STATE(16)] = 599,
  [SMALL_STATE(17)] = 659,
  [SMALL_STATE(18)] = 719,
  [SMALL_STATE(19)] = 779,
  [SMALL_STATE(20)] = 839,
  [SMALL_STATE(21)] = 899,
  [SMALL_STATE(22)] = 945,
  [SMALL_STATE(23)] = 972,
  [SMALL_STATE(24)] = 1005,
  [SMALL_STATE(25)] = 1045,
  [SMALL_STATE(26)] = 1078,
  [SMALL_STATE(27)] = 1113,
  [SMALL_STATE(28)] = 1146,
  [SMALL_STATE(29)] = 1178,
  [SMALL_STATE(30)] = 1202,
  [SMALL_STATE(31)] = 1233,
  [SMALL_STATE(32)] = 1254,
  [SMALL_STATE(33)] = 1275,
  [SMALL_STATE(34)] = 1296,
  [SMALL_STATE(35)] = 1317,
  [SMALL_STATE(36)] = 1338,
  [SMALL_STATE(37)] = 1373,
  [SMALL_STATE(38)] = 1394,
  [SMALL_STATE(39)] = 1429,
  [SMALL_STATE(40)] = 1464,
  [SMALL_STATE(41)] = 1485,
  [SMALL_STATE(42)] = 1508,
  [SMALL_STATE(43)] = 1529,
  [SMALL_STATE(44)] = 1550,
  [SMALL_STATE(45)] = 1571,
  [SMALL_STATE(46)] = 1606,
  [SMALL_STATE(47)] = 1626,
  [SMALL_STATE(48)] = 1662,
  [SMALL_STATE(49)] = 1682,
  [SMALL_STATE(50)] = 1718,
  [SMALL_STATE(51)] = 1737,
  [SMALL_STATE(52)] = 1770,
  [SMALL_STATE(53)] = 1789,
  [SMALL_STATE(54)] = 1818,
  [SMALL_STATE(55)] = 1839,
  [SMALL_STATE(56)] = 1858,
  [SMALL_STATE(57)] = 1877,
  [SMALL_STATE(58)] = 1896,
  [SMALL_STATE(59)] = 1915,
  [SMALL_STATE(60)] = 1934,
  [SMALL_STATE(61)] = 1953,
  [SMALL_STATE(62)] = 1982,
  [SMALL_STATE(63)] = 2011,
  [SMALL_STATE(64)] = 2044,
  [SMALL_STATE(65)] = 2063,
  [SMALL_STATE(66)] = 2096,
  [SMALL_STATE(67)] = 2115,
  [SMALL_STATE(68)] = 2134,
  [SMALL_STATE(69)] = 2153,
  [SMALL_STATE(70)] = 2172,
  [SMALL_STATE(71)] = 2198,
  [SMALL_STATE(72)] = 2216,
  [SMALL_STATE(73)] = 2243,
  [SMALL_STATE(74)] = 2270,
  [SMALL_STATE(75)] = 2297,
  [SMALL_STATE(76)] = 2324,
  [SMALL_STATE(77)] = 2351,
  [SMALL_STATE(78)] = 2378,
  [SMALL_STATE(79)] = 2405,
  [SMALL_STATE(80)] = 2432,
  [SMALL_STATE(81)] = 2459,
  [SMALL_STATE(82)] = 2486,
  [SMALL_STATE(83)] = 2513,
  [SMALL_STATE(84)] = 2540,
  [SMALL_STATE(85)] = 2567,
  [SMALL_STATE(86)] = 2594,
  [SMALL_STATE(87)] = 2621,
  [SMALL_STATE(88)] = 2648,
  [SMALL_STATE(89)] = 2667,
  [SMALL_STATE(90)] = 2681,
  [SMALL_STATE(91)] = 2696,
  [SMALL_STATE(92)] = 2707,
  [SMALL_STATE(93)] = 2722,
  [SMALL_STATE(94)] = 2734,
  [SMALL_STATE(95)] = 2747,
  [SMALL_STATE(96)] = 2754,
  [SMALL_STATE(97)] = 2761,
  [SMALL_STATE(98)] = 2768,
  [SMALL_STATE(99)] = 2779,
  [SMALL_STATE(100)] = 2792,
  [SMALL_STATE(101)] = 2799,
  [SMALL_STATE(102)] = 2809,
  [SMALL_STATE(103)] = 2819,
  [SMALL_STATE(104)] = 2829,
  [SMALL_STATE(105)] = 2839,
  [SMALL_STATE(106)] = 2849,
  [SMALL_STATE(107)] = 2859,
  [SMALL_STATE(108)] = 2869,
  [SMALL_STATE(109)] = 2879,
  [SMALL_STATE(110)] = 2889,
  [SMALL_STATE(111)] = 2896,
  [SMALL_STATE(112)] = 2903,
  [SMALL_STATE(113)] = 2910,
  [SMALL_STATE(114)] = 2915,
  [SMALL_STATE(115)] = 2922,
  [SMALL_STATE(116)] = 2929,
  [SMALL_STATE(117)] = 2936,
  [SMALL_STATE(118)] = 2943,
  [SMALL_STATE(119)] = 2950,
  [SMALL_STATE(120)] = 2955,
  [SMALL_STATE(121)] = 2962,
  [SMALL_STATE(122)] = 2969,
  [SMALL_STATE(123)] = 2976,
  [SMALL_STATE(124)] = 2983,
  [SMALL_STATE(125)] = 2987,
  [SMALL_STATE(126)] = 2991,
  [SMALL_STATE(127)] = 2995,
  [SMALL_STATE(128)] = 2999,
  [SMALL_STATE(129)] = 3003,
  [SMALL_STATE(130)] = 3007,
  [SMALL_STATE(131)] = 3011,
  [SMALL_STATE(132)] = 3015,
  [SMALL_STATE(133)] = 3019,
  [SMALL_STATE(134)] = 3023,
  [SMALL_STATE(135)] = 3027,
  [SMALL_STATE(136)] = 3031,
  [SMALL_STATE(137)] = 3035,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 1, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relational_expresion, 3, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relational_expresion, 3, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mathamatical_expresion, 3, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mathamatical_expresion, 3, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expresion, 1, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expresion, 1, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 5, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 5, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 4, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 4, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 3, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(129),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(115),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(116),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(117),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(124),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(121),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_decleration, 6, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_decleration, 6, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 2, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 2, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat1, 1, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_switch_statement_repeat1, 1, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_condition_list_repeat1, 2, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_statement, 4, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_statement, 4, 0, 0),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_switch_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_switch_statement_repeat1, 2, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break_statement, 1, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_break_statement, 1, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 4, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 2, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 2, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_list, 3, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition_list, 3, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 10, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 10, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 5, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 5, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_statement, 5, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_statement, 5, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 4, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_list, 4, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition_list, 4, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_condition_list_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_operator, 1, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_operator, 1, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_operator, 1, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mathamatical_operator, 1, 0, 0),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparative_operator, 1, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat2, 2, 0, 0),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat2, 2, 0, 0), SHIFT_REPEAT(74),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat2, 5, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat2, 4, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [353] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_gml(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
