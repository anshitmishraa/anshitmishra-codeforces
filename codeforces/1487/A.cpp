#include <bits/stdc++.h>

using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(){
  int n;
  cin>>n;

  vector<int> a(n);
  for(int i = 0;i<n;i++) cin>>a[i];
  int mini = *min_element(a.begin(), a.end());

  int total = 0;

  for(int i = 0;i<n;i++)
    if(a[i]!=mini) total++;

  cout<<total<<endl;
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