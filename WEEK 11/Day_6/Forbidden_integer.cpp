/*
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
        int n, k, x;
        cin >> n >> k >> x;

        if ((n % 2 != 0 && x == 1 && k < 3) || (k == 1 && x == 1))
        {
            cout << "NO\n";
            continue;
        }

        else
        {
            cout << "YES\n";
            if (x == 1)
            {
                if (n % 2 == 0)
                {
                    cout << n / 2 << "\n";
                    for (int i = 0; i < n / 2; i++)
                        cout << 2 << " ";
                    cout << "\n";
                }

                else
                {
                    cout << n / 2 << "\n";
                    for (int i = 0; i < n / 2 - 1; i++)
                        cout << 2 << " ";
                    cout << 3 << "\n";
                }
            }
            else
            {
                cout << n << "\n";
                for (int i = 0; i < n; i++)
                    cout << 1 << " ";
                cout << "\n";
            }
        }
    }

    return 0;
}