#include<bits/stdc++.h>

using namespace std; 

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;

		vector<int> result;
		
		int sum = 0, last = 9;

		while(sum<n && last > 0){
			result.push_back(min(n-sum,last));
			sum+=last;
			last--;
		}
		if(sum<n){
			cout<<"-1"<<endl;
		}
		else{
			reverse(result.begin(), result.end());
			for(int i: result){
				cout<<i;
			}
			cout<<endl;
		}
	}
	return 0;
}

