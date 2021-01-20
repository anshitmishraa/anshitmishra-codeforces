#include <bits/stdc++.h>

using namespace std;

typedef long long lln;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(){

  int n;
  cin>>n;

  for(int k = 2;k<=1e8; k++){
  	int p = pow(2,k);
  	--p;
  	if(!(n%p)){
  		cout<<n/p<<endl;
  		break;
  	}
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