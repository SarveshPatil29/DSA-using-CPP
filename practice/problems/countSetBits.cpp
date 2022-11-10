#include <iostream>
using namespace std;

int countSetBits(int a)
{
    int count = 0;
    while (a != 0)
    {
        if ((a & 1) == 1)
        {
            count++;
        }
        a = a >> 1;
    }

    return count;
}

int main()
{
    int a = 0, b = 0;
    cout << "Enter the value of a: ";
    cin >> a;

    cout << "Enter the value of b: ";
    cin >> b;

    cout << "Total number of set bits: " << countSetBits(a) + countSetBits(b) << endl;

    return 0;
}