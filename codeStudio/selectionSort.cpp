// https://www.codingninjas.com/codestudio/problems/selection-sort_981162

#include <bits/stdc++.h>
void selectionSort(vector<int> &arr, int n)
{
    for (int i = 0; i < arr.size(); i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}