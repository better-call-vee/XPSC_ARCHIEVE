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
        int A1, A2, B1, B2, C1, C2;
        cin >> A1 >> A2 >> B1 >> B2 >> C1 >> C2;

        int hor = 0, ver = 0;
        if ((B1 > A1 && C1 > A1) || (B1 < A1 && C1 < A1))
        {
            if (A1 > B1 && C1 < A1)
                hor = abs(max(B1, C1) - A1);
            else
                hor = abs(min(B1, C1) - A1);
            if ((A2 > B2 && A2 > C2) || (A2 < B2 && A2 < C2))
            {
                if (A2 > B2 && A2 > C2)
                    ver = abs(max(B2, C2) - A2);
                else
                    ver = abs(min(B2, C2) - A2);
            }

            else
                ver = 0;

            cout << hor + ver + 1 << "\n";
        }

        else if ((A2 > B2 && A2 > C2) || (A2 < B2 && A2 < C2))
        {
            if (A2 > B2 && A2 > C2)
                ver = abs(max(B2, C2) - A2);
            else
                ver = abs(min(B2, C2) - A2);
            if ((B1 > A1 && C1 > A1) || (B1 < A1 && C1 < A1))
            {
                if (A1 > B1 && C1 < A1)
                    hor = abs(max(B1, C1) - A1);
                else
                    hor = abs(min(B1, C1) - A1);
            }

            else
                hor = 0;

            cout << hor + ver + 1 << "\n";
        }

        else
            cout << 1 << "\n";
    }
    return 0;
}