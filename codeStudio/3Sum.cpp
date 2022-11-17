// https://www.codingninjas.com/codestudio/problems/triplets-with-given-sum_893028

#include <bits/stdc++.h>
vector<vector<int>> findTriplets(vector<int> arr, int n, int K)
{
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size(); i++)
    {
        int target = K - arr[i];
        int start = i + 1;
        int end = arr.size() - 1;

        while (start < end)
        {
            if (arr[start] + arr[end] == target)
            {
                vector<int> temp;
                temp.push_back(arr[i]);
                temp.push_back(arr[start]);
                temp.push_back(arr[end]);
                ans.push_back(temp);

                while (start < end && arr[start] == arr[start + 1])
                {
                    start++;
                }

                while (start < end && arr[end] == arr[end - 1])
                {
                    end--;
                }
                start++;
                end--;
            }
            else if (arr[start] + arr[end] > target)
            {
                end--;
            }
            else
            {
                start++;
            }
        }
        while (i + 1 < arr.size() && arr[i] == arr[i + 1])
        {
            i++;
        };
    }

    return ans;
}