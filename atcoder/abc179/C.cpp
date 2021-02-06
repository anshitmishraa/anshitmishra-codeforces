#include <bits/stdc++.h>

using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(){
	int n;
	cin>>n;

	int total = 0;

	for(int i = 1;i<n;i++){
		for(int j = 1;i*j<n;j++)
			total++;
	}
	cout<<total<<endl;
}

int main(){
    fast

   	solve();

	return 0;
}
