#include <bits/stdc++.h>
using namespace std;

int main()
{

    int N, K;
    cin >> N >> K;

    vector<int> Arr(N);

    for (int i = 0; i < N; i++)
        cin >> Arr[i];

    int l = 0, r = 0, sum = 0, ans = -1;

    while (r < N)
    {
        sum += Arr[r];

        if (r - l + 1 < K)
            r++;

        else if (r - l + 1 == K)
        {
            ans = max(sum, ans);
            sum -= Arr[l];
            l++;
            r++;
        }
    }

    cout << ans;

    return 0;
}