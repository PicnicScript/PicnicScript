#include "../include/util.h"

char* read_ascii_file(const char* path){
    FILE* file = fopen(path, "r");
    if(!file){
        printf("Couldn't open file '%s'\n", path);
        return NULL;
    }
    fseek(file, 0, SEEK_END);
    int size = ftell(file);
    fseek(file, 0, SEEK_SET);

    char* buf = (char*)malloc(sizeof(char) * (size));
    if(!buf){
        printf("Couldn't allocate memory for file!\n");
        return NULL;
    }
    fread(buf, 1, size, file);
    buf[size] = '\0';
    fclose(file);
    return buf;
}