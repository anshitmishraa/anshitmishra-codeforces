#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int ar[1001];
int br[1001];

void shift(int k){
	int i = 1;
	int j = k;

	while(i<k) swap(ar[i],ar[k]), i++, k--;
	for(int i = 1;i<=j;i++) ar[i] ^= 1;
}

void solve(){

	int n;
	cin>>n;

	char c;
	
	for(int i = 1;i<=n;i++) cin>>c, ar[i] = c - '0';
	for(int i = 1;i<=n;i++) cin>>c, br[i] = c - '0';

	vector<int> v;
	for(int i = n;i>1;i--){
		if(ar[i] != br[i]){
			if(ar[i]!=ar[1]) v.pb(1), ar[1] = ar[i];

			v.pb(i), shift(i);
		}
	}
	if(ar[1] != br[1]) v.pb(1);

	cout<<v.size()<<" ";
	for(auto i: v) cout<<i<<" ";
	cout<<endl;
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
