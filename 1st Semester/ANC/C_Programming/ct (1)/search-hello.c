#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    const int n = 50;
    int count=0, b[n]={0};
    char word[n];
    const char a[]={"Hello"};

    printf("Enter word: ");
    scanf("%49s", word);

    int len1 = 5;
    int len2 = strlen(word);

    for(int i=0; i<len2; i++){
        for(int j=0; j<len1; j++){
            if(b[j]!=1){
            if(tolower(word[i])==tolower(a[j])){
                count++;
                b[j]=1;
                break;
            }
            }
        }
    }
    printf("Match: %d\n", count);
    if(count==len1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    

return 0;
}