//ShellSort Algorithm

#include<stdio.h>
int main(){

    int A[8]={2,4,1,6,3,8,5,7};
    int n=8,gap,temp,i,j;
    
    for(gap=n/2;gap>0;gap/=2){
        
        for(i=gap;i<n;i+=1){
            temp=A[i];
            //shift earlier gap-sorted elements up until the correct location of A[i] is found
            for(j=i;j>=gap && A[j-gap]>temp;j-=gap){
                A[j]=A[j-gap];
            }
            A[j]=temp;
        }
    }
    for(i=0;i<n;i++){
        printf("%d ", A[i]);
    }
    return 0;
}