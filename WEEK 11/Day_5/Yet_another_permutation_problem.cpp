/*
https://codeforces.com/contest/1858/problem/C
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

        vector<bool> visited(n + 1, false);
        int trk, flag = 1;
        while (flag <= n)
        {
            if (!visited[flag])
            {
                visited[flag] = true;
                trk = flag;
                cout << flag << " ";
                while (trk * 2 <= n)
                {
                    trk *= 2;
                    if (!visited[trk])
                    {
                        cout << trk << " ";
                        visited[trk] = true;
                    }
                }
            }
            flag++;
        }
        cout << "\n";
    }
    return 0;
}