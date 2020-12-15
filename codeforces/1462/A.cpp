#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")

#include<bits/stdc++.h>
#include <vector> 
#include <algorithm> 

# define lln long long int

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;
		lln b[n];

		for (lln i = 0; i < n; ++i){
			cin>>b[i];
		}

		lln start = 0;
		lln last = n-1;

		lln result[n];

		for (lln i = 0; i < n; ++i){
			if(!(i&1)){
				result[i] = b[start];
				start++;
			} else {
				result[i] = b[last];
				last--;
			}
		}

		for (lln i = 0; i < n; ++i){
			cout<<result[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

