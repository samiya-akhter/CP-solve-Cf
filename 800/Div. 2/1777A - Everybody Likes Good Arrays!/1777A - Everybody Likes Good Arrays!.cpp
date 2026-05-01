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
  
  vector<int>v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];

    
  }

  int count=0;

  for(int i=0;i<n-1;i++){
    if(v[i]%2==0&&v[i+1]%2==0){
      count++;
    }
    else if(v[i]%2!=0&&v[i+1]%2!=0){
      count++;
    }
  }

  cout<<count<<endl;

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