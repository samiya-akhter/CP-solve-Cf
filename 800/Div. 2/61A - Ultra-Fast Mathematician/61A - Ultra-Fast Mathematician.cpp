#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s1,s2;
    cin>>s1>>s2;

 
    string result="";

    for(int i=0;i<s1.size();i++){
        if(s1[i]!=s2[i]){
        result+='1';
        }
        else
        result+='0';

    }

   
    cout<<result;


    
    return 0;
}