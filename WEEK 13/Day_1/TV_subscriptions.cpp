#include <bits/stdc++.h>
using namespace std;

constexpr int MAX_N = 2E5;
constexpr int MAX_K = 1E6; // better version of const;

int testCases;
int numShows, numTypes, dayNums;
int shows[MAX_N];
int frequency[MAX_K];

void solve()
{
    cin >> numShows >> numTypes >> dayNums;

    for (int i = 0; i < numShows; ++i)
    {
        cin >> shows[i];
        --shows[i]; // 0-based indexing
    }

    int uniqueCount = 0;
    for (int i = 0; i < dayNums; ++i)
        if (frequency[shows[i]]++ == 0)
            uniqueCount++;

    int answer = uniqueCount;

    for (int i = dayNums; i < numShows; ++i)
    {
        if (frequency[shows[i]]++ == 0)
            uniqueCount++;
        if (--frequency[shows[i - dayNums]] == 0)
            uniqueCount--;
        answer = min(answer, uniqueCount);
    }

    for (int i = numShows - dayNums; i < numShows; ++i)
        --frequency[shows[i]];

    cout << answer << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> testCases;

    while (testCases--)
        solve();

    return 0;
}
