#include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n][3];
	int count1=0,count2=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<3;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++){
		count1=0;
		for(int j=0;j<3;j++){
			if(a[i][j]==1){
				count1++;
			}
		}
		if(count1++>=2){
			count2++;
		}
	}
	cout<<count2;

	return 0;
} 