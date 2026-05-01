#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl "\n"

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend() // For sorting in descending order 

const int INF = 1e18; // Large value for "infinity" 

//prime number

bool isPrime(int n) {
    if (n <= 1) return false;

    for (int i = 2; i*i <=n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

void solve() {
  int n;
  cin>>n;
  
  vector<int> p;
  int i=2;
   while (p.size() < n) {
        if (isPrime(i)) {
            p.push_back(i);
        }
        i++;
    }

  vector<int> ans(n);
  ans[0]=p[0];
  

  for(int i=1;i<n;i++){
    ans[i]=p[i]*p[i-1];
  }

  for(auto a:ans){
    cout<<a<<" ";
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