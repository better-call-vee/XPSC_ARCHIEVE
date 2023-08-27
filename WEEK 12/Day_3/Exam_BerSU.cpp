/*
https://codeforces.com/contest/1185/problem/C1
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

    int n, M;
    cin >> n >> M;

    vector<int> times(n), tcnt(101, 0);
    for (int i = 0; i < n; i++)
        cin >> times[i];

    int total = 0;
    for (int i = 0; i < n; i++)
    {
        int diff = total + times[i] - M, toFail = 0;
        if (diff > 0)
        {
            for (int time = 100; time >= 1; time--)
            {
                int ft = time * tcnt[time];
                if (diff <= ft)
                {
                    toFail += (diff + time - 1) / time; // ceiling
                    break;
                }
                toFail += tcnt[time];
                diff -= ft;
            }
        }
        total += times[i];
        tcnt[times[i]]++;
        cout << toFail << " ";
    }

    return 0;
}