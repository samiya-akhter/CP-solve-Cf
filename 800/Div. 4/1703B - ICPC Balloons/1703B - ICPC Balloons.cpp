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
  string s;
  cin>>s;
  
  sort(all(s));
  int count=2;    
  for(int i=1;i< s.size();i++){
    if(s[i]!=s[i-1]){
      count+=2;
      
    }

    else{
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