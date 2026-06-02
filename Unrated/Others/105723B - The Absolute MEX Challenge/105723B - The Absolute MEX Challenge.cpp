#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl "\n"
#define no "NO"
#define yes "YES"

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend() // For sorting in descending order 

const int INF = 1e18; // Large value for "infinity" 

int gcd(int a, int b){ return b ? gcd(b, a % b) : a; }
int lcm(int a, int b){ return a / gcd(a,b) * b; }

bool isPrime(int n){for(int i=2;i*i<=n;i++) if(n%i==0) return 0; return n>1;}

vector < int > get_divisors(int n) {
    vector < int > res;
    for (int i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            res.push_back(i);
            if (i * i != n) res.push_back(n / i);
        }
    }
    sort(all(res));
    return res;
}

void solve() {
  int n;
  cin>>n;
  vector<int>v;
  if(n<4){
    if(n==1) cout<<1<<endl;
    if(n==2) cout<<1<<" "<<2<<endl;
    if(n==3) cout<<1<<" "<<3<<" "<<2<<endl; 
  }
  else{
    v.push_back((n+1)/2);

  
  for(int i=n-1;i>0;i--){
   if(i==(n+1)/2) continue;
    v.push_back(i);
  }

  for(auto a:v)cout<<a<<" ";

  cout<<n<<endl;
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