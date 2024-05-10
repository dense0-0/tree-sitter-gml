[
    (function_keyword)
    (switch_keyword)
    (if_keyword)
    (switch_keyword)
    (while_keyword)
    (for_keyword)
    (else_statement)
    (case_keyword)
    "var"
    (continue_keyword)
] @keyword

(string_literal) @string
(int_literal) @number
(identifier) @variable

[
    "["
    "]"
    "{"
    "}"
    "("
    ")"
] @punctuation.bracket

[
    (mathamatical_operator)
    (conditional_operator)
    (assignment_operator)
    (comparative_operator)
    "++"
] @operator

(function) @function

[
    ","
    ";"
] @punctuation.delimiter

(comment) @comment
