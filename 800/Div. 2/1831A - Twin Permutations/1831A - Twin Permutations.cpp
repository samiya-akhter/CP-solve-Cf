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
 
 vector<int> v(n);
for (auto &x : v) cin >> x;

vector<int>a(n);

for(int i=0;i<n;i++){

  a[i]=n+1-v[i];
  

}

 /* sort(all(v));

  =v;

  
  //int flag=0;
 

 do{int temp=a[0]+v[0];
  bool ok = true;
   
    for(int i=1;i<n;i++){
    if(temp<=(a[i]+v[i])){
      temp=(a[i]+v[i]);
      
    }
    else {
       ok = false;
      
    break;
    
    }
    }
    
  
  if (ok) break;


  }while(next_permutation(all(a)));
*/
  for(int c:a){
    cout<<c<<" ";
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