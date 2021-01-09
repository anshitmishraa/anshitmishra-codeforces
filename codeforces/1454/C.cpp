#include <bits/stdc++.h>

using namespace std;

#define endl ("\n")
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(){
	int n;
	cin>>n;
	
	map<int, vector<int>> mp;
	vector<int> a(n);

	for(int i = 0;i<n;i++){
	    int x;
	    cin>>x;
	    a[i]=x;
	    mp[x].push_back(i);
	} 

	if(n==1){
		cout<<0<<endl;
		return;
	}

	int len = 2e+5;

	for(auto i : mp){
		int ok=0;
		if((int)i.second.size()==1){
			if(!(i.second[0]) || i.second[0]==n-1)
				len=min(len,1);
			else 
				len=min(len,2);
			continue;
		}
		for(int j = 0;j<(int)i.second.size();j++){
			if(!j){
				if(i.second[j]>=1)
					ok++;
				continue;
			}
			if(j==(int)i.second.size()-1){
				if(i.second[j]<(n-1))
					ok++;
			}
			if(i.second[j]-i.second[j-1]>1)
				ok++;
		}
		len=min(len,ok);
	}
	cout<<len<<endl;
}

int main(){
    fast
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}