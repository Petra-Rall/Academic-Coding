#include<stdio.h>
int main(){

    int nums[4]={1,3,5,6,};
    int i, target, flag;
    printf("Enter target: \n");
    scanf("%d", &target);

    for(i=0;i<4;i++){
        flag=0;
        if(nums[i]==target){
            break;
            printf("The location of the target: %d", i);
        }
        else if(nums[i]>target){
            printf("The location the target would be inserted: %d\n", i);
        }
        else{
            i=i+1;
        }
    }

    return 0;
}