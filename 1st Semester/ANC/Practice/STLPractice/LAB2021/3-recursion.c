#include<stdio.h>

int series(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*series(n-1)+n;
    }
}

int check(int x){
    for(int n=0; series(n)<=x; n++){
        if(x==series(n)){
            return 1;
            break;
        }
    }
    return 0;
}

int main(){
    printf("%d", check(445));      
    return 0;
}