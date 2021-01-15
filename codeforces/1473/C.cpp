#include <bits/stdc++.h>

using namespace std;

#define lln long long int

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(){
	int n, k;
	cin>>n>>k;

	vector<int> a(n+1);

	for(int i = 1;i<=k;i++)
		a[i] = i;

	int x = k - 1;

	for(int i = k+1;i<=n;i++){
		a[i] = x;
		x--;
	}

	vector<int> p(n+1);
	vector<int> ans;

	for(int i = n;i>=1;i--){
		if(p[a[i]]==1)
			continue;
		else {
			ans.push_back(a[i]);
			p[a[i]] = 1;
		}
	}
	reverse(ans.begin(),ans.end());

	for(auto i:ans){
		cout<<i<<" ";
	}
	cout<<endl;
}

int main(){
    fast

    int q;
    cin>>q;

    while(q--){
		solve();
    }

	return 0;
}