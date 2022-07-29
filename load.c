#include "human.h"

void load(FILE* foo){
    assert(foo != NULL);
    printf("\nLoad file...\n\n");
    struct Human Human;
    int __ptr = 1; // for struct Human data[]

    static int idIsPassed = 0;

    const char __po = (char) 40, 
    __pf = (char) 41, 
    __pv = (char) 59;

    char* __cur = string;

    static int sizestring = 0;
    char* _tmp = string; // stock characters
    int* _stockint = integer; // stock integer
    int __tmp = 0; // position of cursor current string

    // to save data on human struct tab[]

    while((*__cur = fgetc(foo)) != EOF){
        if(idIsPassed == 0){ //id
            if(atoi(__cur) > 0 && atoi(__cur) <= INT_MAX){
                Human.id = atoi(__cur);
                printf("[-> %d] = {\n", Human.id);
                idIsPassed = 1;
            } else{
                continue;
            }
        } 
        
        if(*__cur == __po){ // firstname
            printf("\t'firstname' = '");
            while((*__cur = fgetc(foo)) != __pv){
                *(_tmp + __tmp) = *__cur;
                __tmp++;
                sizestring++;
            } for(int i = sizestring; i < BUFFER; i++){
                *(_tmp + i) = NULL;
            } 
            Human.firstname = _tmp;
            printf("-> %s", Human.firstname);
            __tmp = 0; 
            while(*(_tmp + __tmp) != NULL){
                *(_tmp + __tmp) = NULL;
            }
            __tmp = 0; 
            sizestring = 0;


            printf("',\n\t'lastname' = '"); // lastname
            while((*__cur = fgetc(foo)) != __pv){
                *(_tmp + __tmp) = *__cur;
                __tmp++;
                sizestring++;
            } for(int i = sizestring; i < BUFFER; i++){
                *(_tmp + i) = NULL;
            } 
            Human.lastname = _tmp;
            printf("-> %s", Human.lastname);
            __tmp = 0; 
            while(*(_tmp + __tmp) != NULL){
                *(_tmp + __tmp) = NULL;
            }
            __tmp = 0; 
            sizestring = 0;
            
    
            printf("',\n\t'birthday' = '"); // birthday
            while((*__cur = fgetc(foo)) != __pv){
                *(_stockint + __tmp) = atoi(__cur);
                __tmp++;
            } 

            printf("%d", __AllCaseInOneInt(_stockint, __tmp));
            







            printf("/");
            
            while((*__cur = fgetc(foo)) != __pv){
                printf("%c", *__cur);
            } 

            printf("/");

            while((*__cur = fgetc(foo)) != __pv){
                printf("%c", *__cur);
            } 
            













            printf("',\n\t'gender' = "); // gender

            while((*__cur = fgetc(foo)) != __pv){
                if(*__cur == (char) 77){
                    printf("'MALE',");
                } else if(*__cur == (char) 70){
                    printf("'FEMALE',");
                } else{
                    printf("'N/A',");
                }
            } 
            
            
            
            printf("\n\t'size' = '"); // size
            while((*__cur = fgetc(foo)) != __pv){
                printf("%c", *__cur);
            } 
            
            
            printf("',\n\t'weight' = '"); // size
            while((*__cur = fgetc(foo)) != __pf){
                printf("%c", *__cur);
            } printf("'\n}\n\n");
            idIsPassed = 0;
        }
    }

    fclose(foo);
}

int __AllCaseInOneInt(int* tab, int sizeofint){
    if(sizeofint == 1){
        return *(tab + 0);
    }

    int __complt = 0, i = 0, maxmod = 10;

    for(int i = 0; i <= sizeofint-2; i++){ 
        maxmod *= 10; 
    } for(int i = sizeofint; i < BUFFER; i++){
        *(tab + i) = NULL;
    } for(int i = 0; i <= sizeofint; i++){
        *(tab + i) *= maxmod;
        maxmod /= 10;
    } for(int i = 0; i <= sizeofint; i++){
        __complt = __complt + *(tab + i);
    }

    return __complt/10;
}