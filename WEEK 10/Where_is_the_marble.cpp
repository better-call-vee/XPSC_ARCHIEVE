/*
https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1415&fbclid=IwAR1AvrmyvzCf-NszbOsz3oAAVcv84Q7gxbY18sasMFrvTrwKFd7DCyiNsHU
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

    int n, q, tc = 1;
    while (cin >> n >> q)
    {
        if (n == 0 && q == 0)
            break;

        vector<int> marbles(n);
        for (int i = 0; i < n; i++)
            cin >> marbles[i];
        sort(marbles.begin(), marbles.end());
        cout << "CASE# " << tc << ":" << nln;
        tc++;
        while (q--)
        {
            int mrb;
            cin >> mrb;
            auto guess = lower_bound(marbles.begin(), marbles.end(), mrb);
            if (guess != marbles.end() && marbles[guess - marbles.begin()] == mrb) // lower bound
                // can give me bigger values, but I need to find the exact value here.
                cout << mrb << " found at " << guess - marbles.begin() + 1 << nln;
            else
                cout << mrb << " not found" << nln;
        }
    }

    return 0;
}