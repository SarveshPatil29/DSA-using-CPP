#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int decimal = n;

    int binary = 0;
    int i = 0;

    while (n != 0)
    {
        int bit = n & 1;
        binary = (bit * pow(10, i) + binary);

        n = n >> 1;
        i++;
    }

    cout << decimal << " in binary is: " << binary << endl;

    return 0;
}