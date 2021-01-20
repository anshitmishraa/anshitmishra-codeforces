#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int X;
	cin>>X;

	int total = 0;


	for(int i = 1;i<=400;i++){
		total += X;
		if(!(total%360)){
			cout<<i;
			break; 
		}
	}

	return 0;
}