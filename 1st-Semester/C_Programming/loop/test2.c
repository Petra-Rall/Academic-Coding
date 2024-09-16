#include<stdio.h>
int main(){
    int n, p, v, t, x=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d %d %d", &p, &v, &t);
        if(p+v+t>1){
            x=x+1;
        }
    }
    printf("%d", x);
    
    return 0;
}