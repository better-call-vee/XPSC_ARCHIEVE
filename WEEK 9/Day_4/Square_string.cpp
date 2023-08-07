#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);

int main()
{
    fast;

    int t;
    cin >> t;

    while (t--)
    {
        string inp;
        cin >> inp;

        int sz = inp.size();
        if (sz% 2 != 0)
        {
            cout << "NO\n";
            continue;
        }

        string one = inp.substr(0, sz / 2);
        string two = inp.substr(sz / 2, sz / 2);
        
        if (one == two)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}