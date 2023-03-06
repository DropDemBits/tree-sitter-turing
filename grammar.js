module.exports = grammar({
  name: 'turing',

  externals: $ => [
    $.block_comment,
    $._string_content,
    $.real_literal,
  ],

  extras: $ => [/\s/, $.line_comment, $.block_comment],

  inline: $ => [$._statement_line],

  word: $ => $.identifier,

  supertypes: $ => [
    $._statement,
    $._type,
    $._expression,
    // $._macro_directive,
  ],

  rules: {
    // ('unit')? body
    source_file: $ => seq(
      optional('unit'),
      repeat($._statement_line)
    ),

    line_comment: $ => token(seq(
      '%', /.*/
    )),

    _statement_line: $ => choice(
      $._statement,
      ';'
    ),

    _statement: $ => choice(
      // Declarations //
      $.constvar_declaration,
      $.type_declaration,
      $.bind_declaration,

      // Simple statements //

      // other
      // $._macro_directive,
    ),

    constvar_declaration: $ => seq(
      choice('const', 'var'),
      optional($.pervasive_attr),
      optional($.register_attr),
      $._name_list,
      optional(seq(
        ':', field('type_spec', $._type)
      )),
      optional(seq(
        // ???: how to deal with = instead of :=?
        ':=', field('initializer', $._expression),
      )),
    ),

    type_declaration: $ => seq(
      'type',
      optional($.pervasive_attr),
      field('name', $.identifier),
      ':',
      field('type_spec', $._type),
    ),

    bind_declaration: $ => seq(
      'bind',
      sepBy1(',', $.bind_item),
      // can't have an optional comma here, since that conflicts with
      // constvar_declaration and is ambiguous with the bind item list
    ),

    bind_item: $ => seq(
      optional($.var_attr),
      optional($.register_attr),
      field('name', $.identifier),
      'to',
      $._expression
    ),

    _macro_directive: $ => choice(
      // TODO
    ),

    _expression: $ => choice(
      $.literal_expression,
      $.objclass_expression,
      $.init_expression,
      $.nil_expression,
      $.sizeof_expression,

      $.self_expression,
      prec.left($.identifier),
      // TODO
    ),

    literal_expression: $ => choice(
      $.string_literal,
      $.char_literal,
      $.boolean_literal,
      $.integer_literal,
      $.real_literal,
    ),

    string_literal: $ => seq(
      '"',
      repeat(
        choice(
          $.escape_sequence,
          $._string_content,
        )
      ),
      token.immediate('"'),
    ),

    char_literal: $ => seq(
      '\'',
      repeat(
        choice(
          $.escape_sequence,
          $._string_content,
        )
      ),
      token.immediate('\''),
    ),

    escape_sequence: $ => choice(
      $._backslash_escapes,
      $._caret_escapes,
    ),

    _backslash_escapes: $ => seq(
      '\\',
      choice(
        // char escapes
        /[\\"'\^]/,
        // control char escapes
        /[bdefrntBDEFRNT]/,
        // octal escapes
        /[0-7]{1,3}/,
        // hex escapes
        /x[0-9a-fA-F]{1,2}/,
        // unicode escapes
        /[uU][0-9a-fA-F]{1,8}/,
      ),
    ),

    _caret_escapes: $ => /\^[@-_a-z?]/,

    boolean_literal: $ => choice('true', 'false'),

    integer_literal: $ => token(seq(
      choice(
        /[0-9]+/,
        /[0-9]+#[a-zA-Z0-9]+/,
      )
      // ???: specifying sizes:
      // could be like `123!i4`, composes well with # and stuff
      // and '!' is unused in the syntax right now
    )),

    objclass_expression: $ => seq('objectclass', '(', $._expression, ')'),

    init_expression: $ => seq('init', '(', sepBy(',', $._expression), optional(','), ')'),

    nil_expression: $ => seq(
      'nil',
      optional(seq(
        '(',
        optional($._item_path),
        ')'
      )),
    ),

    sizeof_expression: $ => seq(
      // Not planning to support the size_spec part, since while the acceptable
      // values are only 1, 2 and 4, those can be computed in an arbitrary
      // manner, and that's not fun for incremental compilation
      'sizeof', '(',
      choice($._expression, $._type),
      ')',
    ),

    self_expression: $ => 'self',

    _type: $ => choice(
      $.primitive_type,
      $.forward_type,
      // TODO
    ),

    primitive_type: $ => choice(
      'boolean',
      'addressint',
      'int',
      'int1',
      'int2',
      'int4',
      'nat',
      'nat1',
      'nat2',
      'nat4',
      'real',
      'real4',
      'real8',
      seq('char', optional($.charseq_size)),
      seq('string', optional($.charseq_size)),
    ),

    charseq_size: $ => seq(
      '(',
      choice(
        '*', // ???: may want to treat as a "from end" atom, since that's also used for ranges
        $._expression
      ),
      ')'
    ),

    forward_type: $ => 'forward',

    // Attrs //
    pervasive_attr: $ => choice('pervasive', '*'),

    unqualified_attr: $ => choice('unqualified', seq('~', '.')),

    register_attr: $ => 'register',

    const_attr: $ => 'const',

    var_attr: $ => 'var',

    cheat_attr: $ => 'cheat',

    forward_attr: $ => 'forward',

    opaque_attr: $ => 'opaque',

    identifier: $ => /[a-zA-Z_][a-zA-Z_0-9]*/,

    _name_list: $ => sepBy1(',', field('name', $.identifier)),

    _item_path: $ => choice($._type, $._expression), // should really be its own thing
  }
});

function sepBy1(sep, rule) {
  return seq(rule, repeat(seq(sep, rule)));
}

function sepBy(sep, rule) {
  return optional(sepBy1(sep, rule));
};

// - Range exprs should be hoisted into the precedence tree
//   - Auto creates span covering the bounds, don't have to make one
// - AllExpr is an atom, but can keep same logic
//   - Why not "allow" `all + 1` and reject it later? Would mean that we'd have to check that all is in a valid position,
//     but eh...

// Error kinds:
// - `all` can't be used here

// ah, so we basically want to create idxs from child to parent