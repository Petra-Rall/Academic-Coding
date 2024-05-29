#include<stdio.h>

int max_of_three(int a, int b, int c)
{
  int ret = a;
  if(b>a && b>c)
    ret = b;
  else if (c>a && c>b)
    ret = c;
  return ret;
}

int main()
{
  int a1=77, a2=334, a3=5;
  int max = max_of_three(a1,a2,a3);
  printf("Max of %d, %d and %d is %d\n", a1,a2,a3,max);
  return 0;
}
