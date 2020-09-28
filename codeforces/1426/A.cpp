#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")

#include<bits/stdc++.h>
#include <vector> 
#include <algorithm> 

# define lln long long int
# define loop(i,n) for(lln i = 1;i<=n;i++) 
# define loops(i) while(i--) 

using namespace std;

int numberOfFloor(lln n, lln x){
	int count = 1, number = 2;
	bool flag = true;
	if(n<3) return count;
	else{
		while(flag){
		    number += x;
		    count++;
			if(n<=number)
				return count;
		}
	}

}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	lln t;
	cin>>t;

	loops(t){
		lln n;
		cin>>n;
		lln x;
		cin>>x;

		int floor = numberOfFloor(n,x);
		cout<<floor<<endl;
	}
	return 0;
}

