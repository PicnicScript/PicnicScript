#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
#include "../include/util.h"
#include "../include/token.h"
#include "../include/parser.h"


int main(int argc, char** argv){
    if(argc <3){
        printf("Too few arguments\n");
        return 1;
    }
    if(strcmp(argv[1], "compile")==0){
        char* source = read_ascii_file(argv[2]);
        TokenList tokens;
        ParserStatus pstat = parser_start(&tokens, source);
        if(pstat != PARSER_SUCCESS){
            return 1;
            free(source);
        }
        //free(tokens);
    }
    return 0;
}