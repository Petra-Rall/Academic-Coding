#include<stdio.h>

int num_digits(int n)
{
    int i=0;
    while(n>0){
        n/=10;
        i++;
    }
return i;
}

int main()
{
    printf("%d\n",num_digits(245));
    return 0;
}