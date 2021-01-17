#include <bits/stdc++.h>

using namespace std;

#define lln long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int maxN = 2e6 + 5;
const int MOD = 1e9 + 7;
vector<lln> v(2e6+5);

void ok(){
	v[1] = 0;
	v[2] = 0;
	v[3] = 4;
	for(int i = 4;i<maxN;i++){
		lln ans = v[i-1] + 2LL * (v[i-2]) + (i%3==0) * 4;
		ans %= MOD;
		v[i] = ans;
	}
	return;
}

void solve(){
	int n;
	cin>>n;
	cout<<v[n]%MOD<<endl;
}

int main(){
    fast

    int t;
    cin>>t;

    ok();

    while(t--) {
    	solve();
    }

	return 0;
}