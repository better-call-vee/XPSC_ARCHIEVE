#include <bits/stdc++.h>
using namespace std;

int main()
{

    int N;
    cin >> N;

    string input;
    cin >> input;

    int count = 0;
    stringstream ss(input);
    string word;

    while (ss >> word)
    {
        size_t found = word.find("ABC");
        while (found != string::npos)
        {
            count++;
            found = word.find("ABC", found + 1);
        }
    }

    cout << count;

    return 0;
}