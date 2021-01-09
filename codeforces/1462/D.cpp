#include <bits/stdc++.h>

using namespace std;

#define endl ("\n")
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int check(vector<int> &a, int k){
	int total = 0;
	int n = a.size();
	int sum = 0;
	int j = 0;
	for(int i = 0;i<n;i++){
		sum+=a[i];
		if(sum==k){
			total+=(i-j);
			j=i+1;
			sum = 0;
		} else if(sum>k) return -1;
	}
	return total;
}

int main(){
    fast
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;

		vector<int> a(n);
		int total = 0;

		for(int i = 0;i<n;i++){
			cin>>a[i];
			total += a[i];
		}

		int answer = n - 1;

		for(int i = 1;i*i<=total;i++){
			if(!(total%i)){
				int f1 = i;
				int f2 = total / i;
				int a1 = check(a,f1);
				int a2 = check(a,f2);
				if(a1!=-1) answer = min(answer, a1);
				if(a2!=-1) answer = min(answer, a2);
			}
		}

		cout<<answer<<endl;

	}
	return 0;
}