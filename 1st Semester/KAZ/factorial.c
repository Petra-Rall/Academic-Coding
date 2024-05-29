#include<stdio.h>

long factorial(int n)
{
  if(n<=1)
    return 1;
  long ret_val;
  ret_val = n * factorial(n-1);
  return ret_val;
}

int main()
{
  int i1=15;
  long fact_val= factorial(i1);
  printf("Factorial of %d is %ld \n", i1, fact_val);
  return 0;
}
