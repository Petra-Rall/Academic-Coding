#include<stdio.h>

int main(){
    int X, Y, Z;
    printf("Enter the marks of the student, X: ");
    scanf("%d", &X);
    printf("Enter the marks of the student, Y: ");
    scanf("%d", &Y);
    printf("Enter the marks of the student, Z: ");
    scanf("%d", &Z);
    printf("The total marks of the student is: %d\n", X+Y+Z);
    printf("The average marks of the student is: %d\n", (X+Y+Z)/3);
   
return 0;
}