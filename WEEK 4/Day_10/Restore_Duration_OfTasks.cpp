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
        int n;
        cin >> n;

        vector<int> start(n, 0);
        vector<int> end(n, 0);

        for (int i = 0; i < n; i++)
            cin >> start[i];
        for (int i = 0; i < n; i++)
            cin >> end[i];

        for (int i = 0; i < n; i++)
        {
            if (i == 0 || start[i] > end[i - 1])
            {
                cout << end[i] - start[i] << " ";
                continue;
            }

            cout << end[i] - end[i - 1] << " ";
        }

        cout << "\n";
    }

    return 0;
}