/*
https://codeforces.com/contest/1864/problem/B
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
        int n, k;
        cin >> n >> k; // n > k

        string inp;
        cin >> inp;

        string even = "", odd = "";
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
                even += inp[i];
            else
                odd += inp[i]; // 0-indexed
        }
        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end());

        if (k % 2 == 0)
        {
            sort(inp.begin(), inp.end());
            cout << inp << "\n";
        }

        else
        {
            int Etrk = 0, Otrk = 0;
            for (int i = 0; i < n; i++)
                if (i % 2 == 0)
                    cout << even[Etrk++];
                else
                    cout << odd[Otrk++];
            cout << "\n";
        }
    }

    return 0;
}