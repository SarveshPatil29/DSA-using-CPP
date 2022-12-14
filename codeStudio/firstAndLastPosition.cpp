// https://www.codingninjas.com/codestudio/problems/first-and-last-position-of-an-element-in-sorted-array_1082549

#include <bits/stdc++.h>
pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int k)
{
    pair<int, int> ans;
    ans.first = -1;
    ans.second = -1;
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == k)
        {
            ans.first = mid;
            end = mid - 1;
        }
        else if (arr[mid] > k)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }

    start = 0;
    end = arr.size() - 1;
    mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == k)
        {
            ans.second = mid;
            start = mid + 1;
        }
        else if (arr[mid] > k)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }

    return ans;
}