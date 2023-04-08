// https://leetcode.com/problems/k-diff-pairs-in-an-array/

class Solution
{
public:
  int findPairs(vector<int> &nums, int k)
  {
    sort(nums.begin(), nums.end());
    set<pair<int, int>> ans;
    int i = 0;
    int j = 1;

    while (j < nums.size())
    {
      if (i == j)
      {
        j++;
      }
      else if (abs(nums[i] - nums[j]) < k)
      {
        j++;
      }
      else if (abs(nums[i] - nums[j]) > k)
      {
        i++;
      }
      else
      {
        ans.insert({nums[i], nums[j]});
        i++;
      }
    }

    return ans.size();
  }
};