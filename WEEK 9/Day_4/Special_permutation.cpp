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
        int n, a, b;
        cin >> n >> a >> b;

        int half = n / 2;
        vector<int> ans;

        if (a <= half)
        {
            if (b > half)
            {
                ans.push_back(a);
                int pb = half + 1;
                while (pb <= n)
                {
                    if (pb != b)
                        ans.push_back(pb);
                    pb++;
                }
                ans.push_back(b);
                pb = 1;
                while (pb <= half)
                {
                    if (pb != a)
                        ans.push_back(pb);
                    pb++;
                }
            }
        }

        else if (a == half + 1)
        {
            if (b == a - 1)
            {
                ans.push_back(a);
                int pb = a + 1;
                while (pb <= n)
                {
                    ans.push_back(pb);
                    pb++;
                }
                ans.push_back(b);
                pb = 1;
                while (pb <= a - 1)
                {
                    ans.push_back(pb);
                    pb++;
                }
            }
        }

        if (ans.size() == 0)
        {
            cout << -1 << "\n";
            continue;
        }
        for (int i = 0; i < n; i++)
            cout << ans[i] << " ";
        cout << "\n";
    }

    return 0;
}