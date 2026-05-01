#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl "\n"

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend() // For sorting in descending order 

const int INF = 1e18; // Large value for "infinity" 

void solve() {

vector<int> v(4);

for(int i=0;i<4;i++){
  cin>>v[i];
}
sort(all(v));
auto it=max_element(all(v));

vector <int> arr(3);
arr[0]=*it-v[2];
arr[1]=v[1]-arr[0];
arr[2]=v[0]-arr[0];

sort(all(arr));

for(int x:arr){
  cout<<x<<" ";
}






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