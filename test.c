#include "human.h"

void test(){
    // displayHumanList()
    displayHumanList();

    // searchHumanByFirstName(STRING)
    struct Human h = searchHumanByFirstName("Boudjemline");
    printf("%s affected to variable\n\n", h.lastname);

    // ifExist(struct Human)
    h.firstname = "Boudjemline";
    h.lastname = "Bilal";
    h.b_mounth = 2;
    h.b_day = 25;
    h.b_year = 2003;
    h.gender = (char) 77;
    h.size = 180;
    h.weight = 82;

    if(ifExist(h) == true){
        printf("%s is exist !\n\n", h.firstname);
    } else{
        printf("%s is not exist !\n\n", h.firstname);
    }
}