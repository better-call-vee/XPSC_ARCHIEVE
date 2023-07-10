#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);

const int maxN = 51;
char grid[maxN][maxN];
vector<pair<int, int>> stones;

void trav(int x, int y, int n, int m)
{
    queue<pair<int, int>> q;
    q.push({x, y});

    while (!q.empty())
    {
        pair<int, int> u = q.front();
        q.pop();

        int dx_ = u.first + 1;
        int dy_ = u.second + 0;

        if (grid[u.first][u.second] == '*' && dx_ >= 1 && dx_ <= n && dy_ >= 1 && dy_ <= m && grid[dx_][dy_] != 'o' && grid[dx_][dy_] != '*')
        {
            q.push({dx_, dy_});
            grid[u.first][u.second] = '.';
            grid[dx_][dy_] = '*';
        }
    }
}

int main()
{
    fast;
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                cin >> grid[i][j];
                if (grid[i][j] == '*')
                    stones.push_back({i, j});
            }
        }

        for (int i = stones.size() - 1; i >= 0; i--)
            trav(stones[i].first, stones[i].second, n, m);

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
                cout << grid[i][j];

            cout << "\n";
        }

        stones.clear();
        memset(grid, '0', sizeof(grid));
    }
    return 0;
}