#include <bits/stdc++.h>
using namespace std;
// https://codeforces.com/problemset/problem/1185/B
typedef long long ll;
#define fast                                                                   \
    ios_base::sync_with_stdio(false);                                          \
    cin.tie(nullptr);                                                          \
    cout.tie(nullptr);

vector<pair<char, int>> keys(const string &inp)
{
    vector<pair<char, int>> trk;
    int sz = inp.length();

    for (int i = 0, j; i < sz; i = j) // i changes to j's position because you
                                      // start next calculation from there
    {
        for (j = i + 1; j < sz && inp[i] == inp[j]; j++)
            ;
        trk.emplace_back(inp[i], j - i); // j-i means the consecutive
        // count of that selected letter.
    }
    return trk;
}

int main()
{
    fast;

    int t;
    cin >> t;

    while (t--)
    {
        string a, b;
        cin >> a >> b;

        auto cmp = keys(a);
        auto cmp2 = keys(b);
        int sz1 = cmp.size();
        int sz2 = cmp2.size();

        if (sz1 != sz2)
        {
            cout << "NO\n";
            continue;
        }

        else
        {
            bool hobena = false;
            for (int i = 0; i < sz1; i++)
            {
                if (cmp[i].first != cmp2[i].first or
                    cmp2[i].second < cmp[i].second) // not the same sequence
                // or a letter missing in the second string
                {
                    hobena = true;
                    break;
                }
            }

            if (hobena)
                cout << "NO\n";
            else
                cout << "YES\n";
        }
    }

    return 0;
}