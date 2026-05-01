#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl "\n"

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend() // For sorting in descending order 

const int INF = 1e18; // Large value for "infinity" 

void solve() {

  int n,k,x;
  cin>>n>>k>>x;
  int count=0;

  if(x!=1){

    cout<<"YES"<<endl;
    cout<<n<<endl;

    for(int i=0;i<n;i++){
      cout<<1<<" ";
    }
  } 


  else{

    if(k==1||n==1){
      cout<<"NO"<<endl;
    }
 

    else if(n%2==0){
      int x=n/2;
      count=x;
      cout<<"YES\n";
      cout<<x<<endl;
      for(int i=0;i<x;i++)
        cout<<2<<" ";

    }

    else{

      if(k<3){
        cout<<"NO"<<endl;
      }
      else{
      n=n-3;
      if(n>=0){
        int x=n/2;
      count=x+1;
      cout<<"YES\n";
      cout<<count<<endl;
      for(int i=0;i<x;i++){
        cout<<2<<" ";
      }
            cout<<3<<endl;
          }
    }
  }
      
    
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