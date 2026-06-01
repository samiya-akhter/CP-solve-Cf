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

bool positive(int x){
    return x > 0;
}

void solve() {
  int n;
  cin>>n;

  vector <int> v(n);

  for(auto &a:v) cin>>a;

  vector <int> m;

  int count=0;

  
  for(int i = n - 1; i >= 0; i--) {

    if(!(count&1)){
      if(v[i] > 0) {
         m.push_back(i + 1);
         count++;
      }
    }

    else{
      if(v[i] < 0) {
         m.push_back(i + 1);
         count++;
      }
    }
  }

  
  cout<<m.size()<<endl;

  for(auto a:m){
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