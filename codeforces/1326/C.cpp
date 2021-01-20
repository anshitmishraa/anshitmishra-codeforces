#include <bits/stdc++.h>

using namespace std;

typedef long long lln;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int M=998244353;

long long mod(long long x){
    return ((x%M + M)%M);
}

long long mul(long long a, long long b){
    return mod(mod(a)*mod(b));
}

void solve(){

  int n,k;
  cin>>n>>k;

  vector<int> a(n);

  for(int i = 0;i<n;i++)
    cin>>a[i];
  
  vector<int> b;
  int x = n;
  int cc = 0;
  lln total = 0;

  while(1){
    total += x;
    x--;
    cc++;
    if(cc>=k) break;
  }

  int other = n - k + 1; 

  for(int i = 0;i<n;i++){
    if(a[i]>=other)
      b.push_back(i);
  }
  
  sort(b.begin(), b.end());
  lln total_ways = 1;
  for(int i = 0;i<(int)b.size()-1;i++)
    total_ways = mul(total_ways,((lln)b[i+1]-b[i]));
  cout<<total<<" "<<total_ways;
}

int main(){
  fast

  solve();
    
  return 0;
}