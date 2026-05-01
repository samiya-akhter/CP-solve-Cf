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
    while(n--){
        string s;
        cin>>s;

        if(s.length()>10){
            cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;
        }
        else 
        cout<<s<<endl;


    }
    

    
    return 0;
}