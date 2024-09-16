#include<stdio.h>
int main(){

    double GA, RA, HI, HA, TA, NS;
    printf("Enter Gross Amount: ");
    scanf("%lf", &GA);
    printf("Gross Amount: %.2lf\n", GA);
    printf("***********************************************\n");
    printf(" \n");
    RA = GA*(5.0/100.0);
    HI = 750.0;
    HA = GA*(20.0/100.0);
    TA = 200.0;
    NS = GA-RA-HI+HA+TA;
    printf("Retirement Plan:               - %.2lf AED\n", RA);
    printf("Health Insurance:              - 750.00 AED\n");
    printf("Housing Allowence:             + %.2lf AED\n", HA);
    printf("Transportation Allowence:      + 200.00 AED \n");
    printf("***********************************************\n");
    printf(" ");
    printf("Net Salary:                     %.2lf AED", NS);


return 0;
}