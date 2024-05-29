#include<stdio.h>

int main()
{
    unsigned short i, j, k, l, m, n;
    i=4, j=5;

    k= i>>4;
    l= i<<4;
    m= ~j;
    n= ~0x1b;
    printf("%d", n);

    return 0;

}