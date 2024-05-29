#include<stdio.h>
int main(){
    int x;
    printf("Enter a number: \n");
    scanf("%d", &x);
    if(x>=0 && x<=9){
        printf("The number %d has one digit", x);
    }
    else if(x>=10 && x<=99){
        printf("The number %d has two digits", x);
    }
    else if(x>=100 && x<=999){
        printf("The number %d has three digits", x);
    }
    else if(x>=1000 && x<=9999){
        printf("The number %d has four digits", x);
    }
    else{
        printf("The number %d has more than four digits", x);
    }
return 0;
}