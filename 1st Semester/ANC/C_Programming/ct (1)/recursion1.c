#include<stdio.h>

int func(int n){
    if(n==0){
        return 1;
    }
    else{
        return (n*func(n-1)+n);
    }
}

int check(int x){
    for(int i=1; ; i++){
        if(func(i)==x){
            return 1;
        }
        else if(func(i)>x){
            return 0;
        }
    }
}

int main(){
    int x;
    printf("Enter value of x: ");
    scanf("%d", &x);
    printf("%d\n", check(x));
    
return 0;
}