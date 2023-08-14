/*
https://codeforces.com/contest/1605/problem/B
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
        string inp;
        cin >> inp;
        string srtd = inp;
        sort(srtd.begin(), srtd.end());

        string ans = "";
        int k = 0;
        for (int i = 0; i < n; i++)
        {
            if ((inp[i] == '1' && srtd[i] == '0') || (inp[i] == '0' && srtd[i] == '1'))
            {
                ans += to_string(i + 1);
                ans += " ";
                k++;
            }
        }

        if (k > 0)
        {
            cout << 1 << nln;
            cout << k << " " << ans;
        }
        else
            cout << 0;
        line;
    }

    return 0;
}