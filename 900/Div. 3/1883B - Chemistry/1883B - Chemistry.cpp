#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl "\n"

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend() // For sorting in descending order 

const int INF = 1e18; // Large value for "infinity" 

void solve() {

  int n,k;
  cin>>n>>k;
  string s;
  cin>>s;
  map<char,int> freq;

    for(char c : s){
        freq[c]++;
    }

  int odd=0,even=0;

  for(auto a:freq){
    if(a.second & 1) odd++;
    else even++;
  }

  if(odd-1<=k) cout<<"YES"<<endl;
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