/*
https://codeforces.com/contest/1859/problem/B
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

        ll secMins = 0, lsm = INT_MAX, mini = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int sz;
            cin >> sz;
            vector<ll> trk(sz);
            for (int i = 0; i < sz; i++)
                cin >> trk[i];
            sort(trk.begin(), trk.end());

            mini = min(mini, trk[0]);
            lsm = min(lsm, trk[1]);

            secMins += trk[1];
        }

        cout << secMins - lsm + mini << "\n";
    }

    return 0;
}