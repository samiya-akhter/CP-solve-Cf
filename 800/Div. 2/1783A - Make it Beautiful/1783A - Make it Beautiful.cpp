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
  vector<int>x(n);
  for(int i=0;i<n;i++){
    cin>>x[i];
  }
  auto min=min_element(all(x));
  auto max=max_element(all(x));

  

  if(*max==*min){
    cout<<"NO"<<endl;
    return;
  }
  else{

    swap(*min,*max);
    cout<<"YES"<<endl;
    for(auto a:x){
      cout<<a<<" ";
    }
    cout<<endl;
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