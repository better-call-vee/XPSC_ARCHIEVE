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
        int n;
        cin >> n;

        int room = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int trap, activation;
            cin >> trap >> activation;

            room = min(room, ((trap - 1) + ((activation + 1) / 2)));
        }

        cout << room << "\n";
    }

    return 0;
}