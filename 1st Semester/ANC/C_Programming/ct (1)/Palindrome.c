#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    int n=50,x=0;
    char word[n], a[n];
    printf("Enter word: ");
    scanf("%s", word);
    int length = strlen(word);
    for(int i=0; i<length; i++){
        a[i]=word[length-1-i];
    }
    printf("Backwards: %s\n", a);
    for(int i=0; i<length; i++){
        if(tolower(a[i])==tolower(word[i])){
            x++;
        }
    }
    if(x==length){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }

return 0;
}