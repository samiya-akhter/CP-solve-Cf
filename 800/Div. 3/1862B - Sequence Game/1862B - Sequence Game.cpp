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
  vector<int> v(n);
  for(int i=0;i<n;i++){
    cin>>v.at(i);
    }
  vector<int> a;
  a.push_back(v[0]);
  for(int i=1;i<n;i++){
    if(v[i]<v[i-1]){
      a.push_back(v[i]);
    }
    a.push_back(v[i]);
  }

  cout<<a.size()<<endl;

  for(int x: a){
    cout<<x<<" ";
  }

  

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