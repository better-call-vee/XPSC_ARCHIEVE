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

        vector<int> freq(27, 0);
        vector<int> predist, suffdist;

        int dist = 0;
        for (int i = 0; i < n; i++)
        {
            if (freq[inp[i] - 96] == 0)
                dist++;
            freq[inp[i] - 96]++;
            predist.push_back(dist);
        }

        freq.assign(freq.size(), 0);
        dist = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (freq[inp[i] - 96] == 0)
                dist++;
            freq[inp[i] - 96]++;
            suffdist.push_back(dist);
        }

        reverse(suffdist.begin(), suffdist.end());

        int spdist = 0;
        for (int i = 0; i < n - 1; i++)
        {
            int cmp = predist[i] + suffdist[i + 1];
            spdist = max(spdist, cmp);
        }

        cout << spdist << "\n";
    }

    return 0;
}