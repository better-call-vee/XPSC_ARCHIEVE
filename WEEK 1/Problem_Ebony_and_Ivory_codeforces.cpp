#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    bool possible = false;

    for (int i = 0; i <= c; i += a)
    {
        if ((c - i) % b == 0)
        {
            possible = true;
            break;
        }
    }

    if (possible)
        cout << "Yes";
        
    else
        cout << "No";

    return 0;
}
/*
Break it down: To solve the problem, we need to check all possible combinations of using a and b to 
form the number c. We iterate through different multiples of a and check if the remaining amount (c - i) is divisible by b.

Analyze the example cases: Let's consider the first example case (3, 2, 7). By trying different 
combinations, we observe that we can make 7 by using 3 once and 2 twice. This tells us that using 
a number multiple times is allowed and can help us reach the target sum.

Use concrete examples: Let's take a concrete example: a = 4, b = 6, c = 15. We can manually work 
through the problem and see if we can find a pattern. By iterating through multiples of 4, we get 
4, 8, 12, 16 (greater than 15). None of these multiples allows us to form 15. We can try another 
example and keep experimenting until we gain more insights.

Explore different approaches: In this method, we're already using a brute force approach by 
checking all possible combinations. However, there may be other ways to solve the problem more 
efficiently.

Start with a brute force solution: We implement the brute force solution that iterates through 
multiples of a and checks if the remaining amount (c - i) is divisible by b. If we find a combination
that works, we set the "possible" flag to true and break out of the loop.

Optimize if necessary: Since we're already using a brute force approach, there may not be significant
optimization opportunities in this case.

Practice and learn: By solving more problems and analyzing different approaches, you can improve your
problem-solving skills and become more comfortable with finding efficient solutions.
*/