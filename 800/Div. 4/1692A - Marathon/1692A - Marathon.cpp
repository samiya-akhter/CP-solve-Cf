#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl "\n"

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend() // For sorting in descending order 

const int INF = 1e18; // Large value for "infinity" 

void solve() {
  vector<int> v(4);
  for(int i=0;i<4;i++){
    cin>>v[i];
  }
  int a=v[0];
  int count=0;
  for(int x:v){
    if(a<x){
      count++;
    }
  }

  cout<<count<<endl;
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