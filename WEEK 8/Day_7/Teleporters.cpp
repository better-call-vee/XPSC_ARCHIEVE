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
        ll n, c;
        cin >> n >> c;

        vector<int> tele;

        for (int i = 0; i < n; i++)
        {
            int inp;
            cin >> inp;
            tele.push_back(inp + i + 1);
        }

        sort(tele.begin(), tele.end());

        int trnspd = 0, roam = 0;
        while (c > 0 && roam < n)
        {
            ll subt = tele[roam];
            c = c - subt;
            if (c >= 0)
                trnspd++;

            roam++;
        }

        cout << trnspd << "\n";
    }

    return 0;
}