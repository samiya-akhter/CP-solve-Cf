#include <iostream>
#include<iomanip>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double n,b,x;
    cin>>n;
    x=n;
    double temp=0;

    while (n--)
    {   cin>>b;
        temp+=b;

        /* code */
    }
    
     cout << fixed << setprecision(12) <<temp/x;
    return 0;
}