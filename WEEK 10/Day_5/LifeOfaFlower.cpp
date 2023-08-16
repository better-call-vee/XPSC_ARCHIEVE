/*
https://codeforces.com/contest/1591/problem/A
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
        vector<int> inp(n);
        for (int i = 0; i < n; i++)
            cin >> inp[i];

        int height = 1;
        if (inp[0] == 1)
            height++;
        for (int i = 1; i < n; i++)
        {
            if (inp[i] == 1 && inp[i - 1] == 0)
                height++;
            else if (inp[i] == 1 && inp[i - 1] == 1)
                height += 5;
            else if (inp[i] == 0 && inp[i - 1] == 0)
            {
                height = -1;
                break;
            }
        }
        cout << height << nln;
    }

    return 0;
}