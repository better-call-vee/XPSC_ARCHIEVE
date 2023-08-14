// https://codeforces.com/contest/1602/problem/B

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
#define line cout << '\n';
const string nln = "\n";

int main()
{
    fast;

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);
        vector<int> freq(2001, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            freq[arr[i]]++;
        }

        vector<vector<int>> steps;
        steps.push_back(arr);
        while (true)
        {
            for (int i = 0; i < n; i++)
                arr[i] = freq[arr[i]];

            fill(freq.begin(), freq.end(), 0);
            for (int i = 0; i < n; i++)
                freq[arr[i]]++;

            steps.push_back(arr);

            int count = 0;
            for (int i = 0; i < n; i++)
                if (freq[arr[i]] == arr[i])
                    count++;
            if (count == n)
                break;
        }

        int q;
        cin >> q;

        for (int i = 0; i < q; i++)
        {
            int x, k;
            cin >> x >> k;
            vector<int> divine = (k < steps.size()) ? steps[k] : steps.back();
            cout << divine[x - 1] << nln;
        }
    }

    return 0;
}