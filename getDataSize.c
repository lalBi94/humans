#include "human.h"

int getDataSize(){
    int size = 0;

    while(data[size].firstname != NULL){
        size++;
    }

    return size;
}