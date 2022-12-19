#include <iostream>
using namespace std;

int intPart(long long int N)
{
    if (N < 2)
        return N;
    long long int s = 0, e = N;
    long long int mid = s + (e - s) / 2;
    long long ans = -1;
    while (s <= e)
    {
        if (mid == (N / mid)) // same as mid*mid == N, to avoid range overlow
            return mid;
        else if (mid > (N / mid))
            e = mid - 1;
        else
        {
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

double preciseAns(int n, int precision, int tempSol)
{
    double ans = tempSol;
    double factor = 1;

    for (int i = 0; i < precision; i++)
    {
        factor /= 10;
        for (double j = ans; j * j < n; j += factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int n = 0;
    cout << "Enter the number: ";
    cin >> n;

    int integerPart = intPart(n);

    cout << "Square Root is " << preciseAns(n, 3, integerPart) << endl;

    return 0;
}