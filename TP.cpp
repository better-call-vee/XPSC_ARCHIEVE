#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> stones(n);
    int total_weight = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> stones[i];
        total_weight += stones[i];
    }

    int minDiff = total_weight; // Initialize to the maximum possible difference

    // Iterate through all possible subsets using a bitmask
    for (int mask = 0; mask < (1 << n); mask++)
    {
        int weight_pile1 = 0;

        // Calculate the weight of the first pile based on the bitmask
        for (int i = 0; i < n; i++)
        {
            if (mask & (1 << i))
            {
                weight_pile1 += stones[i];
            }
        }

        // Calculate the weight of the second pile
        int weight_pile2 = total_weight - weight_pile1;

        // Update the minimum difference
        minDiff = min(minDiff, abs(weight_pile1 - weight_pile2));
    }

    cout << minDiff;
    return 0;
}
