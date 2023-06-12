#include <iostream>

using namespace std;

int countTriplets(int S, int T)
{
    int count = 0;
    for (int a = 0; a <= S; a++)
    {
        for (int b = 0; b <= S; b++)
        {
            for (int c = 0; c <= S; c++)
            {
                if (a + b + c <= S && a * b * c <= T)
                    count++;
            }
        }
    }
    return count;
}

int main()
{
    int S, T;
    cin >> S >> T;
    int result = countTriplets(S, T);
    cout << result;
    return 0;
}
/*
two numbers S and T.
We need to count the triplet of combinations where a+b+c≤S and a*b*c≤T with every possible positive
integer including 0. You have to maintain the condition
For example 0 = S and 1 = T.
So, the combinations will be (0,0,0), (0,0,1), (0,1,0), (1,0,0).
Then S=2, T=5. There will be 10 triplet combinations.
*/