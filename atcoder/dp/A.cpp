#include <bits/stdc++.h>

using namespace std;

#define lln long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(){
	int n;
	cin>>n;

	vector<int> h(n);
	int dp[1000000];

	int mod = 1e9;

	for(int i=0;i<n;i++) cin>>h[i];
	for(int i=0;i<=n;i++) dp[i] = mod;
	dp[0] = 0;
	
	for(int i = 0;i<n;i++){
		if(i+1<n) dp[i+1] = min(dp[i+1], dp[i] + abs(h[i]-h[i+1]));
		if(i+2<n) dp[i+2] = min(dp[i+2], dp[i] + abs(h[i]-h[i+2]));
	}
	cout<<dp[n-1]<<endl;

}

int main(){
    fast

   	solve();

	return 0;
}
