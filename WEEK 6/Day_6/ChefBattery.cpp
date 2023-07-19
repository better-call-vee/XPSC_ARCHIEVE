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

    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        if (N == 50)
        {
            cout << 0 << "\n";
            continue;
        }

        int min = 0;

        while (N != 50)
        {
            if (N < 50 && N % 2 != 0)
                N = N - 3;

            else if (N < 50 && N % 2 == 0)
                N = N + 2;

            else if (N > 50)
                N = N - 3;

            min++;
        }
        cout << min << "\n";
    }

    return 0;
}