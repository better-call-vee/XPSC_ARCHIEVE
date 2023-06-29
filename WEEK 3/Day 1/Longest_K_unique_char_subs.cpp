#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    int K;

    cin >> S >> K;

    int ans = -1, unique = 0, l = 0, r = 0;

    vector<int> freq(26, 0);

    while (r < S.size())
    {
        char now = S[r];
        if (freq[now - 'a'] == 0)
            unique++;

        freq[now - 'a']++;

        if (unique > K)
        {
            while (unique > K)
            {
                char left = S[l];
                freq[left - 'a']--;
                if (freq[left - 'a'] == 0)
                    unique--;
                l--;
            }
        }

        if (unique == K)
            ans = max(ans, r - l + 1);

        r++;
    }

    cout << ans;
    return 0;
}