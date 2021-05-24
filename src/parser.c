#include "../include/parser.h"
#include <stdlib.h>

void parser_start(TokenList* list, const char* source)
{
    char lex[256];
    int lexi = 0;
    int i = 0;
    int line = 1;
    while (1)
    {
        memset(lex, '\0', 256);
        while (source[i] != ' ' && source[i] != '\n' && source[i] != '\0')
        {
            lex[lexi++] = source[i++];
        }
        lex[lexi] = '\0';

        //CREATION OF A NUMERICAL SENTENCE
        if(lex[0] == "#"){
            int num = parser_get_number(lex);
            token_list_add(list, token_create(NUMBER, num, line));
        }
        else{
            int inst = parser_get_inst(lex);
            if(inst <= 0){
                   token_list_add(list, token_create(INST, inst, line));
            }else{
                printf("Syntax error: no such instruction '%s'\n",lex);
                return PARSER_SYNTAX_ERROR;
            }
        }
        if(source[i] == '\n'){
            line++;  
        }
        else if(source[i] == '\0'){
            break;
        }

        lexi = 0;
        i++;
    }
}
uint32_t parser_get_number( char* buf){
    long num = atoi(&buf[1]);
    return (num <= UINT32_MAX) ? num : 0;
}
TokenInst parser_get_inst(const char* buf){
    if(strcmp(buf, "push") == 0){
        return PUSH;
    }else{
        return (TokenInst) -1;
    }
}
