/*
https://codeforces.com/contest/1605/problem/A
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
        int a, b, c;
        cin >> a >> b >> c;

        int cmp = (a + c) - (b * 2);
        if (cmp % 3 == 0)
            cout << 0 << nln;
        else
            cout << 1 << nln;
    }

    return 0;
}