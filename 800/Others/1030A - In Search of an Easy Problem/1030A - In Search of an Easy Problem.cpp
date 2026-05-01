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
    int x;
    int easy=0,hard=0;
    while(n--){
        cin>>x;
        if(x==1){
            hard++;

        }
        else easy++;

    }

    if(hard>=1){
        cout<<"HARD";
    }

    else
    cout<<"EASY";
    return 0;
}