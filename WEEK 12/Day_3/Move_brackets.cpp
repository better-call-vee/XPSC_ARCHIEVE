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

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string inp;
        cin >> inp;

        stack<int> trk;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (!trk.empty())
            {
                if (inp[i] == ')' && trk.top() == '(')
                    trk.pop();
                else if (inp[i] == ')' && trk.top() == ')')
                    cnt++;
                else if (inp[i] == '(')
                    trk.push(inp[i]);
            }
            else
            {
                if (inp[i] == '(')
                    trk.push(inp[i]);
                else
                    cnt++;
            }
        }
        cout<< cnt<<"\n";
    }

    return 0;
}