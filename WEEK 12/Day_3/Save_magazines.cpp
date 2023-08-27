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
        int n;
        cin >> n;

        string lid;
        cin >> lid;

        vector<pair<char, int>> magazines;

        for (int i = 0; i < n; i++)
        {
            int inp;
            cin >> inp;
            magazines.push_back({lid[i], inp});
        }

        int go = 0, sum = 0;
        while (go < n)
        {
            if (magazines[go].first == '0')
            {
                int cmp = magazines[go].second;
                int mini = INT_MAX;
                go++;
                while (go < n && magazines[go].first == '1')
                {
                    sum += magazines[go].second;
                    mini = min(mini, magazines[go].second);
                    go++;
                }
                if (cmp > mini)
                {
                    sum -= mini;
                    sum += cmp;
                }
                go--;
            }
            else
                sum += magazines[go].second;
            go++;
        }
        cout << sum << "\n";
    }
    return 0;
}