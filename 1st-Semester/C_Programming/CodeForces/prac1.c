#include<stdio.h>

void decompose(double x, long *int_part, double *frac_part);

int main(){
    double a=3.1416,f;
    long i;
    decompose(a,&i,&f);
    printf("%d\n%lf", i, f);
    return 0;
}

void decompose(double x, long  *int_part, double *frac_part){
    *int_part=(long)x;
    *frac_part=x-*int_part;
}