#include <bits/stdc++.h>

using namespace std;

#define endl ("\n")
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(){
	int px,py;
	cin>>px>>py;
	string s;
	cin>>s;

	int totalr = 0, totalu = 0, totall = 0, totald = 0;

	for(auto i:s){
		if(i=='R') totalr+=1;
		else if(i=='U') totalu+=1;
		else if(i=='L') totall+=1;
		else totald+=1;
	}

	int total = 0;

	if(!px) total++;
	else if(px>0 && totalr>=px) total++;
	else if(px<0 && totall>=-px) total++;

	if(!py) total++;
	else if(py>0 && totalu>=py) total++;
	else if(py<0 && totald>=-py) total++;

	if(total == 2) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
} 


int main(){
    fast

    int t;
    cin>>t;

    while(t--)
    	solve();

	return 0;
}