#include <bits/stdc++.h>

using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(){
	char c1,c2,c3;
	cin>>c1>>c2>>c3;

	if((c1==c2) && (c2==c3) && (c1==c3)){
		cout<<"Won"<<endl;
		return;
	} else {
		cout<<"Lost"<<endl;
		return;
	}
	return;
}

int main(){
    fast

	solve();

	return 0;
}