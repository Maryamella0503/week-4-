#include<stdio.h>

int main(){
    char filename[] = "./data.txt";
    FILE * firstfile= fopen(filename, "w");
    if (firstfile= NULL){
        perror ("file I/O");
        return 1;
    }
    fprintf (file1, "hello world", firstfile);
    fclose (firstfile);
    return 0;
}    