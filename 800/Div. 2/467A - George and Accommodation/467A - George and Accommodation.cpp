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
    int count=0;

    while (n--)
    {   int a,b;
        cin>>a>>b;
        a+=2;

        if(a<=b){
            count ++;
        }
        /* code */
    }
    cout<<count;


    
    return 0;
}