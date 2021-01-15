#include <bits/stdc++.h>

using namespace std;

#define lln long long int

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(){
	int n;
	cin>>n;

	vector<int> a(n);
	for(int i = 0;i<n;i++)
		cin>>a[i];

	vector<int> left(3005);
	lln ans = 0;

	for(int j = 0;j<n;j++){
		vector<int> right(3005);
		for(int k = n - 1;k>j;k--){
			ans += (left[a[k]]*right[a[j]]);
			right[a[k]]++;
		}
		left[a[j]]++;
	}
	cout<<ans<<endl;
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