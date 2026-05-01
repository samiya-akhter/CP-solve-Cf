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
    int temp;


    while (n--)
    {int a;
        cin>>a;
        
        if(a!=temp){
            count++;
        }
        temp=a;

        /* code */
    }
    cout<<count;

    return 0;
}