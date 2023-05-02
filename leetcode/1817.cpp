// https://leetcode.com/problems/finding-the-users-active-minutes/

class Solution
{
public:
  vector<int> findingUsersActiveMinutes(vector<vector<int>> &logs, int k)
  {
    unordered_map<int, set<int>> mp;
    int rows = logs.size();
    int cols = logs[0].size();

    for (int i = 0; i < rows; i++)
    {
      mp[logs[i][0]].insert(logs[i][1]);
    }

    vector<int> ans(k, 0);
    for (auto item : mp)
    {
      ans[item.second.size() - 1]++;
    }

    return ans;
  }
};