#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl "\n"

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend() // For sorting in descending order 

const int INF = 1e18; // Large value for "infinity" 

void solve() {

  int a,b,c,d;
  cin>>a>>b>>c>>d;
  
  if(d>=b){
    int final_y=d-b;
    int new_x=a+final_y;

    if(new_x>=c){
      cout<<final_y+(new_x-c)<<endl;
    }
    else
    cout<<-1<<endl;
  }

  else cout<<-1<<endl;

  
  

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