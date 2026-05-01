#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl "\n"

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend() // For sorting in descending order 

const int INF = 1e18; // Large value for "infinity" 

void solve() {

  int n;
  cin>>n;

  vector<int>v(n);
  for(int i=0;i<n;i++){

    cin>>v[i];

  }
  int index;

  for(int i=0;i<=n-3;i++){

    if(v[i]!=v[i+1]&&v[i+1]==v[i+2]&&v[i]!=v[i+2]) index=i;

    if(v[i]!=v[i+1]&&v[i+1]!=v[i+2]&&v[i]==v[i+2]) index=i+1;

    if(v[i]==v[i+1]&&v[i+1]!=v[i+2]&&v[i]!=v[i+2]) index=i+2;

  }

  cout<<index+1<<endl;


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