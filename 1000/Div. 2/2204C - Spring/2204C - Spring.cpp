#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl "\n"

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend() // For sorting in descending order 

const int INF = 1e18; // Large value for "infinity" 

void solve() {

  int a,b,c,m;
  cin>>a>>b>>c>>m;
  int A=0,B=0,C=0;

  int all=m/(lcm(a,lcm(b,c)));
  int p=m/(lcm(a,b));
  int q=m/(lcm(b,c));
  int r=m/(lcm(a,c));
  int a1=m/a;
  int b1=m/b;
  int c1=m/c;
  A=all*2+(p-all)*3+(r-all)*3+(a1-p-r+all)*6;
  B=all*2+(p-all)*3+(q-all)*3+(b1-p-q+all)*6;
  C=all*2+(q-all)*3+(r-all)*3+(c1-q-r+all)*6;



  cout<<A<<" "<<B<<" "<<C<<endl;

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