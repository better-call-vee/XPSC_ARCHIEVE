#include <unordered_map>
using namespace std;

int lenOfLongSubarr(int A[], int n, int K)
{
    unordered_map<int, int> prefixSumCount;
    int prefixSum = 0;
    int maxLength = 0;

    for (int i = 0; i < n; i++)
    {
        prefixSum += A[i];

        // If prefix sum equals K, update maxLength
        if (prefixSum == K)
            maxLength = i + 1;

        // If (prefixSum - K) exists in prefixSumCount, update maxLength
        if (prefixSumCount.find(prefixSum - K) != prefixSumCount.end())
            maxLength = max(maxLength, i - prefixSumCount[prefixSum - K]);

        // Store the count of prefixSum in prefixSumCount
        prefixSumCount[prefixSum] = i; 
    }

    return maxLength;
}

int main()
{
    int A[] = {10, 5, 2, 7, 1, 9};
    int n = sizeof(A) / sizeof(A[0]);
    int K = 15;

    int maxLength = lenOfLongSubarr(A, n, K);

    cout << "Length of the longest subarray with sum " << K << ": " << maxLength << endl;

    return 0;
}