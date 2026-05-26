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
  
  int count=0;
  

  string s=to_string(n);

  vector <string> a={"00","25","75","50"};

  int first=0;
  int second=0;

  vector<int> ans(4);

  for(int i=0; i<4;i++){
    int j;
    for(j=s.size()-1;j>=0; j--){
      if(s[j]==a[i][1]){
        second=j;
        break;
      } 

    }

    int k;
    for(k=j-1;k>=0;k--){
      if(s[k]==a[i][0]){
        first = k;
        break;
      }
    }

    ans[i]= s.size()-j-1+j-k-1;

  }
  cout<<*min_element(all(ans))<<endl;
  //cout<<s<<endl;

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