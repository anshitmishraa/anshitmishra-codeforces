#include <bits/stdc++.h>

using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(){

	int n, m, x, y;
	cin>>n>>m>>x>>y;
	cout<<x<<" "<<y<<endl;

	for(int i=1;i<=n;i++){
		if(i!=x)
			cout<<i<<" "<<y<<endl;
	}

	int dir = 0;

	for(int i=1;i<=m;i++){
		if(i==y)
			continue;
		if(!dir){
			cout<<n<<" "<<i<<endl;
			for(int j=n-1;j>=1;j--)
				cout<<j<<" "<<i<<endl;
			dir = 1;
		}
		else {
			cout<<1<<" "<<i<<endl;
			for(int j=2;j<=n;j++)
				cout<<j<<" "<<i<<endl;
			dir = 0;
		}
	}
	
}

int main(){
    fast

	solve();

	return 0;
}