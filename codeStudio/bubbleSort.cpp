// https://www.codingninjas.com/codestudio/problems/bubble-sort_980524

#include <bits/stdc++.h>
void bubbleSort(vector<int> &arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        bool hasSwapped = false;
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                hasSwapped = true;
            }
        }

        if (hasSwapped == false)
        {
            break;
        }
    }
}
