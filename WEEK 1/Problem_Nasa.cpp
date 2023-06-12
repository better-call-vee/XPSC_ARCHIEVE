//This is a really tricky problem.
//Here is the link: https://www.codechef.com/problems/PALIXOR?tab=statement
#include <bits/stdc++.h>
#define int long long  //this make all the int equivalent to long long
using namespace std;
const int N = 32768;

//here for the problem we need to think actually different. There are only 400+ palindromes between
//the range given in the problem. So, we can think in a different way. First we will just store
//the palindromes.
//13 XOR 27 = 22.
// A      B    C => If A XOR B = C then A XOR C = B / B XOR C = A

//This is the main concept. 

vector<int> palindrome;

bool check_palindrome(int n)
{
    string check = to_string(n);
    string check2 = check;
    reverse(check.begin(), check.end());
    return (check == check2);
}

int32_t main()
{
    for (int i = 0; i <= N; i++)
        if (check_palindrome(i))
            palindrome.push_back(i);

    int l = palindrome.size();
    int tcs;
    cin >> tcs;
    while (tcs--)
    {
        int n;
        cin >> n;
        vector<int> arr(n), freq(N, 0); //taking a frequency array to track the frequency of every
        //number of the range.
        int ans = 0;
        for (int i = 0; i < n; i++)
            cin >> arr[i];  

        for (int i = 0; i < n; i++)
        {
            freq[arr[i]]++; //increasing frequency of every number of the input array
            for (int p = 0; p < l; p++)
            {
                int num = (arr[i] ^ palindrome[p]); //every number that is present in the input array
                //will have a frequency more than 1. and those number which are not present in the
                //array will have 0 frequency.
                ans += freq[num]; //and finally we will increase the answer value by the frequency.
            }
        }
        cout << ans << endl;
    }
    return 0;
}


/*
int32_t is a type alias defined in the <stdint.h> or <cstdint> header file. It is an integer type
that has a width of exactly 32 bits. The int32_t type guarantees that it will be a signed 32-bit
integer on any platform where it is supported.

In the given code snippet, int32_t is used as the return type of the main function. It ensures that
the main function returns a signed 32-bit integer value to indicate the program's exit status to the
operating system. Conventionally, a return value of 0 is used to indicate successful execution, and
non-zero values indicate some kind of error or abnormal termination.
*/