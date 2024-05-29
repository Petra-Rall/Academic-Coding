//Insert into linear array

#include<stdio.h>
int main(){
    int N, K=4, J, item=27, i;
    int LA[6]={10,12,5,7,15,16};
    N=6;
    J=N;
    
    while(J>=K){
        LA[J+1]= LA[J];
        J=J-1;;
    }
    LA[K]= item;
    N=N+1;
    for(i=0; i<7;i++){
    printf("%d\n", LA[i]);
    }

    return 0;
}