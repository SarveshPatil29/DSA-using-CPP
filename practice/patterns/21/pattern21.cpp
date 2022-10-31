#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << endl;

    int i = 1;
    while (i <= n)
    {
        int numL = 1;
        while (numL <= n - i + 1)
        {
            cout << numL << " ";
            numL++;
        }

        int starL = 1;
        while (starL <= i - 1)
        {
            cout << "*"
                 << " ";
            starL++;
        }

        int starR = 1;
        while (starR <= i - 1)
        {
            cout << "*"
                 << " ";
            starR++;
        }

        int numR = 1;
        while (numR <= n - i + 1)
        {
            cout << n - numR - i + 2 << " ";
            numR++;
        }

        cout << endl;
        i++;
    }

    return 0;
}