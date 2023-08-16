/*
https://codeforces.com/contest/1614/problem/A
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
        int n, l, r, k, cnt = 0;
        cin >> n >> l >> r >> k;
        vector<int> chocos(n);
        ll sum = 0;
        for (int i = 0; i < n; i++)
            cin >> chocos[i];
        sort(chocos.begin(), chocos.end());

        for (int i = 0; i < n; i++)
        {
            if ((chocos[i] >= l) && (chocos[i] <= r) && ((sum + chocos[i]) <= k))
            {
                sum += chocos[i];
                cnt++;
            }
        }

        cout << cnt << "\n"; //target is to take the maximum number of chocobars. that's why sorted.
    }
    return 0;
}
