#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")

#include<bits/stdc++.h>

#define lln long long int

using namespace std;

void solution(){
	lln n, x;
	cin>>n>>x;

	vector<lln> a(n);

	lln total = 0, maxTotal = 0;
	
	for(int i = 0;i<n;i++){
		cin>>a[i];
		total += a[i];

		maxTotal += a[i]/x;

		if(a[i]%x) maxTotal++;
	}

	lln minTotal = total/x;
	if(total%x) minTotal++;

	cout<<minTotal<<" "<<maxTotal<<endl;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	lln t;
	cin>>t;

	while(t--){
		
		solution();
		
	}
	return 0;
}
