// https://codeforces.com/contest/1807/problem/G2

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
        ll n;
        cin >> n;

        vector<ll> subsq(n);
        vector<ll> psum(n, 0);

        bool bara = false;
        ll maxo = INT_MIN;
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
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        multiset<int> mp;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            mp.insert(val);
        }
        bool ans = true;
        long long sum = 1;
        int x = 0;
        while (!mp.empty())
        {
            if (*mp.begin() > sum)
            {
                ans = false;
                break;
            }
            else if (x > 0)
            {
                sum += *mp.begin();
                mp.erase(mp.begin());
            }
            else
            {
                mp.erase(mp.begin());
                x++;
                continue;
            }
        }
        if (ans)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        mp.clear();
    }
}
*/