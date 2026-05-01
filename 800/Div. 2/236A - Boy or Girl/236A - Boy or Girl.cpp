#include <iostream>
#include <cctype>
#include<string>
using namespace std;
 
int main(){
char s1[100];
cin>>s1;
int freq[26]={0};
 
 
 
for(int i=0; s1[i]!='\0';i++){
    freq[s1[i]-'a']=1;
    
} 
 
int x=0;
for(int i=0;i<26;i++){
    x+=freq[i];
}
 
 
 
if (x%2==0){
cout<<"CHAT WITH HER!";
}
else 
cout<<"IGNORE HIM!";
 
return 0;
}