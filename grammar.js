module.exports = grammar({
  name: 'turing',

  externals: $ => [
    $.block_comment,
    $._string_content,
    $.real_literal,
  ],

  extras: $ => [/\s/, $.line_comment, $.block_comment],

  inline: $ => [$._statements],

  word: $ => $.identifier,

  rules: {
    // ('unit')? body
    source_file: $ => seq(
      optional('unit'),
      repeat($._statement),
    ),

    line_comment: $ => token(seq(
      '%', /.*/
    )),

    _statement: $ => seq(
      choice(
        // Declarations //
        $.constvar_declaration,
        $.type_declaration,

        // Simple statements //

        // other
        // $._macro_directive,
      ),
      optional(';')
    ),

    constvar_declaration: $ => seq(
      choice('const', 'var'),
      optional($.pervasive_attr),
      optional($.register_attr),
      field('name', $.identifier),
      optional(seq(
        ':', field('type_spec', $._type)
      )),
      optional(seq(
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

    _macro_directive: $ => choice(
      // TODO
    ),

    _expression: $ => choice(
      $.literal_expression,
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
  }
});

// - Range exprs should be hoisted into the precedence tree
//   - Auto creates span covering the bounds, don't have to make one
// - AllExpr is an atom, but can keep same logic
//   - Why not "allow" `all + 1` and reject it later? Would mean that we'd have to check that all is in a valid position,
//     but eh...

// Error kinds:
// - `all` can't be used here

// ah, so we basically want to create idxs from child to parent