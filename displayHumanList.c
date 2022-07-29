#include "human.h"

void displayHumanList(FILE* foo, char* os){ // os is not mandatory
    assert(foo != NULL);

    static int idIsPassed = 0;

    const char __po = (char) 40, 
    __pf = (char) 41, 
    __pv = (char) 59;

    char* __cur = string;

    // ID # ( FIRSTNAME ; LASTNAME ; M ; D ; Y ; GENDER ; SIZE ; WEIGHT ) >

    while((*__cur = fgetc(foo)) != EOF){
        if(idIsPassed == 0){ //id
            if(atoi(__cur) > 0 && atoi(__cur) <= INT_MAX){
                printf("[%c] = {\n", *__cur);
                idIsPassed = 1;
            } else{
                continue;
            }
        } 
        
        if(*__cur == __po){ //firstname
            printf("\t'firstname' = '");
            while((*__cur = fgetc(foo)) != __pv){
                printf("%c", *__cur);
            } printf("',\n\t'lastname' = '"); //lastname
            while((*__cur = fgetc(foo)) != __pv){
                printf("%c", *__cur);
            } printf("',\n\t'birthday' = '"); //birthday
            while((*__cur = fgetc(foo)) != __pv){
                printf("%c/", *__cur);
            } while((*__cur = fgetc(foo)) != __pv){
                printf("%c", *__cur);
            } printf("/");
            while((*__cur = fgetc(foo)) != __pv){
                printf("%c", *__cur);
            } printf("',\n\t'gender' = "); //gender
            while((*__cur = fgetc(foo)) != __pv){
                if(*__cur == (char) 77){
                    printf("'MALE',");
                } else if(*__cur == (char) 70){
                    printf("'FEMALE',");
                } else{
                    printf("'N/A',");
                }
            } printf("\n\t'size' = '"); //size
            while((*__cur = fgetc(foo)) != __pv){
                printf("%c", *__cur);
            } printf("',\n\t'weight' = '"); //size
            while((*__cur = fgetc(foo)) != __pf){
                printf("%c", *__cur);
            } printf("'\n}\n\n");
            idIsPassed = 0;
        }
    }

    fclose(foo);
}