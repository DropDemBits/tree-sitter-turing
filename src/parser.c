#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 97
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 80
#define ALIAS_COUNT 0
#define TOKEN_COUNT 56
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 20

enum {
  sym_identifier = 1,
  anon_sym_unit = 2,
  sym_line_comment = 3,
  anon_sym_SEMI = 4,
  anon_sym_const = 5,
  anon_sym_var = 6,
  anon_sym_COLON = 7,
  anon_sym_COLON_EQ = 8,
  anon_sym_type = 9,
  anon_sym_bind = 10,
  anon_sym_COMMA = 11,
  anon_sym_to = 12,
  anon_sym_DQUOTE = 13,
  anon_sym_DQUOTE2 = 14,
  anon_sym_SQUOTE = 15,
  anon_sym_SQUOTE2 = 16,
  anon_sym_BSLASH = 17,
  aux_sym__backslash_escapes_token1 = 18,
  aux_sym__backslash_escapes_token2 = 19,
  aux_sym__backslash_escapes_token3 = 20,
  aux_sym__backslash_escapes_token4 = 21,
  aux_sym__backslash_escapes_token5 = 22,
  sym__caret_escapes = 23,
  anon_sym_true = 24,
  anon_sym_false = 25,
  sym_integer_literal = 26,
  anon_sym_boolean = 27,
  anon_sym_addressint = 28,
  anon_sym_int = 29,
  anon_sym_int1 = 30,
  anon_sym_int2 = 31,
  anon_sym_int4 = 32,
  anon_sym_nat = 33,
  anon_sym_nat1 = 34,
  anon_sym_nat2 = 35,
  anon_sym_nat4 = 36,
  anon_sym_real = 37,
  anon_sym_real4 = 38,
  anon_sym_real8 = 39,
  anon_sym_char = 40,
  anon_sym_string = 41,
  anon_sym_LPAREN = 42,
  anon_sym_STAR = 43,
  anon_sym_RPAREN = 44,
  anon_sym_forward = 45,
  anon_sym_pervasive = 46,
  anon_sym_unqualified = 47,
  anon_sym_TILDE = 48,
  anon_sym_DOT = 49,
  sym_register_attr = 50,
  sym_cheat_attr = 51,
  sym_opaque_attr = 52,
  sym_block_comment = 53,
  sym__string_content = 54,
  sym_real_literal = 55,
  sym_source_file = 56,
  sym__statement = 57,
  sym_constvar_declaration = 58,
  sym_type_declaration = 59,
  sym_bind_declaration = 60,
  sym_bind_item = 61,
  sym__expression = 62,
  sym_literal_expression = 63,
  sym_string_literal = 64,
  sym_char_literal = 65,
  sym_escape_sequence = 66,
  sym__backslash_escapes = 67,
  sym_boolean_literal = 68,
  sym__type = 69,
  sym_primitive_type = 70,
  sym_charseq_size = 71,
  sym_forward_type = 72,
  sym_pervasive_attr = 73,
  sym_var_attr = 74,
  sym__name_list = 75,
  aux_sym_source_file_repeat1 = 76,
  aux_sym_bind_declaration_repeat1 = 77,
  aux_sym_string_literal_repeat1 = 78,
  aux_sym__name_list_repeat1 = 79,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_unit] = "unit",
  [sym_line_comment] = "line_comment",
  [anon_sym_SEMI] = ";",
  [anon_sym_const] = "const",
  [anon_sym_var] = "var",
  [anon_sym_COLON] = ":",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_type] = "type",
  [anon_sym_bind] = "bind",
  [anon_sym_COMMA] = ",",
  [anon_sym_to] = "to",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_DQUOTE2] = "\"",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_SQUOTE2] = "'",
  [anon_sym_BSLASH] = "\\",
  [aux_sym__backslash_escapes_token1] = "_backslash_escapes_token1",
  [aux_sym__backslash_escapes_token2] = "_backslash_escapes_token2",
  [aux_sym__backslash_escapes_token3] = "_backslash_escapes_token3",
  [aux_sym__backslash_escapes_token4] = "_backslash_escapes_token4",
  [aux_sym__backslash_escapes_token5] = "_backslash_escapes_token5",
  [sym__caret_escapes] = "_caret_escapes",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_integer_literal] = "integer_literal",
  [anon_sym_boolean] = "boolean",
  [anon_sym_addressint] = "addressint",
  [anon_sym_int] = "int",
  [anon_sym_int1] = "int1",
  [anon_sym_int2] = "int2",
  [anon_sym_int4] = "int4",
  [anon_sym_nat] = "nat",
  [anon_sym_nat1] = "nat1",
  [anon_sym_nat2] = "nat2",
  [anon_sym_nat4] = "nat4",
  [anon_sym_real] = "real",
  [anon_sym_real4] = "real4",
  [anon_sym_real8] = "real8",
  [anon_sym_char] = "char",
  [anon_sym_string] = "string",
  [anon_sym_LPAREN] = "(",
  [anon_sym_STAR] = "*",
  [anon_sym_RPAREN] = ")",
  [anon_sym_forward] = "forward",
  [anon_sym_pervasive] = "pervasive",
  [anon_sym_unqualified] = "unqualified",
  [anon_sym_TILDE] = "~",
  [anon_sym_DOT] = ".",
  [sym_register_attr] = "register_attr",
  [sym_cheat_attr] = "cheat_attr",
  [sym_opaque_attr] = "opaque_attr",
  [sym_block_comment] = "block_comment",
  [sym__string_content] = "_string_content",
  [sym_real_literal] = "real_literal",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_constvar_declaration] = "constvar_declaration",
  [sym_type_declaration] = "type_declaration",
  [sym_bind_declaration] = "bind_declaration",
  [sym_bind_item] = "bind_item",
  [sym__expression] = "_expression",
  [sym_literal_expression] = "literal_expression",
  [sym_string_literal] = "string_literal",
  [sym_char_literal] = "char_literal",
  [sym_escape_sequence] = "escape_sequence",
  [sym__backslash_escapes] = "_backslash_escapes",
  [sym_boolean_literal] = "boolean_literal",
  [sym__type] = "_type",
  [sym_primitive_type] = "primitive_type",
  [sym_charseq_size] = "charseq_size",
  [sym_forward_type] = "forward_type",
  [sym_pervasive_attr] = "pervasive_attr",
  [sym_var_attr] = "var_attr",
  [sym__name_list] = "_name_list",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_bind_declaration_repeat1] = "bind_declaration_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym__name_list_repeat1] = "_name_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_unit] = anon_sym_unit,
  [sym_line_comment] = sym_line_comment,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_bind] = anon_sym_bind,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_to] = anon_sym_to,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_DQUOTE2] = anon_sym_DQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_SQUOTE2] = anon_sym_SQUOTE,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [aux_sym__backslash_escapes_token1] = aux_sym__backslash_escapes_token1,
  [aux_sym__backslash_escapes_token2] = aux_sym__backslash_escapes_token2,
  [aux_sym__backslash_escapes_token3] = aux_sym__backslash_escapes_token3,
  [aux_sym__backslash_escapes_token4] = aux_sym__backslash_escapes_token4,
  [aux_sym__backslash_escapes_token5] = aux_sym__backslash_escapes_token5,
  [sym__caret_escapes] = sym__caret_escapes,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_integer_literal] = sym_integer_literal,
  [anon_sym_boolean] = anon_sym_boolean,
  [anon_sym_addressint] = anon_sym_addressint,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_int1] = anon_sym_int1,
  [anon_sym_int2] = anon_sym_int2,
  [anon_sym_int4] = anon_sym_int4,
  [anon_sym_nat] = anon_sym_nat,
  [anon_sym_nat1] = anon_sym_nat1,
  [anon_sym_nat2] = anon_sym_nat2,
  [anon_sym_nat4] = anon_sym_nat4,
  [anon_sym_real] = anon_sym_real,
  [anon_sym_real4] = anon_sym_real4,
  [anon_sym_real8] = anon_sym_real8,
  [anon_sym_char] = anon_sym_char,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_forward] = anon_sym_forward,
  [anon_sym_pervasive] = anon_sym_pervasive,
  [anon_sym_unqualified] = anon_sym_unqualified,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_register_attr] = sym_register_attr,
  [sym_cheat_attr] = sym_cheat_attr,
  [sym_opaque_attr] = sym_opaque_attr,
  [sym_block_comment] = sym_block_comment,
  [sym__string_content] = sym__string_content,
  [sym_real_literal] = sym_real_literal,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_constvar_declaration] = sym_constvar_declaration,
  [sym_type_declaration] = sym_type_declaration,
  [sym_bind_declaration] = sym_bind_declaration,
  [sym_bind_item] = sym_bind_item,
  [sym__expression] = sym__expression,
  [sym_literal_expression] = sym_literal_expression,
  [sym_string_literal] = sym_string_literal,
  [sym_char_literal] = sym_char_literal,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym__backslash_escapes] = sym__backslash_escapes,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym__type] = sym__type,
  [sym_primitive_type] = sym_primitive_type,
  [sym_charseq_size] = sym_charseq_size,
  [sym_forward_type] = sym_forward_type,
  [sym_pervasive_attr] = sym_pervasive_attr,
  [sym_var_attr] = sym_var_attr,
  [sym__name_list] = sym__name_list,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_bind_declaration_repeat1] = aux_sym_bind_declaration_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [aux_sym__name_list_repeat1] = aux_sym__name_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_unit] = {
    .visible = true,
    .named = false,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bind] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__backslash_escapes_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__backslash_escapes_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__backslash_escapes_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__backslash_escapes_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__backslash_escapes_token5] = {
    .visible = false,
    .named = false,
  },
  [sym__caret_escapes] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_boolean] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_addressint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nat1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nat2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nat4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_real] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_real4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_real8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_char] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_forward] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pervasive] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unqualified] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_register_attr] = {
    .visible = true,
    .named = true,
  },
  [sym_cheat_attr] = {
    .visible = true,
    .named = true,
  },
  [sym_opaque_attr] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__string_content] = {
    .visible = false,
    .named = true,
  },
  [sym_real_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_constvar_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_type_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_bind_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_bind_item] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_literal_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_char_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym__backslash_escapes] = {
    .visible = false,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_primitive_type] = {
    .visible = true,
    .named = true,
  },
  [sym_charseq_size] = {
    .visible = true,
    .named = true,
  },
  [sym_forward_type] = {
    .visible = true,
    .named = true,
  },
  [sym_pervasive_attr] = {
    .visible = true,
    .named = true,
  },
  [sym_var_attr] = {
    .visible = true,
    .named = true,
  },
  [sym__name_list] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bind_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__name_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_initializer = 1,
  field_name = 2,
  field_type_spec = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_initializer] = "initializer",
  [field_name] = "name",
  [field_type_spec] = "type_spec",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 2},
  [7] = {.index = 8, .length = 1},
  [8] = {.index = 9, .length = 2},
  [9] = {.index = 11, .length = 2},
  [10] = {.index = 13, .length = 2},
  [11] = {.index = 15, .length = 2},
  [12] = {.index = 17, .length = 2},
  [13] = {.index = 19, .length = 2},
  [14] = {.index = 21, .length = 2},
  [15] = {.index = 23, .length = 2},
  [16] = {.index = 25, .length = 3},
  [17] = {.index = 28, .length = 1},
  [18] = {.index = 29, .length = 3},
  [19] = {.index = 32, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_name, 1, .inherited = true},
  [2] =
    {field_name, 2, .inherited = true},
  [3] =
    {field_name, 0},
    {field_name, 1, .inherited = true},
  [5] =
    {field_name, 1},
  [6] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
  [8] =
    {field_name, 3, .inherited = true},
  [9] =
    {field_name, 1, .inherited = true},
    {field_type_spec, 3},
  [11] =
    {field_initializer, 3},
    {field_name, 1, .inherited = true},
  [13] =
    {field_name, 1},
    {field_type_spec, 3},
  [15] =
    {field_name, 2, .inherited = true},
    {field_type_spec, 4},
  [17] =
    {field_initializer, 4},
    {field_name, 2, .inherited = true},
  [19] =
    {field_name, 2},
    {field_type_spec, 4},
  [21] =
    {field_name, 3, .inherited = true},
    {field_type_spec, 5},
  [23] =
    {field_initializer, 5},
    {field_name, 3, .inherited = true},
  [25] =
    {field_initializer, 5},
    {field_name, 1, .inherited = true},
    {field_type_spec, 3},
  [28] =
    {field_name, 2},
  [29] =
    {field_initializer, 6},
    {field_name, 2, .inherited = true},
    {field_type_spec, 4},
  [32] =
    {field_initializer, 7},
    {field_name, 3, .inherited = true},
    {field_type_spec, 5},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(8);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '%') ADVANCE(9);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == ';') ADVANCE(10);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == '^') ADVANCE(19);
      if (lookahead == '~') ADVANCE(32);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '%') ADVANCE(9);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == '^') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '%') ADVANCE(9);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 3:
      if (lookahead == '%') ADVANCE(9);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == '^') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(9);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == '^') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 5:
      if (('?' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 7:
      if (eof) ADVANCE(8);
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '%') ADVANCE(9);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == ';') ADVANCE(10);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == '^') ADVANCE(19);
      if (lookahead == '~') ADVANCE(32);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym__backslash_escapes_token1);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym__backslash_escapes_token3);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym__backslash_escapes_token3);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(23);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym__backslash_escapes_token3);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(21);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym__backslash_escapes_token3);
      if (lookahead == '#') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym__backslash_escapes_token3);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(20);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym__backslash_escapes_token3);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(24);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__caret_escapes);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '#') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'U') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(2);
      if (lookahead == 'b') ADVANCE(3);
      if (lookahead == 'c') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'i') ADVANCE(6);
      if (lookahead == 'n') ADVANCE(7);
      if (lookahead == 'o') ADVANCE(8);
      if (lookahead == 'p') ADVANCE(9);
      if (lookahead == 'r') ADVANCE(10);
      if (lookahead == 's') ADVANCE(11);
      if (lookahead == 't') ADVANCE(12);
      if (lookahead == 'u') ADVANCE(13);
      if (lookahead == 'v') ADVANCE(14);
      if (lookahead == 'x') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'N' ||
          lookahead == 'R' ||
          lookahead == 'T' ||
          lookahead == 'd' ||
          lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 1:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
      END_STATE();
    case 2:
      if (lookahead == 'd') ADVANCE(18);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(aux_sym__backslash_escapes_token2);
      if (lookahead == 'i') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 4:
      if (lookahead == 'h') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(aux_sym__backslash_escapes_token2);
      if (lookahead == 'a') ADVANCE(23);
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 6:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(aux_sym__backslash_escapes_token2);
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 8:
      if (lookahead == 'p') ADVANCE(27);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym__backslash_escapes_token2);
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 11:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym__backslash_escapes_token2);
      if (lookahead == 'o') ADVANCE(31);
      if (lookahead == 'r') ADVANCE(32);
      if (lookahead == 'y') ADVANCE(33);
      END_STATE();
    case 13:
      if (lookahead == 'n') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym__backslash_escapes_token2);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym__backslash_escapes_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(37);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(38);
      END_STATE();
    case 19:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(41);
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(50);
      if (lookahead == 'g') ADVANCE(51);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 32:
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 33:
      if (lookahead == 'p') ADVANCE(54);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(55);
      if (lookahead == 'q') ADVANCE(56);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym__backslash_escapes_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym__backslash_escapes_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(61);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 43:
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 44:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 45:
      if (lookahead == 'w') ADVANCE(67);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '1') ADVANCE(68);
      if (lookahead == '2') ADVANCE(69);
      if (lookahead == '4') ADVANCE(70);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_nat);
      if (lookahead == '1') ADVANCE(71);
      if (lookahead == '2') ADVANCE(72);
      if (lookahead == '4') ADVANCE(73);
      END_STATE();
    case 48:
      if (lookahead == 'q') ADVANCE(74);
      END_STATE();
    case 49:
      if (lookahead == 'v') ADVANCE(75);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(78);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 56:
      if (lookahead == 'u') ADVANCE(82);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym__backslash_escapes_token4);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym__backslash_escapes_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_bind);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_int1);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_int2);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_int4);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_nat1);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_nat2);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_nat4);
      END_STATE();
    case 74:
      if (lookahead == 'u') ADVANCE(90);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_real);
      if (lookahead == '4') ADVANCE(92);
      if (lookahead == '8') ADVANCE(93);
      END_STATE();
    case 77:
      if (lookahead == 's') ADVANCE(94);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_unit);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym__backslash_escapes_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      END_STATE();
    case 84:
      if (lookahead == 's') ADVANCE(98);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_cheat_attr);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 89:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 91:
      if (lookahead == 's') ADVANCE(102);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_real4);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_real8);
      END_STATE();
    case 94:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 95:
      if (lookahead == 'g') ADVANCE(104);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym__backslash_escapes_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      END_STATE();
    case 98:
      if (lookahead == 's') ADVANCE(107);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 100:
      if (lookahead == 'd') ADVANCE(109);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_opaque_attr);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym__backslash_escapes_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(113);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_forward);
      END_STATE();
    case 110:
      if (lookahead == 'v') ADVANCE(115);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 112:
      if (lookahead == 'f') ADVANCE(117);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym__backslash_escapes_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(118);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_register_attr);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym__backslash_escapes_token5);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_pervasive);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_addressint);
      END_STATE();
    case 123:
      if (lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_unqualified);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 0, .external_lex_state = 2},
  [3] = {.lex_state = 0, .external_lex_state = 2},
  [4] = {.lex_state = 0, .external_lex_state = 2},
  [5] = {.lex_state = 0, .external_lex_state = 2},
  [6] = {.lex_state = 0, .external_lex_state = 2},
  [7] = {.lex_state = 0, .external_lex_state = 2},
  [8] = {.lex_state = 2, .external_lex_state = 3},
  [9] = {.lex_state = 2, .external_lex_state = 3},
  [10] = {.lex_state = 2, .external_lex_state = 3},
  [11] = {.lex_state = 2, .external_lex_state = 3},
  [12] = {.lex_state = 2, .external_lex_state = 3},
  [13] = {.lex_state = 2, .external_lex_state = 3},
  [14] = {.lex_state = 2, .external_lex_state = 3},
  [15] = {.lex_state = 2, .external_lex_state = 3},
  [16] = {.lex_state = 2, .external_lex_state = 3},
  [17] = {.lex_state = 2, .external_lex_state = 3},
  [18] = {.lex_state = 2, .external_lex_state = 3},
  [19] = {.lex_state = 2, .external_lex_state = 3},
  [20] = {.lex_state = 0, .external_lex_state = 2},
  [21] = {.lex_state = 0, .external_lex_state = 2},
  [22] = {.lex_state = 0, .external_lex_state = 2},
  [23] = {.lex_state = 0, .external_lex_state = 2},
  [24] = {.lex_state = 0, .external_lex_state = 2},
  [25] = {.lex_state = 0, .external_lex_state = 2},
  [26] = {.lex_state = 0, .external_lex_state = 2},
  [27] = {.lex_state = 0, .external_lex_state = 2},
  [28] = {.lex_state = 0, .external_lex_state = 2},
  [29] = {.lex_state = 0, .external_lex_state = 2},
  [30] = {.lex_state = 0, .external_lex_state = 2},
  [31] = {.lex_state = 0, .external_lex_state = 2},
  [32] = {.lex_state = 1, .external_lex_state = 4},
  [33] = {.lex_state = 0, .external_lex_state = 2},
  [34] = {.lex_state = 0, .external_lex_state = 2},
  [35] = {.lex_state = 0, .external_lex_state = 2},
  [36] = {.lex_state = 0, .external_lex_state = 2},
  [37] = {.lex_state = 0, .external_lex_state = 2},
  [38] = {.lex_state = 0, .external_lex_state = 2},
  [39] = {.lex_state = 0, .external_lex_state = 2},
  [40] = {.lex_state = 0, .external_lex_state = 2},
  [41] = {.lex_state = 0, .external_lex_state = 2},
  [42] = {.lex_state = 0, .external_lex_state = 2},
  [43] = {.lex_state = 0, .external_lex_state = 2},
  [44] = {.lex_state = 0, .external_lex_state = 2},
  [45] = {.lex_state = 0, .external_lex_state = 2},
  [46] = {.lex_state = 0, .external_lex_state = 2},
  [47] = {.lex_state = 0, .external_lex_state = 2},
  [48] = {.lex_state = 0, .external_lex_state = 2},
  [49] = {.lex_state = 0, .external_lex_state = 2},
  [50] = {.lex_state = 0, .external_lex_state = 2},
  [51] = {.lex_state = 0, .external_lex_state = 2},
  [52] = {.lex_state = 0, .external_lex_state = 2},
  [53] = {.lex_state = 1, .external_lex_state = 4},
  [54] = {.lex_state = 1, .external_lex_state = 4},
  [55] = {.lex_state = 0, .external_lex_state = 2},
  [56] = {.lex_state = 0, .external_lex_state = 2},
  [57] = {.lex_state = 1, .external_lex_state = 4},
  [58] = {.lex_state = 1, .external_lex_state = 4},
  [59] = {.lex_state = 0, .external_lex_state = 2},
  [60] = {.lex_state = 0, .external_lex_state = 2},
  [61] = {.lex_state = 0, .external_lex_state = 2},
  [62] = {.lex_state = 0, .external_lex_state = 2},
  [63] = {.lex_state = 0, .external_lex_state = 2},
  [64] = {.lex_state = 0, .external_lex_state = 2},
  [65] = {.lex_state = 0, .external_lex_state = 2},
  [66] = {.lex_state = 0, .external_lex_state = 2},
  [67] = {.lex_state = 0, .external_lex_state = 2},
  [68] = {.lex_state = 0, .external_lex_state = 2},
  [69] = {.lex_state = 0, .external_lex_state = 2},
  [70] = {.lex_state = 0, .external_lex_state = 2},
  [71] = {.lex_state = 0, .external_lex_state = 2},
  [72] = {.lex_state = 0, .external_lex_state = 2},
  [73] = {.lex_state = 0, .external_lex_state = 2},
  [74] = {.lex_state = 1, .external_lex_state = 4},
  [75] = {.lex_state = 1, .external_lex_state = 4},
  [76] = {.lex_state = 0, .external_lex_state = 2},
  [77] = {.lex_state = 0, .external_lex_state = 2},
  [78] = {.lex_state = 4, .external_lex_state = 2},
  [79] = {.lex_state = 0, .external_lex_state = 2},
  [80] = {.lex_state = 0, .external_lex_state = 2},
  [81] = {.lex_state = 0, .external_lex_state = 2},
  [82] = {.lex_state = 0, .external_lex_state = 2},
  [83] = {.lex_state = 0, .external_lex_state = 2},
  [84] = {.lex_state = 0, .external_lex_state = 2},
  [85] = {.lex_state = 0, .external_lex_state = 2},
  [86] = {.lex_state = 0, .external_lex_state = 2},
  [87] = {.lex_state = 0, .external_lex_state = 2},
  [88] = {.lex_state = 0, .external_lex_state = 2},
  [89] = {.lex_state = 0, .external_lex_state = 2},
  [90] = {.lex_state = 0, .external_lex_state = 2},
  [91] = {.lex_state = 0, .external_lex_state = 2},
  [92] = {.lex_state = 0, .external_lex_state = 2},
  [93] = {.lex_state = 0, .external_lex_state = 2},
  [94] = {.lex_state = 0, .external_lex_state = 2},
  [95] = {.lex_state = 0, .external_lex_state = 2},
  [96] = {.lex_state = 0, .external_lex_state = 2},
};

