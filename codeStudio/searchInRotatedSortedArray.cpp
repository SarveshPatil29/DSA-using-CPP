// https://www.codingninjas.com/codestudio/problems/search-in-rotated-sorted-array_1082554

#include <bits/stdc++.h>

int findPivot(vector<int> &arr)
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

int binarySearch(int start, int end, vector<int> &arr, int k)
{
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] > k)
        {
            end = mid - 1;
        }
        else if (arr[mid] < k)
        {
            start = mid + 1;
        }
        else if (arr[mid] == k)
        {
            return mid;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int findPosition(vector<int> &arr, int n, int k)
{
    int pivot = findPivot(arr);
    if (k >= arr[pivot] && k <= arr[arr.size() - 1])
    {
        return binarySearch(pivot, arr.size() - 1, arr, k);
    }
    else
    {
        return binarySearch(0, pivot - 1, arr, k);
    }
}
