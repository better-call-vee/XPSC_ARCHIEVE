#include <bits/stdc++.h>
using namespace std;

/*
6 15
10 5 2 7 1 9
4
*/

int main()
{
    int N, K;
    cin >> N >> K;

    vector<int> arr(N);

    for (int i = 0; i < N; i++)
        cin >> arr[i];

    unordered_map<int, int> track; // to track the prefix sum and the indices

    int prefixSum = 0;
    int maxoLen = 0;

    for (int i = 0; i < N; i++)
    {
        prefixSum += arr[i]; //taking the prefixSum.

        if (prefixSum == K) //if the prefixSum is equal to K, we take the max
        //length.
            maxoLen = i + 1;

        if (track.find(prefixSum - K) != track.end()) //and then we find in the map if the current
        //prefix sum - the target Sum is present in the unordered_map or not.
        //if yes, then we just take the length.
        //let's do a simulation.

/*
6 15
10        5        2       7       1       9
(10, 0) (15, 1) (17, 2) (24, 3) (25, 4) (34, 5)
here, at first we set the maxoLen to 2. because prefixSum = 15 which is equivalent to K.(i+1)
then we go on. We look for the max value of maxoLen by finding any prefixsum - target sum value.
here we get 25-15 = 10 which is present in the first index. so we take the maxoLen which is i=5 - 0 = 4
done.
*/
            maxoLen = max(maxoLen, i - track[prefixSum - K]);

        track[prefixSum] = i;
    }

    cout << maxoLen;

    return 0;
}