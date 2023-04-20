// https://leetcode.com/problems/subsets-ii/

class Solution
{
public:
  void findCombinations(vector<vector<int>> &ans, vector<int> &ds, vector<int> &nums, int ind)
  {
    ans.push_back(ds);

    for (int i = ind; i < nums.size(); i++)
    {
      if (i > ind && nums[i] == nums[i - 1])
      {
        continue;
      }

      ds.push_back(nums[i]);
      findCombinations(ans, ds, nums, i + 1);
      ds.pop_back();
    }
  }

  vector<vector<int>> subsetsWithDup(vector<int> &nums)
  {
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;
    vector<int> ds;

    findCombinations(ans, ds, nums, 0);
    return ans;
  }
};