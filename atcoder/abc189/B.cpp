#include <bits/stdc++.h>

using namespace std;

#define lln long long int

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(){
	int n;
	cin>>n;
	lln x;
	cin>>x;
    x*=100;
	
	lln total = 0;

	int count = 1;

	for(int i = 0;i<n;i++){
		int v,p;
		cin>>v>>p;

		total += (v*p);
		if(total>x){
			cout<<count<<endl;
			return;
		} 
		count++;
	}
	cout<<-1<<endl;

	return;
}

int main(){
    fast

	solve();

	return 0;
}