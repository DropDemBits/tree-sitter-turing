#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 51
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 51
#define ALIAS_COUNT 0
#define TOKEN_COUNT 39
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
  anon_sym_boolean = 10,
  anon_sym_addressint = 11,
  anon_sym_int = 12,
  anon_sym_int1 = 13,
  anon_sym_int2 = 14,
  anon_sym_int4 = 15,
  anon_sym_nat = 16,
  anon_sym_nat1 = 17,
  anon_sym_nat2 = 18,
  anon_sym_nat4 = 19,
  anon_sym_real = 20,
  anon_sym_real4 = 21,
  anon_sym_real8 = 22,
  anon_sym_char = 23,
  anon_sym_string = 24,
  anon_sym_LPAREN = 25,
  anon_sym_STAR = 26,
  anon_sym_RPAREN = 27,
  anon_sym_forward = 28,
  anon_sym_pervasive = 29,
  anon_sym_unqualified = 30,
  anon_sym_TILDE = 31,
  anon_sym_DOT = 32,
  anon_sym_register = 33,
  anon_sym_cheat = 34,
  anon_sym_opaque = 35,
  sym_block_comment = 36,
  sym_string_content = 37,
  sym_real_literal = 38,
  sym_source_file = 39,
  sym__statement = 40,
  sym_constvar_declaration = 41,
  sym_type_declaration = 42,
  sym__expression = 43,
  sym__type = 44,
  sym_primitive_type = 45,
  sym_charseq_size = 46,
  sym_forward_type = 47,
  sym_pervasive_attr = 48,
  sym_register_attr = 49,
  aux_sym_source_file_repeat1 = 50,
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
  [sym_string_content] = "string_content",
  [sym_real_literal] = "real_literal",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_constvar_declaration] = "constvar_declaration",
  [sym_type_declaration] = "type_declaration",
  [sym__expression] = "_expression",
  [sym__type] = "_type",
  [sym_primitive_type] = "primitive_type",
  [sym_charseq_size] = "charseq_size",
  [sym_forward_type] = "forward_type",
  [sym_pervasive_attr] = "pervasive_attr",
  [sym_register_attr] = "register_attr",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
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
  [sym_string_content] = sym_string_content,
  [sym_real_literal] = sym_real_literal,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_constvar_declaration] = sym_constvar_declaration,
  [sym_type_declaration] = sym_type_declaration,
  [sym__expression] = sym__expression,
  [sym__type] = sym__type,
  [sym_primitive_type] = sym_primitive_type,
  [sym_charseq_size] = sym_charseq_size,
  [sym_forward_type] = sym_forward_type,
  [sym_pervasive_attr] = sym_pervasive_attr,
  [sym_register_attr] = sym_register_attr,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
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
  [sym_string_content] = {
    .visible = true,
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
      if (eof) ADVANCE(1);
      if (lookahead == '%') ADVANCE(2);
      if (lookahead == '(') ADVANCE(6);
      if (lookahead == ')') ADVANCE(8);
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == ';') ADVANCE(3);
      if (lookahead == '~') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(5);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
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
      if (lookahead == 'a') ADVANCE(1);
      if (lookahead == 'b') ADVANCE(2);
      if (lookahead == 'c') ADVANCE(3);
      if (lookahead == 'f') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(5);
      if (lookahead == 'n') ADVANCE(6);
      if (lookahead == 'o') ADVANCE(7);
      if (lookahead == 'p') ADVANCE(8);
      if (lookahead == 'r') ADVANCE(9);
      if (lookahead == 's') ADVANCE(10);
      if (lookahead == 't') ADVANCE(11);
      if (lookahead == 'u') ADVANCE(12);
      if (lookahead == 'v') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'd') ADVANCE(14);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 3:
      if (lookahead == 'h') ADVANCE(16);
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 4:
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 5:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 7:
      if (lookahead == 'p') ADVANCE(21);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 10:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 11:
      if (lookahead == 'y') ADVANCE(25);
      END_STATE();
    case 12:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 18:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 19:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 20:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(38);
      if (lookahead == 'g') ADVANCE(39);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 25:
      if (lookahead == 'p') ADVANCE(41);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 'q') ADVANCE(43);
      END_STATE();
    case 27:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 32:
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 33:
      if (lookahead == 'w') ADVANCE(50);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '1') ADVANCE(51);
      if (lookahead == '2') ADVANCE(52);
      if (lookahead == '4') ADVANCE(53);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_nat);
      if (lookahead == '1') ADVANCE(54);
      if (lookahead == '2') ADVANCE(55);
      if (lookahead == '4') ADVANCE(56);
      END_STATE();
    case 36:
      if (lookahead == 'q') ADVANCE(57);
      END_STATE();
    case 37:
      if (lookahead == 'v') ADVANCE(58);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 43:
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_int1);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_int2);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_int4);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_nat1);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_nat2);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_nat4);
      END_STATE();
    case 57:
      if (lookahead == 'u') ADVANCE(70);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_real);
      if (lookahead == '4') ADVANCE(72);
      if (lookahead == '8') ADVANCE(73);
      END_STATE();
    case 60:
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_unit);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(77);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_cheat);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 69:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 71:
      if (lookahead == 's') ADVANCE(81);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_real4);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_real8);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 75:
      if (lookahead == 'g') ADVANCE(83);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 77:
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_opaque);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_forward);
      END_STATE();
    case 88:
      if (lookahead == 'v') ADVANCE(92);
      END_STATE();
    case 89:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 90:
      if (lookahead == 'f') ADVANCE(94);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_register);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_pervasive);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_addressint);
      END_STATE();
    case 99:
      if (lookahead == 'd') ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_unqualified);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
};

