//https://www.codechef.com/problems/STRAME

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

        string game;
        cin >> game;
        int one = 0, zero = 0;

        if (n == 1)
        {
            cout << "Ramos\n";
            continue;
        }

        for (int i = 0; i < n; i++)
        {
            if (game[i] == '1')
                one++;
            else
                zero++;
        }

        int pair = min(one, zero);

        if (pair % 2 == 0)
            cout << "Ramos\n";
        else
            cout << "Zlatan\n";
    }

    return 0;
}