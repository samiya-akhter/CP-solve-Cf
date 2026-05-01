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
  int x,sum=0;

  for(int i=0;i<n;i++){
    cin>>x;
    sum=sum^x;
  }

  if(n%2==1){
    cout<<sum<<endl;
  }
  else {
    if(sum==0)cout<<sum<<endl;
    else cout<<-1<<endl;
  }

    

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