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
    while (T--)
    {
        /* code */


        int n;
        cin>>n;
        int arr[n];

        
        int max=0;
        int count=0;
        for (int i = 0; i < n; i++)

        {   cin>>arr[i];
            
            if(max<arr[i]){
            max=arr[i];
        }
            /* code */
        }
        for (int i = 0; i < n; i++)
        {   if(max==arr[i]){
            count++;
        }
            /* code */
        }cout<<count<<endl;

    }
    
    
    return 0;
}