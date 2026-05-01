#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl "\n"

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend() // For sorting in descending order 

const int INF = 1e18; // Large value for "infinity" 

void solve() {


  int n;
  cin>>n;

  string s;
  cin>>s;
  int freq[n]={0};
  int i=0;

 while(n--){
  if(s[i]=='R'){
    freq[i]++;
    i++;
  }
  if(s[i]=='L'){
    freq[i]++;
    i--;
  }
 }
int count=0;
 for(int x:freq){
  if(x>0){
    count++;

  }

 }
 cout<<count<<endl;
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