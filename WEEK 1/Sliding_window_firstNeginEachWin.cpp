/*
Input :
N = 5
A[] = {-8, 2, 3, -6, 10}
K = 2
Output :
-8 0 -6 -6
Explanation :
First negative integer for each window of size k
{-8, 2} = -8
{2, 3} = 0 (does not contain a negative integer)
{3, -6} = -6
{-6, 10} = -6

Input :
N = 8
A[] = {12, -1, -7, 8, -15, 30, 16, 28}
K = 3
Output :
-1 -1 -7 -15 -15 0
*/

// We have to print the first negative number from each subarray. If there is no negative number, we
// have to print 0.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int k;
    cin >> k;

    int i = 0, j = 0;
    queue<int> q; // we need a queue to do this.
    while (j < n)
    {
        if (a[j] < 0) // if we get any negative number, we simply push it to the queue
            q.push(a[j]);

        if (j - i + 1 < k) // we just go on until we get the first subarray
            j++;

        else // after reaching the k.
        {
            if (q.empty()) // if queue is empty, we print 0, there is no negative number present
                cout << 0 << " ";

            else
                cout << q.front() << " "; // else, we just print the front of the queue, which is the
            // earliest negative number we entered.

            if (a[i] < 0)
                q.pop(); // when we move the window, i is the leftmost index, we just check that if
            // it's negative or not. Negative means we have to update the queue and the front
            // of the queue will be gone because it's no longer part of the window.
            // suppose, -1 2 -7 8 , k=3
            // after printing -1, we move the window. We pop -1 from the queue and go to
            // 2.

            i++;
            j++;
        }
    }
    return 0;
}