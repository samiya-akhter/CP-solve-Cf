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
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int max=arr[0];
    int index=0;
    int count=0;
    
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
            index=i;
        }
    }
    int temp=0;
    for(int i=index;i>0;i--){
        
            temp=arr[i];
            arr[i]=arr[i-1];
            arr[i-1]=temp;
            count++;
        
    }


    int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<=min){
            min=arr[i];
            index=i;
        }
    }
    
    for(int i=index;i<n-1;i++){
        
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            count++;
        
    }
    cout<<count;


    
    return 0;
}