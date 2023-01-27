// https://leetcode.com/problems/two-sum/

class Solution
{
public:
  vector<int> twoSum(vector<int> &nums, int target)
  {
    vector<int> ans;
    bool toBreak = false;

    for (int i = 0; i < nums.size() && toBreak != true; i++)
    {
      int n = nums[i];
      int toFind = target - n;

      int j = i + 1;

      while (j < nums.size())
      {
        if (nums[j] == toFind)
        {
          ans.push_back(i);
          ans.push_back(j);
          toBreak = true;
          break;
        }
        j++;
      }
    }

    return ans;
  }
};