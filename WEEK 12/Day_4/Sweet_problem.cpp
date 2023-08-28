/*
https://codeforces.com/problemset/problem/1263/A
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
        int sweet[3];
        cin >> sweet[0] >> sweet[1] >> sweet[2];

        sort(sweet, sweet + 3);
        if (sweet[2] <= sweet[0] + sweet[1])
            cout << ((sweet[0] + sweet[1] + sweet[2]) / 2) << "\n";
        else
            cout << sweet[0] + sweet[1] << "\n";
    }

    return 0;
}