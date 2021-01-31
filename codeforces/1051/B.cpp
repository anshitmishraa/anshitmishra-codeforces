#include <bits/stdc++.h>

using namespace std;

#define endl ("\n")
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define lln long long int

void solve(){
	lln l,r;
	cin>>l>>r;

	cout<<"YES"<<endl;

	for(lln i = l;i<r+1;i+=2) cout<<i<<' '<<i+1<<endl;
}


int main(){
    fast
	
	solve();

	return 0;
}