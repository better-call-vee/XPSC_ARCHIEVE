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
    
    vector<int> nums(4);

    for (int i = 0; i < 4; i++)
        cin >> nums[i];

    int maxo = *max_element(nums.begin(), nums.end());

    for (int i = 0; i < 4; i++)
        if (nums[i] != maxo)
            cout << maxo - nums[i] << " ";

    return 0;
}