#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin>>T;
    int count=0;
    while (T--)

    { int arr[3];
        int a=0;
        for(int i=0; i<3;i++){
            cin>>arr[i];
            a+=arr[i];

        }
        if(a>1)
        count++;
        
    }

    cout<<count;
    



    
    
    return 0;
}