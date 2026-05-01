#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl "\n"

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend() // For sorting in descending order 

const int INF = 1e18; // Large value for "infinity" 

void solve() {

   int a, b, n, T, j = 0;
    cin >> a >> b >> n;
    vector <int>v(n);
    for(auto &a:v) cin>>a;
    int sum=b;

    for(int i=0;i<n;i++){
      sum+=min(v[i],a-1);
    }

    cout<<sum<<endl;

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


