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

int main()
{
    fast;

    string inp;
    cin >> inp;
    int n = inp.size();

    int cnt = 0;
    stack<char> trk;

    for (int i = 0; i < n; i++)
    {
        if (trk.empty())
        {
            trk.push(inp[i]);
            continue;
        }
        else
        {
            if (trk.top() == inp[i])
            {
                trk.pop();
                cnt++;
            }
            else
                trk.push(inp[i]);
        }
    }

    if (cnt % 2 == 0)
        cout << "NO\n";
    else
        cout << "YES\n";

    return 0;
}