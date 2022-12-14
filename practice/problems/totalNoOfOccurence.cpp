#include <iostream>
#include <vector>
using namespace std;

int totalCount(vector<int> arr, int key)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    int count = 0;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            count++;
            int i = mid - 1;
            while (arr[i] == key)
            {
                count++;
                i--;
            }

            i = mid + 1;
            while (arr[i] == key)
            {
                count++;
                i++;
            }
            break;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }

    return count;
}

int main()
{
    vector<int> arr{1, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 5};
    int key = 3;

    cout << "Total Count: " << totalCount(arr, key) << endl;

    return 0;
}