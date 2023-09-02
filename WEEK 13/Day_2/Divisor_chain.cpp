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

bool twos_power(int n)
{
    return (n & (n - 1)) == 0;
}

int main()
{
    fast;

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> ans;
        ans.push_back(n);
        while (n != 1)
        {
            if (twos_power(n))
            {
                n = n / 2;
                ans.push_back(n);
            }
            else
            {
                while (!twos_power(n))
                {
                    int r_most_set = n & (-n);
                    n = n - r_most_set;
                    ans.push_back(n);
                }
            }
        }
        cout << ans.size() << "\n";
        for (auto prnt : ans)
            cout << prnt << " ";
        cout << "\n";
    }

    return 0;
}