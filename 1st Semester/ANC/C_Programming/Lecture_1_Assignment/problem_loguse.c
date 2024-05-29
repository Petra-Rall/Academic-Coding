#include<stdio.h>
#include<math.h>

int main() {
    double t, x, A, B, C, D, M;
    printf("Enter the vlue of t: ");
    scanf("%lf", &t);
    printf("Enter the vlue of x: ");
    scanf("%lf", &x);
    A = sqrt(3.0)*t*t;
    B = sqrt(t)+x;
    C = sqrt(t+3.0)/(t*t);
    D = pow(C,t);
    M = log10(A/B);
    printf("The answer is: %0.2lf", M);

    return 0;

}