#include "human.h"

enum boolean ifExist(struct Human Human){
    // printf("[%d] = {\n\t'firstname' = '%s',\n\t'lastname' = '%s',\n\t'birthday' = %d/%d/%d,\n\t'size' = %d,\n\t'weight' = '%d'\n}\n\n",
    //     Human.id, Human.firstname, Human.lastname, Human.b_mounth, Human.b_day, Human.b_year, Human.size, Human.weight);

    for(int i = 0; i <= BUFFER; i++){
        if(strcmp(data[i].firstname, Human.firstname) == 0 && 
        strcmp(data[i].lastname, Human.lastname) == 0 &&
        data[i].b_day == Human.b_day &&
        data[i].b_mounth == Human.b_mounth &&
        data[i].b_year == Human.b_year &&

        data[i].gender == Human.gender &&
        data[i].size == Human.size &&
        data[i].weight == Human.weight
        ){
            return true;
        }
    }

    return false;
}