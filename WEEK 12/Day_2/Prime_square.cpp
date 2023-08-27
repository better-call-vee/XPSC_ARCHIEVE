/*
https://codeforces.com/problemset/problem/1436/B
   +----------------------+
  /                        \
 /    *   TANVEE009   *     \
 \  **  I CAN, I WILL  **   /
  \  +-----------------+   /
   +----------------------+
*/
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
        int n;
        cin >> n;
        int sq[n][n];
        memset(sq, 0, sizeof(sq));

        for (int i = 0; i < n; i++)
        {
            sq[i][i] = 1;
            sq[i][n - 1 - i] = 1;
        }

        if (n % 2 != 0)
        {
            sq[n / 2][n / 2 - 1] = 1;
            sq[n / 2 + 1][n / 2] = 1;
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                cout << sq[i][j] << " ";
            cout << "\n";
        }
    }

    return 0;
}