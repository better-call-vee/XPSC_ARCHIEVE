/*
https://codeforces.com/contest/1784/problem/A
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
#define line cout << '\n';
const string nln = "\n";

int main()
{
    fast;

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> monsters(n);
        for (int i = 0; i < n; i++)
            cin >> monsters[i];

        sort(monsters.begin(), monsters.end());
        ll count = 0;

        if (monsters[0] != 1)
        {
            count += monsters[0] - 1;
            monsters[0] = 1;
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (monsters[i + 1] - monsters[i] > 1)
            {
                count += (monsters[i + 1] - monsters[i] - 1);
                monsters[i + 1] = monsters[i] + 1;
            }
        }
        cout << count << nln;
    }

    return 0;
}