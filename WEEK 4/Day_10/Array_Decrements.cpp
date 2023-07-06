// https://codeforces.com/contest/1690/problem/B
/*
We have to have the equal differences between two same indices of the arrays make it happened.
And for the indices which have a value of 0, we just need to maintain and check that if the difference
of that indexed elements is less or equal to the common difference(gap)  or not. if yes, then it's ok,
else we're done with that case.
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n, 0);
        vector<int> b(n, 0);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        bool got = false, failed = false;
        int gap = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            if (b[i] > a[i])
            {
                cout << "NO\n";
                failed = true;
                break;
            }
            if (b[i] != 0 && !got)
            {
                gap = a[i] - b[i];
                got = true;
            }
        }

        if (failed)
            continue;

        for (int i = 0; i < n; i++)
        {
            if (b[i] == 0)
            {
                if (a[i] - b[i] <= gap)
                    continue;
            }

            else
            {
                if (a[i] - b[i] == gap)
                    continue;

                else
                {
                    cout << "NO\n";
                    failed = true;
                    break;
                }
            }
        }
        if (!failed)
            cout << "YES\n";
    }

    return 0;
}