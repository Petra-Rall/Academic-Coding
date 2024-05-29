#include<stdio.h>
int main(){

    int n,i,fact=1;
    printf("Enter an integer: ");
    scanf("%d", &n);

    if(n<0){
        printf("Error! Factorial of a negetive number doesn't exist.");
    }

    else{
        for(i=1;i<=n;i++){
            fact=fact*i;
        }
    printf("Factorial of %d is %d",n, fact);
    }
return 0;
}
