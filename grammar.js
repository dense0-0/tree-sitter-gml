module.exports = grammar({
    name: 'gml',
    rules:
    {
        source_file: $ => repeat(
            $.statement
        ),

        statement: $=> seq(
            choice(
                $.variable_declaration,
                $.function_declaration,
                $.array_decleration,
                $.function_call,
                $.if_statement,
                $.while_statement,
                $.break_statement,
                $.switch_statement,
                $.for_statement,
                $.block,
                $.continue_keyword,
                $.comment
            ),
            optional(";")
        ),

        function_call: $ => seq(
            $.function,
            $.parameter_list,
        ),

        if_statement: $ => seq(
            $.if_keyword,
            $.condition_list,
            $.block,
            optional(choice(
                $.else_statement,
                $.elseif_statement
            ))
        ),

        while_statement: $ => seq(
            $.while_keyword,
            $.condition_list
        ),

        break_statement: $ => seq(
            $.break_keyword,
        ),

        switch_statement: $ => seq(
            $.switch_keyword,
            $.condition_list,
            "{",
            repeat(seq(
            $.case_keyword,
            $.expresion,
            ":",
            repeat($.expresion),
            $.break_keyword,
            )),
            "}",
        ),

        else_statement: $ => seq(
            $.else_keyword,
            $.block
        ),

        elseif_statement: $ => seq(
            $.elseif_keyword,
            $.condition_list,
            $.block
        ),

        for_statement: $ => prec.right(5,seq(
            $.for_keyword,
            "(",
              $.variable_declaration,
            ";",
            $.expresion,
            $.comparative_operator,
            $.expresion,
            ";",
            $.variable_declaration,
            ")"
        )),


        //operators       ------------------------------------------------------------------------------------------------------ 94
        mathamatical_operator: $ => choice(
            "+",
            "-",
            "*",
            "/"
        ),

        conditional_operator: $ => choice(
            "&&",
            "||",
            "^^"
        ),

        comparative_operator: $ => choice(
            ">",
            "<",
            "==",
            "<=",
            ">=",
            "!="
        ),

        assignment_operator: $ => choice(
            "=",
            "+=",
            "-=",
            "*=",
            "/="
        ),


        //basic           ------------------------------------------------------------------------------------------------------ 126
        string_literal: $ => choice(
            seq("'",/[^']+/,"'"),
            seq('"',/[^"]+/,'"')
        ),

        int_literal: $ => /\d+/,

        identifier: $ =>  /[A-Za-z_]+/,

        block: $ => seq(
            "{",
            repeat($.statement),
            "}"
        ),

        parameter_list: $ => seq(
            "(",
            optional($.expresion),
            repeat(seq(",", $.expresion)),
            ")"
        ),

        condition_list: $ => seq(
           "(",
            $.expresion,
            repeat(seq($.conditional_operator, $.expresion)),
            ")"
        ),

        function: $ => /[A-Za-z_]+/,

        comment: $ => seq(
            "//",
            /[^\n]+/,
        ),
        //function : $ => $.identifier,

        //comment: $ => seq(
        //    "//"
        //expresions      ------------------------------------------------------------------------------------------------------ 158
        expresion: $ => choice(
            $.identifier,
            $.int_literal,
            $.string_literal,
            $.function_call,
            $.relational_expresion,
            $.mathamatical_expresion,
            $.array
        ),

        mathamatical_expresion: $ => prec.right(5,seq(
            $.expresion,
            $.mathamatical_operator,
            $.expresion
        )),

        relational_expresion: $ => prec.right(5,seq(
            $.expresion,
            $.comparative_operator,
            $.expresion
        )),

        array: $ => seq(
            $.expresion,
            "[",
            $.expresion,
            repeat(seq(
            ",",
            $.expresion
            )),
            "]"
        ),

        //keywords       ------------------------------------------------------------------------------------------------------ 192
        function_keyword: $ => "function",
        if_keyword: $ => "if",
        while_keyword: $ => "while",
        break_keyword: $ => "break",
        case_keyword: $ => "case",
        switch_keyword: $ => "switch",
        else_statement: $ => "else",
        elseif_statement: $ => "elseif",
        for_keyword: $ => "for",
        continue_keyword: $ => "continue",

        //declerations   ------------------------------------------------------------------------------------------------------ 203
       function_declaration: $ => choice(
            seq(
                $.function_keyword,
                $.identifier,
                $.parameter_list,
                $.block,
            ),
            seq(
                $.identifier,
                "=",
                $.function_keyword,
                $.parameter_list,
                $.block
            )
        ),

       variable_declaration: $ => prec.right(0,choice(
            seq(
                $.identifier,
                choice(
                    "++",
                    seq(
                        $.assignment_operator,
                        $.expresion
                    )
                )
            ),
            seq(
                "var",
                $.identifier,
                optional(choice(
                    "++",
                    seq(
                        $.assignment_operator,
                        $.expresion
                    )
                ))
            ),
       )),

        array_decleration: $ => seq(
            $.identifier,
            "[",
            $.expresion,
            "]",
            $.assignment_operator,
            $.expresion
        ),
    }
});
