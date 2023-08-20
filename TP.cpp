#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int n, m, d;
    cin >> n >> m >> d;

    vector<int> s(m + 2);
    for (int i = 1; i <= m; i++)
        cin >> s[i];

    s[0] = -d + 1;
    s[m + 1] = n + 1;

    int sum = 0;
    for (int i = 1; i < s.size(); i++)
        sum += (s[i] - s[i - 1] - 1) / d;

    int ans = n + 1;
    int cnt = 0;

    for (int i = 1; i <= m; i++)
    {
        int res = sum;
        res -= (s[i] - s[i - 1] - 1) / d;
        res -= (s[i + 1] - s[i] - 1) / d;
        res += (s[i + 1] - s[i - 1] - 1) / d;
        res += m - 1;

        if (res < ans)
        {
            ans = res;
            cnt = 1;
        }
        else if (res == ans)
            cnt += 1;
    }
    cout << ans << " " << cnt << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}
