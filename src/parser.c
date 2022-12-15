#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 37
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 28
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
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
  anon_sym_boolean = 9,
  anon_sym_pervasive = 10,
  anon_sym_STAR = 11,
  anon_sym_unqualified = 12,
  anon_sym_TILDE = 13,
  anon_sym_DOT = 14,
  anon_sym_register = 15,
  anon_sym_cheat = 16,
  anon_sym_forward = 17,
  anon_sym_opaque = 18,
  sym_source_file = 19,
  sym__statement = 20,
  sym_constvar_declaration = 21,
  sym__expression = 22,
  sym__type = 23,
  sym_primitive_type = 24,
  sym_pervasive_attr = 25,
  sym_register_attr = 26,
  aux_sym_source_file_repeat1 = 27,
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
  [anon_sym_boolean] = "boolean",
  [anon_sym_pervasive] = "pervasive",
  [anon_sym_STAR] = "*",
  [anon_sym_unqualified] = "unqualified",
  [anon_sym_TILDE] = "~",
  [anon_sym_DOT] = ".",
  [anon_sym_register] = "register",
  [anon_sym_cheat] = "cheat",
  [anon_sym_forward] = "forward",
  [anon_sym_opaque] = "opaque",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_constvar_declaration] = "constvar_declaration",
  [sym__expression] = "_expression",
  [sym__type] = "_type",
  [sym_primitive_type] = "primitive_type",
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
  [anon_sym_boolean] = anon_sym_boolean,
  [anon_sym_pervasive] = anon_sym_pervasive,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_unqualified] = anon_sym_unqualified,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_register] = anon_sym_register,
  [anon_sym_cheat] = anon_sym_cheat,
  [anon_sym_forward] = anon_sym_forward,
  [anon_sym_opaque] = anon_sym_opaque,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_constvar_declaration] = sym_constvar_declaration,
  [sym__expression] = sym__expression,
  [sym__type] = sym__type,
  [sym_primitive_type] = sym_primitive_type,
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
  [anon_sym_boolean] = {
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
  [anon_sym_forward] = {
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
      if (lookahead == 'u') ADVANCE(7);
      if (lookahead == 'v') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 2:
      if (lookahead == 'h') ADVANCE(10);
      if (lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 3:
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 4:
      if (lookahead == 'p') ADVANCE(13);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 7:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 9:
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 12:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 14:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 15:
      if (lookahead == 'g') ADVANCE(24);
      END_STATE();
    case 16:
      if (lookahead == 'i') ADVANCE(25);
      if (lookahead == 'q') ADVANCE(26);
      END_STATE();
    case 17:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 20:
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 21:
      if (lookahead == 'w') ADVANCE(31);
      END_STATE();
    case 22:
      if (lookahead == 'q') ADVANCE(32);
      END_STATE();
    case 23:
      if (lookahead == 'v') ADVANCE(33);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 26:
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 32:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 34:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_unit);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_cheat);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 42:
      if (lookahead == 's') ADVANCE(48);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(52);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_opaque);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_forward);
      END_STATE();
    case 53:
      if (lookahead == 'v') ADVANCE(56);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 55:
      if (lookahead == 'f') ADVANCE(58);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_register);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_pervasive);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(62);
      END_STATE();
    case 62:
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
    [anon_sym_boolean] = ACTIONS(1),
    [anon_sym_pervasive] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_unqualified] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_register] = ACTIONS(1),
    [anon_sym_cheat] = ACTIONS(1),
    [anon_sym_forward] = ACTIONS(1),
    [anon_sym_opaque] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(34),
    [sym__statement] = STATE(7),
    [sym_constvar_declaration] = STATE(19),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_unit] = ACTIONS(7),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_const] = ACTIONS(9),
    [anon_sym_var] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      anon_sym_COLON,
    ACTIONS(15), 1,
      anon_sym_COLON_EQ,
    ACTIONS(11), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
  [16] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    STATE(19), 1,
      sym_constvar_declaration,
    ACTIONS(9), 2,
      anon_sym_const,
      anon_sym_var,
    STATE(8), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
  [34] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_pervasive,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_register,
    STATE(21), 1,
      sym_pervasive_attr,
    STATE(36), 1,
      sym_register_attr,
  [56] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_COLON,
    ACTIONS(31), 1,
      anon_sym_COLON_EQ,
    ACTIONS(27), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
  [72] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(35), 1,
      anon_sym_COLON,
    ACTIONS(37), 1,
      anon_sym_COLON_EQ,
    ACTIONS(33), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
  [88] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    STATE(19), 1,
      sym_constvar_declaration,
    ACTIONS(9), 2,
      anon_sym_const,
      anon_sym_var,
    STATE(9), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
  [106] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    STATE(19), 1,
      sym_constvar_declaration,
    ACTIONS(9), 2,
      anon_sym_const,
      anon_sym_var,
    STATE(9), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
  [124] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    STATE(19), 1,
      sym_constvar_declaration,
    ACTIONS(43), 2,
      anon_sym_const,
      anon_sym_var,
    STATE(9), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
  [142] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(48), 1,
      anon_sym_COLON_EQ,
    ACTIONS(46), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
  [155] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(50), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON_EQ,
  [166] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(54), 1,
      anon_sym_COLON_EQ,
    ACTIONS(52), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
  [179] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(58), 1,
      anon_sym_COLON_EQ,
    ACTIONS(56), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
  [192] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(60), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
  [202] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(62), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
  [212] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(64), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
  [222] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(66), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
  [232] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(68), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
  [242] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(72), 1,
      anon_sym_SEMI,
    ACTIONS(70), 3,
      ts_builtin_sym_end,
      anon_sym_const,
      anon_sym_var,
  [254] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(74), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
  [264] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(25), 1,
      anon_sym_register,
    ACTIONS(76), 1,
      sym_identifier,
    STATE(35), 1,
      sym_register_attr,
  [277] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(78), 1,
      anon_sym_boolean,
    STATE(10), 2,
      sym__type,
      sym_primitive_type,
  [288] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(80), 3,
      ts_builtin_sym_end,
      anon_sym_const,
      anon_sym_var,
  [297] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(78), 1,
      anon_sym_boolean,
    STATE(12), 2,
      sym__type,
      sym_primitive_type,
  [308] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(78), 1,
      anon_sym_boolean,
    STATE(13), 2,
      sym__type,
      sym_primitive_type,
  [319] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(82), 2,
      anon_sym_register,
      sym_identifier,
  [327] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(84), 1,
      sym_identifier,
    STATE(15), 1,
      sym__expression,
  [337] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(86), 1,
      sym_identifier,
    STATE(20), 1,
      sym__expression,
  [347] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(88), 1,
      sym_identifier,
    STATE(16), 1,
      sym__expression,
  [357] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(90), 1,
      sym_identifier,
    STATE(14), 1,
      sym__expression,
  [367] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(92), 1,
      sym_identifier,
    STATE(17), 1,
      sym__expression,
  [377] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(94), 1,
      sym_identifier,
    STATE(18), 1,
      sym__expression,
  [387] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(96), 1,
      sym_identifier,
  [394] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
  [401] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(100), 1,
      sym_identifier,
  [408] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(102), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 16,
  [SMALL_STATE(4)] = 34,
  [SMALL_STATE(5)] = 56,
  [SMALL_STATE(6)] = 72,
  [SMALL_STATE(7)] = 88,
  [SMALL_STATE(8)] = 106,
  [SMALL_STATE(9)] = 124,
  [SMALL_STATE(10)] = 142,
  [SMALL_STATE(11)] = 155,
  [SMALL_STATE(12)] = 166,
  [SMALL_STATE(13)] = 179,
  [SMALL_STATE(14)] = 192,
  [SMALL_STATE(15)] = 202,
  [SMALL_STATE(16)] = 212,
  [SMALL_STATE(17)] = 222,
  [SMALL_STATE(18)] = 232,
  [SMALL_STATE(19)] = 242,
  [SMALL_STATE(20)] = 254,
  [SMALL_STATE(21)] = 264,
  [SMALL_STATE(22)] = 277,
  [SMALL_STATE(23)] = 288,
  [SMALL_STATE(24)] = 297,
  [SMALL_STATE(25)] = 308,
  [SMALL_STATE(26)] = 319,
  [SMALL_STATE(27)] = 327,
  [SMALL_STATE(28)] = 337,
  [SMALL_STATE(29)] = 347,
  [SMALL_STATE(30)] = 357,
  [SMALL_STATE(31)] = 367,
  [SMALL_STATE(32)] = 377,
  [SMALL_STATE(33)] = 387,
  [SMALL_STATE(34)] = 394,
  [SMALL_STATE(35)] = 401,
  [SMALL_STATE(36)] = 408,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 2, .production_id = 1),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 4, .production_id = 5),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 3, .production_id = 2),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 6, .production_id = 9),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 4, .production_id = 3),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 5, .production_id = 6),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 8, .production_id = 12),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 6, .production_id = 8),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 6, .production_id = 10),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 7, .production_id = 11),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 4, .production_id = 4),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 5, .production_id = 7),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pervasive_attr, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register_attr, 1),
  [98] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
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
