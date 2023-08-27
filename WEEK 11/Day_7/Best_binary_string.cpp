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
        string inp;
        cin >> inp;

        char rep = '0';
        for (auto &chr : inp)
        {
            if (chr == '?')
                chr = rep;
            rep = chr;
        }

        cout << inp << "\n";
    }

    return 0;
}

// https://codeforces.com/contest/1837/problem/C