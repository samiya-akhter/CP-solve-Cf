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
  map<int,int> freq;

  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin>>x;
      freq[x]++;
    }
  }
  int max=n*(n-1);


  for(auto &a:freq){
    if(max<a.second){
      cout<<"NO"<<endl;
      return;
    }
  }

  

  cout<<"YES"<<endl;
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