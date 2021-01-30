#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define ff first
#define ss second
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(){

	int n;
	cin>>n;

	int x = 1e6, y = 1e6;	
	
	vector<pair<int,int>> res;
	res.pb({x,y});
	res.pb({x+1,y});
	res.pb({x,y-1});
	res.pb({x+1,y-1});
	x++, y--;

	while(n--){
		res.pb({x+1,y});
		res.pb({x,y-1});
		res.pb({x+1,y-1});
		x++, y--;
	}
	cout<<res.size()<<endl;
	for(pair<int,int> p: res)
		cout<<p.ff<<" "<<p.ss<<endl;
}

int main(){
    fast

	solve();

	return 0;
}