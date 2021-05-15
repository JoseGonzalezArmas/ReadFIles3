#include <stdio.h>

#include "headers.h"

int personRead(FILE* f,struct person_t* p){
    int res = fscanf(f,"%s %s %d-%d-%d",(*p).surname,(*p).name,&(*p).year,&(*p).month,&(*p).day);
    printf("\nTest: %d",p->year);
    printf("/nResult of items read: %d",res);
    return res == 5;

}
void printResults(FILE* f,struct person_t* p){
fprintf(f,"\n%50s %50s %4d-%02d-%02d",p->surname,p->name,p->year,p->month,p->day);

}

person_t* readFromFile(FILE* fPointer,int* toRead){
// Read number of data sets

int sizeOfFile;
if(fscanf(fPointer,"%zu",&sizeOfFile) != 1){
   *toRead = 0;
   return NULL;

}
printf("\n Size of File: %d",sizeOfFile);
person_t* persons = malloc(sizeOfFile * sizeof(persons[0]));
int n;
for(n = 0;n < sizeOfFile;n++){
    int res = personRead(fPointer,&persons[n]);
    printf("\nHello");
    printf("\nN2: %d",n);
    //if(!res){
      //  break; // Fix this thing it might not be break
    //}

}

    *toRead = n;
    printf("\nN: %d",n);
    printf("\nTo read: %d",*toRead);
    return persons;

}

