/*
I'll be given a number and I have to count the steps to make it's digit sum a one numbered number! every step we calculate the sum of the digits!
for example: 991 => 9+9+1 = 19(first step) => 1+9=10(second step) => (1+0)=1 (third step)
so the answer is 3!
*/
#include <iostream>

using namespace std;

int getDigitSum(string num) {
    int sum = 0;
    for (char digit : num) {
        sum += digit - '0';
    }
    return sum;
}

int main() {
    string inp;
    cin >> inp;

    if (inp == "0") {
        cout << 0;
        return 0;
    }

    int count = 0;
    while (inp.size() > 1) {
        inp = to_string(getDigitSum(inp));
        count++;
    }

    cout << count;

    return 0;
}
