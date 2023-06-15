//https://codeforces.com/contest/1692/problem/D

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while (t--)
    {
        string S;
        cin >> S;
        int x;
        cin >> x;

        size_t divPOS = S.find(':');

        string hr = S.substr(0, divPOS);
        string min = S.substr(divPOS + 1);

        int hour = stoi(hr);
        int minute = stoi(min);

        int count = 0;
        while (true)
        {
            string pal = "";
            if (hour < 10)
                pal += "0";
            pal += to_string(hour);
            if (minute < 10)
                pal += "0";
            pal += to_string(minute);

            string pal2 = pal;
            reverse(pal2.begin(), pal2.end());

            if (pal == pal2)
                count++;

            minute += x;
            hour += minute / 60;
            minute %= 60;

            if (hour >= 24)
                hour -= 24;

            string check = "";
            if (hour < 10)
                check += "0";
            check += to_string(hour);
            check += ":";
            if (minute < 10)
                check += "0";
            check += to_string(minute);

            if (check == S)
                break;
        }
        cout << count << "\n";
    }

    return 0;
}
