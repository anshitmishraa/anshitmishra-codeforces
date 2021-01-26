#include <bits/stdc++.h>

using namespace std;

#define ulln unsigned long long

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(){
	ulln n;
	cin>>n;

	for(ulln i = 1;i<=60;i++){
		if((1LL<<i)==n){
			cout<<"NO"<<endl;
			return;
		}
	}
	cout<<"YES"<<endl;
	return;
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
