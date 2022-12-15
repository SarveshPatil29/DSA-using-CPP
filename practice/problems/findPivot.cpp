// Input:
// a sorted array is rotated and given as an input
// eg: [7,9,1,4,5]

// Find the pivot element ie "1" here

#include <iostream>
#include <vector>

using namespace std;

int findPivot(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }

    return start;
}

int main()
{
    vector<int> arr{5, 7, 9, 1, 2, 3, 4};
    cout << "The pivot element is: " << findPivot(arr) << endl;

    return 0;
}