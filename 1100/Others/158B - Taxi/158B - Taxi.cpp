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
  map <int,int> v;
 
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;

        v[a]++;
    }
  int count=v[4];

  if(v[3]){
    count+=v[3];
    if(v[3]>=v[1]){
      v[1]=0;
   }

    else{  
      v[1]-=v[3];   
    }
  }

  if(v[2]){
    if(!(v[2]&1)) count+=v[2]/2;

    else{
      count+=v[2]/2;
      if(v[1]<3){
      v[1]=0;
      count++;
      }
      else{
        count++;
        v[1]-=2;
      }

    }
  }

  if(v[1]){
    count+=v[1]/4;

    if(v[1]%4) count++;
  }
  cout<<count;


}

int32_t main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  //cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}