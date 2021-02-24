#include <bits/stdc++.h>

#define ll long long

using namespace std;

void solve()
{
    ll p, a, b, c;

    cin >> p >> a >> b >> c;

    if (!(p % a) || !(p % b) || !(p % c))
    {
        cout << 0 << endl;
        return;
    }
    ll ans = min({a - (p % a), b - (p % b), c - (p % c)});
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
        solve();
}