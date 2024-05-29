#include<stdio.h>
int main(){

    int n=1;
    for(; ;){
        printf("5 x %d = %d\n", n,5*n);
        n++;
        if(n>10){
            break;
        }
    }

return 0;
}