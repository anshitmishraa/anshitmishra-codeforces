#include <bits/stdc++.h>

using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main(){
    fast

    
	int n;
	cin>>n;

    vector<int> a(n), b(n);
  	
  	for(int i = 0;i<n;i++) cin>>a[i];
   	for(int i = 0;i<n;i++) cin>>b[i];

  	int total = 0;
  
  	for(int i = 0;i<n;i++){
      total += a[i]*b[i];
    }
  	
  	if(total) cout<<"No";
  	else cout<<"Yes";
	return 0;
}