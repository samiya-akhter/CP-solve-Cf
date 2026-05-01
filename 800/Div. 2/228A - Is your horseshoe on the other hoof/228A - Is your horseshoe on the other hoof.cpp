#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int arr[4];
    int count=0;

    for(int i = 0; i < 4; i++)
    {
        
        cin>>arr[i];

        /* code */
    }

    sort(arr,arr+4);

    for (int i = 0; i < 3; i++)
    {
        if(arr[i]==arr[i+1])
        count++;
        /* code */
    }
    
    cout<<count;
    
    

    
    return 0;
}