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
        int N;
        cin >> N;

        vector<int> ee(N);
        for (int i = 0; i < N; i++)
            cin >> ee[i];

        int maxi = *max_element(ee.begin(), ee.end());

        vector<int> freq(maxi + 1, 0);
        for (int i = 0; i < N; i++)
            freq[ee[i]]++;

        int maxo = *max_element(freq.begin(), freq.end());

        cout << N - maxo << "\n";
    }

    return 0;
}