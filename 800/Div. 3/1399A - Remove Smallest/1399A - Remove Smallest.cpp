#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl "\n"

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend() // For sorting in descending order 

const int INF = 1e18; // Large value for "infinity" 

void solve() {

  int n,x;
  cin>>n;
  vector<int>v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
  sort(all(v));
  bool ok=true;



  for(int i=0;i<n-1;i++){
    if(v[i+1]-v[i]>1){
      ok=false;
      break;
    }

  }

  if(ok) cout<<"YES"<<endl;
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