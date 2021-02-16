#include <bits/stdc++.h>

using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(){
  int n,k;
  cin>>n>>k;

  k--;

  if(!(n&1)){
    int ans = k%n;
    cout<<ans+1<<endl;
  } else {
    int mid = (n/2);
    int ans = ((k/mid)+k)%n;
    cout<<ans+1<<endl;
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