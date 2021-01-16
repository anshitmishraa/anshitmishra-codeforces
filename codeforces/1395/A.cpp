#include <bits/stdc++.h>

using namespace std;

#define lln long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(){
	lln a[4];
	for(int i=0;i<4;i++)
		cin>>a[i];
	lln mini = min({a[0],a[1],a[2]});
	int odd = 0;
	for(int i=0;i<4;i++)
		if(a[i]&1)
			odd++;
	if(odd<=1){
		cout<<"Yes"<<endl;
		return;
	}	
	odd = 0;
	for(int i=0;i<3;i++)
		a[i]-=mini;
	a[3]+=(3LL*mini);
	for(int i=0;i<4;i++)
		if(a[i]&1)
			odd++;
	if(odd<=1){
		cout<<"Yes"<<endl;
		return;
	}	
	odd = 0;
	for(int i=0;i<3;i++)
		a[i]+=mini;
	a[3]-=(3LL*mini);
	mini = max(0LL,mini-1);
	for(int i=0;i<3;i++)
		a[i]-=mini;
	a[3]+=(3LL*mini);
	for(int i=0;i<4;i++)
		if(a[i]&1)
			odd++;
	if(odd<=1){
		cout<<"Yes"<<endl;
		return;
	}	
	cout<<"No"<<endl;
	return;
}

int main(){
    fast

    int t;
    cin>>t;

    while(t--) {
    	solve();
    }

	return 0;
}