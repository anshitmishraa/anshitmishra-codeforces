#include <bits/stdc++.h>

using namespace std;

#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

vector<int> digits(int n)
{
    vector<int> r;
    while (n)
    {
        r.push_back(n % 10);
        n /= 10;
    }
    return r;
}

int number(vector<int> &digits)
{
    int n = 0;
    reverse(digits.begin(), digits.end());
    for (auto digit : digits)
    {
        n *= 10;
        n += digit;
    }
    return n;
}

int g2(int n)
{
    int r = 0;
    auto d = digits(n);
    sort(d.begin(), d.end(), greater<>());
    return number(d);
}

int g1(int n)
{
    int r = 0;
    auto d = digits(n);
    sort(d.begin(), d.end());
    return number(d);
}

int f(int n)
{
    return g1(n) - g2(n);
}

void solve()
{
    int n, k;
    cin >> n >> k;

    for (int i = 0; i < k; i++)
    {
        n = f(n);
    }
    cout << n;
    return;
}

int main()
{
    fast

    solve();

    return 0;
}