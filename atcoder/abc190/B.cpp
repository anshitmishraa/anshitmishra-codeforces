#include <bits/stdc++.h>

using namespace std;

#define lln long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(){

	lln n,s,d;
	cin>>n>>s>>d;

	for(int i = 0;i<n;i++){
		lln x, y;
		cin>>x>>y;

		if(x<s && y>d){
			cout<<"Yes";
			return;
		}
	}

	cout<<"No";
	return;
}

int main(){
    fast

   	solve();

	return 0;
}
