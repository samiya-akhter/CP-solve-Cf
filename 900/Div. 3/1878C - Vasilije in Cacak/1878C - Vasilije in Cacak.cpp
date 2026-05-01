#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl "\n"

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend() // For sorting in descending order 

const int INF = 1e18; // Large value for "infinity" 

void solve() {

  int n,k,x;
  cin>>n>>k>>x;
  int min_sum = 0, max_sum = 0;
    min_sum = (k*(k+1))/2;
    max_sum = ((n*(n+1))/2)-(((n-k)*(n-k+1))/2);
    if(x>=min_sum&&x<=max_sum){
      cout<<"YES"<<endl;
    }

    else cout<<"NO"<<endl;


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