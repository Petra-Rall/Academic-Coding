#include<stdio.h>

int main() {

    FILE *fptr;
    fptr = fopen("test.txt", "r");
    fclose(fptr);
    return 0;
}

//for 'read' mode if the file doesn't exist the pointer stores NULL