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
		lln n;
		cin>>n;
		
		lln i;

		for(i = 1;i<n;i++)
			if(i*(i+1)>=2*n)
				break;
		lln k = (i*(i+1))/2;

		if(k==n+1)
			cout<<i+1<<endl;
		else 
			cout<<i<<endl;

	}
	return 0;
}