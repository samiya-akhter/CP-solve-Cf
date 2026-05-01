#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl "\n"

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend() // For sorting in descending order 

const int INF = 1e18; // Large value for "infinity" 

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int &x : a) cin >> x;

    int p;
    cin >> p;

    int left_count= 0;
    int right_count=0;

    for (int i = 0; i<p-1; i++) {
      if(a[i]!=a[i+1]) left_count++;
       
    }

    for (int i = p-1; i<n-1; i++) {
      if(a[i]!=a[i+1]) right_count++;
       
    }

    int m=max(left_count,right_count);




    cout<<(m&1?m+1:m)<<endl;



    
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