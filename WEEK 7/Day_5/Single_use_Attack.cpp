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
        int H, X, Y;
        cin >> H >> X >> Y;

        int noya = H - Y;
        if (noya % X == 0)
            cout << noya / X + 1 << "\n";
        else
            cout << noya / X + 2 << "\n";
    }

    return 0;
}