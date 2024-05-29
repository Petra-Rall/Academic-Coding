#include<stdio.h>
#include<math.h>
int main(){

    
    float a,b,c;
    float S, A;
    
    printf("Enter the side a: ");
    scanf("%f",&a);
    printf("Enter the side b: ");
    scanf("%f", &b);
    printf("Enter the side c: ");
    scanf("%f", &c);
    S = (a+b+c)/2.0;
    A = sqrt(S*(S-a)*(S-b)*(S-c));
    printf("The area of the triangle is: %.2f", A);


return 0;
}