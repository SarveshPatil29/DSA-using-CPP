#include <iostream>
using namespace std;

int factorial(int n)
{
    int ans = 1;
    for (int i = n; i >= 1; i--)
    {
        ans *= i;
    }
    return ans;
}

double nCr(int n, int r)
{
    int nFact = factorial(n);
    int rFact = factorial(r);
    int n_rFact = factorial(n - r);

    double ans = nFact / (rFact * n_rFact);
    return ans;
}

int main()
{
    int n = 0, r = 0;

    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Enter the value of r: ";
    cin >> r;

    cout << "Value of nCr is: " << nCr(n, r) << endl;

    return 0;
}