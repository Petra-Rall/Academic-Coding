#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;
int main(){
    int n=50,x=0;
    char word[n], arr[n];
    cout<<"Enter word: "<<endl;
    cin>>word;
    int length = strlen(word);
    for(int i=0; i<length; i++){
        arr[i]=word[length-1-i];
    }
    cout<<"Backwards: "<<arr<<endl;
    for(int i=0; i<length; i++){
        if(tolower(arr[i])==tolower(word[i])){
            x++;
        }
    }
    if(x==length){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not Palindrome"<<endl;
    }
return 0;
}
