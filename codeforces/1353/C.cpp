#include <bits/stdc++.h>

using namespace std;

typedef long long lln;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(){

  int n;
  cin>>n;

  lln res = 0;

  for(lln i = 1;i<=n/2;i++){
    res += (2*i + 1) * i;
    res += (2*i + 1) * i;

    res += (2*i + 1 - 2) * i;
    res += (2*i + 1 - 2) * i;
  }
  cout<<res<<endl;     
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



