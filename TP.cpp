#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);
int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        string inp;
        cin >> inp;
        int n = inp.size();

        queue<char> trk;
        queue<int> idtrk;
        int idx = 0;
        for (int i = 0; i < n; i++)
        {
            if (inp[i] == '-')
                idx = i;
            if (inp[i] == '1' or inp[i] == '0')
            {
                trk.push(inp[i]);
                idtrk.push(idx);
            }
        }

        stack<char> go;
        bool hobena = false;
        for (int i = 0; i < n; i++)
        {
            if (go.empty() && inp[i] == '0')
            {
                hobena = true;
                break;
            }

            if (go.empty())
            {
                go.push('a');
                continue;
            }

            if (inp[i] == '-')
                go.pop();
            else if (inp[i] == '+')
            {
                if (idtrk.front() == i || go.top() == 'd')
                    go.push('d');
                else
                    go.push('a');
            }
            else if (inp[i] == '1' or inp[i] == '0')
            {
                trk.pop();
                idtrk.pop();
                if (inp[i] == '1' && go.top() == 'd')
                {
                    hobena = true;
                    break;
                }
                else if (inp[i] == '0' && go.top() == 'a')
                {
                    hobena = true;
                    break;
                }
            }
        }

        if (hobena)
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    return 0;
}