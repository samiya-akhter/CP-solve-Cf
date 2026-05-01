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
  int temp1=0,temp2=0,temp3=0;

  for(int i=0;i<n;i++){
    int x,y,z;
    cin>>x>>y>>z;

    temp1+=x;
    temp2+=y;
    temp3+=z;
  }


  if(temp1==0&&temp2==0&&temp3==0){
    cout<<"YES";

  }
  else cout<<"NO";
  
}

int32_t main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  //cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}