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
  int count_zero=0;
  int x=0;
  int count=0;

  for(int i=0;i<n;i++){     
    cin>>v[i];
    if(v[i]==-1) x++;
    if(v[i]==0) count_zero++;
  }

  if(x&1){
    count=count_zero+2;
  }
  else{
    count=count_zero;
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