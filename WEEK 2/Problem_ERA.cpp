#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;

        vector<pair<int, int>> arr;
        for (int i = 0; i < n; i++)
        {
            int ele;
            cin >> ele;
            if (ele <= i + 1)
            {
                ele = i + 1;
                arr.push_back({ele, i + 1});
            }
            else
                arr.push_back({ele, i + 1});
        }

        int store = 0, add = 0, baal = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i].first != arr[i].second)
            {
                baal = arr[i].first - arr[i].second;
                if (baal > store)
                {
                    add = baal - store;
                    store += add;
                }
            }
        }
        cout << store << "\n";
    }

    return 0;
}

/*
You will be given an array and it's size with a number of test cases. You have to modify
the array until it's all indices have the value less or equal than their index values.
After every modification, the modified array will be our main array.  You have to print
the number of modification operations to reach our target array.
For example:
5
1 2 5 7 4
here, value 1's index is 1. Which is equal to it's index value 1. Next 2, which is also
equal to it's index value. Next up 5, which is greater than it's index value(3). So, we
need to modify. 
after 1 operation 1 2 3 5 7 4
after 2 operations 1 2 3 4 5 7 4
next, we need another operation, after third operation 1 2 3 4 5 6 7 4. Now the target
array is reached and we have the array modified with every index value being less or equal
than it's index value.
Here is the sample input and output:
4
3
1 3 4
5
1 2 5 7 4
1
1
3
69 6969 696969
Output:
1
3
0
696966


another special test case to understand the if else in for loop:
2
3 3
output = 2.
*/