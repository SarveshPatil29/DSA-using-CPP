// https://leetcode.com/problems/combinations/

class Solution
{
public:
  void solve(vector<vector<int>> &ans, int n, int k, vector<int> &temp, int counter)
  {
    if (temp.size() == k)
    {
      vector<int> temp2(temp);
      ans.push_back(temp2);
      return;
    }

    for (int i = counter; i <= n; i++)
    {
      temp.push_back(i);
      solve(ans, n, k, temp, i + 1);
      temp.pop_back();
    }
  }

  vector<vector<int>> combine(int n, int k)
  {
    vector<vector<int>> ans;
    vector<int> temp;
    solve(ans, n, k, temp, 1);

    return ans;
  }
};