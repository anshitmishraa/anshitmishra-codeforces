#include <bits/stdc++.h>

using namespace std;

typedef long long lln;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(){

  int n;
  cin>>n;

  vector<int> a(n);
  for(int i = 0;i<n;i++) cin>>a[i];

  map<int,int> mp;
  for(auto i: a) mp[i]++;

  int colors = 1;
  for(auto i:mp) if(i.second>colors) colors = i.second;

  cout<<colors<<endl;
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