#include<stdio.h>
#include<math.h>
int main(){
    int sys1[10]={22,18,17,19,22,12,14,11,19,7};
    int sys2[10]={19,11,14,17,23,11,15,19,11,8};
    float sub1[10], sub2[10], sub3[10];
    int i,X1=0,X2=0,X=0;
    float meanX,sumdifdif=0;

    for(i=0;i<10;i++){
        X1=X1+sys1[i];
        X2=X2+sys2[i];
        sub1[i]=sys1[i]-sys2[i];
        X=X+sub1[i];
    }

    meanX=X/10.0;

    for(i=0;i<10;i++){
        sub2[i]=sub1[i]-meanX;
        sub3[i]=sub2[i]*sub2[i];
        sumdifdif=sumdifdif+sub3[i];
    }

    printf("\n X1=%d\n X2=%d\n X=%d\n meanX=%.2f\n sumdifdif=%.2f\n \n", X1, X2, X, meanX, sumdifdif);

    float Mean, SD, SE, t, df, n=10.0;
    
    Mean= meanX;
    SD=sqrt(sumdifdif/(n-1.0));
    SE=SD/sqrt(n);
    t=meanX/SE;
    df=n-1.0;

    printf(" Mean=%.2f\n SD=%.2f\n SE=%.2f\n t=%.2f\n df=%.2f\n \n", Mean, SD, SE, t, df);
    return 0;
}