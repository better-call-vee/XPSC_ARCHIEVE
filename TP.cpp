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
        int n, a, q;
        cin >> n >> a >> q;

        string inp;
        cin >> inp;

        if (n == a)
        {
            cout << "YES\n";
            continue;
        }

        int fnl = a, mb = a;
        bool hobei = false;
        for (int i = 0; i < q; i++)
        {
            if (inp[i] == '+')
            {
                fnl++;
                mb++;
            }
            else
            {
                if (fnl != 0)
                    fnl--;
            }
            if (fnl == n)
            {
                hobei = true;
                break;
            }
        }

        if (hobei)
            cout << "YES\n";
        else if (mb >= n)
            cout << "MAYBE\n";
        else
            cout << "NO\n";
    }

    return 0;
}