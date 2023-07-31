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
        int n;
        cin >> n;

        vector<int> deck(n);
        vector<int> deck2;
        vector<bool> visited(n + 1, false);

        for (int i = 0; i < n; i++)
            cin >> deck[i];

        int maxo = n;
        for (int i = n - 1; i >= 0; i--)
        {
            if (deck[i] != maxo)
            {
                deck2.push_back(deck[i]);
                visited[deck[i]] = true;
            }

            else 
            {
                deck2.push_back(maxo);
                visited[maxo] = true;
                reverse(deck2.begin(), deck2.end());

                while (visited[maxo] && maxo > 0)
                    maxo--;

                for (int i = 0; i < deck2.size(); i++)
                    cout << deck2[i] << " ";

                deck2.clear();
            }
        }
        cout << "\n";
    }

    return 0;
}

/*
        int n;
        cin >> n;

        vector<int> deck(n);
        vector<int> deck2;

        for (int i = 0; i < n; i++)
            cin >> deck[i];

        int maxo = n;
        auto it = find(deck.begin(), deck.end(), maxo);

        deck2.insert(deck2.begin(), it, deck.end());
        deck.erase(it, deck.end());

        while (!deck.empty())
        {
            int maxu = *max_element(deck.begin(), deck.end());
            auto maxuID = find(deck.begin(), deck.end(), maxu);

            deck2.insert(deck2.end(), maxuID, deck.end());
            deck.erase(maxuID, deck.end());
        }

        for (int cards : deck2)
            cout << cards << " ";
        cout << "\n";
*/