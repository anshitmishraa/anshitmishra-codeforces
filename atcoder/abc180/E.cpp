#include <bits/stdc++.h>

using namespace std;

typedef long long lln;
typedef unsigned long long ulln;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n;
lln dp[20][1<<18];
lln a[20][3];

lln d(int i, int j){
	return abs(a[j][0] - a[i][0]) + abs(a[j][1]-a[i][1]) + max(0LL, a[j][2]-a[i][2]);
}

lln ok(int i, int mask){
	if(dp[i][mask]!=-1)
		return dp[i][mask];
	if(!mask) return d(i,0);
	lln ans = 1e18;
	for(int j = 0;j<n;j++)
		if(mask&(1<<j))
			ans = min(ans,d(i,j)+ok(j,mask^(1<<j)));

	return dp[i][mask]=ans;
}

void solve(){

	memset(dp,-1,sizeof(dp));
	cin>>n;

	for(int i = 0;i<n;i++)
		cin>>a[i][0]>>a[i][1]>>a[i][2];
	cout<<ok(0,(1<<n)-2)<<endl;
}

int main(){
    fast

	solve();
    
	return 0;
}