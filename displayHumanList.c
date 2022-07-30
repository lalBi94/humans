#include "human.h"

void displayHumanList(){
    for(int i = 0; data[i].firstname != NULL; i++){
        printf("[%d] = {\n\t'firstname' = '%s',\n\t'lastname' = '%s',\n\t'birthday' = %d/%d/%d,\n\t'size' = %d,\n\t'weight' = '%d'\n}\n\n",
        data[i].id, data[i].firstname, data[i].lastname, data[i].b_mounth, data[i].b_day, data[i].b_year, data[i].size, data[i].weight);
    }
}