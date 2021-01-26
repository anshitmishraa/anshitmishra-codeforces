#include <bits/stdc++.h>

using namespace std;

#define lln long long int

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(){
	int n,m,k;
	cin>>n>>m>>k;

	vector<int> a(k);
	vector<int> b(k);

	for(int i = 0;i<k;i++)
		cin>>a[i];
	for(int i = 0;i<k;i++)
		cin>>b[i];

	vector<int> Boy(n+1);
	vector<int> Girl(m+1);

	for(int i = 0;i<k;i++)
		Boy[a[i]]++;
	for(int i = 0;i<k;i++)
		Girl[b[i]]++;

	lln total = 0;

	for(int i = 0;i<k;i++)
		total += ((k-1) - (Girl[b[i]]-1) -(Boy[a[i]]-1));

	cout<<total/2<<endl;
	return;
}

int main(){
    fast

    int t;
    cin>>t;

    while(t--){
    	solve();
    }

	return 0;
}

