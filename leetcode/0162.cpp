// https://leetcode.com/problems/find-peak-element/

class Solution
{
public:
  int findPeakElement(vector<int> &nums)
  {
    for (int i = 0; i < nums.size(); i++)
    {
      if (i + 1 == nums.size() || (i + 1 < nums.size() && nums[i] > nums[i + 1]))
      {
        if (i - 1 == -1 || i - 1 > -1 && nums[i] > nums[i - 1])
        {
          return i;
        }
      }
    }
    return -1;
  }
};