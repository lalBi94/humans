#include "human.h"

#define alloc malloc(sizeof(char))

void displayHumanList(FILE* foo, char* os){ // os is not mandatory
    assert(foo != NULL);

    char id;
    char* fn = alloc;

    char __cur;
    while((__cur = fgetc(foo)) != EOF){
        printf("%c", __cur);
    }

    fclose(foo);
}