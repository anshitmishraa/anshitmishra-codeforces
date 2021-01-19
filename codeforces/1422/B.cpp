#include <bits/stdc++.h>

using namespace std;

typedef long long lln;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(){
  int n,m;
  cin>>n>>m;

  int a[105][105];

  for(int i = 0;i<n;i++){
    for(int j = 0;j<m;j++)
      cin>>a[i][j];
  }

  lln total = 0;

  for(int i = 0;i<n;i++){
    for(int j = 0;j<m;j++){
      int otherOne = a[i][m-j-1];
      int otherTwo = a[n-i-1][j];

      vector<int> b;
      b.push_back(a[i][j]);
      b.push_back(otherOne);
      b.push_back(otherTwo);
      sort(b.begin(), b.end());
      a[i][j] = a[i][m-j-1] = a[n-i-1][j] = b[1];
      total += lln((b[1]-b[0]) + (b[2]-b[1]));
    }
  }
  cout<<total<<endl;
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