#include<stdio.h>
int main() {

    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if(ch>='a' && ch<='z') {
        printf("%c is lower case.\n", ch);
    }
    else{
        printf("%c is upper case.", ch );
    }

return 0;
} 