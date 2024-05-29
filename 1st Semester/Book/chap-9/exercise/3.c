#include<stdio.h>

int gcd(int m, int n)
{
    if(n!=0)
    {
        int r;
        r= m % n;
        m = n;
        n = r;

        return m;
    } 
}
int main()
{
    printf("%d", gcd(4,2));
    return 0;
    
}