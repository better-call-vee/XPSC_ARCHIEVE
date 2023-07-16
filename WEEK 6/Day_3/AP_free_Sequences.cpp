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

        vector<int> AP(n);

        for (int i = 0; i < n; i++)
            cin >> AP[i];

        bool found = false;
        for (int i = 0; i < n - 2; i++)
        {
            for (int j = i + 1; j < n - 1; j++)
            {
                int dif = AP[j] - AP[i] + AP[j];
                for (int k = j + 1; k < n; k++)
                {
                    if (AP[k] == dif)
                    {
                        cout << "No\n";
                        found = true;
                        break;
                    }
                }
                if (found)
                    break;
            }
            if (found)
                break;
        }

        if (!found)
            cout << "Yes\n";
    }

    return 0;
}