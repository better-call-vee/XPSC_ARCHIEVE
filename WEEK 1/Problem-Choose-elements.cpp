//https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/C

#include <bits/stdc++.h>
using namespace std;

bool deSort(long long a, long long b) { return a > b; }

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    vector<long long> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end(), deSort);

    long long sum = 0;

    for (int i = 0; i < k; i++)
    {
        if (arr[i] >= 0)
            sum += arr[i];
    }
    cout << sum;

    return 0;
}