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
        int n;
        cin >> n;

        string inp;
        cin >> inp;

        string ans = "";
        vector<int> decode(n, 0);

        for (int i = 0; i < n; i++)
        {
            int num = inp[i] - '0';
            decode[i] = num;
        }

        char first;

        for (int i = n - 1; i >= 0; i--)
        {
            if (decode[i] > 0)
                first = static_cast<char>(decode[i] - 1 + 'a');

            else if (decode[i] == 0)
            {
                if (decode[i - 2] == 1)
                    first = static_cast<char>(decode[i - 1] - 1 + 10 + 'a');

                else if (decode[i - 2] == 2)
                    first = static_cast<char>(decode[i - 1] - 1 + 20 + 'a');

                i -= 2;
            }

            ans += first;
        }
        reverse(ans.begin(), ans.end());
        cout << ans << "\n";
    }
    return 0;
}
