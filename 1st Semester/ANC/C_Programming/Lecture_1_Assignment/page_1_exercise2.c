#include<stdio.h>
#include<math.h>
int main(){

    double x1, y1, x2, y2, D;
    printf("Enter the first point x1, y1: ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter the second point x2, y2: ");
    scanf("%lf %lf", &x2, &y2);
    D = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
    printf("The distance between the two points is: %.2lf", D);

return 0;
}