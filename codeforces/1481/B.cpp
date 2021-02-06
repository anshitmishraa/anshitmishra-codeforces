#include <bits/stdc++.h>

using namespace std;

#define endl ("\n")
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(){
	int n,k;
	cin>>n>>k;
	
	vector<int> h(n);

	for(int i = 0;i<n;i++) cin>>h[i];

	int maxi = *max_element(h.begin(),h.end());

	int left = 0;

	for(int i = 0;i<n;i++) left += (maxi-h[i]);

	if(k>left){
		cout<<-1<<endl;
		return;
	}	

	int ans = -1;
	for(int i = 0;i<k;i++){
		bool fill = 0;
		for(int j = 0;j<n-1;j++){
			if(h[j]<h[j+1]){
				ans = j + 1;
				h[j]++;
				fill=1;
				break;
			}
		}
		if(!fill) ans = -1;
	}
	cout<<ans<<endl;
} 


int main(){
    fast

    int t;
    cin>>t;

    while(t--)
    	solve();

	return 0;
}