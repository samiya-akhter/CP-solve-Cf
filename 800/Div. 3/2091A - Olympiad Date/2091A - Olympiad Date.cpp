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
  int count=8;

  int ans=0;

  string s="01032025";

  vector<int>v(n);

  for(auto &a:v) cin>>a;

  for(int i=0;i<n;i++){
    if(count){
  auto pos=s.find(v[i] + '0');
  if (pos != string::npos) {
    s.erase(pos, 1);
    count--;
    }
    ans++;
  }
  else break;
}

  cout<<((count)?0:ans)<<endl;



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