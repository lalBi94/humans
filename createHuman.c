#include "human.h"

enum boolean createHuman(){
    struct Human h;
    char* fn = malloc(sizeof(char) * BUFFER), 
    ln = malloc(sizeof(char) * BUFFER),
    gender = malloc(sizeof(char) * 2);
    int bm, bd, by;
    double size, weight;
    
    printf("Firstname : "); scanf("%s", fn);
    printf("\nMounth birth : "); scanf("%d", &bm);
    printf("\nDay birth : "); scanf("%d", &bd);
    printf("\nYear birth : "); scanf("%d", &by);
    printf("\nGender : "); scanf("%s", gender);
    printf("\nSize (cm) : "); scanf("%lf", &size);
    printf("\nWeight (kg) : "); scanf("%lf", &weight);

    strcpy(h.firstname, fn);
    printf("%s == %s", fn, h.firstname);

    free(fn); 
    free(ln);

    return true;
}