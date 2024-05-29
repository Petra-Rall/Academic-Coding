//Variance and standard deviation of an array

#include<stdio.h>
#include<math.h>
int main(){
    int sum=0, temp, i, da[5],dsum=0;;
    float mean, variance, sd; //sd=standard deviation
    int la[5]={1,2,3,4,5};

    for(i=0;i<5;i++){
        sum=sum+la[i];
    }
    mean= sum/5.0;

    for(i=0;i<5;i++){
        temp=mean-la[i];
        da[i]=temp*temp;
        dsum=dsum+da[i];
    }

    variance= dsum/5.0;
    sd=sqrt(variance);

    printf("%.2f\n", variance);
    printf("%.2f\n", sd);
   
    return 0;
}