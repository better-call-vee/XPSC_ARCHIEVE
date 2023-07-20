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

        if (X % 10 != 0)
        {
            int x = X % 10;
            if (x >= 5)
                X += (10 - x);
            else
                X -= x;

            cout << 100 - X << "\n";
        }

        else
            cout << 100 - X << "\n";
    }

    return 0;
}