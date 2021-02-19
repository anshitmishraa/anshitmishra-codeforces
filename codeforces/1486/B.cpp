#include <bits/stdc++.h>

using namespace std;

typedef long long lln;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(){
  int n;
  cin>>n;

  vector<lln> x(n);
  vector<lln> y(n);

  for(int i = 0;i<n;i++) cin>>x[i],cin>>y[i];

  sort(x.begin(),x.end());
  sort(y.begin(),y.end());

  if(n&1) cout<<1<<endl;
  else {
    lln ans = (x[n/2]-x[n/2-1] + 1) * (y[n/2]-y[n/2-1] + 1);
    cout<<ans<<endl;
  }
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