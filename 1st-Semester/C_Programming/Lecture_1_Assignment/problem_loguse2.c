#include<stdio.h>
#include<math.h>

int main() {
    double t, A, B, C, D, E;
    printf("Enter the vlue of t: ");
    scanf("%lf", &t);
    printf("Enter the vlue of D: ");
    scanf("%lf", &D);
    A = t*t/ sqrt(sqrt(t));
    B = pow(A,t);
    C = log10(B);
    E = log10(D);
    printf("The answer is: %0.2lf, %0.2lf", C, E);

    return 0;

}