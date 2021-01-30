#include <bits/stdc++.h>

using namespace std;

typedef long long lln;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(){

  lln n,k;
  cin>>n>>k;

  vector<lln> p(n);

  for(int i = 0;i<n;i++) cin>>p[i];

  lln l = 0;
  lln r = 1e14;

  while(l<r){
    lln mid = (l + r)/2;
    lln sum = p[0] + mid;
    bool ok = true;
    for(int i = 1;i<n;i++){
      lln x = sum*k/100;
      if(p[i]>x){
          ok=false; 
          break;
      }
      sum += p[i];

    }
    if(ok) r = mid;
    else l = mid+1;
  }
  cout<<l<<endl;
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
