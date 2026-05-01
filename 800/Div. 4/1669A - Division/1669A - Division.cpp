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
  int x=0;

  if(1900<=n){
    x=1;
  }
  if(1600<=n&&n<=1899){
      x=2;
      

  }
  if( 1400<=n&&n<=1599){
        x=3;
        

      }
  if(n<=1399){
          x=4;
        }

  cout<<"Division "<<x<<endl;
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