enum {
  ts_external_token_block_comment = 0,
  ts_external_token__string_content = 1,
  ts_external_token_real_literal = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_block_comment] = sym_block_comment,
  [ts_external_token__string_content] = sym__string_content,
  [ts_external_token_real_literal] = sym_real_literal,
};

static const bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_block_comment] = true,
    [ts_external_token__string_content] = true,
    [ts_external_token_real_literal] = true,
  },
  [2] = {
    [ts_external_token_block_comment] = true,
  },
  [3] = {
    [ts_external_token_block_comment] = true,
    [ts_external_token_real_literal] = true,
  },
  [4] = {
    [ts_external_token_block_comment] = true,
    [ts_external_token__string_content] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_unit] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_bind] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_to] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE2] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE2] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [aux_sym__backslash_escapes_token1] = ACTIONS(1),
    [aux_sym__backslash_escapes_token2] = ACTIONS(1),
    [aux_sym__backslash_escapes_token3] = ACTIONS(1),
    [aux_sym__backslash_escapes_token4] = ACTIONS(1),
    [aux_sym__backslash_escapes_token5] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_integer_literal] = ACTIONS(1),
    [anon_sym_boolean] = ACTIONS(1),
    [anon_sym_addressint] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_int1] = ACTIONS(1),
    [anon_sym_int2] = ACTIONS(1),
    [anon_sym_int4] = ACTIONS(1),
    [anon_sym_nat] = ACTIONS(1),
    [anon_sym_nat1] = ACTIONS(1),
    [anon_sym_nat2] = ACTIONS(1),
    [anon_sym_nat4] = ACTIONS(1),
    [anon_sym_real] = ACTIONS(1),
    [anon_sym_real4] = ACTIONS(1),
    [anon_sym_real8] = ACTIONS(1),
    [anon_sym_char] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_forward] = ACTIONS(1),
    [anon_sym_pervasive] = ACTIONS(1),
    [anon_sym_unqualified] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_register_attr] = ACTIONS(1),
    [sym_cheat_attr] = ACTIONS(1),
    [sym_opaque_attr] = ACTIONS(1),
    [sym_block_comment] = ACTIONS(3),
    [sym__string_content] = ACTIONS(1),
    [sym_real_literal] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(93),
    [sym__statement] = STATE(23),
    [sym_constvar_declaration] = STATE(72),
    [sym_type_declaration] = STATE(72),
    [sym_bind_declaration] = STATE(72),
    [aux_sym_source_file_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_unit] = ACTIONS(7),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(9),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_type] = ACTIONS(13),
    [anon_sym_bind] = ACTIONS(15),
    [sym_block_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(23), 1,
      anon_sym_forward,
    STATE(55), 1,
      sym__type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(21), 2,
      anon_sym_char,
      anon_sym_string,
    STATE(52), 2,
      sym_primitive_type,
      sym_forward_type,
    ACTIONS(19), 3,
      anon_sym_int,
      anon_sym_nat,
      anon_sym_real,
    ACTIONS(17), 10,
      anon_sym_boolean,
      anon_sym_addressint,
      anon_sym_int1,
      anon_sym_int2,
      anon_sym_int4,
      anon_sym_nat1,
      anon_sym_nat2,
      anon_sym_nat4,
      anon_sym_real4,
      anon_sym_real8,
  [36] = 7,
    ACTIONS(23), 1,
      anon_sym_forward,
    STATE(45), 1,
      sym__type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(21), 2,
      anon_sym_char,
      anon_sym_string,
    STATE(52), 2,
      sym_primitive_type,
      sym_forward_type,
    ACTIONS(19), 3,
      anon_sym_int,
      anon_sym_nat,
      anon_sym_real,
    ACTIONS(17), 10,
      anon_sym_boolean,
      anon_sym_addressint,
      anon_sym_int1,
      anon_sym_int2,
      anon_sym_int4,
      anon_sym_nat1,
      anon_sym_nat2,
      anon_sym_nat4,
      anon_sym_real4,
      anon_sym_real8,
  [72] = 7,
    ACTIONS(23), 1,
      anon_sym_forward,
    STATE(63), 1,
      sym__type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(21), 2,
      anon_sym_char,
      anon_sym_string,
    STATE(52), 2,
      sym_primitive_type,
      sym_forward_type,
    ACTIONS(19), 3,
      anon_sym_int,
      anon_sym_nat,
      anon_sym_real,
    ACTIONS(17), 10,
      anon_sym_boolean,
      anon_sym_addressint,
      anon_sym_int1,
      anon_sym_int2,
      anon_sym_int4,
      anon_sym_nat1,
      anon_sym_nat2,
      anon_sym_nat4,
      anon_sym_real4,
      anon_sym_real8,
  [108] = 7,
    ACTIONS(23), 1,
      anon_sym_forward,
    STATE(51), 1,
      sym__type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(21), 2,
      anon_sym_char,
      anon_sym_string,
    STATE(52), 2,
      sym_primitive_type,
      sym_forward_type,
    ACTIONS(19), 3,
      anon_sym_int,
      anon_sym_nat,
      anon_sym_real,
    ACTIONS(17), 10,
      anon_sym_boolean,
      anon_sym_addressint,
      anon_sym_int1,
      anon_sym_int2,
      anon_sym_int4,
      anon_sym_nat1,
      anon_sym_nat2,
      anon_sym_nat4,
      anon_sym_real4,
      anon_sym_real8,
  [144] = 7,
    ACTIONS(23), 1,
      anon_sym_forward,
    STATE(71), 1,
      sym__type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(21), 2,
      anon_sym_char,
      anon_sym_string,
    STATE(52), 2,
      sym_primitive_type,
      sym_forward_type,
    ACTIONS(19), 3,
      anon_sym_int,
      anon_sym_nat,
      anon_sym_real,
    ACTIONS(17), 10,
      anon_sym_boolean,
      anon_sym_addressint,
      anon_sym_int1,
      anon_sym_int2,
      anon_sym_int4,
      anon_sym_nat1,
      anon_sym_nat2,
      anon_sym_nat4,
      anon_sym_real4,
      anon_sym_real8,
  [180] = 7,
    ACTIONS(23), 1,
      anon_sym_forward,
    STATE(61), 1,
      sym__type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(21), 2,
      anon_sym_char,
      anon_sym_string,
    STATE(52), 2,
      sym_primitive_type,
      sym_forward_type,
    ACTIONS(19), 3,
      anon_sym_int,
      anon_sym_nat,
      anon_sym_real,
    ACTIONS(17), 10,
      anon_sym_boolean,
      anon_sym_addressint,
      anon_sym_int1,
      anon_sym_int2,
      anon_sym_int4,
      anon_sym_nat1,
      anon_sym_nat2,
      anon_sym_nat4,
      anon_sym_real4,
      anon_sym_real8,
  [216] = 10,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_STAR,
    STATE(41), 1,
      sym_literal_expression,
    STATE(86), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      sym_real_literal,
      sym_integer_literal,
    STATE(30), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [252] = 9,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(41), 1,
      sym_literal_expression,
    STATE(69), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      sym_real_literal,
      sym_integer_literal,
    STATE(30), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [285] = 9,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(41), 1,
      sym_literal_expression,
    STATE(65), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      sym_real_literal,
      sym_integer_literal,
    STATE(30), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [318] = 9,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(41), 1,
      sym_literal_expression,
    STATE(67), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      sym_real_literal,
      sym_integer_literal,
    STATE(30), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [351] = 9,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(41), 1,
      sym_literal_expression,
    STATE(48), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      sym_real_literal,
      sym_integer_literal,
    STATE(30), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [384] = 9,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(41), 1,
      sym_literal_expression,
    STATE(68), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      sym_real_literal,
      sym_integer_literal,
    STATE(30), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [417] = 9,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(41), 1,
      sym_literal_expression,
    STATE(66), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      sym_real_literal,
      sym_integer_literal,
    STATE(30), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [450] = 9,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(41), 1,
      sym_literal_expression,
    STATE(56), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      sym_real_literal,
      sym_integer_literal,
    STATE(30), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [483] = 9,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(41), 1,
      sym_literal_expression,
    STATE(70), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      sym_real_literal,
      sym_integer_literal,
    STATE(30), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [516] = 9,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(41), 1,
      sym_literal_expression,
    STATE(62), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      sym_real_literal,
      sym_integer_literal,
    STATE(30), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [549] = 9,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(41), 1,
      sym_literal_expression,
    STATE(64), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      sym_real_literal,
      sym_integer_literal,
    STATE(30), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [582] = 9,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(41), 1,
      sym_literal_expression,
    STATE(59), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      sym_real_literal,
      sym_integer_literal,
    STATE(30), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [615] = 8,
    ACTIONS(13), 1,
      anon_sym_type,
    ACTIONS(15), 1,
      anon_sym_bind,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(11), 2,
      anon_sym_const,
      anon_sym_var,
    STATE(21), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(72), 3,
      sym_constvar_declaration,
      sym_type_declaration,
      sym_bind_declaration,
  [645] = 8,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 1,
      anon_sym_SEMI,
    ACTIONS(49), 1,
      anon_sym_type,
    ACTIONS(52), 1,
      anon_sym_bind,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(46), 2,
      anon_sym_const,
      anon_sym_var,
    STATE(21), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(72), 3,
      sym_constvar_declaration,
      sym_type_declaration,
      sym_bind_declaration,
  [675] = 8,
    ACTIONS(13), 1,
      anon_sym_type,
    ACTIONS(15), 1,
      anon_sym_bind,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(57), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(11), 2,
      anon_sym_const,
      anon_sym_var,
    STATE(20), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(72), 3,
      sym_constvar_declaration,
      sym_type_declaration,
      sym_bind_declaration,
  [705] = 8,
    ACTIONS(13), 1,
      anon_sym_type,
    ACTIONS(15), 1,
      anon_sym_bind,
    ACTIONS(39), 1,
      anon_sym_SEMI,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(11), 2,
      anon_sym_const,
      anon_sym_var,
    STATE(21), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(72), 3,
      sym_constvar_declaration,
      sym_type_declaration,
      sym_bind_declaration,
  [735] = 5,
    ACTIONS(61), 1,
      anon_sym_COLON,
    ACTIONS(63), 1,
      anon_sym_COMMA,
    STATE(24), 1,
      aux_sym__name_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(59), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON_EQ,
      anon_sym_type,
      anon_sym_bind,
  [758] = 5,
    ACTIONS(68), 1,
      anon_sym_COLON,
    ACTIONS(70), 1,
      anon_sym_COMMA,
    STATE(24), 1,
      aux_sym__name_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(66), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON_EQ,
      anon_sym_type,
      anon_sym_bind,
  [781] = 5,
    ACTIONS(70), 1,
      anon_sym_COMMA,
    ACTIONS(74), 1,
      anon_sym_COLON,
    STATE(25), 1,
      aux_sym__name_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(72), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON_EQ,
      anon_sym_type,
      anon_sym_bind,
  [804] = 4,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      sym_charseq_size,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(76), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON_EQ,
      anon_sym_type,
      anon_sym_bind,
  [824] = 3,
    ACTIONS(82), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(80), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON_EQ,
      anon_sym_type,
      anon_sym_bind,
      anon_sym_COMMA,
  [842] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(84), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [857] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(86), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [872] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(88), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [887] = 7,
    ACTIONS(92), 1,
      anon_sym_BSLASH,
    ACTIONS(95), 1,
      sym__caret_escapes,
    ACTIONS(98), 1,
      sym__string_content,
    STATE(75), 1,
      sym__backslash_escapes,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(90), 2,
      anon_sym_DQUOTE2,
      anon_sym_SQUOTE2,
    STATE(32), 2,
      sym_escape_sequence,
      aux_sym_string_literal_repeat1,
  [912] = 4,
    ACTIONS(103), 1,
      anon_sym_COMMA,
    STATE(42), 1,
      aux_sym_bind_declaration_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(101), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
  [931] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(105), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [946] = 4,
    ACTIONS(109), 1,
      anon_sym_COLON,
    ACTIONS(111), 1,
      anon_sym_COLON_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(107), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
  [965] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(113), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [980] = 4,
    ACTIONS(117), 1,
      anon_sym_COLON,
    ACTIONS(119), 1,
      anon_sym_COLON_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(115), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
  [999] = 4,
    ACTIONS(121), 1,
      anon_sym_COLON,
    ACTIONS(123), 1,
      anon_sym_COLON_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(107), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
  [1018] = 4,
    ACTIONS(127), 1,
      anon_sym_COMMA,
    STATE(39), 1,
      aux_sym_bind_declaration_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(125), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
  [1037] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(130), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1052] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(130), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1067] = 4,
    ACTIONS(103), 1,
      anon_sym_COMMA,
    STATE(39), 1,
      aux_sym_bind_declaration_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(132), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
  [1086] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(134), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1101] = 4,
    ACTIONS(138), 1,
      anon_sym_COLON,
    ACTIONS(140), 1,
      anon_sym_COLON_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(136), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
  [1120] = 3,
    ACTIONS(144), 1,
      anon_sym_COLON_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(142), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
  [1136] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(146), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON_EQ,
      anon_sym_type,
      anon_sym_bind,
  [1150] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(148), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON_EQ,
      anon_sym_type,
      anon_sym_bind,
  [1164] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(150), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
      anon_sym_COMMA,
  [1178] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(76), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON_EQ,
      anon_sym_type,
      anon_sym_bind,
  [1192] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(152), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON_EQ,
      anon_sym_type,
      anon_sym_bind,
  [1206] = 3,
    ACTIONS(156), 1,
      anon_sym_COLON_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(154), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
  [1222] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(158), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON_EQ,
      anon_sym_type,
      anon_sym_bind,
  [1236] = 7,
    ACTIONS(160), 1,
      anon_sym_DQUOTE2,
    ACTIONS(162), 1,
      anon_sym_BSLASH,
    ACTIONS(164), 1,
      sym__caret_escapes,
    ACTIONS(166), 1,
      sym__string_content,
    STATE(75), 1,
      sym__backslash_escapes,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(58), 2,
      sym_escape_sequence,
      aux_sym_string_literal_repeat1,
  [1260] = 7,
    ACTIONS(162), 1,
      anon_sym_BSLASH,
    ACTIONS(164), 1,
      sym__caret_escapes,
    ACTIONS(168), 1,
      anon_sym_SQUOTE2,
    ACTIONS(170), 1,
      sym__string_content,
    STATE(75), 1,
      sym__backslash_escapes,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(57), 2,
      sym_escape_sequence,
      aux_sym_string_literal_repeat1,
  [1284] = 3,
    ACTIONS(174), 1,
      anon_sym_COLON_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(172), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
  [1300] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(176), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
      anon_sym_COMMA,
  [1314] = 7,
    ACTIONS(162), 1,
      anon_sym_BSLASH,
    ACTIONS(164), 1,
      sym__caret_escapes,
    ACTIONS(178), 1,
      anon_sym_SQUOTE2,
    ACTIONS(180), 1,
      sym__string_content,
    STATE(75), 1,
      sym__backslash_escapes,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(32), 2,
      sym_escape_sequence,
      aux_sym_string_literal_repeat1,
  [1338] = 7,
    ACTIONS(162), 1,
      anon_sym_BSLASH,
    ACTIONS(164), 1,
      sym__caret_escapes,
    ACTIONS(180), 1,
      sym__string_content,
    ACTIONS(182), 1,
      anon_sym_DQUOTE2,
    STATE(75), 1,
      sym__backslash_escapes,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(32), 2,
      sym_escape_sequence,
      aux_sym_string_literal_repeat1,
  [1362] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(184), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
      anon_sym_COMMA,
  [1376] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(125), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
      anon_sym_COMMA,
  [1390] = 3,
    ACTIONS(186), 1,
      anon_sym_COLON_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(142), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
  [1406] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(188), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
  [1419] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(190), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
  [1432] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(192), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
  [1445] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(194), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
  [1458] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(196), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
  [1471] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(194), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
  [1484] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(198), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
  [1497] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(196), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
  [1510] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(200), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
  [1523] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(202), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
  [1536] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(204), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
  [1549] = 7,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(208), 1,
      anon_sym_STAR,
    ACTIONS(210), 1,
      anon_sym_pervasive,
    ACTIONS(212), 1,
      sym_register_attr,
    STATE(37), 1,
      sym__name_list,
    STATE(80), 1,
      sym_pervasive_attr,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1572] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(214), 5,
      sym__string_content,
      anon_sym_DQUOTE2,
      anon_sym_SQUOTE2,
      anon_sym_BSLASH,
      sym__caret_escapes,
  [1584] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(216), 5,
      sym__string_content,
      anon_sym_DQUOTE2,
      anon_sym_SQUOTE2,
      anon_sym_BSLASH,
      sym__caret_escapes,
  [1596] = 6,
    ACTIONS(218), 1,
      sym_identifier,
    ACTIONS(220), 1,
      anon_sym_var,
    ACTIONS(222), 1,
      sym_register_attr,
    STATE(60), 1,
      sym_bind_item,
    STATE(85), 1,
      sym_var_attr,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1616] = 6,
    ACTIONS(218), 1,
      sym_identifier,
    ACTIONS(220), 1,
      anon_sym_var,
    ACTIONS(222), 1,
      sym_register_attr,
    STATE(33), 1,
      sym_bind_item,
    STATE(85), 1,
      sym_var_attr,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1636] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(224), 5,
      aux_sym__backslash_escapes_token1,
      aux_sym__backslash_escapes_token2,
      aux_sym__backslash_escapes_token3,
      aux_sym__backslash_escapes_token4,
      aux_sym__backslash_escapes_token5,
  [1648] = 5,
    ACTIONS(208), 1,
      anon_sym_STAR,
    ACTIONS(210), 1,
      anon_sym_pervasive,
    ACTIONS(226), 1,
      sym_identifier,
    STATE(89), 1,
      sym_pervasive_attr,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1665] = 4,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(228), 1,
      sym_register_attr,
    STATE(38), 1,
      sym__name_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1679] = 3,
    ACTIONS(230), 1,
      sym_identifier,
    STATE(35), 1,
      sym__name_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1690] = 3,
    ACTIONS(230), 1,
      sym_identifier,
    STATE(44), 1,
      sym__name_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1701] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(232), 2,
      sym_register_attr,
      sym_identifier,
  [1710] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(234), 2,
      sym_register_attr,
      sym_identifier,
  [1719] = 3,
    ACTIONS(236), 1,
      sym_identifier,
    ACTIONS(238), 1,
      sym_register_attr,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1730] = 2,
    ACTIONS(240), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1738] = 2,
    ACTIONS(242), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1746] = 2,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1754] = 2,
    ACTIONS(246), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1762] = 2,
    ACTIONS(248), 1,
      anon_sym_to,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1770] = 2,
    ACTIONS(250), 1,
      anon_sym_to,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1778] = 2,
    ACTIONS(252), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1786] = 2,
    ACTIONS(254), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1794] = 2,
    ACTIONS(256), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1802] = 2,
    ACTIONS(258), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1810] = 2,
    ACTIONS(260), 1,
      anon_sym_to,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 36,
  [SMALL_STATE(4)] = 72,
  [SMALL_STATE(5)] = 108,
  [SMALL_STATE(6)] = 144,
  [SMALL_STATE(7)] = 180,
  [SMALL_STATE(8)] = 216,
  [SMALL_STATE(9)] = 252,
  [SMALL_STATE(10)] = 285,
  [SMALL_STATE(11)] = 318,
  [SMALL_STATE(12)] = 351,
  [SMALL_STATE(13)] = 384,
  [SMALL_STATE(14)] = 417,
  [SMALL_STATE(15)] = 450,
  [SMALL_STATE(16)] = 483,
  [SMALL_STATE(17)] = 516,
  [SMALL_STATE(18)] = 549,
  [SMALL_STATE(19)] = 582,
  [SMALL_STATE(20)] = 615,
  [SMALL_STATE(21)] = 645,
  [SMALL_STATE(22)] = 675,
  [SMALL_STATE(23)] = 705,
  [SMALL_STATE(24)] = 735,
  [SMALL_STATE(25)] = 758,
  [SMALL_STATE(26)] = 781,
  [SMALL_STATE(27)] = 804,
  [SMALL_STATE(28)] = 824,
  [SMALL_STATE(29)] = 842,
  [SMALL_STATE(30)] = 857,
  [SMALL_STATE(31)] = 872,
  [SMALL_STATE(32)] = 887,
  [SMALL_STATE(33)] = 912,
  [SMALL_STATE(34)] = 931,
  [SMALL_STATE(35)] = 946,
  [SMALL_STATE(36)] = 965,
  [SMALL_STATE(37)] = 980,
  [SMALL_STATE(38)] = 999,
  [SMALL_STATE(39)] = 1018,
  [SMALL_STATE(40)] = 1037,
  [SMALL_STATE(41)] = 1052,
  [SMALL_STATE(42)] = 1067,
  [SMALL_STATE(43)] = 1086,
  [SMALL_STATE(44)] = 1101,
  [SMALL_STATE(45)] = 1120,
  [SMALL_STATE(46)] = 1136,
  [SMALL_STATE(47)] = 1150,
  [SMALL_STATE(48)] = 1164,
  [SMALL_STATE(49)] = 1178,
  [SMALL_STATE(50)] = 1192,
  [SMALL_STATE(51)] = 1206,
  [SMALL_STATE(52)] = 1222,
  [SMALL_STATE(53)] = 1236,
  [SMALL_STATE(54)] = 1260,
  [SMALL_STATE(55)] = 1284,
  [SMALL_STATE(56)] = 1300,
  [SMALL_STATE(57)] = 1314,
  [SMALL_STATE(58)] = 1338,
  [SMALL_STATE(59)] = 1362,
  [SMALL_STATE(60)] = 1376,
  [SMALL_STATE(61)] = 1390,
  [SMALL_STATE(62)] = 1406,
  [SMALL_STATE(63)] = 1419,
  [SMALL_STATE(64)] = 1432,
  [SMALL_STATE(65)] = 1445,
  [SMALL_STATE(66)] = 1458,
  [SMALL_STATE(67)] = 1471,
  [SMALL_STATE(68)] = 1484,
  [SMALL_STATE(69)] = 1497,
  [SMALL_STATE(70)] = 1510,
  [SMALL_STATE(71)] = 1523,
  [SMALL_STATE(72)] = 1536,
  [SMALL_STATE(73)] = 1549,
  [SMALL_STATE(74)] = 1572,
  [SMALL_STATE(75)] = 1584,
  [SMALL_STATE(76)] = 1596,
  [SMALL_STATE(77)] = 1616,
  [SMALL_STATE(78)] = 1636,
  [SMALL_STATE(79)] = 1648,
  [SMALL_STATE(80)] = 1665,
  [SMALL_STATE(81)] = 1679,
  [SMALL_STATE(82)] = 1690,
  [SMALL_STATE(83)] = 1701,
  [SMALL_STATE(84)] = 1710,
  [SMALL_STATE(85)] = 1719,
  [SMALL_STATE(86)] = 1730,
  [SMALL_STATE(87)] = 1738,
  [SMALL_STATE(88)] = 1746,
  [SMALL_STATE(89)] = 1754,
  [SMALL_STATE(90)] = 1762,
  [SMALL_STATE(91)] = 1770,
  [SMALL_STATE(92)] = 1778,
  [SMALL_STATE(93)] = 1786,
  [SMALL_STATE(94)] = 1794,
  [SMALL_STATE(95)] = 1802,
  [SMALL_STATE(96)] = 1810,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(73),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(79),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(77),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__name_list_repeat1, 2, .production_id = 6),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__name_list_repeat1, 2, .production_id = 6),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__name_list_repeat1, 2, .production_id = 6), SHIFT_REPEAT(88),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__name_list, 2, .production_id = 4),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__name_list, 2, .production_id = 4),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__name_list, 1, .production_id = 1),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__name_list, 1, .production_id = 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__name_list_repeat1, 2, .production_id = 5),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__name_list_repeat1, 2, .production_id = 5),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_expression, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 3),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(78),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(75),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(32),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bind_declaration, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 3, .production_id = 3),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 2, .production_id = 2),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bind_declaration_repeat1, 2),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bind_declaration_repeat1, 2), SHIFT_REPEAT(76),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bind_declaration, 3),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 4, .production_id = 7),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 5, .production_id = 11),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_charseq_size, 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bind_item, 5, .production_id = 17),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forward_type, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 4, .production_id = 8),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 6, .production_id = 14),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bind_item, 4, .production_id = 5),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bind_item, 3, .production_id = 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 6, .production_id = 15),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 5, .production_id = 13),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 8, .production_id = 19),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 7, .production_id = 18),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 5, .production_id = 12),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 4, .production_id = 9),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 6, .production_id = 16),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 4, .production_id = 10),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__backslash_escapes, 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 1),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_attr, 1),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pervasive_attr, 1),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [254] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_turing_external_scanner_create(void);
void tree_sitter_turing_external_scanner_destroy(void *);
bool tree_sitter_turing_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_turing_external_scanner_serialize(void *, char *);
void tree_sitter_turing_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_turing(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_turing_external_scanner_create,
      tree_sitter_turing_external_scanner_destroy,
      tree_sitter_turing_external_scanner_scan,
      tree_sitter_turing_external_scanner_serialize,
      tree_sitter_turing_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
