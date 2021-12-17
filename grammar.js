module.exports = grammar({
  name: 'DTL',
  rules: {
    script: $ => repeat($._statement),

    _statement: $ => choice(
      $.with_statement,
      // $.insert_statement
      // $.update_statement,
      // $.delete_statement,
      $.export_statement,
    ),

    with_statement: $ => seq(
      'WITH',
      $.table_identifier,
      'AS',
      $._table_expression,
      ';',
    ),

    export_statement: $ => seq(
      'EXPORT',
      $._table_expression,
      'TO',
      $.string_literal,
      ';',
    ),

    _table_expression: $ => choice(
      $.select_expression,
      $.import_expression,
      $.table_identifier,
    ),

    select_expression: $ => seq(
      'SELECT',
      '*',
      'FROM',
      $.table_identifier,
    ),

    import_expression: $ => seq(
      'IMPORT',
      $.string_literal,
    ),

    table_identifier: $ => /[a-z_][a-z0-9_]*/,
    string_literal: $ => seq("'", field("content", /((\\.)|[^\\'\n])*/), "'"),
  }
});
