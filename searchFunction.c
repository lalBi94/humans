#include "human.h"

struct Human searchHumanByFirstName(char* fn){
    int i = 0;

    for(int i = 0; data[i].firstname != NULL; i++){
        if(strcmp(data[i].firstname, fn) == 0){
            printf("found.\n");
            return data[i];
        }
    }

    printf("inexistent.\n");
    return ifFailedHumanSearch[0];
}