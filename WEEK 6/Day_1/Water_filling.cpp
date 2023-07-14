#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int b1, b2, b3;
        cin >> b1 >> b2 >> b3;

        if (b1 + b2 + b3 <= 1)
            cout << "Water filling time\n";
        else
            cout << "Not now\n";
    }

    return 0;
}