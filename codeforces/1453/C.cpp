#include <bits/stdc++.h>

using namespace std;

#define endl ("\n")
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main(){
    fast
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;

		vector<string> s(n);
		for(int i = 0;i<n;i++)
		    cin>>s[i];

		vector<int> ans(10,0);
		vector<int> minir(10,n);
		vector<int> minic(10,n);
		vector<int> maxir(10,-1);
		vector<int> maxic(10,-1);

		for(int i = 0;i<n;i++){
			for(int j = 0;j<n;j++){
				int num = s[i][j] - '0';
				minir[num] = min(minir[num],i);
				minic[num] = min(minic[num],j);
				maxir[num] = max(maxir[num],i);
				maxic[num] = max(maxic[num],j);
			}
		}
				
		for(int i = 0;i<n;i++){
			for(int j = 0;j<n;j++){
				int num = (int)s[i][j] - '0';
				ans[num] = max(ans[num], max(maxir[num]-i,i-minir[num])*max(n-j-1,j));
				ans[num] = max(ans[num], max(maxic[num]-j,j-minic[num])*max(n-i-1,i));
			}
		}
				
		for(auto i:ans)
			cout<<i<<" ";
			
		cout<<endl;

	}
	return 0;
}