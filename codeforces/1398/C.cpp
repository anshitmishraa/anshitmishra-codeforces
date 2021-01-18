#include <bits/stdc++.h>

using namespace std;

#define lln long long 

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(){

	int n;
	cin>>n;

	string s;
	cin>>s;

	map<int,int> mp;
	long long total = 0;

	mp[0] = 1;

	int sum = 0;

	for(int i=0;i<n;i++){
		int x = s[i] - '0';
		x--;
		sum+=x;
		total += (lln)mp[sum];
		mp[sum]++;
	}
	cout<<total<<endl;
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