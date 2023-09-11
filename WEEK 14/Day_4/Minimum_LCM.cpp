/*
  +----------+
  | Better.  |
  | Call.Vee |
  +----+-----+
       |
       V
created: 11th September, 2023 16:21:54 GMT+6
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
        int n, ans = 1;
        cin >> n;

        for (int i = 2; i * i <= n; i++)
            if (n % i == 0)
                ans = max(ans, n / i);

        cout << ans << " " << n - ans << "\n";
    }

    return 0;
}