//Deleting from linear array

#include<stdio.h>
int main(){
    int n,j,k=3,item,i;
    int la[6]={10,12,5,7,15,16};
    n=6;
    item= la[k];
    for(j=k;j<=n-1;j++){
        la[j]=la[j+1];
    }
    for(i=0; i<5;i++){
    printf("%d\n", la[i]);
    }
return 0;
}