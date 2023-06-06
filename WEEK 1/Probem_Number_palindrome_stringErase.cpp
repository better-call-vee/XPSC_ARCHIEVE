#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    string ulto;
    cin >> ulto;
 
    string soja = ulto;
 
    reverse(ulto.begin(), ulto.end());
 
    size_t del = 0;
    while (ulto[del] == '0') //saved this just for this. and for numbers we have to avoid the 
    //first zeroes.
        ulto.erase(del, 1);
 
    cout << ulto << "\n";
 
    if (soja == ulto)
        cout << "YES";
    else
        cout << "NO";
 
    return 0;
}