// https://leetcode.com/problems/minimum-absolute-difference/

class Solution
{
public:
  vector<vector<int>> minimumAbsDifference(vector<int> &arr)
  {
    sort(arr.begin(), arr.end());

    int minDist = INT_MAX;
    for (int i = 0; i < arr.size() - 1; i++)
    {
      if (arr[i + 1] - arr[i] < minDist)
      {
        minDist = arr[i + 1] - arr[i];
      }
    }

    vector<vector<int>> ans;
    for (int i = 0; i < arr.size() - 1; i++)
    {
      if (arr[i + 1] - arr[i] == minDist)
      {
        ans.push_back({arr[i], arr[i + 1]});
      }
    }

    return ans;
  }
};