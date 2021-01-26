#include <bits/stdc++.h>

using namespace std;

#define lln long long int

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(){
	lln n,m;
	cin>>n>>m;

	vector<int> a(n);
	vector<int> b(n);

	lln total = 0;

	for(int i = 0;i<n;i++) cin>>a[i], total += a[i];
	for(int i = 0;i<n;i++) cin>>b[i];

	if(total < m){
		cout<<-1<<endl;
		return;
	}

	vector<int> one, two;

	for(int i = 0;i<n;i++){
		if(b[i]&1) one.push_back(a[i]);
		else two.push_back(a[i]);
	}
	
	sort(one.rbegin(),one.rend());
	sort(two.rbegin(),two.rend());

	lln answer = 1e9;

	int x = one.size();
	int y = two.size();

	vector<lln> ok(y+1);

	for(int i = 0;i<y;i++){
		ok[i+1] = ok[i] + two[i];
	}

	lln sumTotal = 0;

	int pos = lower_bound(ok.begin(),ok.end(),m) - ok.begin();
	if(pos < y+1)
		answer = min(answer, pos*2LL);

	for(int i = 0;i<x;i++){
		lln count = i + 1;
		sumTotal += one[i];

		lln left = m - sumTotal;

		if(left > 0){
		 	pos = lower_bound(ok.begin(),ok.end(),left) - ok.begin();
		 	if(pos>=y+1) continue;
		 	count += (pos*2);
		}
		answer = min(answer,count);
	}
	cout<<answer<<endl;
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

