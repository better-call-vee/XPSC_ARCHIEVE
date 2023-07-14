#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    if (a + b + (a * b) == 111)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}