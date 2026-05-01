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
    int a=n;
    for(int i=1;i<=n;i++)

    {
        if(i%2!=0)
        cout<<"I hate";
        else
        cout<<"I love";

        if(i<n)
        cout<<" that ";
        /* code */
    }
    
    cout<<" it";
    
    return 0;
}