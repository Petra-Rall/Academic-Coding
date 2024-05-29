#include<stdio.h>


int num_digits(int n);

int digit(int n, int k)
{
   
    if(k>num_digits){
        return 0;
    }
    else{
        for(k=num_digits;k<0;k--){
            if(k==1){
                n %= 10;
            }
            n/=10;
        }
    return n;
    }

}

int num_digits(int n)
    {
    int i=0;
    while(n>0){
        n/=10;
        i++;
    }
    return i;
    }

int main(){
    printf("%d", digit(829,2));
    return 0;
}