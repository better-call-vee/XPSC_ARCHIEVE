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
        double N, M;
        cin >> N >> M;

        double discount = (N * 10) / 100;

        if (N - discount < M)
            cout << "ONLINE\n";
        else if (N - discount == M)
            cout << "EITHER\n";
        else
            cout << "DINING\n";
    }

    return 0;
}