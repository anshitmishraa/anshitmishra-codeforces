#include <bits/stdc++.h>

using namespace std;

typedef long long lln;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(){

	int n;
	cin>>n;

	vector<int> ans;

	int k = 2;

	lln evenTotal = 0;
	lln oddTotal = 0;

	for(int i = 0;i<n/2;i++){
		ans.push_back(k);
		evenTotal += k;
		k+=2;
	}
	k = 1;
	for(int i = n/2; i<n-1;i++){
		ans.push_back(k);
		oddTotal += k;
		k+=2;
	} 
	if(evenTotal-oddTotal&1){
		cout<<"YES"<<endl;
		ans.push_back(evenTotal-oddTotal);
		for(auto i: ans) cout<<i<<" ";
		cout<<endl;
		return;
	} else {
		cout<<"NO"<<endl;
		return;
	}
}

int main(){
    fast

    int t;
    cin>>t;

    while(t--) {
    	solve();
    }

	return 0;
}