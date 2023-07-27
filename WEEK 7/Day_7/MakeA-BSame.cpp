// https://www.codechef.com/problems/MAKE_AB_SAME
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;

        vector<int> bin(n);
        vector<int> bin2(n);

        int zero = 0, one = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> bin[i];
            if (bin[i] == 0)
                zero++;
            else
                one++;
        }

        int Z = 0, O = 0;
        bool holo = true;
        for (int i = 0; i < n; i++)
        {
            cin >> bin2[i];
            if (bin2[i] == 0)
                Z++;
            else
                O++;

            if (bin[i] == 1 && bin2[i] == 0)
                holo = false;
        }

        if (!holo)
        {
            cout << "NO\n";
            continue;
        }

        if (one == 0 && O > 0)
            cout << "NO\n";
        else if (bin2[n - 1] != bin[n - 1] || bin[0] != bin2[0])
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    return 0;
}