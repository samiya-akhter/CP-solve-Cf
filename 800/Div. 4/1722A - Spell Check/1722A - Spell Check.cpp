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
  string s;
  cin>>s;
  if(n!=5){
    cout<<"NO"<<endl;
    return;
  }

  string t="Timur";
  sort(all(s));
  sort(all(t));

  

  if(t==s){
    cout<<"YES"<<endl;
  }
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