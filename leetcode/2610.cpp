// https://leetcode.com/problems/convert-an-array-into-a-2d-array-with-conditions/

class Solution
{
public:
  vector<vector<int>> findMatrix(vector<int> &nums)
  {
    unordered_map<int, int> freq;
    for (int i = 0; i < nums.size(); i++)
    {
      freq[nums[i]]++;
    }

    vector<vector<int>> ans;
    for (auto item : freq)
    {
      int count = item.second;
      for (int i = 0; i < count; i++)
      {
        if (ans.size() > i)
        {
          ans[i].push_back(item.first);
        }
        else
        {
          vector<int> temp{item.first};
          ans.push_back(temp);
        }
      }
    }

    return ans;
  }
};