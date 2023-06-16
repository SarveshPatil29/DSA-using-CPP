// https://leetcode.com/problems/subsets/

// class Solution
// {
// public:
//   vector<vector<int>> subsetsHelper(vector<int> &nums, int n)
//   {
//     if (n >= nums.size())
//     {
//       return {{}};
//     }
//     vector<vector<int>> partialAns = subsetsHelper(nums, n + 1);
//     vector<vector<int>> ans(partialAns);

//     for (vector<int> item : partialAns)
//     {
//       item.push_back(nums[n]);
//       ans.push_back(item);
//     }

//     return ans;
//   }

//   vector<vector<int>> subsets(vector<int> &nums)
//   {
//     return subsetsHelper(nums, 0);
//   }
// };

class Solution
{
public:
  void solve(vector<int> s, vector<int> &ds, vector<vector<int>> &ans, int ind)
  {
    if (ind == s.size())
    {
      ans.push_back(ds);
      return;
    }

    ds.push_back(s[ind]);
    solve(s, ds, ans, ind + 1);

    ds.pop_back();
    solve(s, ds, ans, ind + 1);
  }

  vector<vector<int>> subsets(vector<int> &nums)
  {
    vector<vector<int>> ans;
    vector<int> ds;
    solve(nums, ds, ans, 0);
    return ans;
  }
};