#include <bits/stdc++.h>

using namespace std;

#define lln long long int

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(){
	lln n;
	cin>>n;

	for(lln i = 0;i<=1000;i++){
		lln other = n - (2020*i);
		if(other<0) break;
		if(!(other%2021)){
			cout<<"YES"<<endl;
			return;
		}
	}
	cout<<"NO"<<endl;
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

