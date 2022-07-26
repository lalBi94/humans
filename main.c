#include "human.h"

int main(int argc, char* argv[]){
    printf("\n\n[HUMAN CREATOR by. Zod]\n\n");
    printf("Welcome user !\n");
    #ifdef _WIN64
        printf("Usage : Windows x64");
    #elif _WIN32
        printf("Usage : Windows x32");

    #elif __APPLE__
        printf("Usage : Mac OS\n");
    #elif __MACH__
        printf("Usage : Mac OS");
    #elif __unix__
        printf("Usage : OS based on UNIX");
    #elif __linux__
        printf("Usage : Linux");
    #endif

    // implicits declarations
    FILE * foo;
    enum exit_code;
    enum boolean;

    // relative to file
    char file[BUFFER];
    strcpy(file, "data.zod");
    int sizeFoo = strlen(file);

    if(checkExtension(file) == true){
        printf("load file [%s] ...\n\n", file);
    } else{
        printf("incompatible extension, exit."); 
        return UNKNOWN_EXTENSION;
    }

    foo = fopen(file, "r+"); // here

    //test
    if(createHuman() == true){
        printf("ok.");
    } else{
        printf("non ok.");
    }

    fclose(foo);
    
    return foo ? SUCCESS : FAILED;
}