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
  int sum1=a+b+c;
  int sum2=a*b*c;
  int sum3=a*(b+c);
  int sum4=(a+b)*c;
  a=max({sum1,sum2,sum3,sum4});
  cout << a << endl;
}

int32_t main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  //cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}