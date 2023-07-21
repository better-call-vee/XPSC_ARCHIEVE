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

    int n, m, k;
    cin >> n >> m >> k;

    vector<int> players(m + 1);

    for (int i = 0; i < m + 1; i++)
        cin >> players[i];

    int Fedor = players[m], friends = 0;

    for (int i = 0; i < m; i++)
    {
        int count = 0;
        int dif = (Fedor ^ players[i]);
        
        while (dif != 0)
        {
            if (dif & 1)
                count++;
            dif = dif >> 1;
        }

        if (count <= k)
            friends++;
    }

    cout << friends << "\n";

    return 0;
}