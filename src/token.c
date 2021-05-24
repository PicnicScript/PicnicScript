#include "../include/token.h"

Token* create_token(int type, int data, int line){
    Token* tok = (Token) malloc(sizeof(Token));
    tok->type = type;
    tok->data = data;
    tok->line = line;
}
void token_destroy(Token* tok){

}