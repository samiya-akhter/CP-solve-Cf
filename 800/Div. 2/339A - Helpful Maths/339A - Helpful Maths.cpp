#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    for (size_t i = 0; i < s.length(); i++)
    {
        if(s[i]!='+'){
            cout<<s[i];
            if(i!=s.length()-1){
            cout<<"+";}
        }
    }
    
}