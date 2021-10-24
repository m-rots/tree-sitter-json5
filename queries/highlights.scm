; Properties
;-----------

(identifier) @property

; Literals
;---------

(boolean) @constant.builtin
(comment) @comment
(null) @constant.builtin
(number) @number
(string) @string
(string (escape_sequence) @escape)

; Punctuation
;------------

":" @operator

"{" @punctuation.bracket
"}" @punctuation.bracket
"[" @punctuation.bracket
"]" @punctuation.bracket

"," @punctuation.delimiter
"." @punctuation.delimiter