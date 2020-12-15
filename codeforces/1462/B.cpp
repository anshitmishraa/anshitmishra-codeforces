#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")

#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;
		
		string s;
		cin>>s;

		string result;
		
		if(s[0]=='2' && s[1]=='0' && s[2]=='2' && s[3] == '0')
			result = "YES";
		else if(s[0]=='2' && s[1]=='0' && s[2]=='2' && s[n-1] == '0')
			result = "YES";
		else if(s[0]=='2' && s[1]=='0' && s[n-2]=='2' && s[n-1] == '0')
			result = "YES";
		else if(s[0]=='2' && s[n-3]=='0' && s[n-2]=='2' && s[n-1] == '0')
		    result = "YES";
		else if(s[n-4]=='2' && s[n-3]=='0' && s[n-2]=='2' && s[n-1] == '0')
		    result = "YES";
		else
			result = "NO";
		cout<<result<<endl;
	}
	return 0;
}

