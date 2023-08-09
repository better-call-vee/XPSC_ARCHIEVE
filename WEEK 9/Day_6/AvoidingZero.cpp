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
        vector<int> all;

        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            int inp;
            cin >> inp;

            all.push_back(inp);
            sum += inp;
        }

        if (sum == 0)
            cout << "NO\n";

        else
        {
            if (sum > 0)
            {
                cout << "YES\n";
                sort(all.begin(), all.end(), greater<int>());
                for (int i = 0; i < n; i++)
                    cout << all[i] << " ";
                line;
            }
            else
            {
                sort(all.begin(), all.end());
                for (int i = 0; i < n; i++)
                    cout << all[i] << " ";
                line;
            }
        }
    }
    return 0;
}