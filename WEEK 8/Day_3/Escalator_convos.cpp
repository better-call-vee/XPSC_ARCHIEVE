// https://codeforces.com/contest/1851/problem/A

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
        int n, m, k, H;
        cin >> n >> m >> k >> H;

        vector<int> people(n);

        for (int i = 0; i < n; i++)
            cin >> people[i];

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            int chk = abs(people[i] - H);
            if (((chk % k) == 0) && ((chk / k) < m) && (people[i] != H))
                count++;
        }

        cout << count << "\n";
    }

    return 0;
}