#include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	int count = 0;
	int a,b,c,d,e;
		if(n>100){
		a = n/100;
		n = n-100*a;
		b = n/20;
		n = n-20*b;
		c = n/10;
		n = n-10*c;
		d = n/5;
		n = n-5*d;
		e = n/1;
		count = a+b+c+d+e;
	}
	else{
		b = n/20;
		n = n-20*b;
		c = n/10;
		n = n-10*c;
		d = n/5;
		n = n-5*d;
		e = n/1;
		count = b+c+d+e;
	}
	cout<<count;
}