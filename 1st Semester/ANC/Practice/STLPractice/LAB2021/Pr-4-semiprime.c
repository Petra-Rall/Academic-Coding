#include<stdio.h>
#include<stdlib.h>

int* prime(int n){
    int* p = (int*)malloc(n * sizeof(int)); 
    int count, r=0;
    for(int i=2; i<=n; i++){
        count=0;
        for(int j=2; j<=i/2; j++){
            if(i%j==0){
                count++;
                break;
            }
        }
        if(count==0){
            p[r++]=i;
        }
    }
    return p;
}

int* semiprime(int n){
    int r=0, m, count=0;
    int* s=(int*)malloc(n*sizeof(int));
    int* p=prime(n);
    for(int i=0; p[i]!=0; i++){
        for(int j=0; p[j]!=0; j++){
            m=p[i]*p[j];
             if(m<=n){
               for(int y=0; y<r; y++){
                    if(s[y]==m){
                        count++;
                    }
                }
                if(count==0){
                    s[r]=m;
                    r++;
                }
            }
        }
    }
    int temp;
    for(int i=0; i<r; i++){
        for(int j=0; j<r-i-1; j++){
            if(s[j]>s[j+1]){
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
        }
    }

    
    return s;
}

int main(){

    int* p=semiprime(100);

    for(int i=0; p[i]!=0; i++){
        printf("%d, ", p[i]);
    }

    return 0;
}