#include<stdio.h>
int main(){
    int i;
    double t;
    printf("Enter your income: ");
    scanf("%d", &i);
    if(i<=750){
        t=i*(1.0/100.0);
    }
    else if(i>=750 && i<=2250){
        t=7.50+(i-750.0)*(2.0/100.0);
    }
    else if(i>=2250 && i<=3750){
        t=37.50+(i-2250.0)*(3.0/100.0);
    }
    else if(i>=3750 && i<=5250){
        t=82.50+(i-3750.0)*(4.0/100.0);
    }
    else if(i>=5250 && i<=7000){
        t=142.50+(i-5250.0)*(2/100);
    }
    else{
        t=230.0+(i-7000.0)*(6.0/100.0);
    }

    printf("Tax due: %lf", t);
return 0;
}