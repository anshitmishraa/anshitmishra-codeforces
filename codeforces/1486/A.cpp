#include <bits/stdc++.h>

using namespace std;

typedef long long lln;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(){
  int n;
  cin>>n;

  vector<lln> h(n);

  for(int i = 0;i<n;i++) cin>>h[i];

  lln extra = 0;

  for(lln i = 0;i<n;i++){
    if(h[i]>=i) extra +=(h[i]-i);
    else if(h[i]+extra>=i) extra -=(i-h[i]);
    else{
        cout<<"NO"<<endl;
        return;
    }
  }
  cout<<"YES"<<endl;
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