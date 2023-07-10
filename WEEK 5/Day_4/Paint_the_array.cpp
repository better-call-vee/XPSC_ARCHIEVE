// https://codeforces.com/contest/1618/problem/C

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long gcd(long long a, long long b)
{ // euclidean gcd calculating function.
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

void solve()
{
    int n;
    cin >> n;

    vector<long long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    // Initialize two numbers with the first two elements of the vector. It's actually for
    // two subsets(the odd indexed, even indexed subsets)
    vector<long long> g(a.begin(), a.begin() + 2);

    // here, I am storing the GCD of the elements of two subsets. the vector g have only two elements.
    // first and second => first refers to the first subject's GCD and second refers to the second
    // subject's GCD. at the end of the loop the first element will store the GCD of the even indexed
    // elements and the second will store the GCD of odd indexed elements.
    for (int i = 0; i < n; i++)
        g[i % 2] = gcd(g[i % 2], a[i]);

    vector<bool> good(2, true); // now I need a boolean 2 sized vector to detect that if it's
    // possible or impossible.
    // here we will check a thing. The main scenario here is: if a subset is divisible by the
    // GCD of other subset or not. if yes, then it's impossible to make the paint beautiful.
    
    for (int i = 0; i < n; i++)
        good[i % 2] = good[i % 2] && (a[i] % g[(i % 2) ^ 1] > 0);
    // here, we check it by the portion a[i] % g[(i%2) ^ 1] > 0.
    // g[(i % 2) ^ 1] refers to the GCD value of the other subset. When i is even,
    // it refers to g[1], and when i is odd, it refers to g[0].
    //(a[i] % g[(i % 2) ^ 1] > 0) checks if the current element is not divisible by the GCD of
    // the other subset. If the remainder of a[i] divided by g[(i % 2) ^ 1] is greater than 0, it
    // means that a[i] is not divisible by g[(i % 2) ^ 1].
    // if the current element is not divisible by the GCD of the other subset, then the value in
    // good remains true; otherwise, it becomes false.

    long long ans = 0;

    // Finding the maximum GCD among the subsets that satisfy the condition
    for (int i = 0; i < 2; i++)
        if (good[i])
            ans = max(ans, g[i ^ 1]);
    // good[i] is used to check if the subset represented by good[i] satisfies the condition.
    // If good[i] is true, it means the subset satisfies the condition, and the code proceeds to
    // compare the GCD value of the other subset with the current value of ans.

    cout << ans << "\n";
}

int main()
{
    int t;
    cin >> t;

    // Solve the problem for each test case
    for (int i = 0; i < t; i++)
        solve();

    return 0;
}
