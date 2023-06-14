#include <bits/stdc++.h>
using namespace std;

#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);

int main()
{
    fast;

    int n;
    cin >> n;

    vector<int> arr(n);
    int oddcount = 0;
    int minOdd = INT_MAX;
    long long sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
        if (arr[i] % 2 != 0)
        {
            if (arr[i] < minOdd)
                minOdd = arr[i];

            oddcount++;
        }
    }

    if (oddcount % 2 == 0)
        cout << sum;
    else
    {
        sum = sum - minOdd;
        cout << sum;
    }
    return 0;
}

/*
We are given an array. We have to find the maximum even sum.
*/