#include<stdio.h>
#include<ctype.h>
int main(){

    char str[100], odd[26];
    int freq[26], n=1;
    for(int i=0;i<26; i++){
        freq[i]=0;    
    }
    FILE *file;
    file=fopen("1-odd-character-freq.txt","r");
    if(file==NULL){
        printf("Error while opening file\n");
        return 1;
    }
    else{
        while((fgets(str,sizeof(str), file))!=NULL){

            for(int i=0; str[i]!='\0'; i++){
                str[i]=tolower(str[i]);
                for(int j=97; j<=122; j++){
                    if(str[i]==j){
                        freq[j-97]++;
                    }
                }
            }
            printf("Line %d odd characters: ", n);
            for(int i=0, j=0; i<26; i++, j++){
                if(freq[i]%2!=0){
                    odd[j]=97+i;
                    printf("%c, ", odd[j]);
                }
            }            
            n++;
            for(int i=0;i<26; i++){
                freq[i]=0;
                odd[i]=0;
            }
            printf("\n");
        }
        fclose(file);
    }
    return 0;
}