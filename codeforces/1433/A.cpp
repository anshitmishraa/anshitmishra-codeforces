#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")

#include<bits/stdc++.h>

#define lln long long int

using namespace std;

int getIndexVector(vector<int> v, int K) 
{ 
    auto it = find(v.begin(), 
                   v.end(), K); 
                   int index;
    if (it != v.end()) { 
        index = distance(v.begin(), 
                             it); 
    } 
    return index;
} 


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	lln t;
	cin>>t;

	vector<int> number = {
		1,11,111,1111,
		2,22,222,2222,
		3,33,333,3333,
		4,44,444,4444,
		5,55,555,5555,
		6,66,666,6666,
		7,77,777,7777,
		8,88,888,8888,
		9,99,999,9999
	};

	while(t--){
		lln n;
		cin>>n;
		int i = 0;
		int high = getIndexVector(number,n);
		
		int count = 0;
		while(i<=high){
			count += (i%4 + 1);
			i++;
		}
		cout<<count<<endl;
	}
	return 0;
}
