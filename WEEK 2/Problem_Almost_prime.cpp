// https://codeforces.com/problemset/problem/26/A

#include <bits/stdc++.h>
using namespace std;

bool primo(int number) {
    if (number <= 1) {
        return false;
    }

    int sqrtNumber = sqrt(number);

    for (int i = 2; i <= sqrtNumber; ++i) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int inp;
    cin >> inp;

    if (inp < 6) {
        cout << 0;
        return 0;
    }
    int count = 0;

    for (int j = 6; j <= inp; j++) {
        int pc = 0;
        for (int i = 2; i < j; i++) {
            if (primo(i) && j % i == 0)
                pc++;
            if (pc > 2)
                break;
        }
        if (pc == 2)
            count++;
    }

    cout << count;
    return 0;
}
