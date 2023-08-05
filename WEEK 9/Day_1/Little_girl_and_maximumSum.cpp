// https://codeforces.com/problemset/problem/276/C
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

    int n, q;
    cin >> n >> q;

    vector<ll> array(n);
    for (int i = 0; i < n; i++)
        cin >> array[i];

    sort(array.begin(), array.end(), greater<ll>());

    map<int, ll> freq;
    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        freq[l - 1]++; // the array is 0-indexed but the question is 1-indexed.
        if (r < n)
            freq[r]--;
    }

    for (auto go : freq)
    {
        cout << "For index : " << go.first << " Count/change : " << go.second;
        cout << "\n";
    }

    vector<ll> freqVec(n);
    ll count = 0;
    for (int i = 0; i < n; i++)
    {
        if (freq.count(i))
            count += freq[i];
        freqVec[i] = count;
    }

    cout << "Counts before sorting: ";
    for (int i = 0; i < n; i++)
        cout << freqVec[i] << " ";

    cout << "\n";

    sort(freqVec.begin(), freqVec.end(), greater<ll>());

    ll ans = 0;
    for (int i = 0; i < n; i++)
        ans += freqVec[i] * array[i];

    cout << ans << "\n";

    return 0;
}
