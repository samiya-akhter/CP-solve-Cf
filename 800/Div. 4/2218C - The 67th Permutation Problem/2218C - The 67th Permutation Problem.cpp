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
  vector<int> v;
  int x=n+1;
  for(int i=1;i<=n;i++){

    

    v.push_back(i);
    v.push_back(x);
    v.push_back(x+1);

    x+=2;

  }

  for(auto a:v){
    cout<<a<<" ";
  } 
  cout<<endl;

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