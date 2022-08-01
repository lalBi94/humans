#include "human.h"

int main(int argc, char* argv[]){
    ifFailedHumanSearch[0].firstname = NULL;
    ifFailedHumanSearch[0].lastname = NULL;
    ifFailedHumanSearch[0].b_day = 0;
    ifFailedHumanSearch[0].b_mounth = 0;
    ifFailedHumanSearch[0].b_year = 0;
    ifFailedHumanSearch[0].size = 0;
    ifFailedHumanSearch[0].weight = 0;

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
    } assert(argc == 2);

    // implicits declarations
    FILE * foo;
    enum exit_code;
    enum boolean;

    // relative to file
    char file[BUFFER];
    assert(strcpy(file, argv[1]) != NULL);

    foo = fopen(file, "r+"); // here
    assert(foo != NULL);
    assert(load(foo) != FAILED); // load


    // Function TEST :

    // displayHumanList();

    // struct Human h = searchHumanByFirstName("Boudjemline");
    // printf("%s", h.lastname);
    
    struct Human h;
    h.firstname = "Boudjemline";
    h.lastname = "Bilal";
    h.b_mounth = 2;
    h.b_day = 25;
    h.b_year = 2003;
    h.gender = (char) 77;
    h.size = 180;
    h.weight = 82;

    assert(ifExist(h) != false);

    free(system);
    fclose(foo);

    return SUCCESS;
}