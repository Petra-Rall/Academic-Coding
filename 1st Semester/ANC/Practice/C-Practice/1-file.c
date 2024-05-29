#include<stdio.h>
#include<string.h>
int main(){

    int n, d;
    char name[100], rname[100];
    printf("Enter the number of names: ");
    scanf("%d", &n);
    getchar();

    FILE *file;
    file = fopen("name.txt", "w");
    if(file==NULL){
        printf("Error opening name.txt");
        return 1;
    }
    else{
        
        for(int i=0; i<n; i++){
            printf("Enter a name: ");
            //gets(name);
            fgets(name, sizeof(name), stdin);
            fprintf(file,"%s", name);
        }

        fclose(file);
    }

    printf("Enter name to search: ");
    fgets(rname, sizeof(rname), stdin);

    file=fopen("name.txt", "r");
    if(file==NULL){
        printf("Error opening name.txt");
        return 1;
    }
    else{
        printf("Contents of name.txt: \n");
        while(fgets(name, sizeof(name), file)!=NULL){
            printf("%s\n", name);
            if(strcmp(rname, name)==0){
                d = 0;
                break;
            }
        }
        if(d==0){
            printf("Found\n");
        }
        else{
            printf("Not Found\n");
        }

        fclose(file);
    }

    return 0;
}