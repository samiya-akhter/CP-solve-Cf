#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl "\n"

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend() // For sorting in descending order 

const int INF = 1e18; // Large value for "infinity" 

void solve() {


  int n,a,b;
  cin>>n>>a>>b;
  int sum=0;
  if(a*2>b){
  if(n&1){
    sum+=((n-1)/2)*b;
    sum+=a;

  }
  else {
    sum+=(n/2)*b;

  }
}

else sum=n*a;

  cout<<sum<<endl;
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