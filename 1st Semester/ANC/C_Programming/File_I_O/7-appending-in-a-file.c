#include<stdio.h>

int main() {

    FILE *fptr;
    fptr = fopen("test.txt", "a");
    
    fprintf(fptr, "%c", 'M');
    fprintf(fptr, "%c", 'a');
    fprintf(fptr, "%c", 'n');
    fprintf(fptr, "%c", 'g');
    fprintf(fptr, "%c", 'o');

    fclose(fptr);
    return 0;
}

//'append' mode doesn't overwrite a file, just writes after the existing texts