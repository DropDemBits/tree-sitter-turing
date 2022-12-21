#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 66
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 71
#define ALIAS_COUNT 0
#define TOKEN_COUNT 53
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 13

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
  anon_sym_DQUOTE = 10,
  anon_sym_DQUOTE2 = 11,
  anon_sym_SQUOTE = 12,
  anon_sym_SQUOTE2 = 13,
  anon_sym_BSLASH = 14,
  aux_sym__backslash_escapes_token1 = 15,
  aux_sym__backslash_escapes_token2 = 16,
  aux_sym__backslash_escapes_token3 = 17,
  aux_sym__backslash_escapes_token4 = 18,
  aux_sym__backslash_escapes_token5 = 19,
  sym__caret_escapes = 20,
  anon_sym_true = 21,
  anon_sym_false = 22,
  sym_integer_literal = 23,
  anon_sym_boolean = 24,
  anon_sym_addressint = 25,
  anon_sym_int = 26,
  anon_sym_int1 = 27,
  anon_sym_int2 = 28,
  anon_sym_int4 = 29,
  anon_sym_nat = 30,
  anon_sym_nat1 = 31,
  anon_sym_nat2 = 32,
  anon_sym_nat4 = 33,
  anon_sym_real = 34,
  anon_sym_real4 = 35,
  anon_sym_real8 = 36,
  anon_sym_char = 37,
  anon_sym_string = 38,
  anon_sym_LPAREN = 39,
  anon_sym_STAR = 40,
  anon_sym_RPAREN = 41,
  anon_sym_forward = 42,
  anon_sym_pervasive = 43,
  anon_sym_unqualified = 44,
  anon_sym_TILDE = 45,
  anon_sym_DOT = 46,
  sym_register_attr = 47,
  sym_cheat_attr = 48,
  sym_opaque_attr = 49,
  sym_block_comment = 50,
  sym__string_content = 51,
  sym_real_literal = 52,
  sym_source_file = 53,
  sym__statement = 54,
  sym_constvar_declaration = 55,
  sym_type_declaration = 56,
  sym__expression = 57,
  sym_literal_expression = 58,
  sym_string_literal = 59,
  sym_char_literal = 60,
  sym_escape_sequence = 61,
  sym__backslash_escapes = 62,
  sym_boolean_literal = 63,
  sym__type = 64,
  sym_primitive_type = 65,
  sym_charseq_size = 66,
  sym_forward_type = 67,
  sym_pervasive_attr = 68,
  aux_sym_source_file_repeat1 = 69,
  aux_sym_string_literal_repeat1 = 70,
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
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
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
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
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
  [aux_sym_source_file_repeat1] = {
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
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 3},
  [9] = {.index = 14, .length = 2},
  [10] = {.index = 16, .length = 2},
  [11] = {.index = 18, .length = 3},
  [12] = {.index = 21, .length = 3},
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
    {field_name, 2},
    {field_type_spec, 4},
  [9] =
    {field_initializer, 4},
    {field_name, 2},
  [11] =
    {field_initializer, 5},
    {field_name, 1},
    {field_type_spec, 3},
  [14] =
    {field_name, 3},
    {field_type_spec, 5},
  [16] =
    {field_initializer, 5},
    {field_name, 3},
  [18] =
    {field_initializer, 6},
    {field_name, 2},
    {field_type_spec, 4},
  [21] =
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
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '%') ADVANCE(9);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == '(') ADVANCE(28);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == ';') ADVANCE(10);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == '^') ADVANCE(18);
      if (lookahead == '~') ADVANCE(31);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '%') ADVANCE(9);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == '^') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '%') ADVANCE(9);
      if (lookahead == '\'') ADVANCE(15);
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 3:
      if (lookahead == '%') ADVANCE(9);
      if (lookahead == '\\') ADVANCE(17);
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
          lookahead == '^') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 5:
      if (('?' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 7:
      if (eof) ADVANCE(8);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '%') ADVANCE(9);
      if (lookahead == '\'') ADVANCE(15);
      if (lookahead == '(') ADVANCE(28);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == ';') ADVANCE(10);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == '^') ADVANCE(18);
      if (lookahead == '~') ADVANCE(31);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
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
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym__backslash_escapes_token1);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym__backslash_escapes_token3);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym__backslash_escapes_token3);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(22);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym__backslash_escapes_token3);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(20);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym__backslash_escapes_token3);
      if (lookahead == '#') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym__backslash_escapes_token3);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(19);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym__backslash_escapes_token3);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(23);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__caret_escapes);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '#') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
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
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 4:
      if (lookahead == 'h') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(aux_sym__backslash_escapes_token2);
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 6:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(aux_sym__backslash_escapes_token2);
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 8:
      if (lookahead == 'p') ADVANCE(26);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym__backslash_escapes_token2);
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 11:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym__backslash_escapes_token2);
      if (lookahead == 'r') ADVANCE(30);
      if (lookahead == 'y') ADVANCE(31);
      END_STATE();
    case 13:
      if (lookahead == 'n') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(34);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym__backslash_escapes_token2);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym__backslash_escapes_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(36);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(38);
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 23:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 27:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(47);
      if (lookahead == 'g') ADVANCE(48);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 30:
      if (lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 31:
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(52);
      if (lookahead == 'q') ADVANCE(53);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym__backslash_escapes_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym__backslash_escapes_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 40:
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 41:
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 42:
      if (lookahead == 'w') ADVANCE(63);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '1') ADVANCE(64);
      if (lookahead == '2') ADVANCE(65);
      if (lookahead == '4') ADVANCE(66);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_nat);
      if (lookahead == '1') ADVANCE(67);
      if (lookahead == '2') ADVANCE(68);
      if (lookahead == '4') ADVANCE(69);
      END_STATE();
    case 45:
      if (lookahead == 'q') ADVANCE(70);
      END_STATE();
    case 46:
      if (lookahead == 'v') ADVANCE(71);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 53:
      if (lookahead == 'u') ADVANCE(78);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym__backslash_escapes_token4);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym__backslash_escapes_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_int1);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_int2);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_int4);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_nat1);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_nat2);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_nat4);
      END_STATE();
    case 70:
      if (lookahead == 'u') ADVANCE(86);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_real);
      if (lookahead == '4') ADVANCE(88);
      if (lookahead == '8') ADVANCE(89);
      END_STATE();
    case 73:
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_unit);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym__backslash_escapes_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      END_STATE();
    case 80:
      if (lookahead == 's') ADVANCE(94);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_cheat_attr);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 85:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 87:
      if (lookahead == 's') ADVANCE(98);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_real4);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_real8);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 91:
      if (lookahead == 'g') ADVANCE(100);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym__backslash_escapes_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(102);
      END_STATE();
    case 94:
      if (lookahead == 's') ADVANCE(103);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 96:
      if (lookahead == 'd') ADVANCE(105);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_opaque_attr);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym__backslash_escapes_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_forward);
      END_STATE();
    case 106:
      if (lookahead == 'v') ADVANCE(111);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 108:
      if (lookahead == 'f') ADVANCE(113);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym__backslash_escapes_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(114);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_register_attr);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym__backslash_escapes_token5);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_pervasive);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_addressint);
      END_STATE();
    case 119:
      if (lookahead == 'd') ADVANCE(120);
      END_STATE();
    case 120:
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
  [14] = {.lex_state = 0, .external_lex_state = 2},
  [15] = {.lex_state = 0, .external_lex_state = 2},
  [16] = {.lex_state = 0, .external_lex_state = 2},
  [17] = {.lex_state = 0, .external_lex_state = 2},
  [18] = {.lex_state = 1, .external_lex_state = 4},
  [19] = {.lex_state = 0, .external_lex_state = 2},
  [20] = {.lex_state = 1, .external_lex_state = 4},
  [21] = {.lex_state = 1, .external_lex_state = 4},
  [22] = {.lex_state = 0, .external_lex_state = 2},
  [23] = {.lex_state = 0, .external_lex_state = 2},
  [24] = {.lex_state = 1, .external_lex_state = 4},
  [25] = {.lex_state = 0, .external_lex_state = 2},
  [26] = {.lex_state = 1, .external_lex_state = 4},
  [27] = {.lex_state = 0, .external_lex_state = 2},
  [28] = {.lex_state = 0, .external_lex_state = 2},
  [29] = {.lex_state = 0, .external_lex_state = 2},
  [30] = {.lex_state = 0, .external_lex_state = 2},
  [31] = {.lex_state = 0, .external_lex_state = 2},
  [32] = {.lex_state = 0, .external_lex_state = 2},
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
  [45] = {.lex_state = 4, .external_lex_state = 2},
  [46] = {.lex_state = 1, .external_lex_state = 4},
  [47] = {.lex_state = 0, .external_lex_state = 2},
  [48] = {.lex_state = 0, .external_lex_state = 2},
  [49] = {.lex_state = 0, .external_lex_state = 2},
  [50] = {.lex_state = 0, .external_lex_state = 2},
  [51] = {.lex_state = 0, .external_lex_state = 2},
  [52] = {.lex_state = 1, .external_lex_state = 4},
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
  [64] = {.lex_state = 0, .external_lex_state = 2},
  [65] = {.lex_state = 0, .external_lex_state = 2},
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
    [sym_source_file] = STATE(59),
    [sym__statement] = STATE(15),
    [sym_constvar_declaration] = STATE(50),
    [sym_type_declaration] = STATE(50),
    [aux_sym_source_file_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_unit] = ACTIONS(7),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(9),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_type] = ACTIONS(13),
    [sym_block_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(21), 1,
      anon_sym_forward,
    STATE(53), 1,
      sym__type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(19), 2,
      anon_sym_char,
      anon_sym_string,
    STATE(30), 2,
      sym_primitive_type,
      sym_forward_type,
    ACTIONS(17), 3,
      anon_sym_int,
      anon_sym_nat,
      anon_sym_real,
    ACTIONS(15), 10,
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
    ACTIONS(21), 1,
      anon_sym_forward,
    STATE(34), 1,
      sym__type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(19), 2,
      anon_sym_char,
      anon_sym_string,
    STATE(30), 2,
      sym_primitive_type,
      sym_forward_type,
    ACTIONS(17), 3,
      anon_sym_int,
      anon_sym_nat,
      anon_sym_real,
    ACTIONS(15), 10,
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
    ACTIONS(21), 1,
      anon_sym_forward,
    STATE(49), 1,
      sym__type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(19), 2,
      anon_sym_char,
      anon_sym_string,
    STATE(30), 2,
      sym_primitive_type,
      sym_forward_type,
    ACTIONS(17), 3,
      anon_sym_int,
      anon_sym_nat,
      anon_sym_real,
    ACTIONS(15), 10,
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
    ACTIONS(21), 1,
      anon_sym_forward,
    STATE(27), 1,
      sym__type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(19), 2,
      anon_sym_char,
      anon_sym_string,
    STATE(30), 2,
      sym_primitive_type,
      sym_forward_type,
    ACTIONS(17), 3,
      anon_sym_int,
      anon_sym_nat,
      anon_sym_real,
    ACTIONS(15), 10,
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
    ACTIONS(21), 1,
      anon_sym_forward,
    STATE(29), 1,
      sym__type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(19), 2,
      anon_sym_char,
      anon_sym_string,
    STATE(30), 2,
      sym_primitive_type,
      sym_forward_type,
    ACTIONS(17), 3,
      anon_sym_int,
      anon_sym_nat,
      anon_sym_real,
    ACTIONS(15), 10,
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
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_STAR,
    STATE(35), 1,
      sym_literal_expression,
    STATE(61), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      sym_real_literal,
      sym_integer_literal,
    STATE(31), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [216] = 9,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    STATE(35), 1,
      sym_literal_expression,
    STATE(54), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      sym_real_literal,
      sym_integer_literal,
    STATE(31), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [249] = 9,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    STATE(35), 1,
      sym_literal_expression,
    STATE(43), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      sym_real_literal,
      sym_integer_literal,
    STATE(31), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [282] = 9,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    STATE(35), 1,
      sym_literal_expression,
    STATE(47), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      sym_real_literal,
      sym_integer_literal,
    STATE(31), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [315] = 9,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    STATE(35), 1,
      sym_literal_expression,
    STATE(51), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      sym_real_literal,
      sym_integer_literal,
    STATE(31), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [348] = 9,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    STATE(35), 1,
      sym_literal_expression,
    STATE(55), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      sym_real_literal,
      sym_integer_literal,
    STATE(31), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [381] = 9,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    STATE(35), 1,
      sym_literal_expression,
    STATE(44), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      sym_real_literal,
      sym_integer_literal,
    STATE(31), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [414] = 7,
    ACTIONS(13), 1,
      anon_sym_type,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(11), 2,
      anon_sym_const,
      anon_sym_var,
    STATE(16), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(50), 2,
      sym_constvar_declaration,
      sym_type_declaration,
  [440] = 7,
    ACTIONS(13), 1,
      anon_sym_type,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 1,
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
    STATE(50), 2,
      sym_constvar_declaration,
      sym_type_declaration,
  [466] = 7,
    ACTIONS(13), 1,
      anon_sym_type,
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
    STATE(17), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(50), 2,
      sym_constvar_declaration,
      sym_type_declaration,
  [492] = 7,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      anon_sym_SEMI,
    ACTIONS(51), 1,
      anon_sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(48), 2,
      anon_sym_const,
      anon_sym_var,
    STATE(17), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(50), 2,
      sym_constvar_declaration,
      sym_type_declaration,
  [518] = 7,
    ACTIONS(56), 1,
      anon_sym_BSLASH,
    ACTIONS(59), 1,
      sym__caret_escapes,
    ACTIONS(62), 1,
      sym__string_content,
    STATE(46), 1,
      sym__backslash_escapes,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(54), 2,
      anon_sym_DQUOTE2,
      anon_sym_SQUOTE2,
    STATE(18), 2,
      sym_escape_sequence,
      aux_sym_string_literal_repeat1,
  [543] = 4,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    STATE(28), 1,
      sym_charseq_size,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(65), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON_EQ,
      anon_sym_type,
  [562] = 7,
    ACTIONS(69), 1,
      anon_sym_SQUOTE2,
    ACTIONS(71), 1,
      anon_sym_BSLASH,
    ACTIONS(73), 1,
      sym__caret_escapes,
    ACTIONS(75), 1,
      sym__string_content,
    STATE(46), 1,
      sym__backslash_escapes,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(18), 2,
      sym_escape_sequence,
      aux_sym_string_literal_repeat1,
  [586] = 7,
    ACTIONS(71), 1,
      anon_sym_BSLASH,
    ACTIONS(73), 1,
      sym__caret_escapes,
    ACTIONS(77), 1,
      anon_sym_SQUOTE2,
    ACTIONS(79), 1,
      sym__string_content,
    STATE(46), 1,
      sym__backslash_escapes,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(20), 2,
      sym_escape_sequence,
      aux_sym_string_literal_repeat1,
  [610] = 4,
    ACTIONS(83), 1,
      anon_sym_COLON,
    ACTIONS(85), 1,
      anon_sym_COLON_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(81), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
  [628] = 4,
    ACTIONS(89), 1,
      anon_sym_COLON,
    ACTIONS(91), 1,
      anon_sym_COLON_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(87), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
  [646] = 7,
    ACTIONS(71), 1,
      anon_sym_BSLASH,
    ACTIONS(73), 1,
      sym__caret_escapes,
    ACTIONS(75), 1,
      sym__string_content,
    ACTIONS(93), 1,
      anon_sym_DQUOTE2,
    STATE(46), 1,
      sym__backslash_escapes,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(18), 2,
      sym_escape_sequence,
      aux_sym_string_literal_repeat1,
  [670] = 4,
    ACTIONS(97), 1,
      anon_sym_COLON,
    ACTIONS(99), 1,
      anon_sym_COLON_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(95), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
  [688] = 7,
    ACTIONS(71), 1,
      anon_sym_BSLASH,
    ACTIONS(73), 1,
      sym__caret_escapes,
    ACTIONS(101), 1,
      anon_sym_DQUOTE2,
    ACTIONS(103), 1,
      sym__string_content,
    STATE(46), 1,
      sym__backslash_escapes,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(24), 2,
      sym_escape_sequence,
      aux_sym_string_literal_repeat1,
  [712] = 3,
    ACTIONS(107), 1,
      anon_sym_COLON_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(105), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
  [727] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(109), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON_EQ,
      anon_sym_type,
  [740] = 3,
    ACTIONS(113), 1,
      anon_sym_COLON_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(111), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
  [755] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(115), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON_EQ,
      anon_sym_type,
  [768] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(117), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_RPAREN,
  [781] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(119), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_RPAREN,
  [794] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(121), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_RPAREN,
  [807] = 3,
    ACTIONS(125), 1,
      anon_sym_COLON_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(123), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
  [822] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(121), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_RPAREN,
  [835] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(127), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_RPAREN,
  [848] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(129), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_RPAREN,
  [861] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(131), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_RPAREN,
  [874] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(65), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON_EQ,
      anon_sym_type,
  [887] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(133), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_RPAREN,
  [900] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(135), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON_EQ,
      anon_sym_type,
  [913] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(137), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON_EQ,
      anon_sym_type,
  [926] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(139), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
  [938] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(141), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
  [950] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(143), 5,
      aux_sym__backslash_escapes_token1,
      aux_sym__backslash_escapes_token2,
      aux_sym__backslash_escapes_token3,
      aux_sym__backslash_escapes_token4,
      aux_sym__backslash_escapes_token5,
  [962] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(145), 5,
      sym__string_content,
      anon_sym_DQUOTE2,
      anon_sym_SQUOTE2,
      anon_sym_BSLASH,
      sym__caret_escapes,
  [974] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(147), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
  [986] = 6,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(151), 1,
      anon_sym_STAR,
    ACTIONS(153), 1,
      anon_sym_pervasive,
    ACTIONS(155), 1,
      sym_register_attr,
    STATE(57), 1,
      sym_pervasive_attr,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1006] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(157), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
  [1018] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(159), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
  [1030] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(161), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
  [1042] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(163), 5,
      sym__string_content,
      anon_sym_DQUOTE2,
      anon_sym_SQUOTE2,
      anon_sym_BSLASH,
      sym__caret_escapes,
  [1054] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(165), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
  [1066] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(167), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
  [1078] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(169), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
  [1090] = 5,
    ACTIONS(151), 1,
      anon_sym_STAR,
    ACTIONS(153), 1,
      anon_sym_pervasive,
    ACTIONS(171), 1,
      sym_identifier,
    STATE(63), 1,
      sym_pervasive_attr,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1107] = 3,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(175), 1,
      sym_register_attr,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1118] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(177), 2,
      sym_register_attr,
      sym_identifier,
  [1127] = 2,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1135] = 2,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1143] = 2,
    ACTIONS(183), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1151] = 2,
    ACTIONS(185), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1159] = 2,
    ACTIONS(187), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1167] = 2,
    ACTIONS(189), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1175] = 2,
    ACTIONS(191), 1,
      anon_sym_COLON,
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
  [SMALL_STATE(15)] = 440,
  [SMALL_STATE(16)] = 466,
  [SMALL_STATE(17)] = 492,
  [SMALL_STATE(18)] = 518,
  [SMALL_STATE(19)] = 543,
  [SMALL_STATE(20)] = 562,
  [SMALL_STATE(21)] = 586,
  [SMALL_STATE(22)] = 610,
  [SMALL_STATE(23)] = 628,
  [SMALL_STATE(24)] = 646,
  [SMALL_STATE(25)] = 670,
  [SMALL_STATE(26)] = 688,
  [SMALL_STATE(27)] = 712,
  [SMALL_STATE(28)] = 727,
  [SMALL_STATE(29)] = 740,
  [SMALL_STATE(30)] = 755,
  [SMALL_STATE(31)] = 768,
  [SMALL_STATE(32)] = 781,
  [SMALL_STATE(33)] = 794,
  [SMALL_STATE(34)] = 807,
  [SMALL_STATE(35)] = 822,
  [SMALL_STATE(36)] = 835,
  [SMALL_STATE(37)] = 848,
  [SMALL_STATE(38)] = 861,
  [SMALL_STATE(39)] = 874,
  [SMALL_STATE(40)] = 887,
  [SMALL_STATE(41)] = 900,
  [SMALL_STATE(42)] = 913,
  [SMALL_STATE(43)] = 926,
  [SMALL_STATE(44)] = 938,
  [SMALL_STATE(45)] = 950,
  [SMALL_STATE(46)] = 962,
  [SMALL_STATE(47)] = 974,
  [SMALL_STATE(48)] = 986,
  [SMALL_STATE(49)] = 1006,
  [SMALL_STATE(50)] = 1018,
  [SMALL_STATE(51)] = 1030,
  [SMALL_STATE(52)] = 1042,
  [SMALL_STATE(53)] = 1054,
  [SMALL_STATE(54)] = 1066,
  [SMALL_STATE(55)] = 1078,
  [SMALL_STATE(56)] = 1090,
  [SMALL_STATE(57)] = 1107,
  [SMALL_STATE(58)] = 1118,
  [SMALL_STATE(59)] = 1127,
  [SMALL_STATE(60)] = 1135,
  [SMALL_STATE(61)] = 1143,
  [SMALL_STATE(62)] = 1151,
  [SMALL_STATE(63)] = 1159,
  [SMALL_STATE(64)] = 1167,
  [SMALL_STATE(65)] = 1175,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(56),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(45),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(46),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(18),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 3, .production_id = 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 2, .production_id = 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 4, .production_id = 5),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 5, .production_id = 6),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 4, .production_id = 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_expression, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 6, .production_id = 9),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_charseq_size, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forward_type, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 7, .production_id = 11),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 5, .production_id = 7),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 6, .production_id = 10),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 5, .production_id = 6),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 6, .production_id = 8),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__backslash_escapes, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 4, .production_id = 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 8, .production_id = 12),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 4, .production_id = 4),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pervasive_attr, 1),
  [179] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
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
