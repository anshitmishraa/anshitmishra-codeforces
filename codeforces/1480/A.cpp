#include <bits/stdc++.h>

using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(){
	string s;
	cin>>s;

	string res;
	int a = 0;

	for(auto i:s){
		if(!(a%2)){
			if(i=='a') res = res + "b";
			else res = res + 'a';
		}
		else{
			if(i=='z') res = res + 'y';
			else res = res + 'z';
		}
		a++;
	}
	cout<<res<<endl;
}

int main(){
    fast

    int t;
    cin>>t;

    while(t--)
   		solve();

	return 0;
}
