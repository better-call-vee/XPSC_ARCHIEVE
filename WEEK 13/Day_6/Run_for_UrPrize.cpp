/*
//https://codeforces.com/contest/938/problem/B
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

    int n;
    cin >> n;

    vector<int> prizes(n);

    for (int i = 0; i < n; i++)
        cin >> prizes[i];

    int trk = 0, scnd = 1e6;
    for (int i = 0; i < n; i++)
    {
        int minicmp = min(prizes[i] - 1, scnd - prizes[i]);
        if (trk < minicmp)
            trk = minicmp;
    }
    cout << trk;

    return 0;
}
