#include "human.h"

int main(int argc, char* argv[]){
    printf("\n[HUMAN CREATOR by. Zod]\n\n");
    printf("Welcome !\n");
    char* system = malloc(sizeof(char) * 11);
    
    #ifdef _WIN64
        printf("Usage : Windows");
        strcpy(system, "w");
    #elif _WIN32
        printf("Usage : Windows");
        strcpy(system, "w");
    #elif __APPLE__
        printf("Usage : Mac OS\n");
        strcpy(system, "m");
    #elif __MACH__
        printf("Usage : Mac OS");
        strcpy(system, "m");
    #elif __unix__
        printf("Usage : OS based on UNIX");
        strcpy(system, "u");
    #elif __linux__
        printf("Usage : Linux");
        strcpy(system, "l");
    #endif

    if(argc != 2){
        printf("Usage: human.exe 'file.zod'");
        return FAILED;
    }

    // implicits declarations
    FILE * foo;
    enum exit_code;
    enum boolean;

    // relative to file
    char file[BUFFER];
    strcpy(file, argv[1]);

    foo = fopen(file, "r+"); // here
    assert(foo != NULL);

    //displayHumanList(foo, system);
    load(foo);

    free(system);
    fclose(foo);

    return SUCCESS;
}