#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl "\n"

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend() // For sorting in descending order 

const int INF = 1e18; // Large value for "infinity" 

void solve() {
  string s;
  cin>>s;
  int countA=0;
  int countB=0;
  for(auto c:s){
    if(c=='A') countA++;
    if(c=='B') countB++;
  }
  cout<<((countA>countB)?"A":"B")<<endl;
  
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