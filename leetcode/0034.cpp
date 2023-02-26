// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

class Solution
{
public:
  vector<int> searchRange(vector<int> &nums, int target)
  {
    vector<int> ans{-1, -1};
    int i = 0;
    while ((ans[0] == -1 || ans[1] == -1) && i < nums.size())
    {
      if (ans[0] == -1 && nums[i] == target)
      {
        ans[0] = i;
      }
      if (ans[1] == -1 && nums[nums.size() - i - 1] == target)
      {
        ans[1] = nums.size() - i - 1;
      }
      i++;
    }

    return ans;
  }
};