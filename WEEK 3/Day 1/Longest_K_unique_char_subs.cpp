#include <bits/stdc++.h>
using namespace std;

//here I have to write the output of the longest subarray which contains the K unique characters.
//suppose the input is:
//aabac. here if K is 2 the answer will be 4. because the longest subarray is aaba.
int main()
{
    string S;
    int K;

    cin >> S >> K;

    int ans = -1, unique = 0, l = 0, r = 0;

    vector<int> freq(26, 0);

    while (r < S.size())
    {
        char now = S[r];
        if (freq[now - 'a'] == 0)
            unique++;  //we track the unique characters and count the number of unique characters.

        freq[now - 'a']++; 

        if (unique > K)
        {
            while (unique > K) //if unique count becomes greater than the K, we go forward to that 
            //position until we delete all the characters and the unique count becomes equivalent to
            //K.
            {
                char left = S[l];
                freq[left - 'a']--; 
                if (freq[left - 'a'] == 0)
                    unique--;
                l--;
            }
        }

        if (unique == K) //after doing the operation, we simply take the max of answer and the
        //length of subarray.
            ans = max(ans, r - l + 1);

        r++;
    }

    cout << ans;
    return 0;
}