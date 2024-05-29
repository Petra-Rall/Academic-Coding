#include<stdio.h>
int main(){
    
    int i,n,sum;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(i=2;i<=n;i=i+2){
        sum+=i;
    }
    printf("2+4+....+%d= %d",n, sum);
    
return 0;
}