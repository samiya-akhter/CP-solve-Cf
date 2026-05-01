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
  map<int,int>freq;
  int x;
  for(int i=0;i<n;i++){
    
    cin>>x;
    freq[x]++;
  }

  int ans=0;
  for(auto a:freq){
    if(a.first>a.second) ans+=a.second;
    if(a.first<a.second) ans+=(a.second-a.first);
  }

  cout<<ans<<endl;
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