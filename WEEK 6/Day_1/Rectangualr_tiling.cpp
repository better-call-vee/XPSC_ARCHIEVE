#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        if (((a * b) % 4 == 0) && (2 * (a + b) % 4 == 0))
            cout << "YES\n";
        else if (2 * (a + b) % 4 == 0)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}