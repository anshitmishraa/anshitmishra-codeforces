#include <bits/stdc++.h>

using namespace std;

#define lln long long int

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(){
	int n;
	cin>>n;

	set<int> s;
	map<int,vector<int>> a;

	for(int i = 0;i<n;i++){
		int x;
		cin>>x;
		s.insert(x);
		a[x].push_back(i);
	}

	if((int)s.size()==1){
		cout<<"NO"<<endl;
		return;
	}

	cout<<"YES"<<endl;

	vector<vector<int>> other;
	for(auto i:a)
		other.push_back(i.second);

	for(int i = 1;i<(int)other.size();i++)
		for(auto j:other[i])
			cout<<other[0][0] + 1<<" "<<j+1<<endl;
	
	for(int i = 1;i<(int)other[0].size();i++)
		cout<<other[0][i] + 1<<" "<<other[1][0] +1<<endl;
	
	return;
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