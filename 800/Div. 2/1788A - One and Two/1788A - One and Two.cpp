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
  vector<int>v(n);
  int count=0,b=0;

  for(int i=0;i<n;i++){
    cin>>v[i];
    if(v[i]==2) count++;

  }
  if(count%2!=0){
    cout<<-1<<endl;
    return;
  }
  else if(!count) {cout<<1<<endl;
    return;}
  
int index;
for(int i=0;b<count/2;i++){
  if(v[i]==2){
    b++;
    index=i;
  }

  
}
cout<<index+1<<endl;
 


  

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