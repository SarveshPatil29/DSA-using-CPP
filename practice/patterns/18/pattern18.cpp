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
        while (space <= i - 1)
        {
            cout << " "
                 << " ";
            space++;
        }

        int num = 1;
        while (num <= n - i + 1)
        {
            cout << num + i - 1 << " ";
            num++;
        }

        cout << endl;
        i++;
    }

    return 0;
}