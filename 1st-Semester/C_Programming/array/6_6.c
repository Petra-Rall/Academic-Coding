#include<stdio.h>
int main(){
    int sum=0, i;
    float mean;
    int la[5]={1,2,3,4,5};

    for(i=0;i<5;i++){
        sum=sum+la[i];
    }
    mean= sum/5.0;
    printf("%.2f\n", mean);
    
    return 0;
}