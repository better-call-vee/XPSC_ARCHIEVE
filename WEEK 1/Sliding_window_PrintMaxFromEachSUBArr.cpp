/*
#include <bits/stdc++.h>
using namespace std;

//here we do with indices rather than with the values.

class Solution
{
public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k)
    {
        vector<int> result;
        list<int> go;

        for (int i = 0; i < k; i++)
        {
            while (!go.empty() && arr[i] >= arr[go.back()])
                go.pop_back();

            go.push_back(i);
        }

        for (int i = k; i < n; i++)
        {
            result.push_back(arr[go.front()]);

            while (!go.empty() && go.front() <= i - k) //i-k is the leftmost index of the current subarray. 
                go.pop_front();
             // here,
            // By removing the indices from the front of the go list that are outside the range of
           // the current subarray, we maintain the correctness and efficiency of finding the maximum
           // value. This operation helps in discarding indices that are no longer valid or useful for
           // finding the maximum element in the current subarray.

            while (!go.empty() && arr[i] >= arr[go.back()])
                go.pop_back();

            go.push_back(i);
        }

        result.push_back(arr[go.front()]); //last sub-array's maximum

        return result;
    }
};

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        Solution ob;
        vector<int> res = ob.max_of_subarrays(arr, n, k);
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }

    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int a[n + 1];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int i = 0, j = 0;
    vector<int> v;
    multiset<int> ms; // multiset syntax
    while (j < n)
    {
        ms.insert(a[j]); // everytime starting the loop, we are inserting the element and tracking
        // with the right elements.

        if (j - i + 1 < k) // going until reaching k
            j++;

        else
        {
            v.push_back(*ms.rbegin); // pushing the maximum element of the multiset ms into the vector v.
            auto it = ms.find(a[i]); // finding the left element in the multiset to erase it because
            // we are gonna slide the window
            ms.erase(it);
            i++;
            j++;
        }
    }

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    return 0;
}