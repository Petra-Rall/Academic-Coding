#include<stdio.h>
#include "f.h"
int main(){
  int x=1;
  int y=2;
  for(int i=1;i<3;i++){
    x=x*2;
  }
  f(x);
  printf("%d", x);
  return 0;
}
