#include <iostream>
using namespace std;

int nthTerm(int n)
{
    int a = 0;
    int b = 1;

    for (int i = 2; i <= n; i++)
    {
        int next = a + b;
        a = b;
        b = next;
    }

    return a;
}

int main()
{
    int n = 0;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "nth term is: " << nthTerm(n) << endl;

    return 0;
}