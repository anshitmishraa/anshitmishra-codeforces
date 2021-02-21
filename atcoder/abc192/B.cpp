#include <bits/stdc++.h>

using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    string S;
    cin >> S;
  
    for (int i = 1; i <= S.size(); i++){
        if (i & 1)
        {
            if (!islower(S[i-1]))
            {
                cout << "No";
                return;
            }
        }
        else
        {
            if (!isupper(S[i-1]))
            {
                cout << "No";
                return;
            }
        }
    }
    cout<<"Yes";
    return;
}

int main()
{
    fast

    solve();

    return 0;
}