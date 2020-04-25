#include<iostream>

using namespace std;

int main(){
	int a,b;
	cin>>a>>b;
	if(a==0&&b==0){
		cout<<"NO";
		exit(0);
	} 
	if(b-a == 1 || a-b==1 || a-b==0 || b-a==0) cout<<"YES";
	else cout<<"NO";

	return 0;
} 