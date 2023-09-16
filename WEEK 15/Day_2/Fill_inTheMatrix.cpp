/*
  +----------+
  | Better.  |
  | Call.Vee |
  +----+-----+
       |
       V
created: 11th September, 2023 12:19:43 GMT+6
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fast                                                                   \
    ios_base::sync_with_stdio(false);                                          \
    cin.tie(nullptr);                                                          \
    cout.tie(nullptr);

int main()
{
    fast;

    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        if (m == 1)
        {
            cout << 0 << "\n";
            for (int i = 0; i < n; i++)
                cout << "0\n";
            continue;
        }
        if (n > m - 1)
            cout << m << "\n"; // m greater than n.
        else
            cout << n + 1 << "\n";

        for (int i = 0; i < min(n, m - 1); i++)
        {
            for (int j = 0; j < m; j++)
                cout << (i + j) % m << " ";
            cout << "\n";
        }

        if (n > m - 1)
        {
            for (int i = m - 1; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                    cout << j << " ";
                cout << "\n";
            }
        }
    }

    return 0;
}