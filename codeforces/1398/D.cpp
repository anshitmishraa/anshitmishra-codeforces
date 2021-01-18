#include <bits/stdc++.h>

using namespace std;

typedef long long lln;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int r,g,b;
vector<lln> ar;
vector<lln> ag;
vector<lln> ab;

lln ans = 0;
lln dp[205][205][205];

lln ok(int x, int y, int z){
  if((x>=r && y>=g) ||(x>=r && z>=b) ||(y>=g && z>=b)){
    return 0;
  }
  if(dp[x][y][z]!=-1)
    return dp[x][y][z];
  lln maxi=0;
  if(x<r && y<g)
    maxi = max(maxi, ar[x]*ag[y] + ok(x+1,y+1,z));
  if(x<r && z<b)
    maxi = max(maxi, ar[x]*ab[z] + ok(x+1,y,z+1));
  if(y<g && z<b)
    maxi = max(maxi, ag[y]*ab[z] + ok(x,y+1,z+1));
  ans = max(ans, maxi);
  return dp[x][y][z]=maxi;
}


void solve(){

  cin>>r>>g>>b;

  ar.resize(r);
  ag.resize(g);
  ab.resize(b);

  memset(dp,-1,sizeof(dp));

  for(int i = 0;i<r;i++)
    cin>>ar[i];  
  for(int i = 0;i<g;i++)
    cin>>ag[i];  
  for(int i = 0;i<b;i++)
    cin>>ab[i];  
  sort(ar.rbegin(), ar.rend());
  sort(ag.rbegin(), ag.rend());
  sort(ab.rbegin(), ab.rend());

  ok(0,0,0);
  cout<<ans;
  return;
}

int main(){
  fast

	solve();
    
	return 0;
}