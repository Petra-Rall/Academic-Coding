#include<stdio.h>

int main() {

    FILE *fptr;
    fptr = fopen("sum.txt", "r");

    int n, m;
    fscanf(fptr, "%d", &n);
    printf("%d", n);
    fscanf(fptr, "%d", &m);
    printf("%d", m);

    fclose(fptr);

    fptr = fopen("sum.txt", "w");
    fprintf(fptr, "%d", n+m);
    fclose(fptr);

    return 0;
}