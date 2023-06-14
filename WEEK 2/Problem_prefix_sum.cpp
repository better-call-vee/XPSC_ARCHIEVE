//https://codeforces.com/problemset/problem/433/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<int> arr2(n);
    arr2 = arr;

    vector<long long> pre1(n, 0);
    pre1[0] = arr[0];
    for (int i = 1; i < n; i++)
        pre1[i] = pre1[i - 1] + arr[i];

    sort(arr.begin(), arr.end());

    vector<long long> pre2(n, 0);
    pre2[0] = arr[0];
    for (int i = 1; i < n; i++)
        pre2[i] = pre2[i - 1] + arr[i];

    int q;
    cin >> q;

    while (q--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (a == 1)
        {
            if (b == c)
                cout << arr2[b - 1] << "\n";
            else if (b == 1)
                cout << pre1[c - 1] << "\n";
            else
                cout << pre1[c - 1] - pre1[b - 2] << "\n";
        }

        if (a == 2)
        {
            if (b == c)
                cout << arr[b - 1] << "\n";
            else if (b == 1)
                cout << pre2[c - 1] << "\n";
            else
                cout << pre2[c - 1] - pre2[b - 2] << "\n";
        }
    }

    return 0;
}
