#include<stdio.h>

int power(int x, int n)
{
    return n == 0 ? 1 : x * power(x,n-1);
}
int main()
{
    int i=power(5,4);
    printf("%d", i);
    return 0;
}