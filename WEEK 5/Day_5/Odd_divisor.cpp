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
        ll n;
        cin >> n;

        if (n < 3)
            cout << "NO\n";

        if (n >= 3)
        {
            if (n % 2 != 0)
                cout << "YES\n";
            else
            {
                if (n % 3 == 0 || n % 5 == 0 || n % 7 == 0)
                    cout << "YES\n";
                else
                    cout << "NO\n";
            }
        }
    }

    return 0;
}