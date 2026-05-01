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
  //bool ok=true;
  vector<int> v(n);
  for(auto &a:v) {
    cin>>a;
 
  }

 
if(n&1){ 
  cout<<4<<endl;
  cout<<1<<" "<<n-1<<endl;
  cout<<1<<" "<<n-1<<endl;
  cout<<n-1<<" "<<n<<endl;
  cout<<n-1<<" "<<n<<endl;
}

else
  {cout<<2<<endl;

  cout<<1<<" "<<n<<endl;
  cout<<1<<" "<<n<<endl;
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