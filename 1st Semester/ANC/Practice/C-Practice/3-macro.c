#include<stdio.h>
#define DateTime
#define MODE 0
int main(){

    #ifdef DateTime
    printf("%s\n", __DATE__);
    printf("%s\n", __TIME__);
    #else
    printf("%s\n", __FILE__);
    printf("%d\n", __LINE__);
    printf("%d\n", __STDC__);
    #endif

    

    #ifndef MODE 
        #define MODE 3
    #endif

    printf("MODE: ");
    
    #if MODE==1
        printf("1\n");
    #elif MODE==2
        printf("2\n");
    #elif MODE==3
        printf("3\n");
    #else
        printf("4\n");
    #endif


    return 0;
}