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
  int arr1[n];
  int arr2[n];
  int m=0,c=0;
  for(int i=0;i<n;i++){
    cin>>arr1[i]>>arr2[i];
    if(arr1[i]>arr2[i]) m++;
    else if(arr1[i]<arr2[i]) c++;


  }

  if(m>c)cout<<"Mishka";
  else if(m<c)cout<<"Chris";
  else cout<<"Friendship is magic!^^";
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