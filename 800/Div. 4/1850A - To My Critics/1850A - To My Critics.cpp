#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl "\n"

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend() // For sorting in descending order 

const int INF = 1e18; // Large value for "infinity" 

void solve() {

  vector<int> v(3);
  cin>>v[0]>>v[1]>>v[2];

  sort(rall(v));

  if(v[0]+v[1]>=10){
    cout<<"YES"<<endl;

  }
  else cout<<"NO\n";
  

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