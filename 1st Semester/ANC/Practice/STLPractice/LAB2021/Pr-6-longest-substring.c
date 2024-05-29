#include<stdio.h>
#include<string.h>
int main(){

    char str1[26], str2[26];
    printf("Enter first string: ");
    fgets(str1,26,stdin);
    printf("Enter second string: ");
    fgets(str2,26,stdin);
    str1[strcspn(str1, "\n")] = 0;
    str2[strcspn(str2, "\n")] = 0;
    int n=strlen(str1);
    int m= strlen(str2);
    int count=0;
    int start_index=0;
    int len, p,q;
    
    for(int i=0; i<n ; i++){
        for(int j=0; j<m; j++){
            if(str1[i]==str2[j]){
                len=0;
                p= i;
                q=j;
                while(p<n && q<m && str1[p]==str2[q]){
                    len++;
                    p++;
                    q++;
                }
                if(len>count){
                    count =len;
                    start_index=i;
                }
            }
        }
    }

    if(count==0){
        printf("No common substring");
    }
    else{
        printf("Longest common substring: ");
        for(int i=start_index; i<start_index+count; i++){
            printf("%c", str1[i]);
        }
    }


/*
    int b=strlen(str3);
    int count1=0, count2=0, x[26], r=0,s=0, count[26];
    for(int i=0; i<b; i++){
        if(str3[i]!='0'){
            count1++;
            if(i==b-1){
                count[s++]=count1;
            }
        }
        else{
            x[r++]=i;
            count[s++]=count1;
            count1=0;
        }
    }

    int k=0, l=0;
    for(int i=1; i<s; i++){
        if(k<count[i]){
            k=count[i];
            l=i;
        }
    }
    printf("%d", x[l]);
    for(int p=x[l-1]; p<x[l-1]+k; p++){
        printf("%c", str3[p]);
    } 

*/ 

    return 0;
}