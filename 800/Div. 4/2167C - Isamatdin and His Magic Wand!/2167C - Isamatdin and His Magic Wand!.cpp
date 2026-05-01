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
  vector <int>arr(n);
  int even=0;
  int odd=0;
  for(int i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]%2) odd++;
    else even++;
  }

  if(even!=0 &&odd!=0) {
    sort(all(arr));
    
  }
  for(int a:arr){
      cout<<a<<" ";
    }
  

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