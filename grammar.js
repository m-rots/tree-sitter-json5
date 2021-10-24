module.exports = grammar({
    name: "json5",

    extras: $ => [
        /\s/,
        $.comment,
    ],

    rules: {
        source_file: $ => $._value,

        _value: $ => choice(
            $.null,
            $.boolean,
            $.string,
            $.number,
            $.object,
            $.array,
        ),

        // JSON Values

        null: $ => $._null_literal,

        boolean: $ => $._boolean_literal,

        string: $ => $._json5_string_literal,

        number: $ => seq(
            optional(choice("+", "-")),
            $._json5_numeric_literal,
        ),

        object: $ => seq(
            "{",
            optional(seq(
                sepByComma1($.member),
                optional(",")
            )),
            "}",
        ),

        member: $ => seq(
            field("name", $._json5_member_name),
            ":",
            field("value", $._value),
        ),

        array: $ => seq(
            "[",
            optional(seq(
                sepByComma1($._value),
                optional(",")
            )),
            "]"
        ),

        // JSON Comment
        // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
        comment: $ => token(choice(
            seq("//", /.*/),
            seq(
                "/*",
                /[^*]*\*+([^/*][^*]*\*+)*/,
                "/",
            ),
        )),

        // JSON Literals

        _json5_numeric_literal: $ => choice(
            $._numeric_literal,
            "Infinity",
            "NaN",
        ),

        _json5_member_name: $ => choice(
            $.identifier,
            $.string,
        ),

        _json5_string_literal: $ => choice(
            $._json5_single_string_characters,
            $._json5_double_string_characters,
        ),

        // Strings

        _json5_double_string_characters: $ => seq(
            '"',
            repeat(choice(
                alias($.unescaped_double_string_fragment, $.string_fragment),
                $.escape_sequence,
            )),
            '"',
        ),

        _json5_single_string_characters: $ => seq(
            "'",
            repeat(choice(
                alias($.unescaped_single_string_fragment, $.string_fragment),
                $.escape_sequence,
            )),
            "'",
        ),

        // https://github.com/tree-sitter/tree-sitter-javascript/blob/fdeb68ac8d2bd5a78b943528bb68ceda3aade2eb/grammar.js#L889
        // Workaround to https://github.com/tree-sitter/tree-sitter/issues/1156
        // We give names to the token() constructs containing a regexp
        // so as to obtain a node in the CST.
        unescaped_double_string_fragment: $ => token.immediate(
            prec(1, /[^"\\]+/)
        ),

        unescaped_single_string_fragment: $ => token.immediate(
            prec(1, /[^'\\]+/)
        ),

        // https://github.com/tree-sitter/tree-sitter-javascript/blob/fdeb68ac8d2bd5a78b943528bb68ceda3aade2eb/grammar.js#L896
        escape_sequence: $ => token.immediate(seq(
            "\\",
            choice(
                /[^xu0-7]/,
                /[0-7]{1,3}/,
                /x[0-9a-fA-F]{2}/,
                /u[0-9a-fA-F]{4}/,
                /u{[0-9a-fA-F]+}/
            )
        )),

        // ECMAScript Null Literals
        // https://262.ecma-international.org/5.1/#sec-7.8.1

        _null_literal: $ => "null",

        // ECMAScript Boolean Literals
        // https://262.ecma-international.org/5.1/#sec-7.8.2

        _boolean_literal: $ => choice(
            "true",
            "false",
        ),

        // ECMAScript Numeric Literals
        // https://262.ecma-international.org/5.1/#sec-7.8.3

        _numeric_literal: $ => choice(
            $._decimal_literal,
            $._hex_integer_literal,
        ),

        _decimal_literal: $ => choice(
            seq(
                $._decimal_integer_literal,
                ".",
                optional($._decimal_digits),
                optional($._exponent_part),
            ),
            seq(
                ".",
                $._decimal_digits,
                optional($._exponent_part),
            ),
            seq(
                $._decimal_integer_literal,
                optional($._exponent_part),
            )
        ),

        _decimal_integer_literal: $ => choice(
            "0",
            seq(
                $._non_zero_digit,
                optional($._decimal_digits),
            )
        ),

        _decimal_digit: $ => /[0-9]/,
        _decimal_digits: $ => /[0-9]+/,

        _non_zero_digit: $ => /[1-9]/,

        _exponent_part: $ => seq(
            choice("e", "E"),
            $._signed_integer,
        ),

        _signed_integer: $ => choice(
            $._decimal_digits,
            seq("+", $._decimal_digits),
            seq("-", $._decimal_digits),
        ),

        _hex_integer_literal: $ => choice(
            seq("0x", $._hex_digits),
            seq("0X", $._hex_digits),
        ),

        _hex_digits: $ => /[0-9a-fA-F]+/,

        // Other JavaScript goodies

        // https://github.com/tree-sitter/tree-sitter-javascript/blob/fdeb68ac8d2bd5a78b943528bb68ceda3aade2eb/grammar.js#L1004
        identifier: $ => {
            const alpha = /[^\x00-\x1F\s\p{Zs}0-9:;`"'@#.,|^&<=>+\-*/\\%?!~()\[\]{}\uFEFF\u2060\u200B]|\\u[0-9a-fA-F]{4}|\\u\{[0-9a-fA-F]+\}/
            const alphanumeric = /[^\x00-\x1F\s\p{Zs}:;`"'@#.,|^&<=>+\-*/\\%?!~()\[\]{}\uFEFF\u2060\u200B]|\\u[0-9a-fA-F]{4}|\\u\{[0-9a-fA-F]+\}/
            return token(seq(alpha, repeat(alphanumeric)))
        },
    }
})

// Requires at least one element
function sepByComma1(rule) {
    return seq(rule, repeat(seq(",", rule)))
}