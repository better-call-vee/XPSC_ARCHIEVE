// https://codeforces.com/contest/1849/problem/B

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
        int n, k;
        cin >> n >> k;

        vector<pair<int, int>> Monsters;
        vector<int> result;

        for (int i = 0; i < n; i++)
        {
            int inp;
            cin >> inp;
            if (inp % k == 0)
                result.push_back(i + 1); // what's the reason behind this?
                                         // we at first need to push back the modulo 0 monsters.
            /*
             look, k = 3
             3 4 7 2 1.
             3 4 4 2 1.
             3 1 4 2 1.
             3 1 1 2 1.
             0 1 1 2 1. See? the modulo monster is being killed at first despite it's being
             lower.
             */
            else
                Monsters.push_back({inp % k, i + 1});
        }

        /*
        for (const auto &monster : Monsters)
        {
            cout << "Remaining health: " << monster.first << " Index:" << monster.second << " ";
            cout << "\n";
        }
        */
        sort(Monsters.begin(), Monsters.end(), [&](pair<int, int> a, pair<int, int> b)
             {
            if(a.first == b.first) return a.second < b.second;
            return a.first > b.first; });

        for (int monster : result)
            cout << monster << " ";

        for (const auto &monster : Monsters)
            cout << monster.second << " ";
        cout << "\n";
    }

    return 0;
}
