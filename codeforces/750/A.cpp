#include<iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	int totalTime,i; 
	for(i=n;i>=1;i--){
		totalTime = 5*(i*(i+1)/2);
		if((240-(k+totalTime))>=0){
			cout<<i;
			exit(0);
		}
	}
	if(n>=1&&k>=235){
			cout<<0;
		}
	return 0;
}