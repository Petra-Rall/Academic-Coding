#include<stdio.h>
int main(){

    int n=1, i=1;
    while(n<=20){
        while(i<=10){    
            printf("%d X %d = %d\n", n, i, n*i);
            n++;
            i++;
        }
    }

    return 0;
}