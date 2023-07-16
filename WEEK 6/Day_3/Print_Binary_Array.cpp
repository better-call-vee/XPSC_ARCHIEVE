//https://www.codechef.com/problems/PRINTINGBIN

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;

        vector<int> B(n);
        vector<int> C;

        for (int i = 0; i < n; i++)
            cin >> B[i];

        if (n == 1)
        {
            if (B[0] == 0)
                cout << 1 << "\n";
            else
                cout << 0 << "\n";
            continue;
        }

        int score = 0;
        for (int i = 0; i < n - 1; i++)
            if (B[i] != B[i + 1])
                score++;

        int later = score;
        bool first = true, second = true;
        while (score > 0)
        {
            if (B[0] == 1)
            {
                if (first)
                {
                    C.push_back(0);
                    first = false;
                }
                else
                {
                    C.push_back(1);
                    first = true;
                }
            }

            else if (B[0] == 0)
            {
                if (second)
                {
                    C.push_back(1);
                    second = false;
                }
                else
                {
                    C.push_back(0);
                    second = true;
                }
            }

            score--;
        }

        int rem = n - C.size();
        for (int i = 0; i < rem; i++)
        {
            if (B[0] == 1)
                C.push_back(0);

            else
                C.push_back(1);
        }

        int count = 0;
        for (int i = 0; i < n - 1; i++)
            if (C[i] != C[i + 1])
                count++;

        if (count < later)
        {
            if (B[0] == 0)
                C[n - 1] = 0;
            else if (B[0] == 1)
                C[n - 1] = 1;
        }

        for (int i = 0; i < n; i++)
            cout << C[i] << " ";

        cout << "\n";
    }

    return 0;
}

/*
I did approach it differently because of the mistake of my observation in the very first place.
It can be solved very easily but I did go into deep. And at first, I thought that both B and C
have to have the same number of 0 and 1. I did approach the easiest way at first but in the end,
my brain ended up with this.

Here, my observation is => that both arrays must have the same score. So, at first, I count the
score of the B array. Then I make the C array by pushing 0/1 according to the needs. In the end,
the remaining size of C is filled up with the opposite number of B[0] to keep it up with B's score.
The last score is completed with this. Sometimes, it can't be possible to complete the last score
with only this. So, I check if the score of C is equivalent to the score of B. If not, then I change
the last element of C to B[0]. for example: 1 0 0 0 at first, according to the code until the last
score check, this will output 0 0 0 0. The check goes invalid and we enter the if-else segment.
Finally, we change the last element of C with B[0] which is 1. Thus, we make it correct. It's
totally a greedy and too much logical approach I think. My brain exploded.
*/