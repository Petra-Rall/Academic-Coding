/*
  *Lab_Test - 02
  *Set - B
  *Problem - 01
*/
#include<stdio.h>
int main(){
int r,c;
printf("Enter row and column number: \n");
scanf("%d %d", &r, &c);
for(int i=1; i<=r; i++){ 
  for (int j=1; j<=c; j++){
    if(i%2 != 0){
      if(j%3 != 0){
        printf(" $ ");
      }
      else{
        printf(" O ");
      }
    }
    if(i%2 == 0){
      if(j%3 !=0){
        printf(" * ");
      }
      else{
        printf(" $ ");
      }
    }
  }
  printf("\n");
 }  

return 0;
}