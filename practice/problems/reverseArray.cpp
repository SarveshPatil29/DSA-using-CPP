#include <iostream>
using namespace std;

void reverse(int arr[], int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        int a = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = a;
    }
}

int main()
{
    int arr[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int size = sizeof(arr) / sizeof(arr[0]);

    reverse(arr, size);

    cout << "Reversed array is: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}