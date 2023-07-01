// https://codeforces.com/problemset/problem/1843/D

#include <bits/stdc++.h>
using namespace std;

vector<long long> v[200005];
long long leaf[200005];
bool visited[200005];
long long count_leaf(long long src)
{
    visited[src] = true;
    long long ans = 0;
    bool last = true;

    for (long long i = 0; i < v[src].size(); i++)
    {
        if (!visited[v[src][i]])
        {
            last = false;
            ans += count_leaf(v[src][i]);
        }
    }

    if (last)
        return leaf[src] = 1; //if this is the last node we return leaf node's count = 1;
    else
        return leaf[src] = ans; //else we go recursively to count the number of leaf nodes.
}

void solve()
{
    long long n;
    cin >> n;
    long long e = n - 1;

    memset(visited, false, sizeof(visited));
    memset(leaf, 0, sizeof(leaf));

    while (e--)
    {
        long long a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    long long q;
    count_leaf(1);
    cin >> q;
    while (q--)
    {
        long long x, y;
        cin >> x >> y;
        cout << leaf[x] * leaf[y] << endl;
    }

    for (long long i = 1; i <= n; i++)
        v[i].clear();
}

int main()
{

    long long t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}