#ifndef PERSON_H
#define PERSON_H
#include <stdio.h>


struct person_t {
    int year,month,day;
char surname[64];
char name[64];
};
typedef struct person_t person_t;

int personRead(FILE* f,person_t* p);
person_t* readFromFile(FILE* fPointer,int* toRead);
void printResults(FILE* f,person_t* p);


#endif
