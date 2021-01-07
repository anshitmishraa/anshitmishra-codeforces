#include <bits/stdc++.h>

using namespace std;

#define lln long long int

#define endl ("\n")
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main(){
    fast
	int t;
	cin>>t;
	while(t--){
		lln a,b,c;
		cin>>a>>b>>c;

		lln s = a + b + c;
		lln k = s/9;
		if(!(s%9) && a>=k && b>=k && c>=k )
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;

	}
	return 0;
}