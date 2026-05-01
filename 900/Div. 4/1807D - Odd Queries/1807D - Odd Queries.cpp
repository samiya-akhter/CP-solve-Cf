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

  int n,q;
  cin>>n>>q;
  vector<int> v(n);

  for(auto &a:v) cin>>a;

  vector <int> sum(n);
  sum[0]=v[0];
  for(int i=1;i<n;i++){
    sum[i]=sum[i-1]+v[i];
  }

  while(q--){
    int l,r,k;
    cin>>l>>r>>k;
    l--;
    r--;

    int res=(r-l+1)*k;
    int old_odd=

    res+=sum[n-1]-sum[r]+(l>0?sum[l-1]:0);
    cout<<((res&1)?"YES":"NO")<<endl;

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