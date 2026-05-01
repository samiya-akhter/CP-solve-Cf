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
  int count=0;
  int max=0;
  vector<int>s;
  

  for(int i=0; i<n;i++){

    cin>>v[i];
  }
  for(int i=0; i<n;i++){
    if(v[i]==0){
      count++;

    }
    if(v[i]==1){
      
      s.push_back(count);
      count=0;

    }

    
  }
  s.push_back(count);


 auto it=max_element(all(s));
    cout<<*it<<endl;


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