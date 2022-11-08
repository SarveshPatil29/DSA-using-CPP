#include <iostream>
using namespace std;

int main()
{

    int amount = 0;
    cout << "Enter the amount: ";
    cin >> amount;

    if (amount >= 100)
    {
        int temp = amount / 100;
        amount -= (temp * 100);
        cout << "100 notes: " << temp << endl;
    }
    if (amount >= 50)
    {
        int temp = amount / 50;
        amount -= (temp * 50);
        cout << "50 notes: " << temp << endl;
    }
    if (amount >= 20)
    {
        int temp = amount / 20;
        amount -= (temp * 20);
        cout << "20 notes: " << temp << endl;
    }
    if (amount >= 1)
    {
        int temp = amount / 1;
        amount -= (temp * 1);
        cout << "1 notes: " << temp << endl;
    }

    return 0;
}