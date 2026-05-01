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
  vector <int> v(n);
  int even=0,odd=0;
  int x;

  for(int i=0;i<n;i++){
    cin>>x;
    if(x%2==0){
      even++;
    }
    else odd++;

    v.push_back(x);


    
  }

if(odd%2==0){
      cout<<"YES"<<endl;
    }
    else
    cout<<"NO"<<endl;
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