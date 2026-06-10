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
  int n,x;
  cin>>n>>x;
  vector <int> v(n);
  for(auto &a:v){
    cin>>a;
  }

  auto first_one=find(all(v),1);
  auto last_one=find(rall(v),1);

 int pos1 = first_one - v.begin();
  int pos2 = n - 1 - (last_one - v.rbegin());

if (pos2 - pos1+1<=x)cout<<yes<<endl;

else
  cout<<no<<endl;

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