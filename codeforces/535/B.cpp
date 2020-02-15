#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
	int l,i,r,sum=0,p,temp=1;
	string n;
	cin>>n;
	l=n.size();
	int b=l-1;
	for(i=0;i<l;i++)
	{
		if(n[i]=='4'||n[i]=='7')
		{
			p=pow(2,b--);
		    if(n[i]=='4')
			{
				r=1*p;
				sum=sum+r;
			 }
			 else
			 {
			 	r=2*p;
			 	sum=sum+r;
     		 }				 
		}
		else 
		{
			temp=0;
			break;
		}
	}
	if(temp==1)
	{
		cout<<sum;
	}
	else
	{
		cout<<"not possible";
	}
}
