#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long a;
    cin>>a;
    long long result=0;
    if (a%2==0){
        result=a/2;
    }
    else
        result=-(a+1)/2;
        /* code */
    
    cout<<result;
    
    
    return 0;
}