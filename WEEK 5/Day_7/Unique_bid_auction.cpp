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

        vector<int> bids(n, 0);

        int maxo = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> bids[i];
            maxo = max(bids[i], maxo);
        }

        int ans = INT_MAX, idx = -1;
        vector<int> freq(maxo + 1, 0);

        for (int i = 0; i < n; i++)
            freq[bids[i]]++;

        for (int i = 0; i < n; i++)
        {
            if (freq[bids[i]] == 1)
            {
                if (bids[i] < ans)
                {
                    ans = bids[i];
                    idx = i;
                }
            }
        }

        if (idx != -1)
            cout << idx + 1 << "\n";
        else
            cout << idx << "\n";
    }

    return 0;
}