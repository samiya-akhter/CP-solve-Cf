#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl "\n"
#define no "No"
#define yes "Yes"

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend() // For sorting in descending order 

const int INF = 1e18; // Large value for "infinity" 

int gcd(int a, int b){ return b ? gcd(b, a % b) : a; }
int lcm(int a, int b){ return a / gcd(a,b) * b; }

bool isPrime(int n){for(int i=2;i*i<=n;i++) if(n%i==0) return 0; return n>1;}

void solve() {

  int n;
  cin>>n;
  vector <int>a(n);
  vector<int> b(n);

  for(auto &m:a) cin>>m;
  for(auto &m:b) cin>>m;
  int sum=0;

  for(int i=0;i<n;i++){
    if(b[i]>a[i]) {
      swap(b[i],a[i]);
    }
    sum+=a[i];
  }

  sort(all(b));

  sum+=b[n-1];

  cout<<sum<<endl;

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