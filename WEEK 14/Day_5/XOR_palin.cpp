/*
  +----------+
  | Better.  |
  | Call.Vee |
  +----+-----+
       |
       V
created: 12th September, 2023 01:56:00 GMT+6
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

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string inp;
        cin >> inp;

        int matchp = 0, mismp = 0;
        for (int i = 0; i < n / 2; i++)
        {
            if (inp[i] == inp[n - i - 1])
                matchp += 2;
            else
            {
                mismp++;
                matchp++;
            }
        }

        string ans(n + 1, '0');
        for (int i = mismp; i <= matchp; i += 2)
        {
            ans[i] = '1';
            if (n % 2 != 0)
                ans[i + 1] = '1';
        }
        cout << ans << "\n";
    }

    return 0;
}