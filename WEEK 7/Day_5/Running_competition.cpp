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

        vector<int> A(N);
        vector<int> B(N);

        for (int i = 0; i < N; i++)
            cin >> A[i];
        for (int i = 0; i < N; i++)
            cin >> B[i];

        int happy = 0;
        for (int i = 0; i < N; i++)
        {
            int mini = min(A[i], B[i]);
            int maxo = max(A[i], B[i]);
            if (mini * 2 < maxo)
                continue;
            happy++;
        }

        cout << happy << "\n";
    }

    return 0;
}