#include<stdio.h>

int main(){
    
    int inch;
    printf("Enter a length value in inch: ");
    scanf("%d", &inch);
    printf("The length in centimeter is: %0.2lf cm", inch * 2.54);
   
return 0;
}