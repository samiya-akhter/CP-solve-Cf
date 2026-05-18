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

void solve() {

  int n;
  cin>>n;

  string s="meow";

  string a;
  cin>>a;

    for(char &c : a) {
        c = tolower(c);
    }

    string x = "";
    x += a[0];

    // remove consecutive duplicates
    for(int i = 1; i < n; i++) {
        if(a[i] != a[i - 1]) {
            x += a[i];
        }
    }

    cout << ((x == s) ? yes : no) << endl;
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