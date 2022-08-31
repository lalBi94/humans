#include "human.h"

char* getFirstName(struct Human h){
    return h.firstname;
}

char* getLastName(struct Human h){
    return h.lastname;
}

char getGender(struct Human h){
    return h.gender;
}

int* getBirthday(struct Human h){
    int date[4] = {h.b_mounth, h.b_day, h.b_year};
    return date;
} 

int getSize(struct Human h){
    return h.size;
}

int getWeight(struct Human h){
    return h.weight;
}