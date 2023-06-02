/*
Input:
txt = forxxorfxdofr
pat = for
Output: 3
Explanation: for, orf and ofr appears
in the txt, hence answer is 3.

Input:
txt = aabaabaa
pat = aaba
Output: 4
Explanation: aaba is present 4 times
in txt.
*/

#include <iostream>
#include <string>
using namespace std;

const int MAX_CHAR = 26; // making it constant instead of hardcoding

int countAnagrams(string txt, string ptr)
{
    int k = ptr.size(); // the anagram's size.
    int i = 0, j = 0;
    int fr1[MAX_CHAR] = {0}; // taking two frequency arrays with all the alphabets
    int fr2[MAX_CHAR] = {0};

    for (char c : ptr)
        fr1[c - 'a']++; // storing the frequencies

    int ans = 0;

    while (j < txt.size()) // going till n(which is the main string's size)
    {
        fr2[txt[j] - 'a']++; // now I am storing frequencies of the characters while doing sliding
        // window technique.

        if (j - i + 1 < k)
            j++; // going till we reach size k.

        else if (j - i + 1 == k) // after reaching size k with the window.
        {
            bool flag = true;
            for (int v = 0; v < MAX_CHAR; v++) // now we are checking if the current subarray contains
            // the all k characters present in the ptr.
            {
                if (fr1[v] != fr2[v])
                { // if we find it's not matching, we frequently hit break the loop.
                    flag = false;
                    break;
                }
            }

            if (flag) // if we find an anagram, we increase the answer.
                ans++;

            fr2[txt[i] - 'a']--; // at last we move one step right and make the count of that previously
            // set left index's character one less.
            i++;
            j++;
        }
    }
    // SIMULATE TO UNDERSTAND MORE
    return ans;
}

int main()
{
    string txt, ptr;
    cin >> txt >> ptr;
    int ans = countAnagrams(txt, ptr);
    cout << ans << endl;

    return 0;
}
