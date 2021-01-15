#include <bits/stdc++.h>

using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(){

	int n;
	cin>>n;

	string s;
	cin>>s;

	stack<int> so, sz;

	vector<int> a(n);
	int numPile = 1;

	for(int i=0;i<n;i++){
		if(s[i]=='0'){
			if(so.empty()){
				sz.push(numPile);
				a[i] = numPile;
				numPile++;
			}
			else {
				int k = so.top();
				so.pop();
				a[i] = k;
				sz.push(k);
			}
		} else {
			if(sz.empty()){
				so.push(numPile);
				a[i] = numPile;
				numPile++;
			}
			else {
				int k = sz.top();
				sz.pop();
				a[i] = k;
				so.push(k);
			}
		}
	}
	cout<<numPile-1<<endl;	
	for(auto i :a)
		cout<<i<<" ";
	cout<<endl;
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