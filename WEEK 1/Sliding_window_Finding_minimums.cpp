//https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/C

#include <bits/stdc++.h>
using namespace std;

#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);

int main()
{
    fast;

    int N, K;
    cin >> N >> K;

    vector<int> arr(N);

    for (int i = 0; i < N; i++)
        cin >> arr[i];

    int left = 0, right = 0, smol = INT_MAX;
    bool yeah = false;

    while (right < N)
    {
        yeah = false;
        smol = min(arr[right], smol);

        int dif = right - left + 1;

        if (dif < K)
            right++;

        else
        {
            yeah = true;
            cout << smol << " ";
            smol = INT_MAX;
            left = right + 1;
            right++;
        }
    }

    if (yeah)
        return 0;
    else
    {
        cout << smol;
        return 0;
    }
}