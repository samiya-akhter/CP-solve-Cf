#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl "\n"

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend() // For sorting in descending order 

const int INF = 1e18; // Large value for "infinity" 

void solve() {

  int arr[4];
  for(int i=0;i<4;i++){
    cin>>arr[i];
  }

  string s;
  cin>>s;
  int sum=0;
  int x;
  for(auto a:s){
    x=a-'0';
    sum+=arr[x-1];

  }

  cout<<sum;
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