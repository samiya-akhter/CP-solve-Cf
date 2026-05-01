#include<iostream>
#include<string>
using namespace std;

int main(){
    char s[100];
    cin>>s;

    int low=0,upper=0;
    for(int i=0; s[i]!='\0'; i++){
        if(s[i]>='a' && s[i]<='z'){
            low++;
        }
        else if(s[i]>='A' && s[i]<='Z'){
            upper++;
        }
    }
    if(low>=upper){
        for(int i=0; s[i]!='\0'; i++){
            if(s[i]>='A' && s[i]<='Z'){
                s[i] = s[i] + 32;
            }
        }
    }
    else{
        for(int i=0; s[i]!='\0'; i++){
            if(s[i]>='a' && s[i]<='z'){
                s[i] = s[i] - 32;
            }
        }
    }
    cout<<s;
}