/*
https://codeforces.com/problemset/problem/1428/C
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
        string inp;
        cin >> inp;

        int cnt = 0;
        for (char c : inp)
        {
            if (c == 'B' && cnt > 0)
                cnt--;
            else
                cnt++;
        }
        cout << cnt << nln;
    }

    return 0;
}