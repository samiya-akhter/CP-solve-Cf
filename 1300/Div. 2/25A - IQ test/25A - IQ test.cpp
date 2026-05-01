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
  int arr[n];
  int indexEven,indexOdd,even=0,odd=0;
  for(int i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]&1) {
      indexOdd=i;
      odd++;
    }

    else{
      indexEven=i;
      even++;

    }


  }

  if(even==1) cout<<indexEven+1;
  else cout<<indexOdd+1;
  


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