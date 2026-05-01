#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl "\n"

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend() // For sorting in descending order 

const int INF = 1e18; // Large value for "infinity" 

void solve() {
  int x, k;
    cin >> x >> k ;
    if(x%k!=0)
    {
      cout<<1<<endl<<x<<endl;
        
    }
    else
    {
      cout<<2<<endl;
      cout<<1<<" "<<x-1<<endl;
        
    }
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