enum {
  ts_external_token_block_comment = 0,
  ts_external_token_string_content = 1,
  ts_external_token_real_literal = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_block_comment] = sym_block_comment,
  [ts_external_token_string_content] = sym_string_content,
  [ts_external_token_real_literal] = sym_real_literal,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_block_comment] = true,
    [ts_external_token_string_content] = true,
    [ts_external_token_real_literal] = true,
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
    [sym_block_comment] = ACTIONS(1),
    [sym_string_content] = ACTIONS(1),
    [sym_real_literal] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(43),
    [sym__statement] = STATE(8),
    [sym_constvar_declaration] = STATE(31),
    [sym_type_declaration] = STATE(31),
    [aux_sym_source_file_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_unit] = ACTIONS(7),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_const] = ACTIONS(9),
    [anon_sym_var] = ACTIONS(9),
    [anon_sym_type] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(19), 1,
      anon_sym_forward,
    ACTIONS(17), 2,
      anon_sym_char,
      anon_sym_string,
    ACTIONS(15), 3,
      anon_sym_int,
      anon_sym_nat,
      anon_sym_real,
    STATE(21), 3,
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
  [33] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(19), 1,
      anon_sym_forward,
    ACTIONS(17), 2,
      anon_sym_char,
      anon_sym_string,
    ACTIONS(15), 3,
      anon_sym_int,
      anon_sym_nat,
      anon_sym_real,
    STATE(18), 3,
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
  [66] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(19), 1,
      anon_sym_forward,
    ACTIONS(17), 2,
      anon_sym_char,
      anon_sym_string,
    ACTIONS(15), 3,
      anon_sym_int,
      anon_sym_nat,
      anon_sym_real,
    STATE(30), 3,
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
  [99] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(19), 1,
      anon_sym_forward,
    ACTIONS(17), 2,
      anon_sym_char,
      anon_sym_string,
    ACTIONS(15), 3,
      anon_sym_int,
      anon_sym_nat,
      anon_sym_real,
    STATE(15), 3,
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
  [132] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(19), 1,
      anon_sym_forward,
    ACTIONS(17), 2,
      anon_sym_char,
      anon_sym_string,
    ACTIONS(15), 3,
      anon_sym_int,
      anon_sym_nat,
      anon_sym_real,
    STATE(23), 3,
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
  [165] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      anon_sym_type,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 2,
      anon_sym_const,
      anon_sym_var,
    STATE(9), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(31), 2,
      sym_constvar_declaration,
      sym_type_declaration,
  [187] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      anon_sym_type,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 2,
      anon_sym_const,
      anon_sym_var,
    STATE(11), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(31), 2,
      sym_constvar_declaration,
      sym_type_declaration,
  [209] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      anon_sym_type,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 2,
      anon_sym_const,
      anon_sym_var,
    STATE(11), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(31), 2,
      sym_constvar_declaration,
      sym_type_declaration,
  [231] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    STATE(19), 1,
      sym_charseq_size,
    ACTIONS(25), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON_EQ,
      anon_sym_type,
  [249] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(34), 1,
      anon_sym_type,
    ACTIONS(31), 2,
      anon_sym_const,
      anon_sym_var,
    STATE(11), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(31), 2,
      sym_constvar_declaration,
      sym_type_declaration,
  [271] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(39), 1,
      anon_sym_COLON,
    ACTIONS(41), 1,
      anon_sym_COLON_EQ,
    ACTIONS(37), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
  [288] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_COLON,
    ACTIONS(47), 1,
      anon_sym_COLON_EQ,
    ACTIONS(43), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
  [305] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(51), 1,
      anon_sym_COLON,
    ACTIONS(53), 1,
      anon_sym_COLON_EQ,
    ACTIONS(49), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
  [322] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(57), 1,
      anon_sym_COLON_EQ,
    ACTIONS(55), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
  [336] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(59), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON_EQ,
      anon_sym_type,
  [348] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(61), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON_EQ,
      anon_sym_type,
  [360] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(65), 1,
      anon_sym_COLON_EQ,
    ACTIONS(63), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
  [374] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(67), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON_EQ,
      anon_sym_type,
  [386] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(25), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON_EQ,
      anon_sym_type,
  [398] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(71), 1,
      anon_sym_COLON_EQ,
    ACTIONS(69), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
  [412] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_STAR,
    ACTIONS(77), 1,
      anon_sym_pervasive,
    ACTIONS(79), 1,
      anon_sym_register,
    STATE(34), 1,
      sym_pervasive_attr,
    STATE(47), 1,
      sym_register_attr,
  [434] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(81), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
  [445] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(83), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
  [456] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(85), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
  [467] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(87), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
  [478] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(89), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
  [489] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(91), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
  [500] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(93), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
  [511] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(95), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
  [522] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(99), 1,
      anon_sym_SEMI,
    ACTIONS(97), 4,
      ts_builtin_sym_end,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
  [535] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(101), 4,
      ts_builtin_sym_end,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
  [545] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(75), 1,
      anon_sym_STAR,
    ACTIONS(77), 1,
      anon_sym_pervasive,
    ACTIONS(103), 1,
      sym_identifier,
    STATE(48), 1,
      sym_pervasive_attr,
  [561] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(79), 1,
      anon_sym_register,
    ACTIONS(105), 1,
      sym_identifier,
    STATE(44), 1,
      sym_register_attr,
  [574] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(46), 1,
      sym__expression,
    ACTIONS(107), 2,
      anon_sym_STAR,
      sym_identifier,
  [585] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(109), 1,
      sym_identifier,
    STATE(29), 1,
      sym__expression,
  [595] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(111), 1,
      sym_identifier,
    STATE(27), 1,
      sym__expression,
  [605] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(113), 1,
      sym_identifier,
    STATE(28), 1,
      sym__expression,
  [615] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(26), 1,
      sym__expression,
  [625] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(117), 2,
      anon_sym_register,
      sym_identifier,
  [633] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(119), 1,
      sym_identifier,
    STATE(24), 1,
      sym__expression,
  [643] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(121), 1,
      sym_identifier,
    STATE(25), 1,
      sym__expression,
  [653] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
  [660] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(125), 1,
      sym_identifier,
  [667] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(127), 1,
      anon_sym_COLON,
  [674] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(129), 1,
      anon_sym_RPAREN,
  [681] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(131), 1,
      sym_identifier,
  [688] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(133), 1,
      sym_identifier,
  [695] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(135), 1,
      sym_identifier,
  [702] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(137), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 33,
  [SMALL_STATE(4)] = 66,
  [SMALL_STATE(5)] = 99,
  [SMALL_STATE(6)] = 132,
  [SMALL_STATE(7)] = 165,
  [SMALL_STATE(8)] = 187,
  [SMALL_STATE(9)] = 209,
  [SMALL_STATE(10)] = 231,
  [SMALL_STATE(11)] = 249,
  [SMALL_STATE(12)] = 271,
  [SMALL_STATE(13)] = 288,
  [SMALL_STATE(14)] = 305,
  [SMALL_STATE(15)] = 322,
  [SMALL_STATE(16)] = 336,
  [SMALL_STATE(17)] = 348,
  [SMALL_STATE(18)] = 360,
  [SMALL_STATE(19)] = 374,
  [SMALL_STATE(20)] = 386,
  [SMALL_STATE(21)] = 398,
  [SMALL_STATE(22)] = 412,
  [SMALL_STATE(23)] = 434,
  [SMALL_STATE(24)] = 445,
  [SMALL_STATE(25)] = 456,
  [SMALL_STATE(26)] = 467,
  [SMALL_STATE(27)] = 478,
  [SMALL_STATE(28)] = 489,
  [SMALL_STATE(29)] = 500,
  [SMALL_STATE(30)] = 511,
  [SMALL_STATE(31)] = 522,
  [SMALL_STATE(32)] = 535,
  [SMALL_STATE(33)] = 545,
  [SMALL_STATE(34)] = 561,
  [SMALL_STATE(35)] = 574,
  [SMALL_STATE(36)] = 585,
  [SMALL_STATE(37)] = 595,
  [SMALL_STATE(38)] = 605,
  [SMALL_STATE(39)] = 615,
  [SMALL_STATE(40)] = 625,
  [SMALL_STATE(41)] = 633,
  [SMALL_STATE(42)] = 643,
  [SMALL_STATE(43)] = 653,
  [SMALL_STATE(44)] = 660,
  [SMALL_STATE(45)] = 667,
  [SMALL_STATE(46)] = 674,
  [SMALL_STATE(47)] = 681,
  [SMALL_STATE(48)] = 688,
  [SMALL_STATE(49)] = 695,
  [SMALL_STATE(50)] = 702,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(33),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 4, .production_id = 5),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 2, .production_id = 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 3, .production_id = 2),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 5, .production_id = 6),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forward_type, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_charseq_size, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 6, .production_id = 9),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 4, .production_id = 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 4, .production_id = 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 5, .production_id = 7),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 8, .production_id = 12),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 7, .production_id = 11),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 4, .production_id = 4),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 6, .production_id = 10),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 6, .production_id = 8),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 5, .production_id = 6),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pervasive_attr, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [123] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register_attr, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
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
