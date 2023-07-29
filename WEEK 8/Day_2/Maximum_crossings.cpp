// https://codeforces.com/contest/1676/problem/H1

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
        int n;
        cin >> n;

        vector<int> wires(n);
        for (int i = 0; i < n; i++)
            cin >> wires[i];

        stack<int> cmp;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            int co = wires[i];
            vector<int> store;
            while (!cmp.empty() && cmp.top() >= co)
            {
                int go = cmp.top();
                cmp.pop();
                cnt++;
                store.push_back(go);
            }
            cmp.push(co);
            for (int i = store.size() - 1; i >= 0; i--)
                cmp.push(store[i]);

            store.clear();
        }
        cout << cnt << "\n";
    }

    /*
    another method:
     while (t--)
    {
        int n;
        cin >> n;

        vector<int> wires(n);
        for (int i = 0; i < n; i++)
            cin >> wires[i];

        multiset<int> cmp;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            int co = wires[i];
            auto it = cmp.lower_bound(co);  // Find the first element greater than co
            cnt = cnt + distance(it, cmp.end()); // Count elements greater than co
            cmp.insert(co);                 // Insert the new wire into the multiset
        }
        cout << cnt << "\n";
    }
    */

    return 0;
}