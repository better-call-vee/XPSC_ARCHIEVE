
// https://codeforces.com/problemset/problem/295/A
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

    int n, m, k;
    cin >> n >> m >> k;

    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<pair<pair<ll, ll>, ll>> ops(m + 1);

    for (int i = 1; i <= m; i++)
        cin >> ops[i].first.first >> ops[i].first.second >> ops[i].second;

    map<ll, ll> ops_freq_trk;
    for (int i = 0; i < k; i++)
    {
        int a, b;
        cin >> a >> b;
        ops_freq_trk[a]++;
        ops_freq_trk[b + 1]--; // because query operations start from 1.
    }

    vector<ll> operation_frequency(m + 1, 0);
    ll cnt = 0;
    for (int i = 1; i <= m; i++)
    {
        if (ops_freq_trk.count(i))
            cnt += ops_freq_trk[i];

        operation_frequency[i] = cnt;
    }

    map<ll, ll> ops_exe_trk;
    for (int i = 1; i <= m; i++)
    {
        ll l = ops[i].first.first;
        ll r = ops[i].first.second;
        ll add = ops[i].second;

        ops_exe_trk[l - 1] += add * operation_frequency[i]; // because index array is 0-indexed
        ops_exe_trk[r] -= add * operation_frequency[i];
    }

    vector<ll> operation_effect(n, 0);
    cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (ops_exe_trk.count(i))
            cnt += ops_exe_trk[i];

        operation_effect[i] = cnt;
    }

    for (int i = 0; i < n; i++)
        cout << arr[i] + operation_effect[i] << " ";

    return 0;
}
/*
Another version, more efficient with vector =>

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

    int n, m, k;
    cin >> n >> m >> k;

    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<pair<pair<ll, ll>, ll>> ops(m + 1);

    for (int i = 1; i <= m; i++)
        cin >> ops[i].first.first >> ops[i].first.second >> ops[i].second;

    vector<ll> operation_frequency(m + 2, 0);
    for (int i = 0; i < k; i++)
    {
        int a, b;
        cin >> a >> b;
        operation_frequency[a]++;
        operation_frequency[b + 1]--;
    }

    for (int i = 1; i <= m; i++)
        operation_frequency[i] += operation_frequency[i - 1];

    vector<ll> operation_effect(n + 2, 0);
    for (int i = 1; i <= m; i++) {
        ll l = ops[i].first.first;
        ll r = ops[i].first.second;
        ll add = ops[i].second;
        operation_effect[l - 1] += add * operation_frequency[i];
        operation_effect[r] -= add * operation_frequency[i];
    }

    for (int i = 1; i < n; i++)
        operation_effect[i] += operation_effect[i - 1];

    for (int i = 0; i < n; i++)
        cout << arr[i] + operation_effect[i] << " ";

    return 0;
}


*/
/*
The TLE version:


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

    int n, m, k;
    cin >> n >> m >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<pair<pair<ll, ll>, ll>> ops(m + 1);

    for (int i = 1; i <= m; i++)
        cin >> ops[i].first.first >> ops[i].first.second >> ops[i].second;

    vector<ll> presums(n, 0);
    map<ll, ll> greg;
    for (int i = 0; i < k; i++) //we skip this part efficiently in the upper efficient version
    {
        int a, b;
        cin >> a >> b;

        for (int j = a; j <= b; j++)
        {
            ll l = ops[j].first.first;
            ll r = ops[j].first.second;
            ll add = ops[j].second;

            greg[l - 1] += add;
            if (r < n)
                greg[r] -= add;
        }
    }

    ll cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (greg.count(i))
            cnt += greg[i];

        presums[i] = cnt;
    }

    for (int i = 0; i < n; i++)
        cout << presums[i] + arr[i] << " ";
    return 0;
}

*/