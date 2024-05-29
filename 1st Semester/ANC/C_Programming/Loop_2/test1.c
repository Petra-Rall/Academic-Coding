#include<stdio.h>
int main(){

    int n=1,k=1,i=1,j,a;
    scanf("%d", &a);
    while(n<=a){
        k=n*k;
        i=n*i;
        n++;
    }
    j=k*i;
    printf("%d\n", j);
   

return 0;
}