

#include<stdio.h>

#include "required.h"


int main(){
    char filename[] = "data.txt";
    FILE * firstfile= fopen(filename, "r");

    int buffer_size=100;
    char buffer [buffer_size];
    int count=0;
    while (fgets(buffer, buffer_size, file)){
        printf("%s\n", buffer);
        count++;
    }
    fprintf("loop was excuted %d times \n", count);
    fclose(filename);
    return 0;
}    
