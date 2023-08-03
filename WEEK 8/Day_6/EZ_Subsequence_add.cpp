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

        vector<int> subsq(n);
        vector<int> psum(n, 0);

        bool bara = false;
        int maxo = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> subsq[i];
            if (n == 1 || n == 2)
            {
                if (subsq[i] > 1)
                    bara = true;
            }

            maxo = max(maxo, subsq[i]);
        }

        if (bara)
        {
            cout << "NO\n";
            continue;
        }

        if (n <= 65)
        {
            ll chk = pow(2, n - 2);
            if (maxo > chk && n > 1)
            {
                cout << "NO\n";
                continue;
            }
        }

        sort(subsq.begin(), subsq.end());

        if (subsq[0] != 1)
        {
            cout << "NO\n";
            continue;
        }

        psum[0] = subsq[0];

        for (int i = 1; i < n; i++)
            psum[i] = subsq[i] + psum[i - 1];

        for (int i = 1; i < n; i++)
        {
            if (subsq[i] > psum[i - 1])
            {
                bara = true;
                break;
            }
        }

        if (bara)
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    return 0;
}