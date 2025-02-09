#include "tree_sitter/parser.h"
#include <assert.h>
#include <stdint.h>
#include <stdlib.h>
#include <wctype.h>

#define EOF_CHAR ((int32_t)0)

enum TOKEN_TYPE {
  BLOCK_COMMENT,
  STRING_CONTENT,
  CHAR_CONTENT,
  REAL_LITERAL,
  ERROR_SENTINEL,
};

static void bump(TSLexer *lexer) { lexer->advance(lexer, false); }

static bool is_num_char(int32_t c) { return c == '_' || iswdigit(c); }

static inline bool parse_text_content(TSLexer *lexer, enum TOKEN_TYPE as_token,
                                      int32_t end_char) {
  bool has_content = false;

  for (;;) {
    if (lexer->lookahead == end_char || lexer->lookahead == '\\' ||
        lexer->lookahead == '^' || lexer->lookahead == '\n') {
      // End of a content fragment
      break;
    } else if (lexer->eof(lexer)) {
      // End of a file, not a content fragment
      return false;
    }

    has_content = true;
    bump(lexer);
  }

  lexer->result_symbol = as_token;
  lexer->mark_end(lexer);
  return has_content;
}

void *tree_sitter_turing_external_scanner_create() { return NULL; }

void tree_sitter_turing_external_scanner_destroy(void *payload) {}

unsigned tree_sitter_turing_external_scanner_serialize(void *payload,
                                                       char *buffer) {
  return 0;
}

void tree_sitter_turing_external_scanner_deserialize(void *payload,
                                                     const char *buffer,
                                                     unsigned length) {}

bool tree_sitter_turing_external_scanner_scan(void *payload, TSLexer *lexer,
                                              const bool *valid_symbols) {
  if (valid_symbols[STRING_CONTENT] && !valid_symbols[REAL_LITERAL]) {
    return parse_text_content(lexer, STRING_CONTENT, '\"');
  }
  if (valid_symbols[CHAR_CONTENT] && !valid_symbols[REAL_LITERAL]) {
    return parse_text_content(lexer, CHAR_CONTENT, '\'');
  }

  // eat any leading ws
  while (iswspace(lexer->lookahead))
    lexer->advance(lexer, true);

  // try eating a real literal
  if (valid_symbols[REAL_LITERAL] &&
      (is_num_char(lexer->lookahead) || lexer->lookahead == '.')) {

    bool has_leading_digits = false;
    bool has_fraction = false;
    bool has_exponent = false;

    lexer->result_symbol = REAL_LITERAL;

    // eat leading digits
    if (is_num_char(lexer->lookahead)) {
      bump(lexer);
      while (is_num_char(lexer->lookahead))
        bump(lexer);
      has_leading_digits = true;
    }

    if (lexer->lookahead == '.') {
      // try parsing decimals
      bump(lexer);

      if (lexer->lookahead == '.') {
        // part of ..
        return false;
      }

      if (is_num_char(lexer->lookahead)) {
        bump(lexer);

        while (is_num_char(lexer->lookahead))
          bump(lexer);

        has_fraction = true;
      }
    }

    lexer->mark_end(lexer);

    if (!has_fraction && !has_leading_digits)
      return false; // as a solitary `.`, reject

    if (lexer->lookahead == 'e' || lexer->lookahead == 'E') {
      has_exponent = true;
      bump(lexer);

      if (lexer->lookahead == '+' || lexer->lookahead == '-') {
        bump(lexer);
      }

      if (!is_num_char(lexer->lookahead)) {
        // missing
        return true;
      }

      // eat up exponent
      bump(lexer);
      while (is_num_char(lexer->lookahead))
        bump(lexer);

      lexer->mark_end(lexer);
    }

    if (!has_fraction && !has_exponent) {
      // just a bare int literal
      return false;
    }

    return true;
  }

  // always try eating a block comment
  if (lexer->lookahead == '/') {
    bump(lexer);
    if (lexer->lookahead != '*') {
      return false;
    }
    bump(lexer);

    // borrowed 'static from
    // https://github.com/tree-sitter/tree-sitter-rust/blob/master/src/scanner.c#L149
    bool after_star = false;
    unsigned nesting_depth = 1;
    for (;;) {
      switch (lexer->lookahead) {
      case EOF_CHAR:
        return false;
      case '*':
        bump(lexer);
        after_star = true;
        break;
      case '/':
        if (after_star) {
          // at '*/'
          bump(lexer);
          after_star = false;
          nesting_depth--;

          if (nesting_depth == 0) {
            lexer->result_symbol = BLOCK_COMMENT;
            return true;
          }
        } else {
          bump(lexer);
          after_star = false;

          if (lexer->lookahead == '*') {
            nesting_depth++;
            bump(lexer);
          }
        }
        break;
      default:
        // eat any char
        bump(lexer);
        after_star = false;
        break;
      }
    }
  }

  return false;
}
