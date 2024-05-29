//Problem: How to use print multiplication table of 1 to 20 by using addition and not multiplication
#include<stdio.h>
int main(){

    int n,m=0,i;
    
    for(n=1;n<=20;n++){
        if(i=1){
            m=0;
        }
        for(i=1;i<=10;i++){
            m+=n;    
            printf("%d x %d = %d\n", n,i,m);
        }
        printf("\n");
        
    }

return 0;
}