// https://codeforces.com/contest/1863/problem/D
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fast                                                                   \
    ios_base::sync_with_stdio(false);                                          \
    cin.tie(nullptr);                                                          \
    cout.tie(nullptr);

int main()
{
    fast;

    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<string> dom(n);
        for (int i = 0; i < n; i++)
            cin >> dom[i];

        bool baal = false;
        for (int i = 0; i < n; i++)
        {
            int hor = 0;
            for (int j = 0; j < m; j++)
                if (dom[i][j] == 'U')
                    hor++;
            if (hor % 2 != 0)
            {
                cout << -1 << "\n";
                baal = true;
                break;
            }
        }
        if (baal)
            continue;
        for (int i = 0; i < m; i++)
        {
            int ver = 0;
            for (int j = 0; j < n; j++)
                if (dom[j][i] == 'L')
                    ver++;
            if (ver % 2 != 0)
            {
                cout << -1 << "\n";
                baal = true;
                break;
            }
        }
        if (baal)
            continue;

        vector<string> ans = dom;
        vector<vector<bool>> visited(n, vector<bool>(m, false));

        for (int i = 0; i < n; i++)
        {
            int row = 0;
            for (int j = 0; j < m; j++)
            {
                if (visited[i][j])
                    continue;
                if (dom[i][j] == 'U')
                {
                    visited[i][j] = 1;
                    visited[i + 1][j] = 1;
                    if (row == 0)
                    {
                        ans[i][j] = 'W';
                        ans[i + 1][j] = 'B';
                    }
                    else
                    {
                        ans[i][j] = 'B';
                        ans[i + 1][j] = 'W';
                    }
                    row ^= 1;
                }
            }
        }

        for (int i = 0; i < m; i++)
        {
            int col = 0;
            for (int j = 0; j < n; j++)
            {
                if (visited[j][i])
                    continue;
                if (dom[j][i] == 'L')
                {
                    visited[j][i] = 1;
                    visited[j][i + 1] = 1;
                    if (col == 0)
                    {
                        ans[j][i] = 'W';
                        ans[j][i + 1] = 'B';
                    }
                    else
                    {
                        ans[j][i] = 'B';
                        ans[j][i + 1] = 'W';
                    }
                    col ^= 1;
                }
            }
        }

        for (auto pr : ans)
            cout << pr << "\n";
    }

    return 0;
}