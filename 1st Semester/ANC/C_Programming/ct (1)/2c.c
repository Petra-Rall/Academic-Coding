#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int *arr = (int*)malloc(n*sizeof(int));
    int *odd = (int*)malloc(n*sizeof(int));
    int *even = (int*)malloc(n*sizeof(int));

    for(int i=0; i<n; i++){
        printf("arr[%d]= ", i);
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            even[i]=arr[i];
        }
        else{
            odd[i]=arr[i];
        }
    }
    printf("\nEven = ");
    for(int i=0; i<n; i++){
        if(even[i]!=0){
            printf("%d ", even[i]);
        }
    }
    printf("\nOdd = ");
    for(int i=0; i<n; i++){
        if(odd[i]!=0){
            printf("%d ", odd[i]);
        }
    }
    printf("\n");

    free(arr);
    free(odd);
    free(even);
return 0;
}