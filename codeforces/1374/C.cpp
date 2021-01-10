#include <bits/stdc++.h>

using namespace std;

#define lln long long int

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(){
	int n;
	cin>>n;

	string s;
	cin>>s;

	int flip = 0;
	int total = 0;

	for(int i = 0;i<n;i++){
		if(s[i]=='(') flip++;
		else flip--;
		if(flip<0){
		    total++; 
		    flip = 0;
		}
	}
	cout<<total<<endl;
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