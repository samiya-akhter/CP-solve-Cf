#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl "\n"

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend() // For sorting in descending order 

const int INF = 1e18; // Large value for "infinity" 

void solve() {
  vector<int> v(7);
  for (int i = 0; i < 7; i++) {
    cin >> v[i];
  }
  sort(all(v));
  int sum = 0;

  for (int i = 0; i < 6; i++) {
    sum += v[i]*-1;
  }
  sum+=v[6];
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