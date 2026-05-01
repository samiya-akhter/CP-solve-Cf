#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl "\n"

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend() // For sorting in descending order 

const int INF = 1e18; // Large value for "infinity" 

int digitSum(int a){
  int sum=0;
  while(a!=0){
    sum+=a%10;
    a/=10;
  }

  return sum;



}

void solve() {


  int n;
  cin>>n;
  
  int x=n/1000;
  int y=n%1000;

  if(digitSum(x)==digitSum(y)){
    cout<<"YES"<<endl;

  }

  else cout<<"NO"<<endl;

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