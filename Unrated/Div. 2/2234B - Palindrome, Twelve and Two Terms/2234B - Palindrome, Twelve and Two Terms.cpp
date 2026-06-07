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

bool isPalindrome(int n){
    int r=0,t=n; while(t) r=r*10+t%10, t/=10; return r==n;
}

void solve() {

  int n;
  cin>>n;
  int a,b;

  if(n<10 || isPalindrome(n)){
    cout<<n<<" "<<0<<endl;
    return;
  }

  if(n%12==0){
    cout<<0<<" "<<n<<endl;
    return;
  }


    for(int i = (n/12)*12; i >= 12; i -= 12){
    
        if(isPalindrome(n-i)){
            cout << n-i << " " << i << endl;
            return;
        }
    }

  cout<<-1<<endl;
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