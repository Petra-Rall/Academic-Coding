#include<stdio.h>
int main(){
    int min, max, i, n, la[n];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d\n", &la[i]);
    }

    max=la[0];
    min=la[0];

    for(i=0;i<n;i++){
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
