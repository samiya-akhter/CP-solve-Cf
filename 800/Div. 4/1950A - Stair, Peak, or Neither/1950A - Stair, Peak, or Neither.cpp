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

if(a<b && b<c) cout<<"STAIR"<<endl;
else if(a<b&&b>c) cout<<"PEAK"<<endl;

else cout<<"NONE"<<endl;

  

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