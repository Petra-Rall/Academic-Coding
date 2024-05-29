#include<stdio.h>
int main(){
    int i,j,k,w,d;
    int temp[4][7]={
                    {32,31,30,31,32,33,32},
                    {33,32,34,35,34,36,36},
                    {34,34,36,36,37,38,38},
                    {38,37,36,35,34,33,32}
                  };

    char* day[7]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    int week[4]={1,2,3,4};
    

    for(i=0;i<4;i++){
        for(j=0;j<7;j++){
            printf("%d ",temp[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<4;i++){
        k=temp[i][0];
        for(j=1;j<7;j++){
            if(k<temp[i][j]){
                k=temp[i][j];
            }
        }        
    }

    for(i=0;i<4;i++){
        for(j=0;j<7;j++){
            if(temp[i][j]==k){
                w=i;
                d=j;
            }
        }
    }   

    printf("\nThe highest temperature recorded is: %d\n", k);
    printf("The day and week of the highest temperature recorded is %s and %d, \n\n", day[d],week[w]);

    return 0;                      
}


