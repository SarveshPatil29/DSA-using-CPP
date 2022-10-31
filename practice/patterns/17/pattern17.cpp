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

        int num = 1;
        while (num <= i)
        {
            cout << i << " ";
            num++;
        }

        cout << endl;
        i++;
    }

    return 0;
}