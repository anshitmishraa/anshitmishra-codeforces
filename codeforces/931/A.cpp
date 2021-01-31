#include <bits/stdc++.h>

using namespace std;

#define endl ("\n")
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(){
	int a,b;
	cin>>a>>b;

	int x = abs(b-a);
	int y = x%2 != 0;
	x /= 2;

	cout<<(x+y)*(x+1)<<endl;
}


int main(){
    fast
	
	solve();

	return 0;
}