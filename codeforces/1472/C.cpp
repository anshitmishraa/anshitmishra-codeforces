#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")

#include<bits/stdc++.h>

#define lln long long int

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	lln t;
	cin>>t;

	while(t--){
		lln n;
		cin>>n;

		vector<lln> a(n);
		
		for(int i = 0;i<n;i++)
			cin>>a[i];

		lln maxScore = 0;
		
		for(lln i = n-1;i>=0;i--){
			lln total = 0;
			total += a[i];

			if(i+a[i]<n)
				total += a[i+a[i]];

			a[i] = total;
			maxScore = max(maxScore, a[i]);
		}
		cout<<maxScore<<endl;
	}
	return 0;
}
