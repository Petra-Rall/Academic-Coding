#include<stdio.h>
#include<math.h>

int main(){
   
    int a, b, c;
    double x, root1, root2;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("Enter the value of c: ");
    scanf("%d", &c);
    root1 = (-b + sqrt(b*b - 4.0*a*c))/2*a;
    root2 = (-b - sqrt(b*b - 4.0*a*c))/2*a;
    printf("The roots of the quadratic equation are %0.2lf and %0.2lf", root1, root2);

return 0;
}