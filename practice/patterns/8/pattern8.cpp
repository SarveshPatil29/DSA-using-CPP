#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << endl;

    int i = 1;
    int count = 0;

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            char c = 'A' + count;
            cout << c << " ";
            j++;
            count++;
        }
        cout << endl;
        i++;
    }

    return 0;
}