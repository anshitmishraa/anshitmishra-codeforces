#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")

#include<bits/stdc++.h>

#define lln long long int
#define loop(i,n) for(lln i = 0;i<n;i++) 
#define loops(i,n) for(lln i = 1;i<n;i++) 

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	lln t;
	cin>>t;

	while(t--){
		lln n;
		cin>>n;

		int a[n];
		
		loop(i,n){
			cin>>a[i];
		}

		int eq = 1, mx=a[0];

		loops(i,n){
			if(a[i]!=a[i-1]) {eq = 0;}
			mx = max(mx, a[i]);
		}
		
		if(eq) {cout<<-1<<endl;}
		else{
			int dominant;

			loop(i,n){
				if(!i && a[i]==mx && a[i+1]!=mx){
					dominant = i + 1;
					break;
				} else if(i==n-1 && a[i]==mx && a[i-1]!=mx){
					dominant = i + 1;
					break;
				} else if(i && i<n-1 && a[i] == mx && (a[i-1]!=mx || a[i+1] != mx)){
					dominant = i + 1;
					break;
				}
			}
	
			cout<<dominant<<endl;
		}
	}
	return 0;
}
