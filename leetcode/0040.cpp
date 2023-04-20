// https://leetcode.com/problems/combination-sum-ii/

class Solution
{
public:
  void findCombinations(vector<vector<int>> &ans, vector<int> &ds, vector<int> &candidates, int target, int ind)
  {
    if (target == 0)
    {
      ans.push_back(ds);
      return;
    }

    for (int i = ind; i < candidates.size(); i++)
    {
      if (i > ind && candidates[i] == candidates[i - 1])
      {
        continue;
      }
      if (candidates[i] > target)
      {
        break;
      }

      ds.push_back(candidates[i]);
      findCombinations(ans, ds, candidates, target - candidates[i], i + 1);
      ds.pop_back();
    }
  }

  vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
  {
    sort(candidates.begin(), candidates.end());
    vector<vector<int>> ans;
    vector<int> ds;

    findCombinations(ans, ds, candidates, target, 0);
    return ans;
  }
};