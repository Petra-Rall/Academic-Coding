#include<stdio.h>
int main() {

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num>=1 || num<=10){
        printf("Yes.\n");
    }
    else {
        printf("No.");
    }

return 0;
} 