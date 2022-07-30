#include "human.h"

void __refresh(char* toRefresh);
int __AllCaseInOneInt(int* tab, int sizeofint);

enum boolean load(FILE* foo){
    assert(foo != NULL);
    printf("\n\nLoad file...\n");

    struct Human Human;

    const char __po = (char) 40, 
        __pf = (char) 41, 
        __pv = (char) 59;

    int sizestring = 0, 
        idIsPassed = 0;

    char* __cur = string; 

    char* _tmp = string;
    char* _tmp2 = string; // stock characters firstname

    int* _stockint = integer; // stock integer

    int __tmp = 0, 
        __ptr = 1, 
        __hinarr = 0; // position of cursor current string

    while((*__cur = fgetc(foo)) != EOF){
        if(idIsPassed == 0){
            if(atoi(__cur) > 0 && atoi(__cur) <= INT_MAX){
                Human.id = atoi(__cur);
                idIsPassed = 1;
            } else{
                continue;
            }
        }  
        
        if(*__cur == __po){
            while((*__cur = fgetc(foo)) != __pv){
                *(_tmp2 + __tmp) = *__cur;
                __tmp++;
                sizestring++;
            } 
            
            for(int i = sizestring; i < BUFFER; i++){
                *(_tmp2 + i) = NULL;
            }  
            
            Human.firstname = _tmp2;
            __tmp = 0; 
            sizestring = 0;

            for(int i = 0; i <= BUFFER; i++){
                *(_tmp + i) = NULL;
            }
            
            while((*__cur = fgetc(foo)) != __pv){
                *(_tmp + __tmp) = *__cur;
                __tmp++;
                sizestring++;
            } 
            
            for(int i = sizestring; i < BUFFER; i++){
                *(_tmp + i) = NULL;
            }  
            
            Human.lastname = _tmp;
            __tmp = 0;
            sizestring = 0;

            while((*__cur = fgetc(foo)) != __pv){
                *(_stockint + __tmp) = atoi(__cur);
                __tmp++;
            } 
            
            Human.b_mounth = __AllCaseInOneInt(_stockint, __tmp);
            __tmp = 0;
            
            while((*__cur = fgetc(foo)) != __pv){
                *(_stockint + __tmp) = atoi(__cur);
                __tmp++;
            }  
            
            Human.b_day = __AllCaseInOneInt(_stockint, __tmp);
            __tmp = 0;
            
            while((*__cur = fgetc(foo)) != __pv){
                *(_stockint + __tmp) = atoi(__cur);
                __tmp++;
            }  
            
            Human.b_year = __AllCaseInOneInt(_stockint, __tmp);
            __tmp = 0;

            while((*__cur = fgetc(foo)) != __pv){
                if(*__cur == (char) 77 || *__cur == (char) 70){
                    Human.gender = *__cur;
                } else{
                    exit(FAILED);
                }
            } 

            while((*__cur = fgetc(foo)) != __pv){
                *(_stockint + __tmp) = atoi(__cur);
                __tmp++;
            } 
            
            Human.size = __AllCaseInOneInt(_stockint, __tmp);
            __tmp = 0;

            while((*__cur = fgetc(foo)) != __pf){
                *(_stockint + __tmp) = atoi(__cur);
                __tmp++;
            } 

            Human.weight = __AllCaseInOneInt(_stockint, __tmp);
            __tmp = 0;

            if(Human.firstname != NULL && 
                Human.lastname != NULL && 
                Human.b_day != 0 && 
                Human.b_mounth != 0 && 
                Human.b_year != 0 && 
                Human.size != 0 && 
                Human.weight != 0) {
                    printf("[LOADED OK] %d# [%s, %s] | %d/%d/%d | %dcm | %dkg\n", 
                        Human.id, Human.firstname, Human.lastname,Human.b_mounth, Human.b_day, Human.b_year, Human.size, Human.weight);
                        data[__hinarr] = Human;
                        _tmp = string;
                        _tmp2 = string;
                        __hinarr++;

                        idIsPassed = 0;
            } else{
                return FAILED;
            }
        }
    }

    printf("%d Humans.\n\n", getDataSize());
    free(__cur);
    free(_tmp);
    free(_tmp2);
    free(_stockint);
    fclose(foo);

    return SUCCESS;
}

void __refresh(char* toRefresh){
    for(int i = 0; i <= BUFFER; i++){
        *(toRefresh + i) = NULL;
    } 
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