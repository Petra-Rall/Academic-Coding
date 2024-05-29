#include<stdio.h>
int main(){

    int i,j,k,l;
    char * cName[4]={"Bahrain","Kawuit","UK","Australia"};
    int ht[4];
    int lt[4];
    int temp[4][12]={
                      {17,18,21,25,30,33,34,34,32,30,25,20},
                      {17,21,26,32,40,44,46,46,43,36,26,20},
                      {7,7,9,11,14,16,19,19,17,13,10,7},
                      {23,23,22,19,16,14,13,14,16,18,20,22}
                    };

    for(i=0;i<4;i++){
        k=temp[i][0];
        for(j=1;j<12;j++){
            if(k<temp[i][j]){
                k=temp[i][j];    
            }
            ht[i]=k;
        }
    }

    for(i=0;i<4;i++){
        l=temp[i][0];
        for(j=1;j<12;j++){
            if(l>temp[i][j]){
                l=temp[i][j];
            }
            lt[i]=l;
        }
    }

    printf("Country name\t Hightest Temperature\t Lowest Temperature\t \n\n");

    for(i=0;i<4;i++){
        for(j=0;j<1;j++){
            printf("%s\t %20d\t  %15d\t \n\n",cName[i], ht[i],lt[i]);
        }
    }
    printf("\n");

    return 0;
}