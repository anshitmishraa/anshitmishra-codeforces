#include <bits/stdc++.h>

using namespace std;

typedef long long lln;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

lln n,k,z;
lln dp[100002][6];

lln ok(vector<lln>& a, int i, int kk, int zz){
  if(i<0 || i>=n || kk==0)
    return 0;
  if(dp[i][zz]!=-1)
    return dp[i][zz];
  lln val = 0;
  if(i<n)
    val = max(val, a[i] + ok(a,i+1,kk-1,zz));
  if(i>=0 && zz>0)
    val = max(val, a[i] + ok(a,i-1,kk-1,zz-1));
  return dp[i][zz]=val;
}

void solve(){
  cin>>n>>k>>z;

  vector<lln> a(n);
  
  for(int i = 0;i<n;i++)
    cin>>a[i];

  memset(dp,-1,sizeof(dp));

  lln x = ok(a,1,k,z) + a[0];
  cout<<x<<endl;
  
  return;
}

int main(){
  fast

  int t;
  cin>>t;

  while(t--){
    solve();
  }
    
  return 0;
}