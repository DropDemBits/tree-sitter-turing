#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 124
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 91
#define ALIAS_COUNT 0
#define TOKEN_COUNT 61
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
  anon_sym_objectclass = 27,
  anon_sym_LPAREN = 28,
  anon_sym_RPAREN = 29,
  anon_sym_init = 30,
  anon_sym_nil = 31,
  anon_sym_sizeof = 32,
  sym_self_expression = 33,
  anon_sym_boolean = 34,
  anon_sym_addressint = 35,
  anon_sym_int = 36,
  anon_sym_int1 = 37,
  anon_sym_int2 = 38,
  anon_sym_int4 = 39,
  anon_sym_nat = 40,
  anon_sym_nat1 = 41,
  anon_sym_nat2 = 42,
  anon_sym_nat4 = 43,
  anon_sym_real = 44,
  anon_sym_real4 = 45,
  anon_sym_real8 = 46,
  anon_sym_char = 47,
  anon_sym_string = 48,
  anon_sym_STAR = 49,
  anon_sym_forward = 50,
  anon_sym_pervasive = 51,
  anon_sym_unqualified = 52,
  anon_sym_TILDE = 53,
  anon_sym_DOT = 54,
  sym_register_attr = 55,
  sym_cheat_attr = 56,
  sym_opaque_attr = 57,
  sym_block_comment = 58,
  sym__string_content = 59,
  sym_real_literal = 60,
  sym_source_file = 61,
  sym__statement = 62,
  sym_constvar_declaration = 63,
  sym_type_declaration = 64,
  sym_bind_declaration = 65,
  sym_bind_item = 66,
  sym__expression = 67,
  sym_literal_expression = 68,
  sym_string_literal = 69,
  sym_char_literal = 70,
  sym_escape_sequence = 71,
  sym__backslash_escapes = 72,
  sym_boolean_literal = 73,
  sym_objclass_expression = 74,
  sym_init_expression = 75,
  sym_nil_expression = 76,
  sym_sizeof_expression = 77,
  sym__type = 78,
  sym_primitive_type = 79,
  sym_charseq_size = 80,
  sym_forward_type = 81,
  sym_pervasive_attr = 82,
  sym_var_attr = 83,
  sym__name_list = 84,
  sym__item_path = 85,
  aux_sym_source_file_repeat1 = 86,
  aux_sym_bind_declaration_repeat1 = 87,
  aux_sym_string_literal_repeat1 = 88,
  aux_sym_init_expression_repeat1 = 89,
  aux_sym__name_list_repeat1 = 90,
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
  [anon_sym_objectclass] = "objectclass",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_init] = "init",
  [anon_sym_nil] = "nil",
  [anon_sym_sizeof] = "sizeof",
  [sym_self_expression] = "self_expression",
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
  [anon_sym_STAR] = "*",
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
  [sym_objclass_expression] = "objclass_expression",
  [sym_init_expression] = "init_expression",
  [sym_nil_expression] = "nil_expression",
  [sym_sizeof_expression] = "sizeof_expression",
  [sym__type] = "_type",
  [sym_primitive_type] = "primitive_type",
  [sym_charseq_size] = "charseq_size",
  [sym_forward_type] = "forward_type",
  [sym_pervasive_attr] = "pervasive_attr",
  [sym_var_attr] = "var_attr",
  [sym__name_list] = "_name_list",
  [sym__item_path] = "_item_path",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_bind_declaration_repeat1] = "bind_declaration_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym_init_expression_repeat1] = "init_expression_repeat1",
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
  [anon_sym_objectclass] = anon_sym_objectclass,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_init] = anon_sym_init,
  [anon_sym_nil] = anon_sym_nil,
  [anon_sym_sizeof] = anon_sym_sizeof,
  [sym_self_expression] = sym_self_expression,
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
  [anon_sym_STAR] = anon_sym_STAR,
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
  [sym_objclass_expression] = sym_objclass_expression,
  [sym_init_expression] = sym_init_expression,
  [sym_nil_expression] = sym_nil_expression,
  [sym_sizeof_expression] = sym_sizeof_expression,
  [sym__type] = sym__type,
  [sym_primitive_type] = sym_primitive_type,
  [sym_charseq_size] = sym_charseq_size,
  [sym_forward_type] = sym_forward_type,
  [sym_pervasive_attr] = sym_pervasive_attr,
  [sym_var_attr] = sym_var_attr,
  [sym__name_list] = sym__name_list,
  [sym__item_path] = sym__item_path,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_bind_declaration_repeat1] = aux_sym_bind_declaration_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [aux_sym_init_expression_repeat1] = aux_sym_init_expression_repeat1,
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
  [anon_sym_objectclass] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_init] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nil] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sizeof] = {
    .visible = true,
    .named = false,
  },
  [sym_self_expression] = {
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
  [anon_sym_STAR] = {
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
  [sym_objclass_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_init_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_nil_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_sizeof_expression] = {
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
  [sym__item_path] = {
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
  [aux_sym_init_expression_repeat1] = {
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
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '*') ADVANCE(31);
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
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '*') ADVANCE(31);
      if (lookahead == ',') ADVANCE(13);
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
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '*') ADVANCE(31);
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
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_STAR);
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
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 8:
      if (lookahead == 'b') ADVANCE(28);
      if (lookahead == 'p') ADVANCE(29);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym__backslash_escapes_token2);
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(33);
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym__backslash_escapes_token2);
      if (lookahead == 'o') ADVANCE(35);
      if (lookahead == 'r') ADVANCE(36);
      if (lookahead == 'y') ADVANCE(37);
      END_STATE();
    case 13:
      if (lookahead == 'n') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym__backslash_escapes_token2);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym__backslash_escapes_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(42);
      END_STATE();
    case 19:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(45);
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(50);
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 28:
      if (lookahead == 'j') ADVANCE(54);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(57);
      if (lookahead == 'g') ADVANCE(58);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 33:
      if (lookahead == 'z') ADVANCE(60);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 36:
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 37:
      if (lookahead == 'p') ADVANCE(63);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(64);
      if (lookahead == 'q') ADVANCE(65);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym__backslash_escapes_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym__backslash_escapes_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(70);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 47:
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 48:
      if (lookahead == 's') ADVANCE(75);
      END_STATE();
    case 49:
      if (lookahead == 'w') ADVANCE(76);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '1') ADVANCE(78);
      if (lookahead == '2') ADVANCE(79);
      if (lookahead == '4') ADVANCE(80);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_nat);
      if (lookahead == '1') ADVANCE(81);
      if (lookahead == '2') ADVANCE(82);
      if (lookahead == '4') ADVANCE(83);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_nil);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 55:
      if (lookahead == 'q') ADVANCE(85);
      END_STATE();
    case 56:
      if (lookahead == 'v') ADVANCE(86);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 59:
      if (lookahead == 'f') ADVANCE(89);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 65:
      if (lookahead == 'u') ADVANCE(95);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym__backslash_escapes_token4);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym__backslash_escapes_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(96);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_bind);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(102);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_init);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_int1);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_int2);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_int4);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_nat1);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_nat2);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_nat4);
      END_STATE();
    case 84:
      if (lookahead == 'c') ADVANCE(103);
      END_STATE();
    case 85:
      if (lookahead == 'u') ADVANCE(104);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_real);
      if (lookahead == '4') ADVANCE(106);
      if (lookahead == '8') ADVANCE(107);
      END_STATE();
    case 88:
      if (lookahead == 's') ADVANCE(108);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_self_expression);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_unit);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym__backslash_escapes_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(112);
      END_STATE();
    case 97:
      if (lookahead == 's') ADVANCE(113);
      END_STATE();
    case 98:
      if (lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_cheat_attr);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 105:
      if (lookahead == 's') ADVANCE(118);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_real4);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_real8);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 109:
      if (lookahead == 'f') ADVANCE(120);
      END_STATE();
    case 110:
      if (lookahead == 'g') ADVANCE(121);
      END_STATE();
    case 111:
      if (lookahead == 'l') ADVANCE(122);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym__backslash_escapes_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(123);
      END_STATE();
    case 113:
      if (lookahead == 's') ADVANCE(124);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 115:
      if (lookahead == 'd') ADVANCE(126);
      END_STATE();
    case 116:
      if (lookahead == 'c') ADVANCE(127);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_opaque_attr);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_sizeof);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(130);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym__backslash_escapes_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(131);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(132);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_forward);
      END_STATE();
    case 127:
      if (lookahead == 'l') ADVANCE(133);
      END_STATE();
    case 128:
      if (lookahead == 'v') ADVANCE(134);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 130:
      if (lookahead == 'f') ADVANCE(136);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym__backslash_escapes_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(137);
      END_STATE();
    case 132:
      if (lookahead == 'n') ADVANCE(138);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_register_attr);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym__backslash_escapes_token5);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 139:
      if (lookahead == 's') ADVANCE(143);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_pervasive);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_addressint);
      END_STATE();
    case 143:
      if (lookahead == 's') ADVANCE(145);
      END_STATE();
    case 144:
      if (lookahead == 'd') ADVANCE(146);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_objectclass);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_unqualified);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 2, .external_lex_state = 3},
  [3] = {.lex_state = 2, .external_lex_state = 3},
  [4] = {.lex_state = 2, .external_lex_state = 3},
  [5] = {.lex_state = 2, .external_lex_state = 3},
  [6] = {.lex_state = 2, .external_lex_state = 3},
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
  [17] = {.lex_state = 2, .external_lex_state = 3},
  [18] = {.lex_state = 2, .external_lex_state = 3},
  [19] = {.lex_state = 2, .external_lex_state = 3},
  [20] = {.lex_state = 2, .external_lex_state = 3},
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
  [36] = {.lex_state = 0, .external_lex_state = 2},
  [37] = {.lex_state = 0, .external_lex_state = 2},
  [38] = {.lex_state = 0, .external_lex_state = 2},
  [39] = {.lex_state = 0, .external_lex_state = 2},
  [40] = {.lex_state = 0, .external_lex_state = 2},
  [41] = {.lex_state = 0, .external_lex_state = 2},
  [42] = {.lex_state = 0, .external_lex_state = 2},
  [43] = {.lex_state = 0, .external_lex_state = 2},
  [44] = {.lex_state = 0, .external_lex_state = 2},
  [45] = {.lex_state = 1, .external_lex_state = 4},
  [46] = {.lex_state = 0, .external_lex_state = 2},
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
  [64] = {.lex_state = 0, .external_lex_state = 2},
  [65] = {.lex_state = 0, .external_lex_state = 2},
  [66] = {.lex_state = 0, .external_lex_state = 2},
  [67] = {.lex_state = 0, .external_lex_state = 2},
  [68] = {.lex_state = 0, .external_lex_state = 2},
  [69] = {.lex_state = 0, .external_lex_state = 2},
  [70] = {.lex_state = 0, .external_lex_state = 2},
  [71] = {.lex_state = 0, .external_lex_state = 2},
  [72] = {.lex_state = 1, .external_lex_state = 4},
  [73] = {.lex_state = 1, .external_lex_state = 4},
  [74] = {.lex_state = 1, .external_lex_state = 4},
  [75] = {.lex_state = 0, .external_lex_state = 2},
  [76] = {.lex_state = 1, .external_lex_state = 4},
  [77] = {.lex_state = 0, .external_lex_state = 2},
  [78] = {.lex_state = 0, .external_lex_state = 2},
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
  [92] = {.lex_state = 1, .external_lex_state = 4},
  [93] = {.lex_state = 1, .external_lex_state = 4},
  [94] = {.lex_state = 4, .external_lex_state = 2},
  [95] = {.lex_state = 0, .external_lex_state = 2},
  [96] = {.lex_state = 0, .external_lex_state = 2},
  [97] = {.lex_state = 0, .external_lex_state = 2},
  [98] = {.lex_state = 0, .external_lex_state = 2},
  [99] = {.lex_state = 0, .external_lex_state = 2},
  [100] = {.lex_state = 0, .external_lex_state = 2},
  [101] = {.lex_state = 0, .external_lex_state = 2},
  [102] = {.lex_state = 0, .external_lex_state = 2},
  [103] = {.lex_state = 0, .external_lex_state = 2},
  [104] = {.lex_state = 0, .external_lex_state = 2},
  [105] = {.lex_state = 0, .external_lex_state = 2},
  [106] = {.lex_state = 0, .external_lex_state = 2},
  [107] = {.lex_state = 0, .external_lex_state = 2},
  [108] = {.lex_state = 0, .external_lex_state = 2},
  [109] = {.lex_state = 0, .external_lex_state = 2},
  [110] = {.lex_state = 0, .external_lex_state = 2},
  [111] = {.lex_state = 0, .external_lex_state = 2},
  [112] = {.lex_state = 0, .external_lex_state = 2},
  [113] = {.lex_state = 0, .external_lex_state = 2},
  [114] = {.lex_state = 0, .external_lex_state = 2},
  [115] = {.lex_state = 0, .external_lex_state = 2},
  [116] = {.lex_state = 0, .external_lex_state = 2},
  [117] = {.lex_state = 0, .external_lex_state = 2},
  [118] = {.lex_state = 0, .external_lex_state = 2},
  [119] = {.lex_state = 0, .external_lex_state = 2},
  [120] = {.lex_state = 0, .external_lex_state = 2},
  [121] = {.lex_state = 0, .external_lex_state = 2},
  [122] = {.lex_state = 0, .external_lex_state = 2},
  [123] = {.lex_state = 0, .external_lex_state = 2},
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
    [anon_sym_objectclass] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_init] = ACTIONS(1),
    [anon_sym_nil] = ACTIONS(1),
    [anon_sym_sizeof] = ACTIONS(1),
    [sym_self_expression] = ACTIONS(1),
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
    [anon_sym_STAR] = ACTIONS(1),
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
    [sym_source_file] = STATE(120),
    [sym__statement] = STATE(30),
    [sym_constvar_declaration] = STATE(88),
    [sym_type_declaration] = STATE(88),
    [sym_bind_declaration] = STATE(88),
    [aux_sym_source_file_repeat1] = STATE(30),
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
  [0] = 19,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_objectclass,
    ACTIONS(29), 1,
      anon_sym_RPAREN,
    ACTIONS(31), 1,
      anon_sym_init,
    ACTIONS(33), 1,
      anon_sym_nil,
    ACTIONS(35), 1,
      anon_sym_sizeof,
    ACTIONS(37), 1,
      sym_self_expression,
    ACTIONS(43), 1,
      anon_sym_forward,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      sym_real_literal,
      sym_integer_literal,
    ACTIONS(41), 2,
      anon_sym_char,
      anon_sym_string,
    STATE(48), 2,
      sym_primitive_type,
      sym_forward_type,
    STATE(49), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
    STATE(113), 3,
      sym__expression,
      sym__type,
      sym__item_path,
    STATE(57), 5,
      sym_literal_expression,
      sym_objclass_expression,
      sym_init_expression,
      sym_nil_expression,
      sym_sizeof_expression,
    ACTIONS(39), 13,
      anon_sym_boolean,
      anon_sym_addressint,
      anon_sym_int,
      anon_sym_int1,
      anon_sym_int2,
      anon_sym_int4,
      anon_sym_nat,
      anon_sym_nat1,
      anon_sym_nat2,
      anon_sym_nat4,
      anon_sym_real,
      anon_sym_real4,
      anon_sym_real8,
  [83] = 18,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_objectclass,
    ACTIONS(31), 1,
      anon_sym_init,
    ACTIONS(33), 1,
      anon_sym_nil,
    ACTIONS(35), 1,
      anon_sym_sizeof,
    ACTIONS(37), 1,
      sym_self_expression,
    ACTIONS(43), 1,
      anon_sym_forward,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      sym_real_literal,
      sym_integer_literal,
    ACTIONS(41), 2,
      anon_sym_char,
      anon_sym_string,
    STATE(48), 2,
      sym_primitive_type,
      sym_forward_type,
    STATE(110), 2,
      sym__expression,
      sym__type,
    STATE(49), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
    STATE(57), 5,
      sym_literal_expression,
      sym_objclass_expression,
      sym_init_expression,
      sym_nil_expression,
      sym_sizeof_expression,
    ACTIONS(39), 13,
      anon_sym_boolean,
      anon_sym_addressint,
      anon_sym_int,
      anon_sym_int1,
      anon_sym_int2,
      anon_sym_int4,
      anon_sym_nat,
      anon_sym_nat1,
      anon_sym_nat2,
      anon_sym_nat4,
      anon_sym_real,
      anon_sym_real4,
      anon_sym_real8,
  [162] = 16,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_objectclass,
    ACTIONS(31), 1,
      anon_sym_init,
    ACTIONS(33), 1,
      anon_sym_nil,
    ACTIONS(35), 1,
      anon_sym_sizeof,
    ACTIONS(37), 1,
      sym_self_expression,
    ACTIONS(45), 1,
      anon_sym_COMMA,
    ACTIONS(47), 1,
      anon_sym_RPAREN,
    STATE(99), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      sym_real_literal,
      sym_integer_literal,
    STATE(49), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
    STATE(57), 5,
      sym_literal_expression,
      sym_objclass_expression,
      sym_init_expression,
      sym_nil_expression,
      sym_sizeof_expression,
  [220] = 15,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_objectclass,
    ACTIONS(31), 1,
      anon_sym_init,
    ACTIONS(33), 1,
      anon_sym_nil,
    ACTIONS(35), 1,
      anon_sym_sizeof,
    ACTIONS(37), 1,
      sym_self_expression,
    ACTIONS(49), 1,
      anon_sym_RPAREN,
    STATE(100), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      sym_real_literal,
      sym_integer_literal,
    STATE(49), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
    STATE(57), 5,
      sym_literal_expression,
      sym_objclass_expression,
      sym_init_expression,
      sym_nil_expression,
      sym_sizeof_expression,
  [275] = 15,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_objectclass,
    ACTIONS(31), 1,
      anon_sym_init,
    ACTIONS(33), 1,
      anon_sym_nil,
    ACTIONS(35), 1,
      anon_sym_sizeof,
    ACTIONS(37), 1,
      sym_self_expression,
    ACTIONS(51), 1,
      anon_sym_RPAREN,
    STATE(100), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      sym_real_literal,
      sym_integer_literal,
    STATE(49), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
    STATE(57), 5,
      sym_literal_expression,
      sym_objclass_expression,
      sym_init_expression,
      sym_nil_expression,
      sym_sizeof_expression,
  [330] = 15,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_objectclass,
    ACTIONS(31), 1,
      anon_sym_init,
    ACTIONS(33), 1,
      anon_sym_nil,
    ACTIONS(35), 1,
      anon_sym_sizeof,
    ACTIONS(37), 1,
      sym_self_expression,
    ACTIONS(53), 1,
      anon_sym_STAR,
    STATE(119), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      sym_real_literal,
      sym_integer_literal,
    STATE(49), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
    STATE(57), 5,
      sym_literal_expression,
      sym_objclass_expression,
      sym_init_expression,
      sym_nil_expression,
      sym_sizeof_expression,
  [385] = 14,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_objectclass,
    ACTIONS(31), 1,
      anon_sym_init,
    ACTIONS(33), 1,
      anon_sym_nil,
    ACTIONS(35), 1,
      anon_sym_sizeof,
    ACTIONS(37), 1,
      sym_self_expression,
    STATE(79), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      sym_real_literal,
      sym_integer_literal,
    STATE(49), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
    STATE(57), 5,
      sym_literal_expression,
      sym_objclass_expression,
      sym_init_expression,
      sym_nil_expression,
      sym_sizeof_expression,
  [437] = 14,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_objectclass,
    ACTIONS(31), 1,
      anon_sym_init,
    ACTIONS(33), 1,
      anon_sym_nil,
    ACTIONS(35), 1,
      anon_sym_sizeof,
    ACTIONS(37), 1,
      sym_self_expression,
    STATE(68), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      sym_real_literal,
      sym_integer_literal,
    STATE(49), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
    STATE(57), 5,
      sym_literal_expression,
      sym_objclass_expression,
      sym_init_expression,
      sym_nil_expression,
      sym_sizeof_expression,
  [489] = 14,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_objectclass,
    ACTIONS(31), 1,
      anon_sym_init,
    ACTIONS(33), 1,
      anon_sym_nil,
    ACTIONS(35), 1,
      anon_sym_sizeof,
    ACTIONS(37), 1,
      sym_self_expression,
    STATE(89), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      sym_real_literal,
      sym_integer_literal,
    STATE(49), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
    STATE(57), 5,
      sym_literal_expression,
      sym_objclass_expression,
      sym_init_expression,
      sym_nil_expression,
      sym_sizeof_expression,
  [541] = 14,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_objectclass,
    ACTIONS(31), 1,
      anon_sym_init,
    ACTIONS(33), 1,
      anon_sym_nil,
    ACTIONS(35), 1,
      anon_sym_sizeof,
    ACTIONS(37), 1,
      sym_self_expression,
    STATE(82), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      sym_real_literal,
      sym_integer_literal,
    STATE(49), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
    STATE(57), 5,
      sym_literal_expression,
      sym_objclass_expression,
      sym_init_expression,
      sym_nil_expression,
      sym_sizeof_expression,
  [593] = 14,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_objectclass,
    ACTIONS(31), 1,
      anon_sym_init,
    ACTIONS(33), 1,
      anon_sym_nil,
    ACTIONS(35), 1,
      anon_sym_sizeof,
    ACTIONS(37), 1,
      sym_self_expression,
    STATE(81), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      sym_real_literal,
      sym_integer_literal,
    STATE(49), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
    STATE(57), 5,
      sym_literal_expression,
      sym_objclass_expression,
      sym_init_expression,
      sym_nil_expression,
      sym_sizeof_expression,
  [645] = 14,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_objectclass,
    ACTIONS(31), 1,
      anon_sym_init,
    ACTIONS(33), 1,
      anon_sym_nil,
    ACTIONS(35), 1,
      anon_sym_sizeof,
    ACTIONS(37), 1,
      sym_self_expression,
    STATE(87), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      sym_real_literal,
      sym_integer_literal,
    STATE(49), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
    STATE(57), 5,
      sym_literal_expression,
      sym_objclass_expression,
      sym_init_expression,
      sym_nil_expression,
      sym_sizeof_expression,
  [697] = 14,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_objectclass,
    ACTIONS(31), 1,
      anon_sym_init,
    ACTIONS(33), 1,
      anon_sym_nil,
    ACTIONS(35), 1,
      anon_sym_sizeof,
    ACTIONS(37), 1,
      sym_self_expression,
    STATE(71), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      sym_real_literal,
      sym_integer_literal,
    STATE(49), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
    STATE(57), 5,
      sym_literal_expression,
      sym_objclass_expression,
      sym_init_expression,
      sym_nil_expression,
      sym_sizeof_expression,
  [749] = 14,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_objectclass,
    ACTIONS(31), 1,
      anon_sym_init,
    ACTIONS(33), 1,
      anon_sym_nil,
    ACTIONS(35), 1,
      anon_sym_sizeof,
    ACTIONS(37), 1,
      sym_self_expression,
    STATE(80), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      sym_real_literal,
      sym_integer_literal,
    STATE(49), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
    STATE(57), 5,
      sym_literal_expression,
      sym_objclass_expression,
      sym_init_expression,
      sym_nil_expression,
      sym_sizeof_expression,
  [801] = 14,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_objectclass,
    ACTIONS(31), 1,
      anon_sym_init,
    ACTIONS(33), 1,
      anon_sym_nil,
    ACTIONS(35), 1,
      anon_sym_sizeof,
    ACTIONS(37), 1,
      sym_self_expression,
    STATE(78), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      sym_real_literal,
      sym_integer_literal,
    STATE(49), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
    STATE(57), 5,
      sym_literal_expression,
      sym_objclass_expression,
      sym_init_expression,
      sym_nil_expression,
      sym_sizeof_expression,
  [853] = 14,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_objectclass,
    ACTIONS(31), 1,
      anon_sym_init,
    ACTIONS(33), 1,
      anon_sym_nil,
    ACTIONS(35), 1,
      anon_sym_sizeof,
    ACTIONS(37), 1,
      sym_self_expression,
    STATE(83), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      sym_real_literal,
      sym_integer_literal,
    STATE(49), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
    STATE(57), 5,
      sym_literal_expression,
      sym_objclass_expression,
      sym_init_expression,
      sym_nil_expression,
      sym_sizeof_expression,
  [905] = 14,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_objectclass,
    ACTIONS(31), 1,
      anon_sym_init,
    ACTIONS(33), 1,
      anon_sym_nil,
    ACTIONS(35), 1,
      anon_sym_sizeof,
    ACTIONS(37), 1,
      sym_self_expression,
    STATE(116), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      sym_real_literal,
      sym_integer_literal,
    STATE(49), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
    STATE(57), 5,
      sym_literal_expression,
      sym_objclass_expression,
      sym_init_expression,
      sym_nil_expression,
      sym_sizeof_expression,
  [957] = 14,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_objectclass,
    ACTIONS(31), 1,
      anon_sym_init,
    ACTIONS(33), 1,
      anon_sym_nil,
    ACTIONS(35), 1,
      anon_sym_sizeof,
    ACTIONS(37), 1,
      sym_self_expression,
    STATE(100), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      sym_real_literal,
      sym_integer_literal,
    STATE(49), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
    STATE(57), 5,
      sym_literal_expression,
      sym_objclass_expression,
      sym_init_expression,
      sym_nil_expression,
      sym_sizeof_expression,
  [1009] = 14,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_objectclass,
    ACTIONS(31), 1,
      anon_sym_init,
    ACTIONS(33), 1,
      anon_sym_nil,
    ACTIONS(35), 1,
      anon_sym_sizeof,
    ACTIONS(37), 1,
      sym_self_expression,
    STATE(70), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      sym_real_literal,
      sym_integer_literal,
    STATE(49), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
    STATE(57), 5,
      sym_literal_expression,
      sym_objclass_expression,
      sym_init_expression,
      sym_nil_expression,
      sym_sizeof_expression,
  [1061] = 7,
    ACTIONS(59), 1,
      anon_sym_forward,
    STATE(69), 1,
      sym__type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(57), 2,
      anon_sym_char,
      anon_sym_string,
    STATE(48), 2,
      sym_primitive_type,
      sym_forward_type,
    ACTIONS(39), 3,
      anon_sym_int,
      anon_sym_nat,
      anon_sym_real,
    ACTIONS(55), 10,
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
  [1097] = 7,
    ACTIONS(59), 1,
      anon_sym_forward,
    STATE(66), 1,
      sym__type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(57), 2,
      anon_sym_char,
      anon_sym_string,
    STATE(48), 2,
      sym_primitive_type,
      sym_forward_type,
    ACTIONS(39), 3,
      anon_sym_int,
      anon_sym_nat,
      anon_sym_real,
    ACTIONS(55), 10,
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
  [1133] = 7,
    ACTIONS(59), 1,
      anon_sym_forward,
    STATE(75), 1,
      sym__type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(57), 2,
      anon_sym_char,
      anon_sym_string,
    STATE(48), 2,
      sym_primitive_type,
      sym_forward_type,
    ACTIONS(39), 3,
      anon_sym_int,
      anon_sym_nat,
      anon_sym_real,
    ACTIONS(55), 10,
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
  [1169] = 7,
    ACTIONS(59), 1,
      anon_sym_forward,
    STATE(86), 1,
      sym__type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(57), 2,
      anon_sym_char,
      anon_sym_string,
    STATE(48), 2,
      sym_primitive_type,
      sym_forward_type,
    ACTIONS(39), 3,
      anon_sym_int,
      anon_sym_nat,
      anon_sym_real,
    ACTIONS(55), 10,
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
  [1205] = 7,
    ACTIONS(59), 1,
      anon_sym_forward,
    STATE(85), 1,
      sym__type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(57), 2,
      anon_sym_char,
      anon_sym_string,
    STATE(48), 2,
      sym_primitive_type,
      sym_forward_type,
    ACTIONS(39), 3,
      anon_sym_int,
      anon_sym_nat,
      anon_sym_real,
    ACTIONS(55), 10,
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
  [1241] = 7,
    ACTIONS(59), 1,
      anon_sym_forward,
    STATE(77), 1,
      sym__type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(57), 2,
      anon_sym_char,
      anon_sym_string,
    STATE(48), 2,
      sym_primitive_type,
      sym_forward_type,
    ACTIONS(39), 3,
      anon_sym_int,
      anon_sym_nat,
      anon_sym_real,
    ACTIONS(55), 10,
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
  [1277] = 8,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(63), 1,
      anon_sym_SEMI,
    ACTIONS(69), 1,
      anon_sym_type,
    ACTIONS(72), 1,
      anon_sym_bind,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(66), 2,
      anon_sym_const,
      anon_sym_var,
    STATE(27), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(88), 3,
      sym_constvar_declaration,
      sym_type_declaration,
      sym_bind_declaration,
  [1307] = 8,
    ACTIONS(13), 1,
      anon_sym_type,
    ACTIONS(15), 1,
      anon_sym_bind,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(11), 2,
      anon_sym_const,
      anon_sym_var,
    STATE(29), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(88), 3,
      sym_constvar_declaration,
      sym_type_declaration,
      sym_bind_declaration,
  [1337] = 8,
    ACTIONS(13), 1,
      anon_sym_type,
    ACTIONS(15), 1,
      anon_sym_bind,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(81), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(11), 2,
      anon_sym_const,
      anon_sym_var,
    STATE(27), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(88), 3,
      sym_constvar_declaration,
      sym_type_declaration,
      sym_bind_declaration,
  [1367] = 8,
    ACTIONS(13), 1,
      anon_sym_type,
    ACTIONS(15), 1,
      anon_sym_bind,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(81), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(11), 2,
      anon_sym_const,
      anon_sym_var,
    STATE(27), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(88), 3,
      sym_constvar_declaration,
      sym_type_declaration,
      sym_bind_declaration,
  [1397] = 4,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    STATE(56), 1,
      sym_charseq_size,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(83), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON_EQ,
      anon_sym_type,
      anon_sym_bind,
      anon_sym_RPAREN,
  [1418] = 5,
    ACTIONS(89), 1,
      anon_sym_COLON,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    STATE(34), 1,
      aux_sym__name_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(87), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON_EQ,
      anon_sym_type,
      anon_sym_bind,
  [1441] = 5,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    ACTIONS(95), 1,
      anon_sym_COLON,
    STATE(32), 1,
      aux_sym__name_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(93), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON_EQ,
      anon_sym_type,
      anon_sym_bind,
  [1464] = 5,
    ACTIONS(99), 1,
      anon_sym_COLON,
    ACTIONS(101), 1,
      anon_sym_COMMA,
    STATE(34), 1,
      aux_sym__name_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(97), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON_EQ,
      anon_sym_type,
      anon_sym_bind,
  [1487] = 3,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
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
  [1505] = 3,
    ACTIONS(110), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(108), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON_EQ,
      anon_sym_type,
      anon_sym_bind,
      anon_sym_COMMA,
  [1523] = 4,
    ACTIONS(114), 1,
      anon_sym_COMMA,
    STATE(39), 1,
      aux_sym_bind_declaration_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(112), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
  [1542] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(116), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1557] = 4,
    ACTIONS(114), 1,
      anon_sym_COMMA,
    STATE(65), 1,
      aux_sym_bind_declaration_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(118), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
  [1576] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(120), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1591] = 4,
    ACTIONS(124), 1,
      anon_sym_COLON,
    ACTIONS(126), 1,
      anon_sym_COLON_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(122), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
  [1610] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(128), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1625] = 4,
    ACTIONS(132), 1,
      anon_sym_COLON,
    ACTIONS(134), 1,
      anon_sym_COLON_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(130), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
  [1644] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(83), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON_EQ,
      anon_sym_type,
      anon_sym_bind,
      anon_sym_RPAREN,
  [1659] = 7,
    ACTIONS(138), 1,
      anon_sym_BSLASH,
    ACTIONS(141), 1,
      sym__caret_escapes,
    ACTIONS(144), 1,
      sym__string_content,
    STATE(93), 1,
      sym__backslash_escapes,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(136), 2,
      anon_sym_DQUOTE2,
      anon_sym_SQUOTE2,
    STATE(45), 2,
      sym_escape_sequence,
      aux_sym_string_literal_repeat1,
  [1684] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(147), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON_EQ,
      anon_sym_type,
      anon_sym_bind,
      anon_sym_RPAREN,
  [1699] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(149), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1714] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(151), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON_EQ,
      anon_sym_type,
      anon_sym_bind,
      anon_sym_RPAREN,
  [1729] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(153), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1744] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(155), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1759] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(157), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1774] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(159), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1789] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(161), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1804] = 4,
    ACTIONS(163), 1,
      anon_sym_COLON,
    ACTIONS(165), 1,
      anon_sym_COLON_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(130), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
  [1823] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(167), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1838] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(169), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON_EQ,
      anon_sym_type,
      anon_sym_bind,
      anon_sym_RPAREN,
  [1853] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(116), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1868] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(171), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1883] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(173), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1898] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(175), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1913] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(177), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON_EQ,
      anon_sym_type,
      anon_sym_bind,
      anon_sym_RPAREN,
  [1928] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(179), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1943] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(181), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1958] = 4,
    ACTIONS(185), 1,
      anon_sym_COLON,
    ACTIONS(187), 1,
      anon_sym_COLON_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(183), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
  [1977] = 4,
    ACTIONS(191), 1,
      anon_sym_COMMA,
    STATE(65), 1,
      aux_sym_bind_declaration_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(189), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
  [1996] = 3,
    ACTIONS(196), 1,
      anon_sym_COLON_EQ,
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
  [2012] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(189), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
      anon_sym_COMMA,
  [2026] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(198), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
      anon_sym_COMMA,
  [2040] = 3,
    ACTIONS(200), 1,
      anon_sym_COLON_EQ,
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
  [2056] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(202), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
      anon_sym_COMMA,
  [2070] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(204), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
      anon_sym_COMMA,
  [2084] = 7,
    ACTIONS(206), 1,
      anon_sym_SQUOTE2,
    ACTIONS(208), 1,
      anon_sym_BSLASH,
    ACTIONS(210), 1,
      sym__caret_escapes,
    ACTIONS(212), 1,
      sym__string_content,
    STATE(93), 1,
      sym__backslash_escapes,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(76), 2,
      sym_escape_sequence,
      aux_sym_string_literal_repeat1,
  [2108] = 7,
    ACTIONS(208), 1,
      anon_sym_BSLASH,
    ACTIONS(210), 1,
      sym__caret_escapes,
    ACTIONS(214), 1,
      anon_sym_DQUOTE2,
    ACTIONS(216), 1,
      sym__string_content,
    STATE(93), 1,
      sym__backslash_escapes,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(74), 2,
      sym_escape_sequence,
      aux_sym_string_literal_repeat1,
  [2132] = 7,
    ACTIONS(208), 1,
      anon_sym_BSLASH,
    ACTIONS(210), 1,
      sym__caret_escapes,
    ACTIONS(218), 1,
      anon_sym_DQUOTE2,
    ACTIONS(220), 1,
      sym__string_content,
    STATE(93), 1,
      sym__backslash_escapes,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(45), 2,
      sym_escape_sequence,
      aux_sym_string_literal_repeat1,
  [2156] = 3,
    ACTIONS(224), 1,
      anon_sym_COLON_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(222), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
  [2172] = 7,
    ACTIONS(208), 1,
      anon_sym_BSLASH,
    ACTIONS(210), 1,
      sym__caret_escapes,
    ACTIONS(220), 1,
      sym__string_content,
    ACTIONS(226), 1,
      anon_sym_SQUOTE2,
    STATE(93), 1,
      sym__backslash_escapes,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(45), 2,
      sym_escape_sequence,
      aux_sym_string_literal_repeat1,
  [2196] = 3,
    ACTIONS(230), 1,
      anon_sym_COLON_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(228), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
  [2212] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(232), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
  [2225] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(234), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
  [2238] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(236), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
  [2251] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(236), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
  [2264] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(238), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
  [2277] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(240), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
  [2290] = 7,
    ACTIONS(242), 1,
      sym_identifier,
    ACTIONS(244), 1,
      anon_sym_STAR,
    ACTIONS(246), 1,
      anon_sym_pervasive,
    ACTIONS(248), 1,
      sym_register_attr,
    STATE(64), 1,
      sym__name_list,
    STATE(98), 1,
      sym_pervasive_attr,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2313] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(250), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
  [2326] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(252), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
  [2339] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(254), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
  [2352] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(256), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
  [2365] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(238), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_var,
      anon_sym_type,
      anon_sym_bind,
  [2378] = 6,
    ACTIONS(258), 1,
      sym_identifier,
    ACTIONS(260), 1,
      anon_sym_var,
    ACTIONS(262), 1,
      sym_register_attr,
    STATE(37), 1,
      sym_bind_item,
    STATE(104), 1,
      sym_var_attr,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2398] = 6,
    ACTIONS(258), 1,
      sym_identifier,
    ACTIONS(260), 1,
      anon_sym_var,
    ACTIONS(262), 1,
      sym_register_attr,
    STATE(67), 1,
      sym_bind_item,
    STATE(104), 1,
      sym_var_attr,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2418] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(264), 5,
      sym__string_content,
      anon_sym_DQUOTE2,
      anon_sym_SQUOTE2,
      anon_sym_BSLASH,
      sym__caret_escapes,
  [2430] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(266), 5,
      sym__string_content,
      anon_sym_DQUOTE2,
      anon_sym_SQUOTE2,
      anon_sym_BSLASH,
      sym__caret_escapes,
  [2442] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(268), 5,
      aux_sym__backslash_escapes_token1,
      aux_sym__backslash_escapes_token2,
      aux_sym__backslash_escapes_token3,
      aux_sym__backslash_escapes_token4,
      aux_sym__backslash_escapes_token5,
  [2454] = 5,
    ACTIONS(244), 1,
      anon_sym_STAR,
    ACTIONS(246), 1,
      anon_sym_pervasive,
    ACTIONS(270), 1,
      sym_identifier,
    STATE(111), 1,
      sym_pervasive_attr,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2471] = 4,
    ACTIONS(272), 1,
      anon_sym_COMMA,
    ACTIONS(275), 1,
      anon_sym_RPAREN,
    STATE(96), 1,
      aux_sym_init_expression_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2485] = 4,
    ACTIONS(51), 1,
      anon_sym_RPAREN,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    STATE(96), 1,
      aux_sym_init_expression_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2499] = 4,
    ACTIONS(242), 1,
      sym_identifier,
    ACTIONS(279), 1,
      sym_register_attr,
    STATE(43), 1,
      sym__name_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2513] = 4,
    ACTIONS(281), 1,
      anon_sym_COMMA,
    ACTIONS(283), 1,
      anon_sym_RPAREN,
    STATE(97), 1,
      aux_sym_init_expression_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2527] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(275), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2536] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(285), 2,
      sym_register_attr,
      sym_identifier,
  [2545] = 3,
    ACTIONS(287), 1,
      sym_identifier,
    STATE(41), 1,
      sym__name_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2556] = 3,
    ACTIONS(287), 1,
      sym_identifier,
    STATE(54), 1,
      sym__name_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2567] = 3,
    ACTIONS(289), 1,
      sym_identifier,
    ACTIONS(291), 1,
      sym_register_attr,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2578] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(293), 2,
      sym_register_attr,
      sym_identifier,
  [2587] = 2,
    ACTIONS(295), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2595] = 2,
    ACTIONS(297), 1,
      anon_sym_to,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2603] = 2,
    ACTIONS(299), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2611] = 2,
    ACTIONS(301), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2619] = 2,
    ACTIONS(303), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2627] = 2,
    ACTIONS(305), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2635] = 2,
    ACTIONS(307), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2643] = 2,
    ACTIONS(309), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2651] = 2,
    ACTIONS(311), 1,
      anon_sym_to,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2659] = 2,
    ACTIONS(283), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2667] = 2,
    ACTIONS(313), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2675] = 2,
    ACTIONS(315), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2683] = 2,
    ACTIONS(317), 1,
      anon_sym_to,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2691] = 2,
    ACTIONS(319), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2699] = 2,
    ACTIONS(321), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2707] = 2,
    ACTIONS(323), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2715] = 2,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2723] = 2,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 83,
  [SMALL_STATE(4)] = 162,
  [SMALL_STATE(5)] = 220,
  [SMALL_STATE(6)] = 275,
  [SMALL_STATE(7)] = 330,
  [SMALL_STATE(8)] = 385,
  [SMALL_STATE(9)] = 437,
  [SMALL_STATE(10)] = 489,
  [SMALL_STATE(11)] = 541,
  [SMALL_STATE(12)] = 593,
  [SMALL_STATE(13)] = 645,
  [SMALL_STATE(14)] = 697,
  [SMALL_STATE(15)] = 749,
  [SMALL_STATE(16)] = 801,
  [SMALL_STATE(17)] = 853,
  [SMALL_STATE(18)] = 905,
  [SMALL_STATE(19)] = 957,
  [SMALL_STATE(20)] = 1009,
  [SMALL_STATE(21)] = 1061,
  [SMALL_STATE(22)] = 1097,
  [SMALL_STATE(23)] = 1133,
  [SMALL_STATE(24)] = 1169,
  [SMALL_STATE(25)] = 1205,
  [SMALL_STATE(26)] = 1241,
  [SMALL_STATE(27)] = 1277,
  [SMALL_STATE(28)] = 1307,
  [SMALL_STATE(29)] = 1337,
  [SMALL_STATE(30)] = 1367,
  [SMALL_STATE(31)] = 1397,
  [SMALL_STATE(32)] = 1418,
  [SMALL_STATE(33)] = 1441,
  [SMALL_STATE(34)] = 1464,
  [SMALL_STATE(35)] = 1487,
  [SMALL_STATE(36)] = 1505,
  [SMALL_STATE(37)] = 1523,
  [SMALL_STATE(38)] = 1542,
  [SMALL_STATE(39)] = 1557,
  [SMALL_STATE(40)] = 1576,
  [SMALL_STATE(41)] = 1591,
  [SMALL_STATE(42)] = 1610,
  [SMALL_STATE(43)] = 1625,
  [SMALL_STATE(44)] = 1644,
  [SMALL_STATE(45)] = 1659,
  [SMALL_STATE(46)] = 1684,
  [SMALL_STATE(47)] = 1699,
  [SMALL_STATE(48)] = 1714,
  [SMALL_STATE(49)] = 1729,
  [SMALL_STATE(50)] = 1744,
  [SMALL_STATE(51)] = 1759,
  [SMALL_STATE(52)] = 1774,
  [SMALL_STATE(53)] = 1789,
  [SMALL_STATE(54)] = 1804,
  [SMALL_STATE(55)] = 1823,
  [SMALL_STATE(56)] = 1838,
  [SMALL_STATE(57)] = 1853,
  [SMALL_STATE(58)] = 1868,
  [SMALL_STATE(59)] = 1883,
  [SMALL_STATE(60)] = 1898,
  [SMALL_STATE(61)] = 1913,
  [SMALL_STATE(62)] = 1928,
  [SMALL_STATE(63)] = 1943,
  [SMALL_STATE(64)] = 1958,
  [SMALL_STATE(65)] = 1977,
  [SMALL_STATE(66)] = 1996,
  [SMALL_STATE(67)] = 2012,
  [SMALL_STATE(68)] = 2026,
  [SMALL_STATE(69)] = 2040,
  [SMALL_STATE(70)] = 2056,
  [SMALL_STATE(71)] = 2070,
  [SMALL_STATE(72)] = 2084,
  [SMALL_STATE(73)] = 2108,
  [SMALL_STATE(74)] = 2132,
  [SMALL_STATE(75)] = 2156,
  [SMALL_STATE(76)] = 2172,
  [SMALL_STATE(77)] = 2196,
  [SMALL_STATE(78)] = 2212,
  [SMALL_STATE(79)] = 2225,
  [SMALL_STATE(80)] = 2238,
  [SMALL_STATE(81)] = 2251,
  [SMALL_STATE(82)] = 2264,
  [SMALL_STATE(83)] = 2277,
  [SMALL_STATE(84)] = 2290,
  [SMALL_STATE(85)] = 2313,
  [SMALL_STATE(86)] = 2326,
  [SMALL_STATE(87)] = 2339,
  [SMALL_STATE(88)] = 2352,
  [SMALL_STATE(89)] = 2365,
  [SMALL_STATE(90)] = 2378,
  [SMALL_STATE(91)] = 2398,
  [SMALL_STATE(92)] = 2418,
  [SMALL_STATE(93)] = 2430,
  [SMALL_STATE(94)] = 2442,
  [SMALL_STATE(95)] = 2454,
  [SMALL_STATE(96)] = 2471,
  [SMALL_STATE(97)] = 2485,
  [SMALL_STATE(98)] = 2499,
  [SMALL_STATE(99)] = 2513,
  [SMALL_STATE(100)] = 2527,
  [SMALL_STATE(101)] = 2536,
  [SMALL_STATE(102)] = 2545,
  [SMALL_STATE(103)] = 2556,
  [SMALL_STATE(104)] = 2567,
  [SMALL_STATE(105)] = 2578,
  [SMALL_STATE(106)] = 2587,
  [SMALL_STATE(107)] = 2595,
  [SMALL_STATE(108)] = 2603,
  [SMALL_STATE(109)] = 2611,
  [SMALL_STATE(110)] = 2619,
  [SMALL_STATE(111)] = 2627,
  [SMALL_STATE(112)] = 2635,
  [SMALL_STATE(113)] = 2643,
  [SMALL_STATE(114)] = 2651,
  [SMALL_STATE(115)] = 2659,
  [SMALL_STATE(116)] = 2667,
  [SMALL_STATE(117)] = 2675,
  [SMALL_STATE(118)] = 2683,
  [SMALL_STATE(119)] = 2691,
  [SMALL_STATE(120)] = 2699,
  [SMALL_STATE(121)] = 2707,
  [SMALL_STATE(122)] = 2715,
  [SMALL_STATE(123)] = 2723,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(84),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(95),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(90),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__name_list, 2, .production_id = 4),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__name_list, 2, .production_id = 4),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__name_list, 1, .production_id = 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__name_list, 1, .production_id = 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__name_list_repeat1, 2, .production_id = 6),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__name_list_repeat1, 2, .production_id = 6),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__name_list_repeat1, 2, .production_id = 6), SHIFT_REPEAT(106),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nil_expression, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__name_list_repeat1, 2, .production_id = 5),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__name_list_repeat1, 2, .production_id = 5),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bind_declaration, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bind_declaration, 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_expression, 5),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 4, .production_id = 7),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_expression, 6),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 3, .production_id = 3),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(94),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(93),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(45),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forward_type, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_expression, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sizeof_expression, 4),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 3),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_expression, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nil_expression, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nil_expression, 4),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_charseq_size, 3),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_objclass_expression, 4),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_expression, 4),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 2, .production_id = 2),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bind_declaration_repeat1, 2),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bind_declaration_repeat1, 2), SHIFT_REPEAT(91),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 5, .production_id = 11),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bind_item, 3, .production_id = 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bind_item, 5, .production_id = 17),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bind_item, 4, .production_id = 5),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 4, .production_id = 8),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 6, .production_id = 14),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 6, .production_id = 16),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 6, .production_id = 15),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 5, .production_id = 12),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 7, .production_id = 18),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 8, .production_id = 19),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 4, .production_id = 10),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 5, .production_id = 13),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constvar_declaration, 4, .production_id = 9),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__backslash_escapes, 2),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_expression_repeat1, 2), SHIFT_REPEAT(19),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_expression_repeat1, 2),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pervasive_attr, 1),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_attr, 1),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [321] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
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
