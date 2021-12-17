#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 24
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 22
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_WITH = 1,
  anon_sym_AS = 2,
  anon_sym_SEMI = 3,
  anon_sym_EXPORT = 4,
  anon_sym_TO = 5,
  anon_sym_SELECT = 6,
  anon_sym_STAR = 7,
  anon_sym_FROM = 8,
  anon_sym_IMPORT = 9,
  sym_table_identifier = 10,
  anon_sym_SQUOTE = 11,
  aux_sym_string_literal_token1 = 12,
  sym_script = 13,
  sym__statement = 14,
  sym_with_statement = 15,
  sym_export_statement = 16,
  sym__table_expression = 17,
  sym_select_expression = 18,
  sym_import_expression = 19,
  sym_string_literal = 20,
  aux_sym_script_repeat1 = 21,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_WITH] = "WITH",
  [anon_sym_AS] = "AS",
  [anon_sym_SEMI] = ";",
  [anon_sym_EXPORT] = "EXPORT",
  [anon_sym_TO] = "TO",
  [anon_sym_SELECT] = "SELECT",
  [anon_sym_STAR] = "*",
  [anon_sym_FROM] = "FROM",
  [anon_sym_IMPORT] = "IMPORT",
  [sym_table_identifier] = "table_identifier",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [sym_script] = "script",
  [sym__statement] = "_statement",
  [sym_with_statement] = "with_statement",
  [sym_export_statement] = "export_statement",
  [sym__table_expression] = "_table_expression",
  [sym_select_expression] = "select_expression",
  [sym_import_expression] = "import_expression",
  [sym_string_literal] = "string_literal",
  [aux_sym_script_repeat1] = "script_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_WITH] = anon_sym_WITH,
  [anon_sym_AS] = anon_sym_AS,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_EXPORT] = anon_sym_EXPORT,
  [anon_sym_TO] = anon_sym_TO,
  [anon_sym_SELECT] = anon_sym_SELECT,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_FROM] = anon_sym_FROM,
  [anon_sym_IMPORT] = anon_sym_IMPORT,
  [sym_table_identifier] = sym_table_identifier,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [sym_script] = sym_script,
  [sym__statement] = sym__statement,
  [sym_with_statement] = sym_with_statement,
  [sym_export_statement] = sym_export_statement,
  [sym__table_expression] = sym__table_expression,
  [sym_select_expression] = sym_select_expression,
  [sym_import_expression] = sym_import_expression,
  [sym_string_literal] = sym_string_literal,
  [aux_sym_script_repeat1] = aux_sym_script_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_WITH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EXPORT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SELECT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FROM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IMPORT] = {
    .visible = true,
    .named = false,
  },
  [sym_table_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_script] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_with_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_export_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__table_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_select_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_import_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_script_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_content = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_content] = "content",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_content, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(25);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == ';') ADVANCE(28);
      if (lookahead == 'A') ADVANCE(18);
      if (lookahead == 'E') ADVANCE(23);
      if (lookahead == 'F') ADVANCE(15);
      if (lookahead == 'I') ADVANCE(8);
      if (lookahead == 'S') ADVANCE(2);
      if (lookahead == 'T') ADVANCE(9);
      if (lookahead == 'W') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 1:
      if (lookahead == 'C') ADVANCE(22);
      END_STATE();
    case 2:
      if (lookahead == 'E') ADVANCE(6);
      END_STATE();
    case 3:
      if (lookahead == 'E') ADVANCE(1);
      END_STATE();
    case 4:
      if (lookahead == 'H') ADVANCE(26);
      END_STATE();
    case 5:
      if (lookahead == 'I') ADVANCE(19);
      END_STATE();
    case 6:
      if (lookahead == 'L') ADVANCE(3);
      END_STATE();
    case 7:
      if (lookahead == 'M') ADVANCE(33);
      END_STATE();
    case 8:
      if (lookahead == 'M') ADVANCE(14);
      END_STATE();
    case 9:
      if (lookahead == 'O') ADVANCE(30);
      END_STATE();
    case 10:
      if (lookahead == 'O') ADVANCE(16);
      END_STATE();
    case 11:
      if (lookahead == 'O') ADVANCE(7);
      END_STATE();
    case 12:
      if (lookahead == 'O') ADVANCE(17);
      END_STATE();
    case 13:
      if (lookahead == 'P') ADVANCE(10);
      END_STATE();
    case 14:
      if (lookahead == 'P') ADVANCE(12);
      END_STATE();
    case 15:
      if (lookahead == 'R') ADVANCE(11);
      END_STATE();
    case 16:
      if (lookahead == 'R') ADVANCE(20);
      END_STATE();
    case 17:
      if (lookahead == 'R') ADVANCE(21);
      END_STATE();
    case 18:
      if (lookahead == 'S') ADVANCE(27);
      END_STATE();
    case 19:
      if (lookahead == 'T') ADVANCE(4);
      END_STATE();
    case 20:
      if (lookahead == 'T') ADVANCE(29);
      END_STATE();
    case 21:
      if (lookahead == 'T') ADVANCE(34);
      END_STATE();
    case 22:
      if (lookahead == 'T') ADVANCE(31);
      END_STATE();
    case 23:
      if (lookahead == 'X') ADVANCE(13);
      END_STATE();
    case 24:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_WITH);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_AS);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_EXPORT);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_TO);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_SELECT);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_FROM);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_IMPORT);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_table_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(38);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 37},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_WITH] = ACTIONS(1),
    [anon_sym_AS] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_EXPORT] = ACTIONS(1),
    [anon_sym_TO] = ACTIONS(1),
    [anon_sym_SELECT] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_FROM] = ACTIONS(1),
    [anon_sym_IMPORT] = ACTIONS(1),
    [sym_table_identifier] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_script] = STATE(23),
    [sym__statement] = STATE(2),
    [sym_with_statement] = STATE(2),
    [sym_export_statement] = STATE(2),
    [aux_sym_script_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_WITH] = ACTIONS(5),
    [anon_sym_EXPORT] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(5), 1,
      anon_sym_WITH,
    ACTIONS(7), 1,
      anon_sym_EXPORT,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    STATE(3), 4,
      sym__statement,
      sym_with_statement,
      sym_export_statement,
      aux_sym_script_repeat1,
  [16] = 4,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      anon_sym_WITH,
    ACTIONS(16), 1,
      anon_sym_EXPORT,
    STATE(3), 4,
      sym__statement,
      sym_with_statement,
      sym_export_statement,
      aux_sym_script_repeat1,
  [32] = 4,
    ACTIONS(19), 1,
      anon_sym_SELECT,
    ACTIONS(21), 1,
      anon_sym_IMPORT,
    ACTIONS(23), 1,
      sym_table_identifier,
    STATE(20), 3,
      sym__table_expression,
      sym_select_expression,
      sym_import_expression,
  [47] = 4,
    ACTIONS(19), 1,
      anon_sym_SELECT,
    ACTIONS(21), 1,
      anon_sym_IMPORT,
    ACTIONS(25), 1,
      sym_table_identifier,
    STATE(16), 3,
      sym__table_expression,
      sym_select_expression,
      sym_import_expression,
  [62] = 1,
    ACTIONS(27), 3,
      ts_builtin_sym_end,
      anon_sym_WITH,
      anon_sym_EXPORT,
  [68] = 1,
    ACTIONS(29), 3,
      ts_builtin_sym_end,
      anon_sym_WITH,
      anon_sym_EXPORT,
  [74] = 1,
    ACTIONS(31), 2,
      anon_sym_SEMI,
      anon_sym_TO,
  [79] = 1,
    ACTIONS(33), 2,
      anon_sym_SEMI,
      anon_sym_TO,
  [84] = 1,
    ACTIONS(35), 2,
      anon_sym_SEMI,
      anon_sym_TO,
  [89] = 2,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    STATE(8), 1,
      sym_string_literal,
  [96] = 2,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    STATE(19), 1,
      sym_string_literal,
  [103] = 1,
    ACTIONS(39), 1,
      anon_sym_FROM,
  [107] = 1,
    ACTIONS(41), 1,
      aux_sym_string_literal_token1,
  [111] = 1,
    ACTIONS(43), 1,
      sym_table_identifier,
  [115] = 1,
    ACTIONS(45), 1,
      anon_sym_SEMI,
  [119] = 1,
    ACTIONS(47), 1,
      sym_table_identifier,
  [123] = 1,
    ACTIONS(49), 1,
      anon_sym_SQUOTE,
  [127] = 1,
    ACTIONS(51), 1,
      anon_sym_SEMI,
  [131] = 1,
    ACTIONS(53), 1,
      anon_sym_TO,
  [135] = 1,
    ACTIONS(55), 1,
      anon_sym_STAR,
  [139] = 1,
    ACTIONS(57), 1,
      anon_sym_AS,
  [143] = 1,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 16,
  [SMALL_STATE(4)] = 32,
  [SMALL_STATE(5)] = 47,
  [SMALL_STATE(6)] = 62,
  [SMALL_STATE(7)] = 68,
  [SMALL_STATE(8)] = 74,
  [SMALL_STATE(9)] = 79,
  [SMALL_STATE(10)] = 84,
  [SMALL_STATE(11)] = 89,
  [SMALL_STATE(12)] = 96,
  [SMALL_STATE(13)] = 103,
  [SMALL_STATE(14)] = 107,
  [SMALL_STATE(15)] = 111,
  [SMALL_STATE(16)] = 115,
  [SMALL_STATE(17)] = 119,
  [SMALL_STATE(18)] = 123,
  [SMALL_STATE(19)] = 127,
  [SMALL_STATE(20)] = 131,
  [SMALL_STATE(21)] = 135,
  [SMALL_STATE(22)] = 139,
  [SMALL_STATE(23)] = 143,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(15),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_statement, 5),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_statement, 5),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_expression, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3, .production_id = 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_expression, 4),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [59] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_DTL(void) {
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
