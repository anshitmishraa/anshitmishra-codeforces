#include <bits/stdc++.h>

using namespace std;

#define endl ("\n")
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main(){
    fast
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;

		string answer = "";

		for(int i = 0;i<k;i++) answer += (char)'a';

		string bca = "bca";
		int x = 0;

		for(int i = k;i<n;i++) answer += (char)(bca[x]), x++, x%=3;

		cout<<answer<<endl;

	}
	return 0;
}