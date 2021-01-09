#include <bits/stdc++.h>

using namespace std;

#define endl ("\n")
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main(){
    fast
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;

		vector<string> s(n);
		for(int i = 0;i<n;i++)
		    cin>>s[i];

		vector<vector<int>> dp(n+1, vector<int>(m+1));

		for(int i = 0;i<n;i++)
			for(int j = 0;j<m;j++)
				if(s[i][j]=='*')
					dp[i][j]=1;

		for(int i = n-1;i>=0;i--)
			for(int j = m-2;j>=1;j--)
				if(dp[i][j]==1)
					dp[i][j]=1+min({dp[i+1][j-1],dp[i+1][j],dp[i+1][j+1]});

		int answer = 0;

		for(int i = 0;i<n;i++)
			for(int j = 0;j<m;j++)
				answer+=dp[i][j];
			
		cout<<answer<<endl;

	}
	return 0;
}