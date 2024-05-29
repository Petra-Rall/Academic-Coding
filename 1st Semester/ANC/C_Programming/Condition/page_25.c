#include<stdio.h>
int main() {

    int n,x,y;
    printf("Enter a two digit number: \n");
    scanf("%d", &n);
    x=n/10;
    y=n%10;
    printf("The reversal is: %d%d\n",y,x);

return 0;
} 