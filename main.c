#include "human.h"

int main(int argc, char* argv[]){
    printf("\n\n[HUMAN CREATOR by. Zod]\n\n");
    printf("Welcome user !\n");
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

    // implicits declarations
    FILE * foo;
    enum exit_code;
    enum boolean;
    struct Save *Save;

    // relative to file
    char file[BUFFER];
    strcpy(file, "data.zod");
    int sizeFoo = strlen(file);

    if(checkExtension(file) == true){
        printf("\nload file [%s] ...\n\n", file);
    } else{
        printf("incompatible extension, exit."); 
        return UNKNOWN_EXTENSION;
    }

    foo = fopen(file, "r+"); // here
    assert(foo != NULL);

    //displayHumanList(foo, system);

    // if(isEmpty(Save) == false){
    //     printf("Empty list.");
    //     return 0;
    // } else{
    //     printf("Ok.");
    // }

    //load(foo);

    free(system);
    fclose(foo);

    return foo ? SUCCESS : FAILED;
}

enum boolean isEmpty(struct Save *s){
    if(s == NULL){
        return true;
    } else{
        return false;
    }
}