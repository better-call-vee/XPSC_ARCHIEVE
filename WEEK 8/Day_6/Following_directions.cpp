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

        int dx[4] = {-1, 1, 0, 0};
        int dy[4] = {0, 0, 1, -1};

        int dx_ = 0, dy_ = 0;
        bool paisi = false;
        for (int i = 0; i < n; i++)
        {
            if (inp[i] == 'L')
            {
                dx_ += dx[0];
                dy_ += dy[0];
            }

            else if (inp[i] == 'R')
            {
                dx_ += dx[1];
                dy_ += dy[1];
            }

            else if (inp[i] == 'U')
            {
                dx_ += dx[2];
                dy_ += dy[2];
            }

            else if (inp[i] == 'D')
            {
                dx_ += dx[3];
                dy_ += dy[3];
            }

            if (dx_ == 1 && dy_ == 1)
            {
                paisi = true;
                break;
            }
        }

        if (paisi)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}