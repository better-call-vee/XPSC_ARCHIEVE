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
        int n;
        cin >> n;

        for (int i = 0; i < n / 2; i++)
            cout << (2 * n) - (i * 2) << " " << i * 2 + 2 << " ";

        cout << "\n";
        vector<int> ans2;
        for (int i = 0; i < n; i++)
            (i % 2 == 0) ? ans2.push_back(i + 1) : ans2.push_back(2 * n - i);

        if (ans2.size() > 2)
            swap(ans2[1], ans2[n - 1]);

        for (auto pr : ans2)
            cout << pr << " ";
        cout << "\n";
    }

    return 0;
}