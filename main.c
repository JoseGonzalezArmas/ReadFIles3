#include <stdio.h>
#include <stdlib.h>
#include "headers.h"
int main(int argc,char* argv[])
{
    printf("%s",argv[1]);
    if(argc < 2){
        fprintf(stderr,"No input to open it");
        return 1;
    }

    FILE* fPointer = fopen(argv[1],"rt");
    if(fPointer == NULL){
        fprintf(stderr,"No file detected");
        return 1;
    };
    // We want to read how many lines of code we have
    printf("\nwe are here");
    int toRead;
    person_t* persons = readFromFile(fPointer,&toRead);

    // we have read the file and we have stored the data in the array persons which consists of toRead elements of persons_t
int i;
    for( i = 0;i < toRead;i++){

        printResults(stdout,&persons[i]);

    };
printf("\n%d",persons[0].year);
    free(persons);
    fclose(fPointer);
printf("\nwe are hereeeee");
    return 0;
}
