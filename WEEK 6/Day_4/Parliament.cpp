#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int N, X;
        cin >> N >> X;

        if (N % 2 == 0 && X >= N / 2)
            cout << "YES\n";
        else if (N % 2 != 0 && X > N / 2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}