#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl "\n"

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend() // For sorting in descending order 

const int INF = 1e18; // Large value for "infinity" 

bool hasDuplicate(vector<int>& v) {
    set<int> s;
    for (int x : v) {
        if (s.count(x)) return true; // already exists
        s.insert(x);
    }
    return false;
}

void solve() {
  int p;
  cin >>p;
  vector<int>v(p);
  for(auto &a:v) cin>>a;
  

  if(hasDuplicate(v)){
    cout<<-1<<endl;
    return;
  }
  
  sort(rall(v));
  

  for(auto a:v) cout<<a<<" ";

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