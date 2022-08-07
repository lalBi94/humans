#include "human.h"

struct Human searchHumanByFirstName(char* fn){
    int i = 0;

    for(int i = 0; data[i].firstname != NULL; i++){
        if(strcmp(data[i].firstname, fn) == 0){
            return data[i];
        }
    }

    return ifFailedHumanSearch[0];
}