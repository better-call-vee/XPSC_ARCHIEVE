#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;

    if (N == 0)
    {
        cout << 1;
        return 0;
    }

    int digits = 0;

    while (N > 0)
    {
        N /= K;
        digits++;
    }

    cout << digits;

    return 0;
}

/*
The purpose of the loop is to calculate the number of digits in the base K representation of the 
input number N. The loop continues until N becomes zero because when N is divided by K repeatedly, 
it gradually decreases until it reaches zero. Each iteration of the loop represents dividing N by K 
once.

By dividing N by K repeatedly in the loop, we effectively convert N from base 10 to base K. The number
of iterations it takes for N to become zero corresponds to the number of digits required to represent
N in base K.

Let's take an example:

Suppose N is 314159265 and K is 3, as given in your initial example.

In the first iteration of the loop, N is divided by K, resulting in N becoming 104719755 and digits
becoming 1.

In the second iteration, N is divided by K again, resulting in N becoming 34906585 and digits becoming
2.

This process continues until N eventually becomes zero. At each iteration, the number of digits,
digits, is incremented by one. In the end, the value of digits will be the total number of digits
required to represent N in base K.
*/