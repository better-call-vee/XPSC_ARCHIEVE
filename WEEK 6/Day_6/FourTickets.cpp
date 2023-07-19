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
        int X;
        cin >> X;

        if (X * 4 <= 1000)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}