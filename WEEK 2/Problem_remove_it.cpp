/*
I will be given a number (which is actually a year) which will contain 4 distinct numbers and no 
repetitive number. I have to print the next year with distinct 4 numbers. 
For example: if I give an input 1987, the output is 2013.
But my code is giving wrong answer( though it's printing a distinct year but that's too far away 
from the next one)
*/

#include <bits/stdc++.h>
using namespace std;

#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);

int main()
{
    fast;
    int N, X;
    cin >> N >> X;

    vector<int> arr(N);
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    auto deleto = remove(arr.begin(), arr.end(), X);
    if (deleto != arr.end())
        arr.erase(deleto, arr.end());

    for (int num : arr)
        cout << num << " ";

    return 0;
}

/*
auto it = find(arr.begin(), arr.end(), X);
if(it != arr.end()) cout<<distance(arr.begin(), it);   to find the index of that number
*/