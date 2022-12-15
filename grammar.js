module.exports = grammar({
  name: 'turing',
  
  extras: $ => [/\s/, $.line_comment, /* $.block_comment */ ],

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

    _macro_directive: $ => choice(
      // TODO
    ),

    _expression: $ => choice(
      $.identifier
      // TODO
    ),

    _type: $ => choice(
      $.primitive_type,
      // TODO
    ),

    primitive_type: $ => choice(
      'boolean',
      //
    ),

    // Attrs //
    pervasive_attr: $ => choice('pervasive', '*'),

    unqualified_attr: $ => choice('unqualified', seq('~', '.')),

    register_attr: $ => choice('register'),

    const_attr: $ => choice('const'),

    var_attr: $ => choice('var'),

    cheat_attr: $ => choice('cheat'),

    forward_attr: $ => choice('forward'),

    opaque_attr: $ => choice('opaque'),

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