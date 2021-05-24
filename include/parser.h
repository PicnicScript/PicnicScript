#ifndef PICNIC_PARSER_H
#define PICNIC_PARSER_H
#include <string.h>
#include <stdio.h>
#include <stdint.h>
#include "token.h"
#include <limits.h>

enum _ParserStatus {
    PARSER_SUCCESS,
    PARSER_SYNTAX_ERROR
};

typedef enum _ParserStatus ParserStatus;

ParserStatus parser_start(TokenList* list,const char* source);
 int parser_get_number(const char* buf);
 TokenInst parser_get_inst(const char* buf);

#endif // PICNIC_PARSER_H