// https://leetcode.com/problems/combination-sum/

class Solution
{
public:
  void findCombinations(vector<vector<int>> &ans, vector<int> &temp, int index, int sum, int target, int size, vector<int> &candidates)
  {
    if (sum > target)
    {
      return;
    }
    if (index == size && sum == target)
    {
      ans.push_back(temp);
      return;
    }
    else if (index == size && sum != target)
    {
      return;
    }

    temp.push_back(candidates[index]);
    findCombinations(ans, temp, index, sum + candidates[index], target, size, candidates);

    temp.pop_back();
    findCombinations(ans, temp, index + 1, sum, target, size, candidates);
  }

  vector<vector<int>> combinationSum(vector<int> &candidates, int target)
  {
    vector<vector<int>> ans;
    vector<int> temp;

    findCombinations(ans, temp, 0, 0, target, candidates.size(), candidates);

    return ans;
  }
};