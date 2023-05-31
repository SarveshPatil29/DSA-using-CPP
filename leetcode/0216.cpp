// https://leetcode.com/problems/combination-sum-iii/

class Solution
{
public:
  void solve(int k, int n, vector<vector<int>> &ans, vector<int> &v, int ind)
  {
    if (n == 0 && v.size() == k)
    {
      ans.push_back(v);
      return;
    }

    for (int i = ind; i <= 9; i++)
    {
      v.push_back(i);
      solve(k, n - i, ans, v, i + 1);
      v.pop_back();
    }
  }

  vector<vector<int>> combinationSum3(int k, int n)
  {
    vector<vector<int>> ans;
    vector<int> v;

    solve(k, n, ans, v, 1);
    return ans;
  }
};