#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string S;
    getline(cin, S);
    string solo = "";
    int length = S.length();

    for (int i = 0; i < length; i++)
    {
        if (S[i] != ' ')
            solo += S[i];

        else
        {
            reverse(solo.begin(), solo.end());
            cout << solo << ' ';
            solo.clear();
        }
    }

    reverse(solo.begin(), solo.end());
    cout << solo;

    return 0;
}


/*
I love you
I evol uoy
*/