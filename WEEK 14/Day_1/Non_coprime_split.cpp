#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fast                                                                   \
    ios_base::sync_with_stdio(false);                                          \
    cin.tie(nullptr);                                                          \
    cout.tie(nullptr);

int main()
{
    fast;

    int t;
    cin >> t;

    while (t--)
    {
        int l, r;
        cin >> l >> r;

        bool paisi = false;
        for (int a_plus_b = max(4, l); a_plus_b <= r; a_plus_b++)
        {
            for (int b = 2; b * b <= a_plus_b; b++)
                if (a_plus_b % b == 0)
                {
                    cout << a_plus_b - b << " " << b << "\n";
                    paisi = true;
                    break;
                }
            if (paisi)
                break;
        }

        if (!paisi)
            cout << "-1\n";
    }

    return 0;
}