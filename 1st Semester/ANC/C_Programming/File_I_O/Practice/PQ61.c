#include<stdio.h>

int main() {

    FILE *fptr;
    fptr = fopen("test.txt", "r");

    int x;
    fscanf(fptr, "%d", &x);
    printf("%d\n", x);
    fscanf(fptr, "%d", &x);
    printf("%d\n", x);
    fscanf(fptr, "%d", &x);
    printf("%d\n", x);
    fscanf(fptr, "%d", &x);
    printf("%d\n", x);
    fscanf(fptr, "%d", &x);
    printf("%d\n", x);

    fclose(fptr);

    return 0;
}