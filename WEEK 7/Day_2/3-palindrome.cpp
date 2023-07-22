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

    int n;
    cin >> n;

    bool a = true, b = false;
    int a_cnt = 0, b_cnt = 0;
    string ans = "";
    for (int i = 1; i <= n; i++)
    {
        if (a)
        {
            a_cnt++;
            ans += 'a';
            if (a_cnt == 2)
            {
                b = true;
                a = false;
                a_cnt = 0;
            }
        }

        else if (b)
        {
            b_cnt++;
            ans += 'b';
            if (b_cnt == 2)
            {
                a = true;
                b = false;
                b_cnt = 0;
            }
        }
    }

    cout << ans;

    return 0;
}