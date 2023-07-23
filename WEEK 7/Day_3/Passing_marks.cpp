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
        int N, X;
        cin >> N >> X;

        vector<int> marks(N);
        for (int i = 0; i < N; i++)
            cin >> marks[i];

        sort(marks.begin(), marks.end(), greater<int>());

        cout << marks[X - 1] - 1 << "\n";
    }

    return 0;
}