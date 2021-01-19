#include <bits/stdc++.h>

using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(){

	int n;
	cin>>n;

	string s;
	cin>>s;

	int zero = 0, ones = 0;

	for(int i = 0;i<n;i++){
		if(s[i] == '0')
			zero++;
		else 
			break;
	}	

	for(int i = n-1;i>=0;i--){
		if(s[i] == '1')
			ones++;
		else 
			break;
	}	

	if(zero + ones == n){
		cout<<s<<endl;
		return;
	} else {
		string ans = "";
		for(int i = 0;i<=zero;i++){
			ans += (char)('0');
		}
		for(int i = 0;i<ones;i++){
			ans += (char)('1');
		}
		cout<<ans<<endl;
		return;
	}
	
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