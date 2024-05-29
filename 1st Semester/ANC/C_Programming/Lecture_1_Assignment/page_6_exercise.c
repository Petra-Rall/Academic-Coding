#include<stdio.h>
int main(){

    double Fixed, Bonus, Tax, Final;
    printf("Enter the fixed slary amount: ");
    scanf("%lf", &Fixed);
    Bonus = Fixed*(15.0/100.0);
    Tax = Fixed*(12.0/100.0);
    Final = Fixed+Bonus-Tax;
    printf("The final salary is: %0.2lf", Final);

return 0;
}