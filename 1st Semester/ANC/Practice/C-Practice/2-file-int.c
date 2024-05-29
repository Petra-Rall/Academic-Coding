#include<stdio.h>
#include<math.h>
int main(){

    int x;
    FILE *file;
    file=fopen("Int.txt", "w");
    if(file==NULL){
        printf("Error opening int.txt\n");
        return 1;
    }
    else{
        for(int i=1; i<=100; i++){
        fprintf(file, "%d\n", rand());
        }
        fclose(file);
    }

    file=fopen("Int.txt", "r");
    if(file==NULL){
        printf("Error opening int.txt\n");
        return 1;
    }
    else{
        while((fscanf(file, "%d", &x))!=EOF){
            printf("%d\n", x);
        }
        fclose(file);
    }

    return 0;
}