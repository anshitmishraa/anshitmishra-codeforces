#include<bits/stdc++.h>

typedef long long lln;

using namespace std;

void solution(){
	lln n;
	cin>>n;

	vector<lln> odd;
	vector<lln> even;
	
	for(int i = 0;i<n;i++){
		int x;
		cin>>x;
		if(x&1)
			odd.push_back(x);
		else
			even.push_back(x);
	}

	sort(even.begin(),even.end(), greater<>());
	sort(odd.begin(),odd.end(), greater<>());

	if(!(odd.size())){
		cout<<"Alice"<<endl;
		return;
	}

	if(odd.size() == 1 && !(even.size())){
		cout<<"Tie"<<endl;
		return;
	}
	if(odd.size() > 1 && !(even.size())){
		cout<<"Bob"<<endl;
		return;
	}

	lln first = 0, second = 0;

	lln counter = 0;

	lln totalAlice = 0, totalBob = 0;

	while(first<even.size() && second<odd.size()){
		if(!counter){
			if(even[first]>=odd[second]){
				totalAlice += even[first];
				first++;
			} else {
				second++;
			}
			counter = 1;
		} else {
			if(even[first]<=odd[second]){
				totalBob += odd[second];
				second++;
			} else {
				first++;
			}
			counter = 0;
		}
	}

	vector<lln> left;

	for(int x = first;x<even.size();x++)
		left.push_back(even[x]);
	for(int x = second;x<odd.size();x++)
		left.push_back(odd[x]);
	for(int x = 0;x<int(left.size());x++){
		if(!counter){
			if(!(left[x]%2))
				totalAlice += left[x];
			counter = 1;
		} else {
			if(left[x]%2)
				totalBob += left[x];
			counter = 0;
		}
	}

	if(totalAlice>totalBob) cout<<"Alice"<<endl;
	else if(totalAlice==totalBob) cout<<"Tie"<<endl;
	else cout<<"Bob"<<endl;
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
