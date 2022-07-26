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
#include <ctype.h>

// Usage for file and string
#define BUFFER 10 // max string/data size
#define string malloc(sizeof(char) * BUFFER) // init string variable
#define integer malloc(sizeof(int) * BUFFER) // init int variable
#define __NL printf("\n") //to define only \n 

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
    int id;
    char* firstname;    // @ex : Boudjemline
    char* lastname;     // @ex : Bilal
    int b_mounth;       // @ex : 2
    int b_day;          // @ex : 25
    int b_year;         // @ex : 2003
    char gender;        // @ex : [M / F] (Male, Female)
    int size;        // @ex : 184 (cm)
    int weight;      // @ex : 82 (kg)
};

struct Human data[BUFFER];
struct Human ifFailedHumanSearch[1];

// Relatives primitives function
int main(int argc, char* argv[]); // @usage : ./human.exe <file.zod>
enum boolean checkExtension(char name[]); // OK
enum boolean load(FILE*); // OK
int getDataSize(); // OK
void test(); // TEMP BUT OK

// Relatives function for Human
void displayHumanList(); // OK
struct Human searchHumanByFirstName(char*); // OK
enum boolean ifExist(struct Human); // OK

char* getFirstName(struct Human); // OK
char* getLastName(struct Human); // OK
char getGender(struct Human); // OK
int* getBirthday(struct Human); // OK
int getSize(struct Human); // OK
int getWeight(struct Human); // OK
enum exit_code getExitCode(struct Human);

enum boolean createHuman(FILE*);
void modifyHuman(struct Human);

#endif

/*  Creator : Zod
*   Discord : Bilaal#7175
*
*   Info : Human schema to test your code for the humain average case. 
*/