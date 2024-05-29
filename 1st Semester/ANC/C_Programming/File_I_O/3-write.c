#include<stdio.h>

int main() {

    FILE *fptr;
    fptr = fopen("newtest.txt", "w");
    if(fptr == NULL){
        printf("file doesn't exist\n");
    }
    else{
    fclose(fptr);
    }
    return 0;
}

//for 'write' if the file doesn't exist it creates the file
//if file e3xists 'write' mode overwrites the whole file