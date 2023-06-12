#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> arr(N);
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < N; i++)
    {
        if (arr[i] == 0)
            reverse(arr.begin(), arr.begin() + i);
    }

    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

/*
you will be given an array and it's size N as input.
You have to print an array. But you have to reverse the previous subarray where you find a 'zero' in
 the main array.
For example:
7
1 2 0 4 0 5 6
here: we find 0 in the third index. we reverse the previous subarray and get 2 1 0 4 0 5 6
next we get 0 on the 5th index and then we reverse the previous subarray and get finally 4 0 1 2 0 5 6
 which is the answer
*/