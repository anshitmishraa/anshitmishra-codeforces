#include <bits/stdc++.h>

using namespace std;

#define lln long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(){
	lln n,x;
	cin>>n>>x;

	vector<lln> v(n);

	for(lln i=0;i<n;i++) cin>>v[i];
	for(auto i:v){
      if(i==x) continue; 
      else cout<<i<<" ";
    }

}

int main(){
    fast

   	solve();

	return 0;
}
