#define PICNIC_TOKEN_H
#ifdef PICNIC_TOKEN_H

enum _TokenType {
    INST, 
    NUMBER
};
enum _TokenInst {
    PUSH,
    ADD,
    HLT
};
typedef enum _TokenInst TokenInst;
struct _Token {
    int type;
    int data;
    int line;

};
typedef struct _Token Token;

Token* create_token(int type, int data, int line);
void token_destroy(Token* tok);

struct _TokenList {
    Token** data;   
    int ptr;
    int size;
};
typedef struct _TokenList TokenList;

//TokenList* token_list
_create(int size);
void token_list_add(TokenList* list, Token* tok);
Token* token_list_get(TokenList* list, int index);
//void token_list_destroy(TokenList* list);


#endif // PICNIC_TOKEN_H