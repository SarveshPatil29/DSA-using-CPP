#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    int i = 0;
    while (i <= n)
    {
        int j = 1;
        int count = i;
        while (j <= i)
        {
            cout << count << " ";
            count++;
            j++;
        }
        i++;
        cout << endl;
    }

    return 0;
}