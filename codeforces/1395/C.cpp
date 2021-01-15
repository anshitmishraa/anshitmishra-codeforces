#include <bits/stdc++.h>

using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n,m;

vector<int> a(205);
vector<int> b(205);

bool isValid(int x){
	for(int i=0;i<n;i++){
		bool flag = false;
		for(int j=0;j<m;j++){
			int res = a[i]&b[j];
			if((res|x) == x){
				flag = true;
				break;
			}
		}
		if(!flag) return false;
	}
	return true;
}

void solve(){

	cin>>n>>m;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<m;i++)
		cin>>b[i];
	for(int i = 0;i<(1<<9);i++){
		if(isValid(i)){
			cout<<i;
			return;
		}
	}
	return;
}

int main(){
    fast

	solve();

	return 0;
}