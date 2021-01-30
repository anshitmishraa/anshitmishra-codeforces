#include <bits/stdc++.h>

using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(){
	int a,b,c;
	cin>>a>>b>>c;

	if(c){
		if(a>b) cout<<"Takahashi"<<endl;
		else if(a==b) cout<<"Takahashi"<<endl;
		else cout<<"Aoki"<<endl;
	} else{
		if(b>a) cout<<"Aoki"<<endl;
		else if(a==b) cout<<"Aoki"<<endl;
		else cout<<"Takahashi"<<endl;
	}
}

int main(){
    fast

	solve();

	return 0;
}