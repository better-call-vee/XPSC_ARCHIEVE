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

    int T;
    cin >> T;

    while (T--)
    {
        int x, y;
        cin >> x >> y;

        if (x >= y)
            cout << y << "\n";
        else
            cout << x + ((y - x) * 2) << "\n";
    }

    return 0;
}