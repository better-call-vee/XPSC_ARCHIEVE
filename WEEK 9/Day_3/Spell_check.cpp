// https://codeforces.com/problemset/problem/1722/A

#include <bits/stdc++.h>
using namespace std;

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
        vector<int> check(5, 0);

        int n;
        cin >> n;

        vector<char> go(n);

        bool gotcha = true;

        for (int i = 0; i < n; i++)
        {
            cin >> go[i];
            if (go[i] == 'T' || go[i] == 'i' || go[i] == 'm' || go[i] == 'u' || go[i] == 'r')
            {
                if (go[i] == 'T')
                    check[0]++;
                else if (go[i] == 'i')
                    check[1]++;
                else if (go[i] == 'm')
                    check[2]++;
                else if (go[i] == 'u')
                    check[3]++;
                else if (go[i] == 'r')
                    check[4]++;
            }
        }
        for (int i = 0; i < 5; i++)
        {
            if (check[i] != 1)
            {
                gotcha = false;
                break;
            }
        }

        if (gotcha == true && n == 5)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}