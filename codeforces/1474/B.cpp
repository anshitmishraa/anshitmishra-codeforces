#include <bits/stdc++.h>

using namespace std;

typedef long long lln;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

bool isPrime(int n){
  for(int i = 2;i*i<n+1;i++)
    if(!(n % i))
      return false;
  return true;
}

void solve(){

  int n;
  cin>>n;

  int a = 1 + n;
  while(!isPrime(a))
    a++;
  int b=a+n;
  while(!isPrime(b))
    b++;
  cout<<a*b<<endl;
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