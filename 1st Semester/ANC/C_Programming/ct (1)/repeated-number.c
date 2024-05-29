#include<stdio.h>
#include<stdlib.h>
int main(){
    int n, x=0,y=0;
    printf("Enter the size of an array:\n");
    scanf("%d", &n);
    int a[n], b[n], c[n];
    //int *a = (int*)malloc(n * sizeof(int)); 
    //int *b = (int*)malloc(n * sizeof(int));
    //int *c = (int*)malloc(n * sizeof(int));
    for(int i=0; i<n; i++){
        printf("a[%d]= ", i);
        scanf("%d", &x);
        if(x>0){
            a[i]=x;
        }
        else{
            printf("Sorry! 0 or negative number can't be accepted.\n");
            i--;
            n--;
        }
    }
    for(int i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    c[0]=0;
    for(int i=0; i<n; i++){
        if(c[i]!=1){
        for(int j=0; j<n; j++){
            if(a[i]==a[j]){
                y++;
                c[j]=1;
            }
        }
        }
        b[i]=y;   
        y=0;
    }
    for(int i=0; i<n; i++){
        if(b[i]!=0){
        printf("%d occurs: %d time(s)\n", a[i], b[i]);
        }
    }
    //free(a);
    //free(b);
    //free(c);
return 0;
}