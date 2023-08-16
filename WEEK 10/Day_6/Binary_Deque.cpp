/*
https://codeforces.com/problemset/problem/1692/E
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
        int n, s;
        cin >> n >> s;

        vector<int> bin(n);
        for (int i = 0; i < n; i++)
            cin >> bin[i];

        int left = 0, right = 0, sum = 0, ans = -1;

        while (right < n)
        {
            sum += bin[right];

            while (sum > s && left <= right)
            {
                sum -= bin[left];
                left++;
            }

            if (sum == s)
            {
                int WindowSz = right - left + 1;
                ans = max(ans, WindowSz);
            }
            right++;
        }

        if (ans == -1)
            cout << ans << "\n";
        else
            cout << n - ans << "\n";
    }
    return 0;
}