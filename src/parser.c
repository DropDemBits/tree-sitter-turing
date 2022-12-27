#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 85
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 78
#define ALIAS_COUNT 0
#define TOKEN_COUNT 56
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 14

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
  aux_sym_source_file_repeat1 = 75,
  aux_sym_bind_declaration_repeat1 = 76,
  aux_sym_string_literal_repeat1 = 77,
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
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_bind_declaration_repeat1] = "bind_declaration_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
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
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_bind_declaration_repeat1] = aux_sym_bind_declaration_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
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
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 1},
  [7] = {.index = 8, .length = 2},
  [8] = {.index = 10, .length = 2},
  [9] = {.index = 12, .length = 3},
  [10] = {.index = 15, .length = 2},
  [11] = {.index = 17, .length = 2},
  [12] = {.index = 19, .length = 3},
  [13] = {.index = 22, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_name, 2},
  [2] =
    {field_name, 1},
    {field_type_spec, 3},
  [4] =
    {field_initializer, 3},
    {field_name, 1},
  [6] =
    {field_name, 3},
  [7] =
    {field_name, 0},
  [8] =
    {field_name, 2},
    {field_type_spec, 4},
  [10] =
    {field_initializer, 4},
    {field_name, 2},
  [12] =
    {field_initializer, 5},
    {field_name, 1},
    {field_type_spec, 3},
  [15] =
    {field_name, 3},
    {field_type_spec, 5},
  [17] =
    {field_initializer, 5},
    {field_name, 3},
  [19] =
    {field_initializer, 6},
    {field_name, 2},
    {field_type_spec, 4},
  [22] =
    {field_initializer, 7},
    {field_name, 3},
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
  [7] = {.lex_state = 2, .external_lex_state = 3},
  [8] = {.lex_state = 2, .external_lex_state = 3},
  [9] = {.lex_state = 2, .external_lex_state = 3},
  [10] = {.lex_state = 2, .external_lex_state = 3},
  [11] = {.lex_state = 2, .external_lex_state = 3},
  [12] = {.lex_state = 2, .external_lex_state = 3},
  [13] = {.lex_state = 2, .external_lex_state = 3},
  [14] = {.lex_state = 2, .external_lex_state = 3},
  [15] = {.lex_state = 2, .external_lex_state = 3},
  [16] = {.lex_state = 2, .external_lex_state = 3},
  [17] = {.lex_state = 0, .external_lex_state = 2},
  [18] = {.lex_state = 0, .external_lex_state = 2},
  [19] = {.lex_state = 0, .external_lex_state = 2},
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
  [32] = {.lex_state = 0, .external_lex_state = 2},
  [33] = {.lex_state = 0, .external_lex_state = 2},
  [34] = {.lex_state = 0, .external_lex_state = 2},
  [35] = {.lex_state = 0, .external_lex_state = 2},
  [36] = {.lex_state = 1, .external_lex_state = 4},
  [37] = {.lex_state = 1, .external_lex_state = 4},
  [38] = {.lex_state = 0, .external_lex_state = 2},
  [39] = {.lex_state = 0, .external_lex_state = 2},
  [40] = {.lex_state = 0, .external_lex_state = 2},
  [41] = {.lex_state = 0, .external_lex_state = 2},
  [42] = {.lex_state = 1, .external_lex_state = 4},
  [43] = {.lex_state = 0, .external_lex_state = 2},
  [44] = {.lex_state = 0, .external_lex_state = 2},
  [45] = {.lex_state = 1, .external_lex_state = 4},
  [46] = {.lex_state = 1, .external_lex_state = 4},
  [47] = {.lex_state = 0, .external_lex_state = 2},
  [48] = {.lex_state = 0, .external_lex_state = 2},
  [49] = {.lex_state = 0, .external_lex_state = 2},
  [50] = {.lex_state = 0, .external_lex_state = 2},
  [51] = {.lex_state = 0, .external_lex_state = 2},
  [52] = {.lex_state = 0, .external_lex_state = 2},
  [53] = {.lex_state = 0, .external_lex_state = 2},
  [54] = {.lex_state = 0, .external_lex_state = 2},
  [55] = {.lex_state = 0, .external_lex_state = 2},
  [56] = {.lex_state = 0, .external_lex_state = 2},
  [57] = {.lex_state = 0, .external_lex_state = 2},
  [58] = {.lex_state = 0, .external_lex_state = 2},
  [59] = {.lex_state = 0, .external_lex_state = 2},
  [60] = {.lex_state = 0, .external_lex_state = 2},
  [61] = {.lex_state = 0, .external_lex_state = 2},
  [62] = {.lex_state = 0, .external_lex_state = 2},
  [63] = {.lex_state = 0, .external_lex_state = 2},
  [64] = {.lex_state = 4, .external_lex_state = 2},
  [65] = {.lex_state = 1, .external_lex_state = 4},
  [66] = {.lex_state = 0, .external_lex_state = 2},
  [67] = {.lex_state = 1, .external_lex_state = 4},
  [68] = {.lex_state = 0, .external_lex_state = 2},
  [69] = {.lex_state = 0, .external_lex_state = 2},
  [70] = {.lex_state = 0, .external_lex_state = 2},
  [71] = {.lex_state = 0, .external_lex_state = 2},
  [72] = {.lex_state = 0, .external_lex_state = 2},
  [73] = {.lex_state = 0, .external_lex_state = 2},
  [74] = {.lex_state = 0, .external_lex_state = 2},
  [75] = {.lex_state = 0, .external_lex_state = 2},
  [76] = {.lex_state = 0, .external_lex_state = 2},
  [77] = {.lex_state = 0, .external_lex_state = 2},
  [78] = {.lex_state = 0, .external_lex_state = 2},
  [79] = {.lex_state = 0, .external_lex_state = 2},
  [80] = {.lex_state = 0, .external_lex_state = 2},
  [81] = {.lex_state = 0, .external_lex_state = 2},
  [82] = {.lex_state = 0, .external_lex_state = 2},
  [83] = {.lex_state = 0, .external_lex_state = 2},
  [84] = {.lex_state = 0, .external_lex_state = 2},
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
    [sym_source_file] = STATE(78),
    [sym__statement] = STATE(19),
    [sym_constvar_declaration] = STATE(58),
    [sym_type_declaration] = STATE(58),
    [sym_bind_declaration] = STATE(58),
    [aux_sym_source_file_repeat1] = STATE(19),
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
    STATE(48), 1,
      sym__type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(21), 2,
      anon_sym_char,
      anon_sym_string,
    STATE(41), 2,
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
    STATE(59), 1,
      sym__type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(21), 2,
      anon_sym_char,
      anon_sym_string,
    STATE(41), 2,
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
    STATE(40), 1,
      sym__type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(21), 2,
      anon_sym_char,
      anon_sym_string,
    STATE(41), 2,
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
    STATE(50), 1,
      sym__type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(21), 2,
      anon_sym_char,
      anon_sym_string,
    STATE(41), 2,
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
    STATE(57), 1,
      sym__type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(21), 2,
      anon_sym_char,
      anon_sym_string,
    STATE(41), 2,
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
  [180] = 10,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_STAR,
    STATE(28), 1,
      sym_literal_expression,
    STATE(74), 1,
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
    STATE(35), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [216] = 9,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(28), 1,
      sym_literal_expression,
    STATE(55), 1,
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
    STATE(35), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [249] = 9,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(28), 1,
      sym_literal_expression,
    STATE(38), 1,
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
    STATE(35), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [282] = 9,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(28), 1,
      sym_literal_expression,
    STATE(54), 1,
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
    STATE(35), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [315] = 9,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(28), 1,
      sym_literal_expression,
    STATE(51), 1,
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
    STATE(35), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [348] = 9,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(28), 1,
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
    STATE(35), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [381] = 9,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(28), 1,
      sym_literal_expression,
    STATE(61), 1,
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
    STATE(35), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [414] = 9,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(28), 1,
      sym_literal_expression,
    STATE(60), 1,
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
    STATE(35), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [447] = 9,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(28), 1,
      sym_literal_expression,
    STATE(53), 1,
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
    STATE(35), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [480] = 9,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(28), 1,
      sym_literal_expression,
    STATE(44), 1,
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
    STATE(35), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [513] = 8,
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
    STATE(20), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(58), 3,
      sym_constvar_declaration,
      sym_type_declaration,
      sym_bind_declaration,
  [543] = 8,
    ACTIONS(13), 1,
      anon_sym_type,
    ACTIONS(15), 1,
      anon_sym_bind,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(11), 2,
      anon_sym_const,
      anon_sym_var,
    STATE(17), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(58), 3,
      sym_constvar_declaration,
      sym_type_declaration,
      sym_bind_declaration,
  [573] = 8,
    ACTIONS(13), 1,
      anon_sym_type,
    ACTIONS(15), 1,
      anon_sym_bind,
    ACTIONS(39), 1,
      anon_sym_SEMI,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(11), 2,
      anon_sym_const,
      anon_sym_var,
    STATE(20), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(58), 3,
      sym_constvar_declaration,
      sym_type_declaration,
      sym_bind_declaration,
  [603] = 8,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 1,
      anon_sym_SEMI,
    ACTIONS(53), 1,
      anon_sym_type,
    ACTIONS(56), 1,
      anon_sym_bind,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(50), 2,
      anon_sym_const,
      anon_sym_var,
    STATE(20), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(58), 3,
      sym_constvar_declaration,
      sym_type_declaration,
      sym_bind_declaration,
  [633] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    STATE(47), 1,
      sym_charseq_size,
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
  [653] = 4,
    ACTIONS(65), 1,
      anon_sym_COMMA,
    STATE(22), 1,
      aux_sym_bind_declaration_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(63), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
  [672] = 4,
    ACTIONS(70), 1,
      anon_sym_COLON,
    ACTIONS(72), 1,
      anon_sym_COLON_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(68), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
  [691] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(74), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [706] = 4,
    ACTIONS(78), 1,
      anon_sym_COMMA,
    STATE(31), 1,
      aux_sym_bind_declaration_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(76), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
  [725] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(80), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [740] = 4,
    ACTIONS(84), 1,
      anon_sym_COLON,
    ACTIONS(86), 1,
      anon_sym_COLON_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(82), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
  [759] = 2,
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
  [774] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(90), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [789] = 2,
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
  [804] = 4,
    ACTIONS(78), 1,
      anon_sym_COMMA,
    STATE(22), 1,
      aux_sym_bind_declaration_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(92), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
  [823] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(94), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [838] = 4,
    ACTIONS(98), 1,
      anon_sym_COLON,
    ACTIONS(100), 1,
      anon_sym_COLON_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(96), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
  [857] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(102), 8,
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
    ACTIONS(104), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [887] = 7,
    ACTIONS(108), 1,
      anon_sym_BSLASH,
    ACTIONS(111), 1,
      sym__caret_escapes,
    ACTIONS(114), 1,
      sym__string_content,
    STATE(65), 1,
      sym__backslash_escapes,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(106), 2,
      anon_sym_DQUOTE2,
      anon_sym_SQUOTE2,
    STATE(36), 2,
      sym_escape_sequence,
      aux_sym_string_literal_repeat1,
  [912] = 7,
    ACTIONS(117), 1,
      anon_sym_DQUOTE2,
    ACTIONS(119), 1,
      anon_sym_BSLASH,
    ACTIONS(121), 1,
      sym__caret_escapes,
    ACTIONS(123), 1,
      sym__string_content,
    STATE(65), 1,
      sym__backslash_escapes,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(46), 2,
      sym_escape_sequence,
      aux_sym_string_literal_repeat1,
  [936] = 2,
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
  [950] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(127), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON_EQ,
      anon_sym_type,
      anon_sym_bind,
  [964] = 3,
    ACTIONS(131), 1,
      anon_sym_COLON_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(129), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
  [980] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(133), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON_EQ,
      anon_sym_type,
      anon_sym_bind,
  [994] = 7,
    ACTIONS(119), 1,
      anon_sym_BSLASH,
    ACTIONS(121), 1,
      sym__caret_escapes,
    ACTIONS(135), 1,
      anon_sym_SQUOTE2,
    ACTIONS(137), 1,
      sym__string_content,
    STATE(65), 1,
      sym__backslash_escapes,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(45), 2,
      sym_escape_sequence,
      aux_sym_string_literal_repeat1,
  [1018] = 2,
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
  [1032] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(139), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
      anon_sym_COMMA,
  [1046] = 7,
    ACTIONS(119), 1,
      anon_sym_BSLASH,
    ACTIONS(121), 1,
      sym__caret_escapes,
    ACTIONS(141), 1,
      anon_sym_SQUOTE2,
    ACTIONS(143), 1,
      sym__string_content,
    STATE(65), 1,
      sym__backslash_escapes,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(36), 2,
      sym_escape_sequence,
      aux_sym_string_literal_repeat1,
  [1070] = 7,
    ACTIONS(119), 1,
      anon_sym_BSLASH,
    ACTIONS(121), 1,
      sym__caret_escapes,
    ACTIONS(143), 1,
      sym__string_content,
    ACTIONS(145), 1,
      anon_sym_DQUOTE2,
    STATE(65), 1,
      sym__backslash_escapes,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(36), 2,
      sym_escape_sequence,
      aux_sym_string_literal_repeat1,
  [1094] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(147), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON_EQ,
      anon_sym_type,
      anon_sym_bind,
  [1108] = 3,
    ACTIONS(151), 1,
      anon_sym_COLON_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(149), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
  [1124] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(153), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON_EQ,
      anon_sym_type,
      anon_sym_bind,
  [1138] = 3,
    ACTIONS(157), 1,
      anon_sym_COLON_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(155), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
  [1154] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(159), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
      anon_sym_COMMA,
  [1168] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(63), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
      anon_sym_COMMA,
  [1182] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(161), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
  [1195] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(163), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
  [1208] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(165), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
  [1221] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(167), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
  [1234] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(169), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
  [1247] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(171), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
  [1260] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(173), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
  [1273] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(175), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
  [1286] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(177), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
  [1299] = 6,
    ACTIONS(179), 1,
      sym_identifier,
    ACTIONS(181), 1,
      anon_sym_STAR,
    ACTIONS(183), 1,
      anon_sym_pervasive,
    ACTIONS(185), 1,
      sym_register_attr,
    STATE(70), 1,
      sym_pervasive_attr,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1319] = 6,
    ACTIONS(187), 1,
      sym_identifier,
    ACTIONS(189), 1,
      anon_sym_var,
    ACTIONS(191), 1,
      sym_register_attr,
    STATE(25), 1,
      sym_bind_item,
    STATE(72), 1,
      sym_var_attr,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1339] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(193), 5,
      aux_sym__backslash_escapes_token1,
      aux_sym__backslash_escapes_token2,
      aux_sym__backslash_escapes_token3,
      aux_sym__backslash_escapes_token4,
      aux_sym__backslash_escapes_token5,
  [1351] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(195), 5,
      sym__string_content,
      anon_sym_DQUOTE2,
      anon_sym_SQUOTE2,
      anon_sym_BSLASH,
      sym__caret_escapes,
  [1363] = 6,
    ACTIONS(187), 1,
      sym_identifier,
    ACTIONS(189), 1,
      anon_sym_var,
    ACTIONS(191), 1,
      sym_register_attr,
    STATE(52), 1,
      sym_bind_item,
    STATE(72), 1,
      sym_var_attr,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1383] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(197), 5,
      sym__string_content,
      anon_sym_DQUOTE2,
      anon_sym_SQUOTE2,
      anon_sym_BSLASH,
      sym__caret_escapes,
  [1395] = 5,
    ACTIONS(181), 1,
      anon_sym_STAR,
    ACTIONS(183), 1,
      anon_sym_pervasive,
    ACTIONS(199), 1,
      sym_identifier,
    STATE(75), 1,
      sym_pervasive_attr,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1412] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(201), 2,
      sym_register_attr,
      sym_identifier,
  [1421] = 3,
    ACTIONS(203), 1,
      sym_identifier,
    ACTIONS(205), 1,
      sym_register_attr,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1432] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(207), 2,
      sym_register_attr,
      sym_identifier,
  [1441] = 3,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(211), 1,
      sym_register_attr,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1452] = 2,
    ACTIONS(213), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1460] = 2,
    ACTIONS(215), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1468] = 2,
    ACTIONS(217), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1476] = 2,
    ACTIONS(219), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1484] = 2,
    ACTIONS(221), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1492] = 2,
    ACTIONS(223), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1500] = 2,
    ACTIONS(225), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1508] = 2,
    ACTIONS(227), 1,
      anon_sym_to,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1516] = 2,
    ACTIONS(229), 1,
      anon_sym_to,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1524] = 2,
    ACTIONS(231), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1532] = 2,
    ACTIONS(233), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1540] = 2,
    ACTIONS(235), 1,
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
  [SMALL_STATE(9)] = 249,
  [SMALL_STATE(10)] = 282,
  [SMALL_STATE(11)] = 315,
  [SMALL_STATE(12)] = 348,
  [SMALL_STATE(13)] = 381,
  [SMALL_STATE(14)] = 414,
  [SMALL_STATE(15)] = 447,
  [SMALL_STATE(16)] = 480,
  [SMALL_STATE(17)] = 513,
  [SMALL_STATE(18)] = 543,
  [SMALL_STATE(19)] = 573,
  [SMALL_STATE(20)] = 603,
  [SMALL_STATE(21)] = 633,
  [SMALL_STATE(22)] = 653,
  [SMALL_STATE(23)] = 672,
  [SMALL_STATE(24)] = 691,
  [SMALL_STATE(25)] = 706,
  [SMALL_STATE(26)] = 725,
  [SMALL_STATE(27)] = 740,
  [SMALL_STATE(28)] = 759,
  [SMALL_STATE(29)] = 774,
  [SMALL_STATE(30)] = 789,
  [SMALL_STATE(31)] = 804,
  [SMALL_STATE(32)] = 823,
  [SMALL_STATE(33)] = 838,
  [SMALL_STATE(34)] = 857,
  [SMALL_STATE(35)] = 872,
  [SMALL_STATE(36)] = 887,
  [SMALL_STATE(37)] = 912,
  [SMALL_STATE(38)] = 936,
  [SMALL_STATE(39)] = 950,
  [SMALL_STATE(40)] = 964,
  [SMALL_STATE(41)] = 980,
  [SMALL_STATE(42)] = 994,
  [SMALL_STATE(43)] = 1018,
  [SMALL_STATE(44)] = 1032,
  [SMALL_STATE(45)] = 1046,
  [SMALL_STATE(46)] = 1070,
  [SMALL_STATE(47)] = 1094,
  [SMALL_STATE(48)] = 1108,
  [SMALL_STATE(49)] = 1124,
  [SMALL_STATE(50)] = 1138,
  [SMALL_STATE(51)] = 1154,
  [SMALL_STATE(52)] = 1168,
  [SMALL_STATE(53)] = 1182,
  [SMALL_STATE(54)] = 1195,
  [SMALL_STATE(55)] = 1208,
  [SMALL_STATE(56)] = 1221,
  [SMALL_STATE(57)] = 1234,
  [SMALL_STATE(58)] = 1247,
  [SMALL_STATE(59)] = 1260,
  [SMALL_STATE(60)] = 1273,
  [SMALL_STATE(61)] = 1286,
  [SMALL_STATE(62)] = 1299,
  [SMALL_STATE(63)] = 1319,
  [SMALL_STATE(64)] = 1339,
  [SMALL_STATE(65)] = 1351,
  [SMALL_STATE(66)] = 1363,
  [SMALL_STATE(67)] = 1383,
  [SMALL_STATE(68)] = 1395,
  [SMALL_STATE(69)] = 1412,
  [SMALL_STATE(70)] = 1421,
  [SMALL_STATE(71)] = 1432,
  [SMALL_STATE(72)] = 1441,
  [SMALL_STATE(73)] = 1452,
  [SMALL_STATE(74)] = 1460,
  [SMALL_STATE(75)] = 1468,
  [SMALL_STATE(76)] = 1476,
  [SMALL_STATE(77)] = 1484,
  [SMALL_STATE(78)] = 1492,
  [SMALL_STATE(79)] = 1500,
  [SMALL_STATE(80)] = 1508,
  [SMALL_STATE(81)] = 1516,
  [SMALL_STATE(82)] = 1524,
  [SMALL_STATE(83)] = 1532,
  [SMALL_STATE(84)] = 1540,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(62),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(68),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(63),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bind_declaration_repeat1, 2),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bind_declaration_repeat1, 2), SHIFT_REPEAT(66),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 3, .production_id = 2),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bind_declaration, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 4, .production_id = 5),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bind_declaration, 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 2, .production_id = 1),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_expression, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(64),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(65),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(36),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bind_item, 5, .production_id = 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forward_type, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 4, .production_id = 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bind_item, 4, .production_id = 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 6, .production_id = 10),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_charseq_size, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 5, .production_id = 7),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bind_item, 3, .production_id = 6),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 4, .production_id = 4),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 6, .production_id = 11),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 5, .production_id = 8),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 7, .production_id = 12),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 4, .production_id = 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 5, .production_id = 7),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 8, .production_id = 13),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 6, .production_id = 9),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__backslash_escapes, 2),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pervasive_attr, 1),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_attr, 1),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [223] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
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
