// https://codeforces.com/contest/1703/problem/A

#include <bits/stdc++.h>
using namespace std;

#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);

int main()
{
    fast;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string inp;
        cin >> inp;

        for (char &low : inp)
            low = tolower(low);

        if (inp == "yes")
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}