#include <iostream>
using namespace std;

int max(int arr[], int size)
{
    int maxElement = INT32_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maxElement)
        {
            maxElement = arr[i];
        }
    }

    return maxElement;
}

int min(int arr[], int size)
{
    int minElement = INT32_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < minElement)
        {
            minElement = arr[i];
        }
    }

    return minElement;
}

int main()
{
    int arr[10] = {1, 2, 300, -4, 50, 6, -70, 80, 9, 10};

    cout << "Maximum element: " << max(arr, sizeof(arr) / sizeof(arr[0])) << endl;
    cout << "Minimum element: " << min(arr, sizeof(arr) / sizeof(arr[0])) << endl;

    return 0;
}