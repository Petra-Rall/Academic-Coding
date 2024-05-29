#include<stdio.h>

void dectobin(int num){
    int rem;
    if(num == 1){
        printf("%d", num);
    }
    else{
        rem = num%2;
        dectobin(num/2);
        printf("%d", rem);
    }
}

int main(){
    int i = 6;
    dectobin(i);

return 0;
}
