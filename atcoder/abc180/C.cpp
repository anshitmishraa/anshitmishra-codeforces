#include <bits/stdc++.h>

using namespace std;

typedef long long lln;
typedef unsigned long long ulln;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(){

	lln n;
	cin>>n;
  
  	set<long> ans;

	for(lln i = 1;i*i<=n;i++){
		if(!(n%i)){
          ans.insert(i);
          ans.insert(n/i);
        }
    }
  	for(auto i:ans) cout<<i<<endl;
}

int main(){
    fast

	solve();
    
	return 0;
}