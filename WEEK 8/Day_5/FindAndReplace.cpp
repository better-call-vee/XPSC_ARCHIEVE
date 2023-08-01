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
        string inp;
        cin >> inp;

        vector<int> track(27, -1);
        int curr = 1;
        track[inp[0] - 96] = 0;
        bool bara = false;
        for (int i = 1; i < n; i++)
        {
            if (track[inp[i] - 96] != -1 && track[inp[i] - 96] != curr)
            {
                bara = true;
                break;
            }

            if (track[inp[i] - 96] == -1)
                track[inp[i] - 96] = curr;

            if (curr == 1)
                curr = 0;
            else
                curr = 1;
        }

        if (bara)
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    return 0;
}