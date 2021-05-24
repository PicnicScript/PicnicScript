#ifndef PICNIC_PARSER_H
#define PICNIC_PARSER_H
#include <string.h>
#include "token.h"
#include <stdio.h>

enum _ParserStatus {
    SUCCESS,
    SYNTAX_ERROR
};
typedef enum _ParserStatus ParserStatus;

void parser_start(TokenList** list,const char* source);
 int parser_get_number(const char* buf);
 TokenInst parser_get_inst(const char* buf);

#endif // PICNIC_PARSER_H