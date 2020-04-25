#include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;

	int a = n/5;
	n = n- 5*a;
	int b = n/4;
	n = n- 4*b;
	int c = n/3;
	n = n- 3*c;
	int d = n/2;
	n = n- 2*d;
	int e = n/1;
	n = n- 1*e;

	cout<<(a+b+c+d+e);


	return 0;
} 