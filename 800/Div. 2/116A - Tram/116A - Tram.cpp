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
    int exit,enter;
    int remain=0;
    int max=0;
    while (T--)

    { cin>>exit>>enter;


        remain=remain-exit+enter;
        if(max<remain){
            max=remain;
        }

        /* code */
    }

    cout<<max;
    
    return 0;
}