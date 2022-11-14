#include <iostream>
using namespace std;

int main()
{
    int size = 0;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        sum += arr[i];
    }

    cout << "Sum of all elements in the array is: " << sum << endl;

    return 0;
}