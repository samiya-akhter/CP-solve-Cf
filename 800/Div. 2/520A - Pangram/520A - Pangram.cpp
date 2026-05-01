#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
   

    int flag=0;
    string str;
    int upper[26]={0};
    int lower[26]={0};

    cin>>str;

    for(int i=0;str[i]!='\0';i++){
        if(str[i]<='z' && str[i]>='a'){
            lower[str[i]-'a']++;
        }
        else if(str[i]<='Z' && str[i]>='A'){
            upper[str[i]-'A']++;
        }

        

    }

    for(int i=0;i<26;i++){
        if(upper[i]==0 && lower[i]==0){
            flag=1;
            break;
        }
    }
    if(flag==1){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
    
    return 0;
}