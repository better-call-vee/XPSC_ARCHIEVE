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
        int X, Y;
        cin >> X >> Y;

        double X1 = X / 2;
        double Y2 = Y / 4;

        if (X1 > Y2)
            cout << Y * 2 + X << "\n";

        else
            cout << X * 5 << "\n";
    }

    return 0;
}