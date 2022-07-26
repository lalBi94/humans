#include "human.h"

enum boolean checkExtension(char name[]){
    int __size = strlen(name);
    if(name[__size - 1] == (char) 100 && 
    name[__size - 2] == (char) 111 && 
    name[__size - 3] == (char) 122 && 
    name[__size - 4] == (char) 46){
        return true;
    } else {
        return false;
    }

    return false;
}