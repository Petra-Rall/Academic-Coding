#include<stdio.h>
int main(){

    int n,i;
    n=1;
    while(n<=10){
        i=1;
        while(i<=10){
            printf("%d * %d = %d\n",n,i,n*i);
            i++;
        }
        printf("\n");
        n++;
    }
    return 0;
}