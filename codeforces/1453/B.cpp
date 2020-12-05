#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int MAX_N = 200000;
int gildongArray[MAX_N + 5];

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a;
        cin >> a;

        for (int i = 1; i <= a; i++){
            cin >> gildongArray[i];
        }

        ll sum = 0;

        for (int i = 2; i <= a; i++){
            sum += abs(gildongArray[i]-gildongArray[i-1]);
        }

        int minimumOperation;
		
        minimumOperation = max(abs(gildongArray[2]-gildongArray[1]),abs(gildongArray[a]-gildongArray[a-1]));

        for(int i = 2;i<a;i++){
            minimumOperation = max(minimumOperation, abs(gildongArray[i]-gildongArray[i-1]) + abs(gildongArray[i+1]-gildongArray[i]) - abs(gildongArray[i+1]-gildongArray[i-1]));

        }

        cout <<sum- minimumOperation << endl;
	

    }

    return 0;
}