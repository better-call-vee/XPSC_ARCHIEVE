/*
https://www.codechef.com/problems/CHNGOR
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

    int T;
    cin >> T;

    while (T--)
    {
        int N, inp;
        cin >> N;

        ll ans = 0;
        for (int i = 0; i < N; i++)
        {
            cin >> inp;
            ans = ans | inp;
        }
        cout << ans << "\n";
    }

    return 0;
}