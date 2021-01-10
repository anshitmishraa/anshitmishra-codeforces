#include <bits/stdc++.h>

using namespace std;

#define lln long long int

#define endl ("\n")
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

bool check(lln r1, lln c1, lln r2, lln c2){
	return (r1+c1)==(r2+c2) || (r1-c1)==(r2-c2) || (abs(r1-r2)+abs(c1-c2)<=3);
}

void solve(){
	lln r1, c1, r2, c2;

	cin>>r1>>c1>>r2>>c2;
	
	if(r1>r2){
		swap(r1,r2);
		swap(c1,c2);
	}

	if(r1==r2 && c1==c2){
		cout<<0;
		return;
	}

	if(check(r1,c1,r2,c2)){
		cout<<1;
		return;
	}
	if((r1+c1)%2 == (r2+c2)%2){
		cout<<2;
		return;
	}
	for(lln i=-2;i<=2;i++){
		for(lln j=-2;j<=2;j++){
			lln p = r2 + i;
			lln q = c2 + j;
			if(check(r1,c1,p,q)){
				cout<<2;
				return;
			}
		}
	}
	if(check(r1,c1,r2+3,c2) || check(r1,c1,r2-3,c2) || check(r1,c1,r2,c2+3) || check(r1,c1,r2,c2-3)){
		cout<<2;
		return;
	}
	cout<<3;
}

int main(){
    fast

	solve();

	return 0;
}