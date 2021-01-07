#include <bits/stdc++.h>

using namespace std;

#define lln long long int

#define endl ("\n")
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

#define rep(i, a, b) for (int i = a; i < b; i++)

int main(){
    fast
	int t;
	cin>>t;
	while(t--){
		lln n,m;
		cin>>n>>m;

		vector<lln> k(n),c(m);

		rep(i,0,n) cin>>k[i];
		rep(i,0,m) cin>>c[i];

		sort(k.begin(), k.end(), greater<>());

		lln total = 0, j = 0;

		rep(i,0,n){
			if(j<m) if(c[j]<c[k[i]-1]) total+=c[j],j++; else total += c[k[i]-1];
			else total += c[k[i]-1];
		}
		
		cout<<total<<endl;
	}
	return 0;
}