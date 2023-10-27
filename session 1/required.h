#ifndef "REQUIRED_H"
#define "REQUIRED_H"

#include<stdio.h>
#include<stdlib.h>


FILE *open_file(char filename[], char mode[]){
    FILE * firstfile= fopen(filename, mode);
    if (firstfile== NULL){
        perror ("file I/O");
        exit(1);
    }
    return file;
}
#endif