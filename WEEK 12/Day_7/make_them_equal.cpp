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
#define fast                                                                   \
    ios_base::sync_with_stdio(false);                                          \
    cin.tie(nullptr);                                                          \
    cout.tie(nullptr);

int main()
{
    fast;

    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    if (n == 1)
    {
        cout << 0;
        return 0;
    }

    int d = INT_MAX, fake_d = INT_MAX;
    for (int pnt = 1; pnt <= 100; pnt++)
    {
        int chk = 0, i = 0;
        while (chk == 0 and i < n)
        {
            chk = abs(pnt - nums[i]);
            i++;
        }
        for (int j = 0; j < n; j++)
        {
            int cmp = abs(pnt - nums[j]);

            if (chk != cmp && cmp != 0)
            {
                fake_d = INT_MAX;
                break;
            }
            else
                fake_d = chk;
        }
        d = min(fake_d, d);
    }

    if (d == INT_MAX)
        cout << -1 << "\n";
    else
        cout << d << "\n";

    return 0;
}