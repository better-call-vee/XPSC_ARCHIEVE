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
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    int i = 0;

    while (i < arr.size() - 1)
    {
        if (arr[i] == arr[i + 1])
            i += 2;
        if (arr[i] != arr[i + 1])
        {
            cout << arr[i];
            break;
        }
    }

    return 0;
}

/*
It can be done by XOR

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

    int uniqueNumber = 0;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        uniqueNumber ^= num;
    }

    cout << uniqueNumber << endl;

    return 0;
}
Let's walk through the steps of the XOR solution using the input 1 8 1:

Initialize uniqueNumber to 0.
First iteration:
Read the first number, which is 1.
Perform XOR between uniqueNumber (0) and 1: uniqueNumber ^= 1 (0 ^ 1 = 1).
Second iteration:
Read the second number, which is 8.
Perform XOR between uniqueNumber (1) and 8: uniqueNumber ^= 8 (1 ^ 8 = 9).
Third iteration:
Read the third number, which is 1.
Perform XOR between uniqueNumber (9) and 1: uniqueNumber ^= 1 (9 ^ 1 = 8).
At the end of the loop, the value of uniqueNumber is 8. Therefore, 8 is the unique number in the array
 [1, 8, 1].

To understand why this works, let's analyze the XOR operations step by step:

The first XOR operation (0 ^ 1 = 1) sets uniqueNumber to 1.
The second XOR operation (1 ^ 8 = 9) combines the unique number found so far (1) with the next number
 in the array (8), resulting in a new value (9).
The third XOR operation (9 ^ 1 = 8) cancels out the repeated number 1, leaving only the unique number 
8.
The XOR operation effectively eliminates pairs of identical numbers, while preserving the unique
 number that does not have a pair.

So, in the case of the input 1 8 1, the output of the XOR solution would be 8, correctly identifying 
it as the unique number in the array.
*/