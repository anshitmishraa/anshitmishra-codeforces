#include <bits/stdc++.h>

using namespace std;

#define lln long long int

#define endl ("\n")
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

#define rep(i, a, b) for (lln i = a; i < b; i++)
#define repe(i, a, b) for (lln i = a; i < b; i+=2)

int main(){
    fast
	int t;
	cin>>t;
	while(t--){
		int n;
        cin>>n;
        vector<int>a(n);
        lln even=0,odd=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a[i]=x;
            if(i%2==0) even+=x;
            else odd+=x;
        }
        if(even<odd){
            for(int i=0;i<n;i+=2)
                a[i]=1;
        }
        else{
            for(int i=1;i<n;i+=2)
                a[i]=1;
        }
        for(auto i : a)
            cout<<i<<" ";
        cout<<"\n";

	}
	return 0;
}