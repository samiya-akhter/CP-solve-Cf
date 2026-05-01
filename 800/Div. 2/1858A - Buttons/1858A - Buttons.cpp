#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl "\n"

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend() // For sorting in descending order 

const int INF = 1e18; // Large value for "infinity" 

void solve() {

 
  int a,b,c;
  cin>>a>>b>>c;
  int flag=0;

  if(a>b){
    flag=0;
  }

  else if(a<b){
    flag=1;
  }

  else
    {
      if(c%2==0){
        flag=1;
      }

      else flag=0;
    }


    if(flag==0){
      cout<<"First"<<endl;

    }

    else 
    cout<<"Second"<<endl;


  
}

int32_t main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}