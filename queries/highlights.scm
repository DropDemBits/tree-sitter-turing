(primitive_type) @type.builtin
(type_identifier) @type

(constvar_declaration
  name: (identifier) @variable)

(bind_item
  name: (identifier) @variable)

(constvar_param name: (identifier) @variable.parameter)
(param_spec (function_type name: (identifier) @variable.parameter))
(param_spec (procedure_type name: (identifier) @variable.parameter))

(line_comment) @comment
(block_comment) @comment

(binary_expression
  operator: [
    "=>"
    "or" "|"
    "and" "&"
    "<" ">" "<=" ">=" "="
    "not" "~"
    "in"
    "div"
    "+" "-" "xor" 
    "*" "/" "div" "mod" "rem" "shl" "shr"
    "**"
  ] @operator)

(unary_expression
  operator: [
    "not" "~"
    "+" "-"
  ] @operator)

"^" @operator
"->" @operator
"#" @operator
"@" @operator
".." @operator
(deref_expression operator: "^" @operator)

"(" @punctuation.bracket
")" @punctuation.bracket

":" @punctuation.delimiter
"." @punctuation.delimiter
"," @punctuation.delimiter
";" @punctuation.delimiter


(all_expression) @keyword
"array" @keyword
; "asm" @keyword
"assert" @keyword
"begin" @keyword
"bind" @keyword
"bits" @keyword
; "body" @keyword
; "break" @keyword
"by" @keyword
"case" @keyword
"cheat" @keyword
(checked_attr) @keyword
"class" @keyword
; "close" @keyword
"collection" @keyword
"condition" @keyword
"const" @keyword
"decreasing" @keyword
; "def" @keyword
"deferred" @keyword
"else" @keyword
"elif" @keyword
"elseif" @keyword
"elsif" @keyword
"end" @keyword
"endcase" @keyword
"endfor" @keyword
"endif" @keyword
"endloop" @keyword
"endrecord" @keyword
"endunion" @keyword
"enum" @keyword
"exit" @keyword
; "export" @keyword
"external" @keyword
; "flexible" @keyword todo!
"for" @keyword
; "fork" @keyword
"forward" @keyword
; "free" @keyword
"fcn" @keyword
"function" @keyword
; "get" @keyword
; "handler" @keyword
"if" @keyword
"implement" @keyword
"import" @keyword
; "include" @keyword
"inherit" @keyword
"init" @keyword
; "invariant" @keyword
"label" @keyword
"loop" @keyword
"module" @keyword
"monitor" @keyword
; "new" @keyword
"objectclass" @keyword
"of" @keyword
; "opaque" @keyword
; "open" @keyword
"or" @keyword
(packed_attr) @keyword
; "pause" @keyword
"pervasive" @keyword
"pointer" @keyword
; "post" @keyword
; "pre" @keyword
"priority" @keyword
"proc" @keyword
"procedure" @keyword
"process" @keyword
; "put" @keyword
; "quit" @keyword
; "read" @keyword
"record" @keyword
(register_attr) @keyword
"result" @keyword
(return_statement) @keyword
; "seek" @keyword
(self_expression) @variable.builtin
; "set" @keyword
; "signal" @keyword
"sizeof" @keyword
; "skip" @keyword
; "tag" @keyword
; "tell" @keyword
"then" @keyword
"timeout" @keyword
"to" @keyword
"type" @keyword
(unchecked_attr) @keyword
"union" @keyword
"unit" @keyword
; "unqualified" @keyword
"var" @keyword
; "wait" @keyword
"when" @keyword
; "write" @keyword

(external_item "in" @keyword)

"nil" @constant.builtin

(char_literal) @string
(string_literal) @string

(integer_literal) @constant
(boolean_literal) @constant
(real_literal) @constant

(escape_sequence) @escape
