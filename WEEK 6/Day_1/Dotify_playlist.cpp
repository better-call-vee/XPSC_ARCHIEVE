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
        int N, K, L;
        cin >> N >> K >> L;

        vector<int> songs;

        for (int i = 0; i < N; i++)
        {
            int m, l;
            cin >> m >> l;

            if (l == L)
                songs.push_back(m);
        }

        if (songs.size() == 0 || (K > songs.size()))
        {
            cout << -1 << "\n";
            continue;
        }

        sort(songs.begin(), songs.end());

        int i = songs.size() - 1, ans = 0;
        while (K--)
        {
            ans += songs[i];
            i--;
        }

        cout << ans << "\n";

        songs.clear();
    }

    return 0;
}
