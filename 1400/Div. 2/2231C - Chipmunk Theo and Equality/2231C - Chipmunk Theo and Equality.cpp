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
  vector<int>v(n);
  for (auto &a : v) cin >> a; 
  
  set <int> s;
  int x=v[0];
  s.insert(x);

  while(1){
    if(x&1) {
      x++;
      s.insert(x);
    }

    else {
      x/=2;
      s.insert(x);
    }

    if(x==1) break;
  }

 
  int min_opt=INF;

  for(auto a:s){
    bool ok=false;
    int y=a;
    int opt=0;
    for(auto m:v){
      int temp=m;

      while(1){
        if(temp==y){
          ok=false;
          break;
        }
        else if(temp==1){
          if(ok) break;
          ok=true;
        }

        if(temp&1){
          temp++;
          opt++;
      
        }

        else{
          temp/=2;
          opt++;
        }
       
      } 
        
      if(ok) break;
    }

    if(!ok) min_opt=min(min_opt,opt);
  }

  cout<<min_opt<<endl;




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