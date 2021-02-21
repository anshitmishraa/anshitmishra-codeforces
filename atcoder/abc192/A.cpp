#include <bits/stdc++.h>

using namespace std;

#define fast                          \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL);                    \
	cout.tie(NULL);

void solve()
{
	int X;
	cin >> X;

	int min = X / 100;

	cout << ((++min) * 100 - X);

	return;
}

int main()
{
	fast

	solve();

	return 0;
}