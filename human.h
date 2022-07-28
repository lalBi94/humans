/*  Creator : Zod
*   Discord : Bilaal#7175
*
*   Info : Human schema to test your code for the humain average case. 
*/

#ifndef __HUMAN_H__
#define __HUMAN_H__

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <assert.h>
#include <limits.h>

// Usage for file and string
#define BUFFER 255
#define string malloc(sizeof(char) * BUFFER)

// Relatives informations of human's body
#define IMCmax 24.9
#define IMCmin 18.5
#define kidney_qteToSurvive 1
#define bpm_perMinuteMin 50
#define bpm_perMinuteMax 80

// Relatives informations of time EU WEST FORMAT 
#define days_limit 31
#define mounths_limit 12
#define hours_limit 24
#define minutes_limit 59
#define secondes_limit 60

// Relatives informations of human's feeding
#define days_withoutEat 30
#define days_withoutDrink 3

//EXIT CODE
enum exit_code{
    SUCCESS,            // No error 
    FAILED,             // Min. 1 error
    UNKNOWN_ERROR,       // Min. 1 error
    
    SUCCESS_POSITIV,
    SUCCESS_NEGATIV,
    SUCCESS_CAREFULL,
    
    UNKNOWN_EXTENSION // if the data file ext != .zod
};

// Boolean struct (true, false)
enum boolean{
    true,
    false  
};


// Human struct (* = can be null)
struct Human{
    char* firstname;    // @ex : Boudjemline
    char* lastname;     // @ex : Bilal
    int b_mounth;       // @ex : 2
    int b_day;          // @ex : 25
    int b_year;         // @ex : 2003
    char gender;        // @ex : [M / F] (Male, Female)
    double size;        // @ex : 184 (cm)
    double weight;      // @ex : 82 (kg)
};

//
struct Save{
    struct Human h;
    struct Save* nxt;
};

// Relatives primitif function
int main(int argc, char* argv[]); // @usage : ./human.exe
enum boolean checkExtension(char name[]); //OK

// Relatives function for struct Save{}
void load(FILE* foo);
enum boolean isEmpty();

// Relatives function for Human
struct Human searchHumanByName(char* regex);
struct Human selectHuman(char* fn, char* ln, char* b);
void displayHumanList(FILE* foo, char* os); //OK
int howManyHumanRegistered();\
enum boolean createHuman();
void modifyHuman(struct Human h);
char* getFirstName(struct Human h);
char* getLastName(struct Human h);
char getGender(struct Human h);
char* getBirthday(struct Human h);
double getSize(struct Human h);
double getWeight(struct Human h);
enum boolean ifExist(struct Human h);
enum exit_code getExitCode(struct Human H);

#endif

/*  Creator : Zod
*   Discord : Bilaal#7175
*
*   Info : Human schema to test your code for the humain average case. 
*/