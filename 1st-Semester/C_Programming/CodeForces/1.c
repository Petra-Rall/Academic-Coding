#include<stdio.h>
int main(){
    int n;
    printf("Enter no of numbers:\n");
    scanf("%d", &n);
    double a[n];
    for(int i=0; i<n; i++){
        printf("Enter a digit:\n");
        scanf("%lf", a[i]);
    }

    int x;
    printf("Select an action\n");
    printf("1.Addition 2.Substraction 3.Multiplication 4.Division\n");
    scanf("%d", &x);
    //switch(x){
        //case 1: 
    
    return 0;
}