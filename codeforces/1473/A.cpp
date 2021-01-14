#include <bits/stdc++.h>

using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(){

  int n,d;
  cin>>n>>d;

  vector<int> a(n);

  for(int i = 0;i<n;i++)
    cin>>a[i];

  sort(a.begin(), a.end());

  for(int i = n-1;i>=0;i--){
    int first = a[0] + a[1];
    int last = a[i];
    if(last<=d){
      cout<<"YES"<<endl;
      return;
    } else {
      if(first>d){
        cout<<"NO"<<endl;
        return;
      } else {
        cout<<"YES"<<endl;
        return;
      }
    }
  }
  return;
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