#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << endl;

    int i = 0;
    char c = 'A';
    while (i < n)
    {

        int j = 0;
        while (j < n)
        {
            cout << c << " ";
            j++;
        }
        c++;
        i++;
        cout << endl;
    }

    return 0;
}