#include <iostream>
using namespace std;

void swapAdjacent(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 == size)
        {
            // skip swap
        }
        else
        {
            int a = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = a;
        }
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    swapAdjacent(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}