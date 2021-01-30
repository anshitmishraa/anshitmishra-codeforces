#include <bits/stdc++.h>

using namespace std;

#define lln long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(){
	int n,a,b;
	cin>>n>>a>>b;

	if(a>b) swap(a,b);

	int div = 0, total = 0;
	while(pow(2,total) != n) total++;

	n /= 2;

	while(a>n || b<=n){
		if(b>n){
			a-=n;
			b-=n;
		}
		n /= 2;
		div++;
	}
	if(!div) cout<<"Final!";
	else cout<<(total-div);

}

int main(){
    fast

   	solve();

	return 0;
}
