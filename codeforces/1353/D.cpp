#include <bits/stdc++.h>

using namespace std;

typedef long long lln;

#define ff first
#define ss second
#define endl '\n'
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

lln ar[200001];

void solve(){

  int n;
  cin>>n;

  priority_queue<pair<int, pair<int,int>>> q;

  q.push({n, {-1, -n}});

  int cnt = 1;

  while(!(q.empty())){
    int L = -(q.top().ss.ff);
    int R = -(q.top().ss.ss);
    q.pop();

    int mid = (L+R)/2;
    ar[mid] = cnt++;

    if(L==R)
      continue;
    if(L<mid)
      q.push({mid - L,{-L,-(mid-1)}});
    if(mid<R)
      q.push({R - mid,{-(mid + 1),-R}});
  }
  for(int i=1;i<=n;i++)
    cout<<ar[i]<<" ";
  cout<<endl;
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



