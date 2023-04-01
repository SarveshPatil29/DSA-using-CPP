// https://leetcode.com/problems/subsets/

class Solution
{
public:
  vector<vector<int>> subsetsHelper(vector<int> &nums, int n)
  {
    if (n >= nums.size())
    {
      return {{}};
    }
    vector<vector<int>> partialAns = subsetsHelper(nums, n + 1);
    vector<vector<int>> ans(partialAns);

    for (vector<int> item : partialAns)
    {
      item.push_back(nums[n]);
      ans.push_back(item);
    }

    return ans;
  }

  vector<vector<int>> subsets(vector<int> &nums)
  {
    return subsetsHelper(nums, 0);
  }
};