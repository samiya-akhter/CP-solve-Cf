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
  char arr[n][n];
  int x1,y1,x2,y2;
  bool flag=0;

  for (int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin>>arr[i][j];
      if(arr[i][j]=='*'){
        if(!flag){
        x1=i;
        y1=j;
        flag=1;
        }

        else {
          x2=i;
          y2=j;
        }
      }

    }
  }

  if(x1==x2){
    if(x1!=n-1){
    arr[x1+1][y1]='*';
    arr[x2+1][y2]='*';
    }
    else{
    arr[x1-1][y1]='*';
    arr[x2-1][y2]='*';

    }
  }

  if(y1==y2){
    if(y1!=n-1){
    arr[x1][y1+1]='*';
    arr[x2][y2+1]='*';
    }

    else{
    arr[x1][y1-1]='*';
    arr[x2][y2-1]='*';

    }
  }

  if(x1!=x2&&y1!=y2){
    arr[x1][y2]='*';
    arr[x2][y1]='*';
  }


  for (int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cout<<arr[i][j];
      
    }

    cout<<endl;
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