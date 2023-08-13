// https://codeforces.com/contest/1602/problem/A

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
        string inp;
        cin >> inp;
        string left = inp;
        sort(inp.begin(), inp.end());
        cout << inp[0] << " ";

        size_t ind = left.find(inp[0]);
        left.erase(ind, 1);

        cout << left << nln;
    }

    return 0;
}