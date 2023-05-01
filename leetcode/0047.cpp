// https://leetcode.com/problems/permutations-ii/

class Solution
{
public:
  void solve(vector<vector<int>> &ans, vector<int> &nums, int size, int ind)
  {
    if (ind >= size)
    {
      ans.push_back(nums);
      return;
    }

    unordered_set<int> s;
    for (int i = ind; i < size; i++)
    {
      if (s.count(nums[i]))
      {
        continue;
      }
      s.insert(nums[i]);
      swap(nums[i], nums[ind]);
      solve(ans, nums, size, ind + 1);
      swap(nums[i], nums[ind]);
    }
  }

  vector<vector<int>> permuteUnique(vector<int> &nums)
  {
    vector<vector<int>> ans;
    solve(ans, nums, nums.size(), 0);
    return ans;
  }
};