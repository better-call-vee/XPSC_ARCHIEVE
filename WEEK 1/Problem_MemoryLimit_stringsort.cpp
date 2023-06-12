#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int arr[27] = {0}; // Initialize the array with zeros

    for (int i = 0; i < N; i++)
    {
        char c;
        cin >> c;
        arr[int(c) - 96]++;
    }

    for (int i = 1; i < 27; i++)
    {
        if (arr[i] > 0)
        {
            for (int j = 0; j < arr[i]; j++)
                cout << char(96 + i);
        }
    }

    return 0;
}
