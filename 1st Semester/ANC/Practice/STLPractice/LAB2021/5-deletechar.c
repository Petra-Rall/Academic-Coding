#include<stdio.h>
int main(){
    char str[26], ch;
    fgets(str,26,stdin);
    ch = getc(stdin);
    printf("%s%c\n", str, ch);

    for(int i=0; str[i]!='\0'; i++){
        if(str[i]==ch){
            if(str[i+1]!='\0'){
                for(int j=i; str[j]!='\0'; j++)
                str[j]=str[j+1];
            }
            else{
                str[i]='\0';
            }
        }
    }

    printf("%s", str);

    return 0;
}