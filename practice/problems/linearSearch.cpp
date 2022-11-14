#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    bool isPresent = false;

    for (int i = 0; i < size; i++)
    {
        if (key == arr[i])
        {
            isPresent = true;
            break;
        }
    }

    return isPresent;
}

int main()
{
    cout << "Enter the size of the array: ";
    int size = 0;
    cin >> size;

    cout << "Enter the elements of the array: ";
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element to search: ";
    int key = 0;
    cin >> key;

    bool isPresent = search(arr, size, key);

    if (isPresent)
    {
        cout << "The element is present in the array" << endl;
    }
    else
    {
        cout << "The element is not present in the array" << endl;
    }

    return 0;
}