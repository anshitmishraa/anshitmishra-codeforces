#include <bits/stdc++.h>

using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(){
	int v,t,s,d;
	cin>>v>>t>>s>>d;

	if(d<=v*s && d>= v*t) cout<<"No";
	else cout<<"Yes";
}

int main(){
    fast

   	solve();

	return 0;
}
