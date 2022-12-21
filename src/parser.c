#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 65
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 72
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
  anon_sym_register = 47,
  anon_sym_cheat = 48,
  anon_sym_opaque = 49,
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
  sym_register_attr = 69,
  aux_sym_source_file_repeat1 = 70,
  aux_sym_string_literal_repeat1 = 71,
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
  [anon_sym_register] = "register",
  [anon_sym_cheat] = "cheat",
  [anon_sym_opaque] = "opaque",
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
  [sym_register_attr] = "register_attr",
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
  [anon_sym_register] = anon_sym_register,
  [anon_sym_cheat] = anon_sym_cheat,
  [anon_sym_opaque] = anon_sym_opaque,
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
  [sym_register_attr] = sym_register_attr,
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
  [anon_sym_register] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cheat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_opaque] = {
    .visible = true,
    .named = false,
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
  [sym_register_attr] = {
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
      ACCEPT_TOKEN(anon_sym_cheat);
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
      ACCEPT_TOKEN(anon_sym_opaque);
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
      ACCEPT_TOKEN(anon_sym_register);
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
  [20] = {.lex_state = 0, .external_lex_state = 2},
  [21] = {.lex_state = 1, .external_lex_state = 4},
  [22] = {.lex_state = 1, .external_lex_state = 4},
  [23] = {.lex_state = 1, .external_lex_state = 4},
  [24] = {.lex_state = 0, .external_lex_state = 2},
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
  [41] = {.lex_state = 4, .external_lex_state = 2},
  [42] = {.lex_state = 1, .external_lex_state = 4},
  [43] = {.lex_state = 0, .external_lex_state = 2},
  [44] = {.lex_state = 0, .external_lex_state = 2},
  [45] = {.lex_state = 0, .external_lex_state = 2},
  [46] = {.lex_state = 0, .external_lex_state = 2},
  [47] = {.lex_state = 0, .external_lex_state = 2},
  [48] = {.lex_state = 0, .external_lex_state = 2},
  [49] = {.lex_state = 1, .external_lex_state = 4},
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
  [64] = {.lex_state = 0, .external_lex_state = 2},
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
    [anon_sym_register] = ACTIONS(1),
    [anon_sym_cheat] = ACTIONS(1),
    [anon_sym_opaque] = ACTIONS(1),
    [sym_block_comment] = ACTIONS(3),
    [sym__string_content] = ACTIONS(1),
    [sym_real_literal] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(58),
    [sym__statement] = STATE(14),
    [sym_constvar_declaration] = STATE(51),
    [sym_type_declaration] = STATE(51),
    [aux_sym_source_file_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_unit] = ACTIONS(7),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_const] = ACTIONS(9),
    [anon_sym_var] = ACTIONS(9),
    [anon_sym_type] = ACTIONS(11),
    [sym_block_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(19), 1,
      anon_sym_forward,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(17), 2,
      anon_sym_char,
      anon_sym_string,
    ACTIONS(15), 3,
      anon_sym_int,
      anon_sym_nat,
      anon_sym_real,
    STATE(27), 3,
      sym__type,
      sym_primitive_type,
      sym_forward_type,
    ACTIONS(13), 10,
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
  [34] = 6,
    ACTIONS(19), 1,
      anon_sym_forward,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(17), 2,
      anon_sym_char,
      anon_sym_string,
    ACTIONS(15), 3,
      anon_sym_int,
      anon_sym_nat,
      anon_sym_real,
    STATE(50), 3,
      sym__type,
      sym_primitive_type,
      sym_forward_type,
    ACTIONS(13), 10,
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
  [68] = 6,
    ACTIONS(19), 1,
      anon_sym_forward,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(17), 2,
      anon_sym_char,
      anon_sym_string,
    ACTIONS(15), 3,
      anon_sym_int,
      anon_sym_nat,
      anon_sym_real,
    STATE(29), 3,
      sym__type,
      sym_primitive_type,
      sym_forward_type,
    ACTIONS(13), 10,
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
  [102] = 6,
    ACTIONS(19), 1,
      anon_sym_forward,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(17), 2,
      anon_sym_char,
      anon_sym_string,
    ACTIONS(15), 3,
      anon_sym_int,
      anon_sym_nat,
      anon_sym_real,
    STATE(47), 3,
      sym__type,
      sym_primitive_type,
      sym_forward_type,
    ACTIONS(13), 10,
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
  [136] = 6,
    ACTIONS(19), 1,
      anon_sym_forward,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(17), 2,
      anon_sym_char,
      anon_sym_string,
    ACTIONS(15), 3,
      anon_sym_int,
      anon_sym_nat,
      anon_sym_real,
    STATE(40), 3,
      sym__type,
      sym_primitive_type,
      sym_forward_type,
    ACTIONS(13), 10,
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
  [170] = 9,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      sym_real_literal,
      sym_integer_literal,
    STATE(59), 2,
      sym__expression,
      sym_literal_expression,
    STATE(30), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [204] = 8,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      sym_real_literal,
      sym_integer_literal,
    STATE(46), 2,
      sym__expression,
      sym_literal_expression,
    STATE(30), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [235] = 8,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      sym_real_literal,
      sym_integer_literal,
    STATE(48), 2,
      sym__expression,
      sym_literal_expression,
    STATE(30), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [266] = 8,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      sym_real_literal,
      sym_integer_literal,
    STATE(44), 2,
      sym__expression,
      sym_literal_expression,
    STATE(30), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [297] = 8,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      sym_real_literal,
      sym_integer_literal,
    STATE(43), 2,
      sym__expression,
      sym_literal_expression,
    STATE(30), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [328] = 8,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      sym_real_literal,
      sym_integer_literal,
    STATE(45), 2,
      sym__expression,
      sym_literal_expression,
    STATE(30), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [359] = 8,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      sym_real_literal,
      sym_integer_literal,
    STATE(52), 2,
      sym__expression,
      sym_literal_expression,
    STATE(30), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [390] = 6,
    ACTIONS(11), 1,
      anon_sym_type,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(9), 2,
      anon_sym_const,
      anon_sym_var,
    STATE(17), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(51), 2,
      sym_constvar_declaration,
      sym_type_declaration,
  [413] = 6,
    ACTIONS(11), 1,
      anon_sym_type,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(9), 2,
      anon_sym_const,
      anon_sym_var,
    STATE(17), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(51), 2,
      sym_constvar_declaration,
      sym_type_declaration,
  [436] = 6,
    ACTIONS(11), 1,
      anon_sym_type,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(9), 2,
      anon_sym_const,
      anon_sym_var,
    STATE(15), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(51), 2,
      sym_constvar_declaration,
      sym_type_declaration,
  [459] = 6,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(54), 1,
      anon_sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(51), 2,
      anon_sym_const,
      anon_sym_var,
    STATE(17), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(51), 2,
      sym_constvar_declaration,
      sym_type_declaration,
  [482] = 7,
    ACTIONS(59), 1,
      anon_sym_BSLASH,
    ACTIONS(62), 1,
      sym__caret_escapes,
    ACTIONS(65), 1,
      sym__string_content,
    STATE(42), 1,
      sym__backslash_escapes,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(57), 2,
      anon_sym_DQUOTE2,
      anon_sym_SQUOTE2,
    STATE(18), 2,
      sym_escape_sequence,
      aux_sym_string_literal_repeat1,
  [507] = 4,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    STATE(39), 1,
      sym_charseq_size,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(68), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON_EQ,
      anon_sym_type,
  [526] = 4,
    ACTIONS(74), 1,
      anon_sym_COLON,
    ACTIONS(76), 1,
      anon_sym_COLON_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(72), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
  [544] = 7,
    ACTIONS(78), 1,
      anon_sym_SQUOTE2,
    ACTIONS(80), 1,
      anon_sym_BSLASH,
    ACTIONS(82), 1,
      sym__caret_escapes,
    ACTIONS(84), 1,
      sym__string_content,
    STATE(42), 1,
      sym__backslash_escapes,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(18), 2,
      sym_escape_sequence,
      aux_sym_string_literal_repeat1,
  [568] = 7,
    ACTIONS(80), 1,
      anon_sym_BSLASH,
    ACTIONS(82), 1,
      sym__caret_escapes,
    ACTIONS(84), 1,
      sym__string_content,
    ACTIONS(86), 1,
      anon_sym_DQUOTE2,
    STATE(42), 1,
      sym__backslash_escapes,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(18), 2,
      sym_escape_sequence,
      aux_sym_string_literal_repeat1,
  [592] = 7,
    ACTIONS(80), 1,
      anon_sym_BSLASH,
    ACTIONS(82), 1,
      sym__caret_escapes,
    ACTIONS(88), 1,
      anon_sym_DQUOTE2,
    ACTIONS(90), 1,
      sym__string_content,
    STATE(42), 1,
      sym__backslash_escapes,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(22), 2,
      sym_escape_sequence,
      aux_sym_string_literal_repeat1,
  [616] = 4,
    ACTIONS(94), 1,
      anon_sym_COLON,
    ACTIONS(96), 1,
      anon_sym_COLON_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(92), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
  [634] = 4,
    ACTIONS(100), 1,
      anon_sym_COLON,
    ACTIONS(102), 1,
      anon_sym_COLON_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(98), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
  [652] = 7,
    ACTIONS(80), 1,
      anon_sym_BSLASH,
    ACTIONS(82), 1,
      sym__caret_escapes,
    ACTIONS(104), 1,
      anon_sym_SQUOTE2,
    ACTIONS(106), 1,
      sym__string_content,
    STATE(42), 1,
      sym__backslash_escapes,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(21), 2,
      sym_escape_sequence,
      aux_sym_string_literal_repeat1,
  [676] = 3,
    ACTIONS(110), 1,
      anon_sym_COLON_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(108), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
  [691] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(112), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_RPAREN,
  [704] = 3,
    ACTIONS(116), 1,
      anon_sym_COLON_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(114), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
  [719] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(118), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_RPAREN,
  [732] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(120), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_RPAREN,
  [745] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(122), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_RPAREN,
  [758] = 7,
    ACTIONS(124), 1,
      sym_identifier,
    ACTIONS(126), 1,
      anon_sym_STAR,
    ACTIONS(128), 1,
      anon_sym_pervasive,
    ACTIONS(130), 1,
      anon_sym_register,
    STATE(55), 1,
      sym_pervasive_attr,
    STATE(62), 1,
      sym_register_attr,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [781] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(68), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON_EQ,
      anon_sym_type,
  [794] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(132), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_RPAREN,
  [807] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(134), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON_EQ,
      anon_sym_type,
  [820] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(136), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON_EQ,
      anon_sym_type,
  [833] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(138), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_RPAREN,
  [846] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(140), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON_EQ,
      anon_sym_type,
  [859] = 3,
    ACTIONS(144), 1,
      anon_sym_COLON_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(142), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
  [874] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(146), 5,
      aux_sym__backslash_escapes_token1,
      aux_sym__backslash_escapes_token2,
      aux_sym__backslash_escapes_token3,
      aux_sym__backslash_escapes_token4,
      aux_sym__backslash_escapes_token5,
  [886] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(148), 5,
      sym__string_content,
      anon_sym_DQUOTE2,
      anon_sym_SQUOTE2,
      anon_sym_BSLASH,
      sym__caret_escapes,
  [898] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(150), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
  [910] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(152), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
  [922] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(154), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
  [934] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(156), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
  [946] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(158), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
  [958] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(160), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
  [970] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(162), 5,
      sym__string_content,
      anon_sym_DQUOTE2,
      anon_sym_SQUOTE2,
      anon_sym_BSLASH,
      sym__caret_escapes,
  [982] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(164), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
  [994] = 3,
    ACTIONS(168), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(166), 4,
      ts_builtin_sym_end,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
  [1008] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(170), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
  [1020] = 5,
    ACTIONS(126), 1,
      anon_sym_STAR,
    ACTIONS(128), 1,
      anon_sym_pervasive,
    ACTIONS(172), 1,
      sym_identifier,
    STATE(64), 1,
      sym_pervasive_attr,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1037] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(174), 4,
      ts_builtin_sym_end,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
  [1048] = 4,
    ACTIONS(130), 1,
      anon_sym_register,
    ACTIONS(176), 1,
      sym_identifier,
    STATE(57), 1,
      sym_register_attr,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1062] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(178), 2,
      anon_sym_register,
      sym_identifier,
  [1071] = 2,
    ACTIONS(180), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1079] = 2,
    ACTIONS(182), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1087] = 2,
    ACTIONS(184), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1095] = 2,
    ACTIONS(186), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1103] = 2,
    ACTIONS(188), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1111] = 2,
    ACTIONS(190), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1119] = 2,
    ACTIONS(192), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1127] = 2,
    ACTIONS(194), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 68,
  [SMALL_STATE(5)] = 102,
  [SMALL_STATE(6)] = 136,
  [SMALL_STATE(7)] = 170,
  [SMALL_STATE(8)] = 204,
  [SMALL_STATE(9)] = 235,
  [SMALL_STATE(10)] = 266,
  [SMALL_STATE(11)] = 297,
  [SMALL_STATE(12)] = 328,
  [SMALL_STATE(13)] = 359,
  [SMALL_STATE(14)] = 390,
  [SMALL_STATE(15)] = 413,
  [SMALL_STATE(16)] = 436,
  [SMALL_STATE(17)] = 459,
  [SMALL_STATE(18)] = 482,
  [SMALL_STATE(19)] = 507,
  [SMALL_STATE(20)] = 526,
  [SMALL_STATE(21)] = 544,
  [SMALL_STATE(22)] = 568,
  [SMALL_STATE(23)] = 592,
  [SMALL_STATE(24)] = 616,
  [SMALL_STATE(25)] = 634,
  [SMALL_STATE(26)] = 652,
  [SMALL_STATE(27)] = 676,
  [SMALL_STATE(28)] = 691,
  [SMALL_STATE(29)] = 704,
  [SMALL_STATE(30)] = 719,
  [SMALL_STATE(31)] = 732,
  [SMALL_STATE(32)] = 745,
  [SMALL_STATE(33)] = 758,
  [SMALL_STATE(34)] = 781,
  [SMALL_STATE(35)] = 794,
  [SMALL_STATE(36)] = 807,
  [SMALL_STATE(37)] = 820,
  [SMALL_STATE(38)] = 833,
  [SMALL_STATE(39)] = 846,
  [SMALL_STATE(40)] = 859,
  [SMALL_STATE(41)] = 874,
  [SMALL_STATE(42)] = 886,
  [SMALL_STATE(43)] = 898,
  [SMALL_STATE(44)] = 910,
  [SMALL_STATE(45)] = 922,
  [SMALL_STATE(46)] = 934,
  [SMALL_STATE(47)] = 946,
  [SMALL_STATE(48)] = 958,
  [SMALL_STATE(49)] = 970,
  [SMALL_STATE(50)] = 982,
  [SMALL_STATE(51)] = 994,
  [SMALL_STATE(52)] = 1008,
  [SMALL_STATE(53)] = 1020,
  [SMALL_STATE(54)] = 1037,
  [SMALL_STATE(55)] = 1048,
  [SMALL_STATE(56)] = 1062,
  [SMALL_STATE(57)] = 1071,
  [SMALL_STATE(58)] = 1079,
  [SMALL_STATE(59)] = 1087,
  [SMALL_STATE(60)] = 1095,
  [SMALL_STATE(61)] = 1103,
  [SMALL_STATE(62)] = 1111,
  [SMALL_STATE(63)] = 1119,
  [SMALL_STATE(64)] = 1127,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(33),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(53),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(41),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(42),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(18),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 2, .production_id = 1),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 3, .production_id = 2),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 4, .production_id = 5),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 5, .production_id = 6),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 4, .production_id = 3),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_expression, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 3),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_charseq_size, 3),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forward_type, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 6, .production_id = 9),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 7, .production_id = 11),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 4, .production_id = 4),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 5, .production_id = 7),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 6, .production_id = 10),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 5, .production_id = 6),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 6, .production_id = 8),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__backslash_escapes, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 4, .production_id = 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 8, .production_id = 12),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pervasive_attr, 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [182] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register_attr, 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
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
