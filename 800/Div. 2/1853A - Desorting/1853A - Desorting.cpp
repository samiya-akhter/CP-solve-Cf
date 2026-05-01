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
  
  int index=0;

  for(int i=0;i<n;i++){
    cin>>v[i];

  }
  int a;
  

  if(is_sorted(all(v))){
    int min=v[1]-v[0];
    for(int i=1;i<n-1;i++){
      if(min>v[i+1]-v[i]){
        min= v[i+1]-v[i];
      }
    }

    
      a=(min/2)+1;


  cout<<a<<endl;



  }

  else 
  cout <<0<<endl;



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