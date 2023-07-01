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
        int Timur = 0, ahead = 0;

        for (int i = 0; i < 4; i++)
        {
            int inp;
            cin >> inp;

            if (i == 0)
                Timur = inp;

            if (inp > Timur)
                ahead++;
        }

        cout << ahead << "\n";
    }

    return 0;
}