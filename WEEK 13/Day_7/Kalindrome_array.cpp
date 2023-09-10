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

        vector<int> kalin(n);
        for (int i = 0; i < n; i++)
            cin >> kalin[i];

        vector<int> rev = kalin;
        reverse(rev.begin(), rev.end());

        if (kalin == rev)
        {
            cout << "YES\n";
            continue;
        }

        bool kalindrome = true;
        for (int i = 0; i < n; i++)
        {
            if (kalin[i] != rev[i])
            {
                int del = rev[i];
                int del2 = kalin[i];
                bool paisi = false;
                vector<int> kcp = kalin;
                while (true)
                {
                    auto it = find(kalin.begin(), kalin.end(), del);
                    auto it2 = find(kcp.begin(), kcp.end(), del2);
                    if (it == kalin.end() || it2 == kcp.end())
                        break;

                    kalin.erase(it);
                    kcp.erase(it2);
                    vector<int> rev2 = kalin;
                    vector<int> rev3 = kcp;
                    reverse(rev2.begin(), rev2.end());
                    reverse(rev3.begin(), rev3.end());
                    if (rev2 == kalin || rev3 == kcp)
                    {
                        paisi = true;
                        break;
                    }
                }
                if (!paisi)
                    kalindrome = false;
                break;
            }
        }
        if (kalindrome)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}