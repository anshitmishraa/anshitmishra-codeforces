#include <bits/stdc++.h>

using namespace std;

#define lln long long int

#define endl ("\n")
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

#define rep(i, a, b) for (lln i = a; i < b; i++)
#define repr(i, a, b) for (lln i = a; i > b; i--)

int main(){
    fast
	int t;
	cin>>t;
	while(t--){
		lln n,x;
		cin>>n>>x;

		lln s = 0, mn = INT_MAX, f = 0, pp;

		vector<lln> a(n),b(n, 1);
		
		rep(i,0,n){
			cin>>a[i];
			lln temp = a[i];
			while(!(temp%x)){
				temp /= x;
				b[i]++;
			}
			if(b[i]<mn) mn = b[i], pp = i;
		}

		rep(i,0,pp) b[i] = mn + 1; 
		rep(i,pp+1,n) b[i] = mn; 
		rep(i,0,n) s += a[i]*b[i];

		cout<<s<<endl;
	}
	return 0;
}