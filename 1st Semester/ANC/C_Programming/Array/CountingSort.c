
#include<stdio.h>
int main(){

    int A[8]={2,4,1,6,3,8,5,7};
    int B[8],c[];
    int i,j,k,n=8;

    for(i=0;i<=k;i++){
        c[i]=0;

        //sorting count of each element
        for(j=0;j<=n;j++){
            c[A[j]]=c[A[j]]+1;

            //change c[i] such that it contains actual position of these elements in output array
            for(i=1;i<=k;i++){
                c[i]=c[i] + c[i-1];

                //Build output array from c[i]
                for(j=n-1;j>0;j--){
                    B[c[A[j]]-1] = A[j];
                    c[A[j]] = c[A[j]]-1;
                }
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d", B[i]);
    }
    return 0;
}