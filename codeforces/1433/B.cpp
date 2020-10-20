#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")

#include<bits/stdc++.h>

#define lln long long int
#define loop(i,n) for(lln i = 0;i<n;i++) 
#define loops(i,n) for(lln i = n-1;i>=0;i--) 
#define loopss(i,first,last) for(lln i = first;i<=last;i++) 

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	lln t;
	cin>>t;

	while(t--){
		lln n;
		cin>>n;
		int books[n];

		loop(i,n){
			cin>>books[i];
		}	

		int first = 0, last = 0;
		loop(i,n){
			if(books[i]==1){
				first = i;
				break;
			}
		}

		loops(i,n){
			if(books[i]==1){
				last = i;
				break;
			}
		}

		int count = 0;

		if(first==last){
			cout<<"0"<<endl;
		} else{
			loopss(i,first,last){
				if(books[i]==0)
					count++;
			}
			cout<<count<<endl;
		}
		
	}
	return 0;
}
