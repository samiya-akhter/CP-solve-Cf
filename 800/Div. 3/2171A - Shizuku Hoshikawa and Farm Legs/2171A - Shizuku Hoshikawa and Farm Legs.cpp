#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl "\n"

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend() // For sorting in descending order 

const int INF = 1e18; // Large value for "infinity" 

bool isPrime(int n) {
    if (n <= 1) return false;

    for (int i = 2; i *i<= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

void solve() {

  int n;
  cin>>n;
  
  if(n&1){
     cout<<0<<endl;
     return;
    }
  
  
  int count =(n/4)+1;
  
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