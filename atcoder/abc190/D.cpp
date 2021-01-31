#include <bits/stdc++.h>

using namespace std;

#define lln long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(){
	lln n;
	cin>>n;

	n *= 2;

	lln ans = 0;

	for(lln i = 1;i*i<=n;i++){
		if(!(n%i)){
			lln first = i;
			lln second = n / i;
			if(!((second+1-first)%2)) ans++;
			if(n/i!=i){
				lln second = i;
				lln first = n / i;
				if(!((second+1-first)%2)) ans++;
			}
		}
	}
	cout<<ans;
}

int main(){
    fast

   	solve();

	return 0;
}
