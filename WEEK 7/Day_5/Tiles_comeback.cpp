// https://codeforces.com/contest/1851/problem/C

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> tiles(n);
        int maxo = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> tiles[i];
            maxo = max(maxo, tiles[i]);
        }

        vector<int> freq(maxo + 1);
        int subTILL = -1, cnt = 0;

        for (int i = 0; i < n; i++)
        {
            freq[tiles[i]]++;
            if (tiles[i] == tiles[0] && cnt < k)
            {
                subTILL = i;
                cnt++;
            }
        }

        if (freq[tiles[0]] < k)
        {
            cout << "NO\n";
            continue;
        }

        if (tiles[0] == tiles[n - 1] && freq[tiles[0]] >= k)
        {
            cout << "YES\n";
            continue;
        }
    
        for (int i = 0; i <= subTILL; i++)
            if (tiles[i] == tiles[n - 1])
                freq[tiles[n - 1]]--;

        if (freq[tiles[n - 1]] >= k)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
