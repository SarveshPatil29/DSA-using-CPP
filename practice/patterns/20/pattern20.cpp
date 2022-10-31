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
        int space = 1;
        while (space <= n - i)
        {
            cout << " "
                 << " ";
            space++;
        }

        int numL = 1;
        while (numL <= i)
        {
            cout << numL << " ";
            numL++;
        }

        int numR = 1;
        while (numR <= i - 1)
        {
            cout << i - numR << " ";
            numR++;
        }

        cout << endl;
        i++;
    }

    return 0;
}