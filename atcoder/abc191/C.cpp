#include <bits/stdc++.h>

using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(){
	int h,w;
	cin>>h>>w;

	vector<string> s(h);
	for(auto& r:s) cin>>r;

	int a = 0;

	for(int i = 0;i+1<h;i++)
		for(int j = 1;j<w;j++)
			if((s[i][j-1] == s[i+1][j-1]) && (s[i][j] != s[i+1][j]))
				a++;

	for(int j = 0;j+1<w;j++)
		for(int i = 1;i<h;i++)
			if((s[i-1][j] == s[i-1][j+1]) && (s[i][j] != s[i][j+1]))
				a++;

	cout<<a<<endl;	

}

int main(){
    fast

   	solve();

	return 0;
}
