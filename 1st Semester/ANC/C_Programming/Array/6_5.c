//Max-min values in an array

#include<stdio.h>
int main(){
    int min, max, i;
    int la[5]={1,2,3,4,5};
    max=la[0];
    min=la[0];

    for(i=0;i<5;i++){
        if(max<la[i]){
            max=la[i];
        }
        if(min>la[i]){
            min=la[i];
        }
    }
    printf("max= %d\n", max);
    printf("min=%d", min);
    return 0;
}