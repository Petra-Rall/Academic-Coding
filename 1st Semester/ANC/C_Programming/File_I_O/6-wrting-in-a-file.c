#include<stdio.h>

int main() {

    FILE *fptr;
    fptr = fopen("test.txt", "w");
    
    fprintf(fptr, "%c", 'M');
    fprintf(fptr, "%c", 'a');
    fprintf(fptr, "%c", 'n');
    fprintf(fptr, "%c", 'g');
    fprintf(fptr, "%c", 'o');

    fclose(fptr);
    return 0;
}