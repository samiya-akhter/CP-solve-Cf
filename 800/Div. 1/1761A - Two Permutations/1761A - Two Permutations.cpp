#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl "\n"

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend() // For sorting in descending order 

const int INF = 1e18; // Large value for "infinity" 

void solve() {

  int n,a,b;
  cin>>n>>a>>b;
  if(n==a&&b==a){
    cout<<"Yes"<<endl;
    return;
  }
  if(a+b>n-2){
    cout<<"No"<<endl;
    return;

  }

  cout<<"Yes"<<endl;
   


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