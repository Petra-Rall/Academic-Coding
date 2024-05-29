#include<stdio.h>

int check(int x, int y, int n)
{
    if(x>=0 && x<=n-1 && y>=0 && y<=n-1)
        return 1;

    return 0;
}
int main()
{
    int i=check(2,3,4);
    printf("%d", i);
    return 0;
}