#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 46
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 31
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
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
  anon_sym_forward = 11,
  anon_sym_pervasive = 12,
  anon_sym_STAR = 13,
  anon_sym_unqualified = 14,
  anon_sym_TILDE = 15,
  anon_sym_DOT = 16,
  anon_sym_register = 17,
  anon_sym_cheat = 18,
  anon_sym_opaque = 19,
  sym_source_file = 20,
  sym__statement = 21,
  sym_constvar_declaration = 22,
  sym_type_declaration = 23,
  sym__expression = 24,
  sym__type = 25,
  sym_primitive_type = 26,
  sym_forward_type = 27,
  sym_pervasive_attr = 28,
  sym_register_attr = 29,
  aux_sym_source_file_repeat1 = 30,
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
  [anon_sym_forward] = "forward",
  [anon_sym_pervasive] = "pervasive",
  [anon_sym_STAR] = "*",
  [anon_sym_unqualified] = "unqualified",
  [anon_sym_TILDE] = "~",
  [anon_sym_DOT] = ".",
  [anon_sym_register] = "register",
  [anon_sym_cheat] = "cheat",
  [anon_sym_opaque] = "opaque",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_constvar_declaration] = "constvar_declaration",
  [sym_type_declaration] = "type_declaration",
  [sym__expression] = "_expression",
  [sym__type] = "_type",
  [sym_primitive_type] = "primitive_type",
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
  [anon_sym_forward] = anon_sym_forward,
  [anon_sym_pervasive] = anon_sym_pervasive,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_unqualified] = anon_sym_unqualified,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_register] = anon_sym_register,
  [anon_sym_cheat] = anon_sym_cheat,
  [anon_sym_opaque] = anon_sym_opaque,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_constvar_declaration] = sym_constvar_declaration,
  [sym_type_declaration] = sym_type_declaration,
  [sym__expression] = sym__expression,
  [sym__type] = sym__type,
  [sym_primitive_type] = sym_primitive_type,
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
  [anon_sym_forward] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pervasive] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
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
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == ';') ADVANCE(3);
      if (lookahead == '~') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
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
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
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
      if (lookahead == 'b') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(2);
      if (lookahead == 'f') ADVANCE(3);
      if (lookahead == 'o') ADVANCE(4);
      if (lookahead == 'p') ADVANCE(5);
      if (lookahead == 'r') ADVANCE(6);
      if (lookahead == 't') ADVANCE(7);
      if (lookahead == 'u') ADVANCE(8);
      if (lookahead == 'v') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 2:
      if (lookahead == 'h') ADVANCE(11);
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 3:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 4:
      if (lookahead == 'p') ADVANCE(14);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 7:
      if (lookahead == 'y') ADVANCE(17);
      END_STATE();
    case 8:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 10:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 12:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 13:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 16:
      if (lookahead == 'g') ADVANCE(26);
      END_STATE();
    case 17:
      if (lookahead == 'p') ADVANCE(27);
      END_STATE();
    case 18:
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 'q') ADVANCE(29);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 22:
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 23:
      if (lookahead == 'w') ADVANCE(34);
      END_STATE();
    case 24:
      if (lookahead == 'q') ADVANCE(35);
      END_STATE();
    case 25:
      if (lookahead == 'v') ADVANCE(36);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 29:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 35:
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 37:
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_unit);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_cheat);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 46:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(56);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_opaque);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_forward);
      END_STATE();
    case 57:
      if (lookahead == 'v') ADVANCE(60);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 59:
      if (lookahead == 'f') ADVANCE(62);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_register);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_pervasive);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_unqualified);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
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
    [anon_sym_forward] = ACTIONS(1),
    [anon_sym_pervasive] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_unqualified] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_register] = ACTIONS(1),
    [anon_sym_cheat] = ACTIONS(1),
    [anon_sym_opaque] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(43),
    [sym__statement] = STATE(3),
    [sym_constvar_declaration] = STATE(27),
    [sym_type_declaration] = STATE(27),
    [aux_sym_source_file_repeat1] = STATE(3),
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
    ACTIONS(11), 1,
      anon_sym_type,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 2,
      anon_sym_const,
      anon_sym_var,
    STATE(4), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(27), 2,
      sym_constvar_declaration,
      sym_type_declaration,
  [22] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      anon_sym_type,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 2,
      anon_sym_const,
      anon_sym_var,
    STATE(5), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(27), 2,
      sym_constvar_declaration,
      sym_type_declaration,
  [44] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      anon_sym_type,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 2,
      anon_sym_const,
      anon_sym_var,
    STATE(5), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(27), 2,
      sym_constvar_declaration,
      sym_type_declaration,
  [66] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(22), 1,
      anon_sym_type,
    ACTIONS(19), 2,
      anon_sym_const,
      anon_sym_var,
    STATE(5), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(27), 2,
      sym_constvar_declaration,
      sym_type_declaration,
  [88] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(27), 1,
      anon_sym_COLON,
    ACTIONS(29), 1,
      anon_sym_COLON_EQ,
    ACTIONS(25), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
  [105] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(33), 1,
      anon_sym_COLON,
    ACTIONS(35), 1,
      anon_sym_COLON_EQ,
    ACTIONS(31), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
  [122] = 4,
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
  [139] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_pervasive,
    ACTIONS(47), 1,
      anon_sym_STAR,
    ACTIONS(49), 1,
      anon_sym_register,
    STATE(31), 1,
      sym_pervasive_attr,
    STATE(40), 1,
      sym_register_attr,
  [161] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(53), 1,
      anon_sym_COLON_EQ,
    ACTIONS(51), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
  [175] = 3,
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
  [189] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(61), 1,
      anon_sym_COLON_EQ,
    ACTIONS(59), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
  [203] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(63), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON_EQ,
      anon_sym_type,
  [215] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(65), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON_EQ,
      anon_sym_type,
  [227] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(67), 1,
      anon_sym_boolean,
    ACTIONS(69), 1,
      anon_sym_forward,
    STATE(28), 3,
      sym__type,
      sym_primitive_type,
      sym_forward_type,
  [242] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(67), 1,
      anon_sym_boolean,
    ACTIONS(69), 1,
      anon_sym_forward,
    STATE(22), 3,
      sym__type,
      sym_primitive_type,
      sym_forward_type,
  [257] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(71), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
  [268] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(73), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
  [279] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(67), 1,
      anon_sym_boolean,
    ACTIONS(69), 1,
      anon_sym_forward,
    STATE(12), 3,
      sym__type,
      sym_primitive_type,
      sym_forward_type,
  [294] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(75), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
  [305] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(77), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
  [316] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(79), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
  [327] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(67), 1,
      anon_sym_boolean,
    ACTIONS(69), 1,
      anon_sym_forward,
    STATE(10), 3,
      sym__type,
      sym_primitive_type,
      sym_forward_type,
  [342] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(81), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
  [353] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(67), 1,
      anon_sym_boolean,
    ACTIONS(69), 1,
      anon_sym_forward,
    STATE(11), 3,
      sym__type,
      sym_primitive_type,
      sym_forward_type,
  [368] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(83), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
  [379] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(87), 1,
      anon_sym_SEMI,
    ACTIONS(85), 4,
      ts_builtin_sym_end,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
  [392] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(89), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
  [403] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(91), 4,
      ts_builtin_sym_end,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
  [413] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_pervasive,
    ACTIONS(47), 1,
      anon_sym_STAR,
    ACTIONS(93), 1,
      sym_identifier,
    STATE(45), 1,
      sym_pervasive_attr,
  [429] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(49), 1,
      anon_sym_register,
    ACTIONS(95), 1,
      sym_identifier,
    STATE(44), 1,
      sym_register_attr,
  [442] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(97), 1,
      sym_identifier,
    STATE(20), 1,
      sym__expression,
  [452] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(99), 1,
      sym_identifier,
    STATE(21), 1,
      sym__expression,
  [462] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(101), 2,
      anon_sym_register,
      sym_identifier,
  [470] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(103), 1,
      sym_identifier,
    STATE(26), 1,
      sym__expression,
  [480] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(105), 1,
      sym_identifier,
    STATE(18), 1,
      sym__expression,
  [490] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(107), 1,
      sym_identifier,
    STATE(24), 1,
      sym__expression,
  [500] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(109), 1,
      sym_identifier,
    STATE(17), 1,
      sym__expression,
  [510] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(111), 1,
      anon_sym_COLON,
  [517] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(113), 1,
      sym_identifier,
  [524] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      sym_identifier,
  [531] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(117), 1,
      anon_sym_COLON,
  [538] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
  [545] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(121), 1,
      sym_identifier,
  [552] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(123), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 44,
  [SMALL_STATE(5)] = 66,
  [SMALL_STATE(6)] = 88,
  [SMALL_STATE(7)] = 105,
  [SMALL_STATE(8)] = 122,
  [SMALL_STATE(9)] = 139,
  [SMALL_STATE(10)] = 161,
  [SMALL_STATE(11)] = 175,
  [SMALL_STATE(12)] = 189,
  [SMALL_STATE(13)] = 203,
  [SMALL_STATE(14)] = 215,
  [SMALL_STATE(15)] = 227,
  [SMALL_STATE(16)] = 242,
  [SMALL_STATE(17)] = 257,
  [SMALL_STATE(18)] = 268,
  [SMALL_STATE(19)] = 279,
  [SMALL_STATE(20)] = 294,
  [SMALL_STATE(21)] = 305,
  [SMALL_STATE(22)] = 316,
  [SMALL_STATE(23)] = 327,
  [SMALL_STATE(24)] = 342,
  [SMALL_STATE(25)] = 353,
  [SMALL_STATE(26)] = 368,
  [SMALL_STATE(27)] = 379,
  [SMALL_STATE(28)] = 392,
  [SMALL_STATE(29)] = 403,
  [SMALL_STATE(30)] = 413,
  [SMALL_STATE(31)] = 429,
  [SMALL_STATE(32)] = 442,
  [SMALL_STATE(33)] = 452,
  [SMALL_STATE(34)] = 462,
  [SMALL_STATE(35)] = 470,
  [SMALL_STATE(36)] = 480,
  [SMALL_STATE(37)] = 490,
  [SMALL_STATE(38)] = 500,
  [SMALL_STATE(39)] = 510,
  [SMALL_STATE(40)] = 517,
  [SMALL_STATE(41)] = 524,
  [SMALL_STATE(42)] = 531,
  [SMALL_STATE(43)] = 538,
  [SMALL_STATE(44)] = 545,
  [SMALL_STATE(45)] = 552,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(30),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 3, .production_id = 2),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 4, .production_id = 5),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 2, .production_id = 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 6, .production_id = 9),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 5, .production_id = 6),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 4, .production_id = 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forward_type, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 8, .production_id = 12),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 7, .production_id = 11),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 6, .production_id = 10),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 6, .production_id = 8),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 5, .production_id = 6),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 4, .production_id = 4),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 5, .production_id = 7),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 4, .production_id = 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pervasive_attr, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register_attr, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [119] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
};

#ifdef __cplusplus
extern "C" {
#endif
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
