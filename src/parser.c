#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 63
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 56
#define ALIAS_COUNT 0
#define TOKEN_COUNT 31
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_PLUS = 1,
  anon_sym_DASH = 2,
  anon_sym_LBRACE = 3,
  anon_sym_COMMA = 4,
  anon_sym_RBRACE = 5,
  anon_sym_COLON = 6,
  anon_sym_LBRACK = 7,
  anon_sym_RBRACK = 8,
  sym_comment = 9,
  anon_sym_Infinity = 10,
  anon_sym_NaN = 11,
  anon_sym_DQUOTE = 12,
  anon_sym_SQUOTE = 13,
  sym_unescaped_double_string_fragment = 14,
  sym_unescaped_single_string_fragment = 15,
  sym_escape_sequence = 16,
  sym__null_literal = 17,
  anon_sym_true = 18,
  anon_sym_false = 19,
  anon_sym_DOT = 20,
  anon_sym_0 = 21,
  sym__decimal_digit = 22,
  sym__decimal_digits = 23,
  sym__non_zero_digit = 24,
  anon_sym_e = 25,
  anon_sym_E = 26,
  anon_sym_0x = 27,
  anon_sym_0X = 28,
  sym__hex_digits = 29,
  sym_identifier = 30,
  sym_source_file = 31,
  sym__value = 32,
  sym_null = 33,
  sym_boolean = 34,
  sym_string = 35,
  sym_number = 36,
  sym_object = 37,
  sym_member = 38,
  sym_array = 39,
  sym__json5_numeric_literal = 40,
  sym__json5_member_name = 41,
  sym__json5_string_literal = 42,
  sym__json5_double_string_characters = 43,
  sym__json5_single_string_characters = 44,
  sym__boolean_literal = 45,
  sym__numeric_literal = 46,
  sym__decimal_literal = 47,
  sym__decimal_integer_literal = 48,
  sym__exponent_part = 49,
  sym__signed_integer = 50,
  sym__hex_integer_literal = 51,
  aux_sym_object_repeat1 = 52,
  aux_sym_array_repeat1 = 53,
  aux_sym__json5_double_string_characters_repeat1 = 54,
  aux_sym__json5_single_string_characters_repeat1 = 55,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_comment] = "comment",
  [anon_sym_Infinity] = "Infinity",
  [anon_sym_NaN] = "NaN",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_SQUOTE] = "'",
  [sym_unescaped_double_string_fragment] = "string_fragment",
  [sym_unescaped_single_string_fragment] = "string_fragment",
  [sym_escape_sequence] = "escape_sequence",
  [sym__null_literal] = "_null_literal",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_DOT] = ".",
  [anon_sym_0] = "0",
  [sym__decimal_digit] = "_decimal_digit",
  [sym__decimal_digits] = "_decimal_digits",
  [sym__non_zero_digit] = "_non_zero_digit",
  [anon_sym_e] = "e",
  [anon_sym_E] = "E",
  [anon_sym_0x] = "0x",
  [anon_sym_0X] = "0X",
  [sym__hex_digits] = "_hex_digits",
  [sym_identifier] = "identifier",
  [sym_source_file] = "source_file",
  [sym__value] = "_value",
  [sym_null] = "null",
  [sym_boolean] = "boolean",
  [sym_string] = "string",
  [sym_number] = "number",
  [sym_object] = "object",
  [sym_member] = "member",
  [sym_array] = "array",
  [sym__json5_numeric_literal] = "_json5_numeric_literal",
  [sym__json5_member_name] = "_json5_member_name",
  [sym__json5_string_literal] = "_json5_string_literal",
  [sym__json5_double_string_characters] = "_json5_double_string_characters",
  [sym__json5_single_string_characters] = "_json5_single_string_characters",
  [sym__boolean_literal] = "_boolean_literal",
  [sym__numeric_literal] = "_numeric_literal",
  [sym__decimal_literal] = "_decimal_literal",
  [sym__decimal_integer_literal] = "_decimal_integer_literal",
  [sym__exponent_part] = "_exponent_part",
  [sym__signed_integer] = "_signed_integer",
  [sym__hex_integer_literal] = "_hex_integer_literal",
  [aux_sym_object_repeat1] = "object_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym__json5_double_string_characters_repeat1] = "_json5_double_string_characters_repeat1",
  [aux_sym__json5_single_string_characters_repeat1] = "_json5_single_string_characters_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_comment] = sym_comment,
  [anon_sym_Infinity] = anon_sym_Infinity,
  [anon_sym_NaN] = anon_sym_NaN,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym_unescaped_double_string_fragment] = sym_unescaped_double_string_fragment,
  [sym_unescaped_single_string_fragment] = sym_unescaped_double_string_fragment,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym__null_literal] = sym__null_literal,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_0] = anon_sym_0,
  [sym__decimal_digit] = sym__decimal_digit,
  [sym__decimal_digits] = sym__decimal_digits,
  [sym__non_zero_digit] = sym__non_zero_digit,
  [anon_sym_e] = anon_sym_e,
  [anon_sym_E] = anon_sym_E,
  [anon_sym_0x] = anon_sym_0x,
  [anon_sym_0X] = anon_sym_0X,
  [sym__hex_digits] = sym__hex_digits,
  [sym_identifier] = sym_identifier,
  [sym_source_file] = sym_source_file,
  [sym__value] = sym__value,
  [sym_null] = sym_null,
  [sym_boolean] = sym_boolean,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [sym_object] = sym_object,
  [sym_member] = sym_member,
  [sym_array] = sym_array,
  [sym__json5_numeric_literal] = sym__json5_numeric_literal,
  [sym__json5_member_name] = sym__json5_member_name,
  [sym__json5_string_literal] = sym__json5_string_literal,
  [sym__json5_double_string_characters] = sym__json5_double_string_characters,
  [sym__json5_single_string_characters] = sym__json5_single_string_characters,
  [sym__boolean_literal] = sym__boolean_literal,
  [sym__numeric_literal] = sym__numeric_literal,
  [sym__decimal_literal] = sym__decimal_literal,
  [sym__decimal_integer_literal] = sym__decimal_integer_literal,
  [sym__exponent_part] = sym__exponent_part,
  [sym__signed_integer] = sym__signed_integer,
  [sym__hex_integer_literal] = sym__hex_integer_literal,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym__json5_double_string_characters_repeat1] = aux_sym__json5_double_string_characters_repeat1,
  [aux_sym__json5_single_string_characters_repeat1] = aux_sym__json5_single_string_characters_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Infinity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NaN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_unescaped_double_string_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_unescaped_single_string_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym__null_literal] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0] = {
    .visible = true,
    .named = false,
  },
  [sym__decimal_digit] = {
    .visible = false,
    .named = true,
  },
  [sym__decimal_digits] = {
    .visible = false,
    .named = true,
  },
  [sym__non_zero_digit] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_e] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_E] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0x] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0X] = {
    .visible = true,
    .named = false,
  },
  [sym__hex_digits] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_member] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym__json5_numeric_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__json5_member_name] = {
    .visible = false,
    .named = true,
  },
  [sym__json5_string_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__json5_double_string_characters] = {
    .visible = false,
    .named = true,
  },
  [sym__json5_single_string_characters] = {
    .visible = false,
    .named = true,
  },
  [sym__boolean_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__numeric_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__decimal_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__decimal_integer_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__exponent_part] = {
    .visible = false,
    .named = true,
  },
  [sym__signed_integer] = {
    .visible = false,
    .named = true,
  },
  [sym__hex_integer_literal] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_object_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__json5_double_string_characters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__json5_single_string_characters_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_name = 1,
  field_value = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
    {field_value, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 160
    ? (c < '['
      ? (c < 0
        ? c == 0
        : (c <= '#' || (c >= '%' && c <= '@')))
      : (c <= '^' || (c < '{'
        ? c == '`'
        : c <= '~')))
    : (c <= 160 || (c < 8287
      ? (c < 8192
        ? c == 5760
        : (c <= 8203 || c == 8239))
      : (c <= 8288 || (c < 65279
        ? c == 12288
        : c <= 65279)))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 160
    ? (c < ':'
      ? (c < 0
        ? c == 0
        : (c <= '#' || (c >= '%' && c <= '/')))
      : (c <= '@' || (c < '`'
        ? (c >= '[' && c <= '^')
        : (c <= '`' || (c >= '{' && c <= '~')))))
    : (c <= 160 || (c < 8287
      ? (c < 8192
        ? c == 5760
        : (c <= 8203 || c == 8239))
      : (c <= 8288 || (c < 65279
        ? c == 12288
        : c <= 65279)))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(44);
      if (lookahead == '"') ADVANCE(57);
      if (lookahead == '\'') ADVANCE(58);
      if (lookahead == '+') ADVANCE(45);
      if (lookahead == ',') ADVANCE(48);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '0') ADVANCE(79);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'E') ADVANCE(84);
      if (lookahead == 'I') ADVANCE(20);
      if (lookahead == 'N') ADVANCE(10);
      if (lookahead == '[') ADVANCE(51);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == ']') ADVANCE(52);
      if (lookahead == 'e') ADVANCE(83);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'n') ADVANCE(27);
      if (lookahead == 't') ADVANCE(22);
      if (lookahead == '{') ADVANCE(47);
      if (lookahead == '}') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(57);
      if (lookahead == '\'') ADVANCE(58);
      if (lookahead == '+') ADVANCE(45);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '0') ADVANCE(78);
      if (lookahead == 'I') ADVANCE(20);
      if (lookahead == 'N') ADVANCE(10);
      if (lookahead == '[') ADVANCE(51);
      if (lookahead == ']') ADVANCE(52);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'n') ADVANCE(27);
      if (lookahead == 't') ADVANCE(22);
      if (lookahead == '{') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(57);
      if (lookahead == '\'') ADVANCE(58);
      if (lookahead == '+') ADVANCE(45);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == '}') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(88);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(57);
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(58);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(54);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(53);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      END_STATE();
    case 9:
      if (lookahead == 'N') ADVANCE(56);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 14:
      if (lookahead == 'f') ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 16:
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 23:
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 25:
      if (lookahead == 'u') ADVANCE(30);
      if (lookahead == 'x') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(73);
      if (lookahead != 0) ADVANCE(71);
      END_STATE();
    case 26:
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 27:
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 28:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 29:
      if (lookahead == 'y') ADVANCE(55);
      END_STATE();
    case 30:
      if (lookahead == '{') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(34);
      END_STATE();
    case 31:
      if (lookahead == '{') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 32:
      if (lookahead == '}') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '}') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(39);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(32);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(37);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      END_STATE();
    case 42:
      if (eof) ADVANCE(44);
      if (lookahead == '"') ADVANCE(57);
      if (lookahead == '\'') ADVANCE(58);
      if (lookahead == '+') ADVANCE(45);
      if (lookahead == ',') ADVANCE(48);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '0') ADVANCE(79);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'E') ADVANCE(84);
      if (lookahead == 'I') ADVANCE(20);
      if (lookahead == 'N') ADVANCE(10);
      if (lookahead == '[') ADVANCE(51);
      if (lookahead == ']') ADVANCE(52);
      if (lookahead == 'e') ADVANCE(83);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'n') ADVANCE(27);
      if (lookahead == 't') ADVANCE(22);
      if (lookahead == '{') ADVANCE(47);
      if (lookahead == '}') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 43:
      if (eof) ADVANCE(44);
      if (lookahead == ',') ADVANCE(48);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == 'E') ADVANCE(84);
      if (lookahead == ']') ADVANCE(52);
      if (lookahead == 'e') ADVANCE(83);
      if (lookahead == '}') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_Infinity);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_NaN);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '*') ADVANCE(62);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(64);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '*') ADVANCE(61);
      if (lookahead == '/') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '*') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '*') ADVANCE(68);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(70);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '*') ADVANCE(67);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '*') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(71);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(72);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__null_literal);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == 'X') ADVANCE(86);
      if (lookahead == 'x') ADVANCE(85);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == 'X') ADVANCE(86);
      if (lookahead == 'x') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__decimal_digit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__decimal_digits);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__non_zero_digit);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_E);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_0x);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_0X);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__hex_digits);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(28);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(88);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 43},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 43},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_Infinity] = ACTIONS(1),
    [anon_sym_NaN] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym__null_literal] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_0] = ACTIONS(1),
    [sym__decimal_digit] = ACTIONS(1),
    [sym__decimal_digits] = ACTIONS(1),
    [sym__non_zero_digit] = ACTIONS(1),
    [anon_sym_e] = ACTIONS(1),
    [anon_sym_E] = ACTIONS(1),
    [anon_sym_0x] = ACTIONS(1),
    [anon_sym_0X] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(58),
    [sym__value] = STATE(61),
    [sym_null] = STATE(61),
    [sym_boolean] = STATE(61),
    [sym_string] = STATE(61),
    [sym_number] = STATE(61),
    [sym_object] = STATE(61),
    [sym_array] = STATE(61),
    [sym__json5_numeric_literal] = STATE(40),
    [sym__json5_string_literal] = STATE(20),
    [sym__json5_double_string_characters] = STATE(20),
    [sym__json5_single_string_characters] = STATE(20),
    [sym__boolean_literal] = STATE(37),
    [sym__numeric_literal] = STATE(40),
    [sym__decimal_literal] = STATE(40),
    [sym__decimal_integer_literal] = STATE(13),
    [sym__hex_integer_literal] = STATE(40),
    [anon_sym_PLUS] = ACTIONS(5),
    [anon_sym_DASH] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [anon_sym_Infinity] = ACTIONS(11),
    [anon_sym_NaN] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [sym__null_literal] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(21),
    [anon_sym_0] = ACTIONS(23),
    [sym__non_zero_digit] = ACTIONS(25),
    [anon_sym_0x] = ACTIONS(27),
    [anon_sym_0X] = ACTIONS(27),
  },
  [2] = {
    [sym__value] = STATE(56),
    [sym_null] = STATE(56),
    [sym_boolean] = STATE(56),
    [sym_string] = STATE(56),
    [sym_number] = STATE(56),
    [sym_object] = STATE(56),
    [sym_array] = STATE(56),
    [sym__json5_numeric_literal] = STATE(40),
    [sym__json5_string_literal] = STATE(20),
    [sym__json5_double_string_characters] = STATE(20),
    [sym__json5_single_string_characters] = STATE(20),
    [sym__boolean_literal] = STATE(37),
    [sym__numeric_literal] = STATE(40),
    [sym__decimal_literal] = STATE(40),
    [sym__decimal_integer_literal] = STATE(13),
    [sym__hex_integer_literal] = STATE(40),
    [anon_sym_PLUS] = ACTIONS(5),
    [anon_sym_DASH] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
    [anon_sym_Infinity] = ACTIONS(11),
    [anon_sym_NaN] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [sym__null_literal] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(21),
    [anon_sym_0] = ACTIONS(23),
    [sym__non_zero_digit] = ACTIONS(25),
    [anon_sym_0x] = ACTIONS(27),
    [anon_sym_0X] = ACTIONS(27),
  },
  [3] = {
    [sym__value] = STATE(56),
    [sym_null] = STATE(56),
    [sym_boolean] = STATE(56),
    [sym_string] = STATE(56),
    [sym_number] = STATE(56),
    [sym_object] = STATE(56),
    [sym_array] = STATE(56),
    [sym__json5_numeric_literal] = STATE(40),
    [sym__json5_string_literal] = STATE(20),
    [sym__json5_double_string_characters] = STATE(20),
    [sym__json5_single_string_characters] = STATE(20),
    [sym__boolean_literal] = STATE(37),
    [sym__numeric_literal] = STATE(40),
    [sym__decimal_literal] = STATE(40),
    [sym__decimal_integer_literal] = STATE(13),
    [sym__hex_integer_literal] = STATE(40),
    [anon_sym_PLUS] = ACTIONS(5),
    [anon_sym_DASH] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
    [anon_sym_Infinity] = ACTIONS(11),
    [anon_sym_NaN] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [sym__null_literal] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(21),
    [anon_sym_0] = ACTIONS(23),
    [sym__non_zero_digit] = ACTIONS(25),
    [anon_sym_0x] = ACTIONS(27),
    [anon_sym_0X] = ACTIONS(27),
  },
  [4] = {
    [sym__value] = STATE(53),
    [sym_null] = STATE(53),
    [sym_boolean] = STATE(53),
    [sym_string] = STATE(53),
    [sym_number] = STATE(53),
    [sym_object] = STATE(53),
    [sym_array] = STATE(53),
    [sym__json5_numeric_literal] = STATE(40),
    [sym__json5_string_literal] = STATE(20),
    [sym__json5_double_string_characters] = STATE(20),
    [sym__json5_single_string_characters] = STATE(20),
    [sym__boolean_literal] = STATE(37),
    [sym__numeric_literal] = STATE(40),
    [sym__decimal_literal] = STATE(40),
    [sym__decimal_integer_literal] = STATE(13),
    [sym__hex_integer_literal] = STATE(40),
    [anon_sym_PLUS] = ACTIONS(5),
    [anon_sym_DASH] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
    [anon_sym_Infinity] = ACTIONS(11),
    [anon_sym_NaN] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [sym__null_literal] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(21),
    [anon_sym_0] = ACTIONS(23),
    [sym__non_zero_digit] = ACTIONS(25),
    [anon_sym_0x] = ACTIONS(27),
    [anon_sym_0X] = ACTIONS(27),
  },
  [5] = {
    [sym__value] = STATE(55),
    [sym_null] = STATE(55),
    [sym_boolean] = STATE(55),
    [sym_string] = STATE(55),
    [sym_number] = STATE(55),
    [sym_object] = STATE(55),
    [sym_array] = STATE(55),
    [sym__json5_numeric_literal] = STATE(40),
    [sym__json5_string_literal] = STATE(20),
    [sym__json5_double_string_characters] = STATE(20),
    [sym__json5_single_string_characters] = STATE(20),
    [sym__boolean_literal] = STATE(37),
    [sym__numeric_literal] = STATE(40),
    [sym__decimal_literal] = STATE(40),
    [sym__decimal_integer_literal] = STATE(13),
    [sym__hex_integer_literal] = STATE(40),
    [anon_sym_PLUS] = ACTIONS(5),
    [anon_sym_DASH] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [anon_sym_Infinity] = ACTIONS(11),
    [anon_sym_NaN] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [sym__null_literal] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(21),
    [anon_sym_0] = ACTIONS(23),
    [sym__non_zero_digit] = ACTIONS(25),
    [anon_sym_0x] = ACTIONS(27),
    [anon_sym_0X] = ACTIONS(27),
  },
  [6] = {
    [sym__value] = STATE(56),
    [sym_null] = STATE(56),
    [sym_boolean] = STATE(56),
    [sym_string] = STATE(56),
    [sym_number] = STATE(56),
    [sym_object] = STATE(56),
    [sym_array] = STATE(56),
    [sym__json5_numeric_literal] = STATE(40),
    [sym__json5_string_literal] = STATE(20),
    [sym__json5_double_string_characters] = STATE(20),
    [sym__json5_single_string_characters] = STATE(20),
    [sym__boolean_literal] = STATE(37),
    [sym__numeric_literal] = STATE(40),
    [sym__decimal_literal] = STATE(40),
    [sym__decimal_integer_literal] = STATE(13),
    [sym__hex_integer_literal] = STATE(40),
    [anon_sym_PLUS] = ACTIONS(5),
    [anon_sym_DASH] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [anon_sym_Infinity] = ACTIONS(11),
    [anon_sym_NaN] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [sym__null_literal] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(21),
    [anon_sym_0] = ACTIONS(23),
    [sym__non_zero_digit] = ACTIONS(25),
    [anon_sym_0x] = ACTIONS(27),
    [anon_sym_0X] = ACTIONS(27),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_0,
    ACTIONS(25), 1,
      sym__non_zero_digit,
    STATE(13), 1,
      sym__decimal_integer_literal,
    ACTIONS(27), 2,
      anon_sym_0x,
      anon_sym_0X,
    ACTIONS(35), 2,
      anon_sym_Infinity,
      anon_sym_NaN,
    STATE(47), 4,
      sym__json5_numeric_literal,
      sym__numeric_literal,
      sym__decimal_literal,
      sym__hex_integer_literal,
  [30] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    ACTIONS(39), 1,
      sym_identifier,
    STATE(54), 1,
      sym_member,
    STATE(62), 2,
      sym_string,
      sym__json5_member_name,
    STATE(20), 3,
      sym__json5_string_literal,
      sym__json5_double_string_characters,
      sym__json5_single_string_characters,
  [58] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      sym_member,
    STATE(62), 2,
      sym_string,
      sym__json5_member_name,
    STATE(20), 3,
      sym__json5_string_literal,
      sym__json5_double_string_characters,
      sym__json5_single_string_characters,
  [86] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    STATE(50), 1,
      sym_member,
    STATE(62), 2,
      sym_string,
      sym__json5_member_name,
    STATE(20), 3,
      sym__json5_string_literal,
      sym__json5_double_string_characters,
      sym__json5_single_string_characters,
  [114] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym_identifier,
    STATE(54), 1,
      sym_member,
    STATE(62), 2,
      sym_string,
      sym__json5_member_name,
    STATE(20), 3,
      sym__json5_string_literal,
      sym__json5_double_string_characters,
      sym__json5_single_string_characters,
  [139] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      sym__decimal_digits,
    ACTIONS(45), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [155] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_DOT,
    STATE(33), 1,
      sym__exponent_part,
    ACTIONS(53), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(49), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [175] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__decimal_digits,
    STATE(44), 1,
      sym__exponent_part,
    ACTIONS(53), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(55), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [195] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(42), 1,
      sym__exponent_part,
    ACTIONS(53), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(59), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [212] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(44), 1,
      sym__exponent_part,
    ACTIONS(53), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(55), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [242] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [253] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [264] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [275] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [286] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [297] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [307] = 4,
    ACTIONS(75), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(30), 1,
      aux_sym__json5_double_string_characters_repeat1,
    ACTIONS(79), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [321] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [331] = 4,
    ACTIONS(75), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_SQUOTE,
    STATE(31), 1,
      aux_sym__json5_single_string_characters_repeat1,
    ACTIONS(85), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [345] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [355] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [365] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [375] = 4,
    ACTIONS(75), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    STATE(41), 1,
      aux_sym__json5_double_string_characters_repeat1,
    ACTIONS(95), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [389] = 4,
    ACTIONS(75), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    STATE(43), 1,
      aux_sym__json5_single_string_characters_repeat1,
    ACTIONS(99), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [403] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      sym__decimal_digits,
    STATE(45), 1,
      sym__signed_integer,
    ACTIONS(101), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [417] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [427] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [437] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [457] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [467] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [477] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [487] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [497] = 4,
    ACTIONS(75), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    STATE(41), 1,
      aux_sym__json5_double_string_characters_repeat1,
    ACTIONS(121), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [511] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [521] = 4,
    ACTIONS(75), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_SQUOTE,
    STATE(43), 1,
      aux_sym__json5_single_string_characters_repeat1,
    ACTIONS(128), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [535] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [545] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [555] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [565] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [575] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    ACTIONS(140), 1,
      anon_sym_RBRACE,
    STATE(48), 1,
      aux_sym_object_repeat1,
  [588] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_COMMA,
    ACTIONS(145), 1,
      anon_sym_RBRACK,
    STATE(49), 1,
      aux_sym_array_repeat1,
  [601] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_COMMA,
    ACTIONS(149), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      aux_sym_object_repeat1,
  [614] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_RBRACK,
    ACTIONS(151), 1,
      anon_sym_COMMA,
    STATE(49), 1,
      aux_sym_array_repeat1,
  [627] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    STATE(48), 1,
      aux_sym_object_repeat1,
  [640] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_COMMA,
    ACTIONS(157), 1,
      anon_sym_RBRACK,
    STATE(51), 1,
      aux_sym_array_repeat1,
  [653] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [661] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [669] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [677] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      sym__hex_digits,
  [684] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      ts_builtin_sym_end,
  [691] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      sym__decimal_digits,
  [698] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      sym__decimal_digits,
  [705] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
  [712] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 30,
  [SMALL_STATE(9)] = 58,
  [SMALL_STATE(10)] = 86,
  [SMALL_STATE(11)] = 114,
  [SMALL_STATE(12)] = 139,
  [SMALL_STATE(13)] = 155,
  [SMALL_STATE(14)] = 175,
  [SMALL_STATE(15)] = 195,
  [SMALL_STATE(16)] = 212,
  [SMALL_STATE(17)] = 229,
  [SMALL_STATE(18)] = 242,
  [SMALL_STATE(19)] = 253,
  [SMALL_STATE(20)] = 264,
  [SMALL_STATE(21)] = 275,
  [SMALL_STATE(22)] = 286,
  [SMALL_STATE(23)] = 297,
  [SMALL_STATE(24)] = 307,
  [SMALL_STATE(25)] = 321,
  [SMALL_STATE(26)] = 331,
  [SMALL_STATE(27)] = 345,
  [SMALL_STATE(28)] = 355,
  [SMALL_STATE(29)] = 365,
  [SMALL_STATE(30)] = 375,
  [SMALL_STATE(31)] = 389,
  [SMALL_STATE(32)] = 403,
  [SMALL_STATE(33)] = 417,
  [SMALL_STATE(34)] = 427,
  [SMALL_STATE(35)] = 437,
  [SMALL_STATE(36)] = 447,
  [SMALL_STATE(37)] = 457,
  [SMALL_STATE(38)] = 467,
  [SMALL_STATE(39)] = 477,
  [SMALL_STATE(40)] = 487,
  [SMALL_STATE(41)] = 497,
  [SMALL_STATE(42)] = 511,
  [SMALL_STATE(43)] = 521,
  [SMALL_STATE(44)] = 535,
  [SMALL_STATE(45)] = 545,
  [SMALL_STATE(46)] = 555,
  [SMALL_STATE(47)] = 565,
  [SMALL_STATE(48)] = 575,
  [SMALL_STATE(49)] = 588,
  [SMALL_STATE(50)] = 601,
  [SMALL_STATE(51)] = 614,
  [SMALL_STATE(52)] = 627,
  [SMALL_STATE(53)] = 640,
  [SMALL_STATE(54)] = 653,
  [SMALL_STATE(55)] = 661,
  [SMALL_STATE(56)] = 669,
  [SMALL_STATE(57)] = 677,
  [SMALL_STATE(58)] = 684,
  [SMALL_STATE(59)] = 691,
  [SMALL_STATE(60)] = 698,
  [SMALL_STATE(61)] = 705,
  [SMALL_STATE(62)] = 712,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_integer_literal, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_literal, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_literal, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_literal, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_integer_literal, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json5_single_string_characters, 3),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json5_double_string_characters, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json5_double_string_characters, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json5_single_string_characters, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hex_integer_literal, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 5),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null, 1),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 5),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__signed_integer, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__json5_double_string_characters_repeat1, 2),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__json5_double_string_characters_repeat1, 2), SHIFT_REPEAT(41),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_literal, 4),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__json5_single_string_characters_repeat1, 2),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__json5_single_string_characters_repeat1, 2), SHIFT_REPEAT(43),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exponent_part, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 2),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(11),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(6),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 3, .production_id = 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [163] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_json5(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
