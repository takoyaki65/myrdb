#ifndef STATEMENT_H
#define STATEMENT_H

typedef enum { PREPARE_SUCCESS, PREPARE_UNRECOGNIZED_STATEMENT } PrepareResult;

typedef enum { STATEMENT_INSERT, STATEMENT_SELECT } StatementType;

typedef struct {
  StatementType type;
} Statement;

PrepareResult prepare_statement(const char* input_buffer, Statement* statement);

void execute_statement(Statement* statement);

#endif
