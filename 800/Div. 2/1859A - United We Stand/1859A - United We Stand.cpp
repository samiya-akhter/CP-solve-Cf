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
  vector<int> v(n);
  for(int i=0;i<n;i++){
    cin>>v.at(i);   
  }
  
  vector<int> a;
  vector<int> b;
  int max= *max_element(all(v));
  
  for(int x:v){
    if(max==x){
      b.push_back(x);
    }
    else a.push_back(x);
  }

  if(a.empty()){
    cout<<"-1"<<endl;
    return;
  }
  cout<<a.size()<<" "<<b.size()<<endl;
  for(int x: a){
    cout<<x<<" ";
  }
  cout<<endl;
  for(int x: b){
    cout<<x<<" ";
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