#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << endl;

    int i = 1;
    char c = 'A';
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << c << " ";
            c++;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}