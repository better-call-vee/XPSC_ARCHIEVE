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
        int N, M;
        cin >> N >> M;

        if (N > M * 6 * 6)
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    return 0;
}