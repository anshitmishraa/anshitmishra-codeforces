#include <bits/stdc++.h>

using namespace std;

typedef long long lln;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(){

	int n;
  cin>>n;

  vector<int> a(n);
  int total_nut = 0;

  for(int i = 0;i<n;i++){
    cin>>a[i];
    if(a[i]) total_nut++;
  }

  if(!total_nut){
    cout<<0<<endl; 
    return;
  }

  lln ans = 1;
  stack<int> s;

  for(int i = 0;i<n;i++){
    if(a[i]){
      if(!s.empty()){
        lln dist = i - (s.top());
        ans *= ((lln)dist);
      }
      s.push(i);
    }
  }
  cout<<ans<<endl;
}

int main(){
  fast

	solve();
    
	return 0;
}