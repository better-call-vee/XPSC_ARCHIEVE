#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin >> T;

    while (T--)
    {
        int N, A, B;
        cin >> N >> A >> B;

        int mid = N / 2;

        if (N % 2 == 0)
            cout << A * mid + B * mid << "\n";
        else
            cout << A * mid + B * (mid + 1) << "\n";
    }

    return 0;
}