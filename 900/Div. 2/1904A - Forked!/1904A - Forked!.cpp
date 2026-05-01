#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl "\n"

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend() // For sorting in descending order 

const int INF = 1e18; // Large value for "infinity" 

void solve() {

  int a,b;
  cin>>a>>b;
  int k1,k2,q1,q2;
  cin>>k1>>k2>>q1>>q2;
  set<pair<int,int>> k;
  set<pair<int,int>> q;

  k.insert({k1+a,k2+b});
  k.insert({k1+b,k2+a});
  k.insert({k1-a,k2+b});
  k.insert({k1-b,k2+a});
  k.insert({k1-a,k2-b});
  k.insert({k1-b,k2-a});
  k.insert({k1+a,k2-b});
  k.insert({k1+b,k2-a});

  q.insert({q1+a,q2+b});
  q.insert({q1+b,q2+a});
  q.insert({q1-a,q2+b});
  q.insert({q1-b,q2+a});
  q.insert({q1-a,q2-b});
  q.insert({q1-b,q2-a});
  q.insert({q1+a,q2-b});
  q.insert({q1+b,q2-a});

  int count=0;
  for(auto p : q){
    if(k.find(p) != k.end())
        count++;
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