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
  vector <int> div6;
  vector <int> div2;
  vector <int> div3;
  vector <int> a;
  int x;


  for(int i=0;i<n;i++){
    cin>>x;
    if(x%6==0) div6.push_back(x);
    else if(x%3==0) div3.push_back(x);
    else if(x%2==0) div2.push_back(x);
    else a.push_back(x);

  }

  for(auto y:div6) cout<<y<<" ";
  for(auto y:div3) cout<<y<<" ";
  for(auto y:a) cout<<y<<" ";
  for(auto y:div2) cout<<y<<" ";
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