const PREC = {
  assign: 0,
  imply: 2,
  or: 3,
  and: 4,
  not: 5,
  compare: 6,
  add: 7,
  multiply: 8,
  negation: 9,
  exp: 10,
  nat_cheat: 11,
  // also arrow, dot
  call: 12,
  deref: 13,
};

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

  conflicts: $ => [
    // A painful core ambiguity...
    // toco solves this by parsing all expressions in statement position as calls,
    // and then disambiguating later
    [$.call_statement, $._expression]
  ],

  rules: {
    // ('unit')? body
    source_file: $ => seq(
      optional('unit'), _statement_list($),
    ),

    line_comment: $ => token(seq(
      '%', /.*/
    )),

    _statement_line: $ => choice(
      $._statement,
      ';'
    ),

    _statement: $ => choice(
      // TODO: commented items

      // Declarations //
      $.constvar_declaration,
      $.type_declaration,
      $.bind_declaration,
      // $.function_declaration,
      // $.procedure_declaration,
      // $.process_declaration,
      // $.external_declaration,
      // $.forward_declaration,
      // $.deferred_declaration,
      // $.body_declaration,
      // $.module_declaration,
      // $.class_declaration,
      // $.monitor_declaration,

      // Simple statements //
      $.assign_statement,
      $.compound_assign_statement,
      // $.open_statement,
      // $.close_statement,
      // $.put_statement,
      // $.get_statement,
      // $.read_statement,
      // $.write_statement,
      // $.seek_statement,
      // $.tell_statement,
      $.for_statement,
      $.loop_statement,
      $.exit_statement,
      $.if_statement,
      $.case_statement,
      $.block_statement,
      $.invariant_statement,
      $.assert_statement,
      $.call_statement,
      $.return_statement,
      $.result_statement,
      // $.new_statement,
      // $.free_statement,
      // $.tag_statement,
      // $.fork_statement,
      // $.pause_statement,
      // $.quit_statement,
      // $.break_statement,
      // $.checkedness_statement,
      // $.pre_statement,
      // $.init_statement,
      // $.post_statement,
      // $.handler_statement,
      // $.inherit_statement,
      // $.implement_statement,
      // $.implement_by_statement,
      // $.import_statement,
      // $.export_statement,

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

    assign_statement: $ => prec.right(PREC.assign, seq(
      field('left', $._expression),
      ':=',
      field('right', $._expression),
    )),

    compound_assign_statement: $ => {
      const infix_ops = [
        '=>',
        'or', '|',
        'and', '&',
        '+', '-', 'xor',
        '*', '/', 'div', 'mod', 'rem', 'shl', 'shr',
        '**'
      ];

      return choice(
        ...infix_ops.map((operator) => prec.left(PREC.assign, seq(
          field('left', $._expression),
          field('operator', seq(operator, '=')),
          field('right', $._expression),
        ))),
      )
    },

    for_statement: $ => seq(
      'for',
      optional('decreasing'), optional(field('name', $.identifier)), ':',
      // ???: Could either use real range expr, or use version that doesn't exclude anything
      field('bounds',
        choice(
          $._expression,
          seq(
            field('start', $._expression),
            '..',
            field('end', $._expression)
          )
        ),
      ),
      field('step_by', optional(seq(
        'by', $._expression
      ))),
      _statement_list($),
      end_keyword_tail('for')
    ),

    loop_statement: $ => seq(
      'loop',
      _statement_list($),
      end_keyword_tail('loop')
    ),

    exit_statement: $ => seq(
      'exit',
      optional(seq('when', field('condition', $._expression)))
    ),

    if_statement: $ => seq(
      'if', field('condition', $._expression), 'then', _statement_list($),
      repeat($.elsif_clause),
      optional($.else_clause),
      end_keyword_tail('if')
    ),

    elsif_clause: $ => seq(
      'elsif', field('condition', $._expression), 'then', _statement_list($),
    ),

    else_clause: $ => seq(
      'else', _statement_list($),
    ),

    case_statement: $ => seq(
      'case', field('condition', $._expression), 'of',
      repeat($.case_arm),
      end_keyword_tail('case')
    ),

    case_arm: $ => seq(
      'label', field('pattern', sepBy(',', $._expression)), ':',
      _statement_list($),
    ),

    block_statement: $ => seq(
      'begin',
      _statement_list($),
      'end'
    ),

    invariant_statement: $ => seq(
      'invariant', field('condition', $._expression)
    ),

    assert_statement: $ => seq(
      'assert', field('condition', $._expression)
    ),

    call_statement: $ => choice(
      $.call_expression,
      seq(
        field('left', choice($.nameref_expression, $.field_expression)),
        optional($._argument_list)
      ),
    ),

    return_statement: $ => 'return',

    result_statement: $ => seq('result', field('value', $._expression)),

    _macro_directive: $ => choice(
      // TODO: commented items + pp_expression
      // $.pp_include_directive
      // $.pp_if_directive
      // $.pp_elseif_directive
      // $.pp_else_directive
      // $.pp_endif_directive
    ),

    _expression: $ => choice(
      $.literal_expression,
      $.objclass_expression,
      $.init_expression,
      $.nil_expression,
      $.sizeof_expression,
      $.binary_expression,
      $.unary_expression,
      $.paren_expression,

      $.self_expression,
      $.nameref_expression,
      $.field_expression,
      $.deref_expression,
      $.cheat_expression,
      $.nat_cheat_expression,
      $.arrow_expression,
      $.indirect_expression,
      $.bits_expression,
      $.call_expression,
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

    nil_expression: $ => prec.right(seq(
      'nil',
      optional(seq(
        '(',
        optional(choice($.item_path, $.primitive_type)),
        ')'
      )),
    )),

    sizeof_expression: $ => seq(
      // Not planning to support the size_spec part, since while the acceptable
      // values are only 1, 2 and 4, those can be computed in an arbitrary
      // manner, and that's not fun for incremental compilation
      'sizeof', '(',
      choice($._expression, $._type),
      ')',
    ),

    self_expression: $ => 'self',

    nameref_expression: $ => prec.left($.path_component),

    binary_expression: $ => {
      const left_assoc = [
        [PREC.imply, '=>'],
        [PREC.or, choice('or', '|')],
        [PREC.and, choice('and', '&')],
        [PREC.compare, choice(
          '<', '>', '<=', '>=', '=',
          seq('~', '='), seq('not', '='),
          seq('~', 'in'), seq('not', 'in')
        )],
        [PREC.add, choice('+', '-', 'xor')],
        [PREC.multiply, choice('*', '/', 'div', 'mod', 'rem', 'shl', 'shr')],
      ];

      // In toco, exponentiation is right-associative,
      // while in Turing, it's left-associative.
      //
      // Since we're targeting toco anyways, we're keeping
      // it right associative.
      const right_assoc = [
        [PREC.exp, '**']
      ];

      return choice(
        ...left_assoc.map(([precedence, operator]) => prec.left(precedence, seq(
          field('left', $._expression),
          field('operator', operator),
          field('right', $._expression),
        ))),
        ...right_assoc.map(([precedence, operator]) => prec.right(precedence, seq(
          field('left', $._expression),
          field('operator', operator),
          field('right', $._expression),
        )))
      );
    },

    unary_expression: $ => choice(
      prec(PREC.not, seq(
        field('operator', choice('not', '~')),
        field('right', $._expression)
      )),
      prec(PREC.negation, seq(
        field('operator', choice('-', '+')),
        field('right', $._expression)
      ))
    ),

    paren_expression: $ => seq('(', $._expression, ')'),

    field_expression: $ => prec.left(PREC.call, seq(
      field('left', $._expression),
      field('operator', '.'),
      field('field', $.path_component)
    )),

    deref_expression: $ => prec.left(PREC.deref, seq(
      field('operator', '^'),
      field('right', $._expression),
    )),

    cheat_expression: $ => seq(
      // Not planning to support the size_spec part, since while the acceptable
      // values are only 1, 2 and 4, those can be computed in an arbitrary
      // manner, and that's not fun for incremental compilation
      'cheat', '(',
      field('to_type', $._type), ',',
      field('operand', $._expression), optional(','),
      ')'
    ),

    nat_cheat_expression: $ => prec.left(PREC.deref, seq(
      field('operator', '#'),
      field('right', $._expression),
    )),

    arrow_expression: $ => prec.left(PREC.call, seq(
      field('left', $._expression),
      field('operator', '->'),
      field('field', $.identifier)
    )),

    indirect_expression: $ => seq(
      field('type_spec', choice($.field_expression, $.primitive_type)),
      field('operator', '@'),
      '(', $._expression, ')'
    ),

    bits_expression: $ => prec.left(PREC.call, seq(
      'bits', '(', $._expression, ',', $._bit_range, optional(','), ')',
    )),

    _bit_range: $ => seq(
      field('start', $._expression),
      optional(seq(
        '..',
        field('end', $._expression),
      ))
    ),

    call_expression: $ => prec.left(PREC.call, seq(
      field('left', $._expression), $._argument_list
    )),

    _argument_list: $ => seq('(', sepBy(',', $._call_argument), optional(','), ')'),

    _call_argument: $ => prec.left(choice(
      alias('all', $.all_expression),
      $._expression,
      $.slice_expression,
    )),

    slice_expression: $ => choice(
      field('start', $.slice_from_end_bound),
      seq(
        field('start', $._slice_range_bound),
        field('operator', '..'),
        field('end', $._slice_range_bound),
      )
    ),

    _slice_range_bound: $ => choice($._expression, $.slice_from_end_bound),

    slice_from_end_bound: $ => seq('*', optional(seq(
      '-',
      field('from_end', $._expression),
    ))),

    _type: $ => choice(
      // TODO: commented items

      $.primitive_type,
      $.forward_type,
      $.range_type,
      // $.enum_type,
      // $.array_type,
      // $.set_type,
      // $.record_type,
      // $.union_type,
      // $.pointer_type,
      // $.fcn_type,
      // $.proc_type,
      // $.collection_type,
      // $.condition_type,
    ),

    primitive_type: $ => prec.right(choice(
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
    )),

    charseq_size: $ => seq(
      '(',
      choice(
        '*', // ???: may want to treat as a "from end" atom, since that's also used for ranges
        $._expression
      ),
      ')'
    ),

    range_type: $ => seq(
      field('start', $._expression),
      '..',
      field('end', $._expression)
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

    item_path: $ => sepBy1(',', $.path_component),

    path_component: $ => $.identifier,
  }
});

function sepBy1(sep, rule) {
  return seq(rule, repeat(seq(sep, rule)));
}

function sepBy(sep, rule) {
  return optional(sepBy1(sep, rule));
}

function end_keyword_tail(bit) {
  return seq('end', bit)
}

function _statement_list($) {
  return repeat($._statement_line);
}

// - Range exprs should be hoisted into the precedence tree
//   - Auto creates span covering the bounds, don't have to make one
// - AllExpr is an atom, but can keep same logic
//   - Why not "allow" `all + 1` and reject it later? Would mean that we'd have to check that all is in a valid position,
//     but eh...

// Error kinds:
// - `all` can't be used here

// ah, so we basically want to create idxs from child to parent

// mostly wondering on how to go from parsing path to expression form

// so it'd be

// expression_or_path:
// - try as a path first
// - if could be an expression (via lookahead), convert!
//   - `expr_binding_power` has a bailout way to notify completion :D

// Path:
// (PathComponent '.')+

// PathComponent:
// NameRef GenericArgs?

// GenericArgs:
// '[' (GenericArg ',')* ']'

// ?
// const(???)

// how to parse this?
// a[1..2]

// as either:
// - range expr
// - constrained ty

// i like the `ty is range` syntax from pattern types, since that both specifies the size, and is unambiguous :D

// alt `ty in 1..2`, tho we'd want `ty is Some | None`

// can't really have dedicated path nodes, because:
//
// ^a.b[int]
//
// needs to be (field (deref nameref) (component (primitive int)))