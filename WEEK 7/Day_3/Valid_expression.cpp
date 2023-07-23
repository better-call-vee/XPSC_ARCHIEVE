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

    int t;
    cin >> t;

    while (t--)
    {
        int N, X;
        cin >> N >> X;

        if ((X > N + 1) || (X < 0 && abs(X) >= N))
        {
            cout << -1 << "\n";
            continue;
        }

        if (X < N)
        {
            if (X > 0)
            {
                int mul = N - X - 1;
                for (int i = 0; i < mul; i++)
                    cout << "*";
                for (int i = 0; i < X; i++)
                    cout << "+";
                for (int i = 0; i < (N - (X + mul)); i++)
                    cout << "-";

                cout << "\n";
            }
            else
            {
                int mul = N + X - 1;
                for (int i = 0; i < mul; i++)
                    cout << "*";
                for (int i = 0; i < (N - mul); i++)
                    cout << "-";

                cout << "\n";
            }
        }

        else if (X == N)
        {
            cout << "*";
            for (int i = 0; i < N - 1; i++)
                cout << "+";

            cout << "\n";
        }

        else if (X == N + 1)
        {
            for (int i = 0; i < N; i++)
                cout << "+";
                
            cout << "\n";
        }
    }

    return 0;
}