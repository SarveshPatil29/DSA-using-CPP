// https://leetcode.com/problems/search-insert-position/

class Solution
{
public:
  int searchInsert(vector<int> &nums, int target)
  {
    int s = 0;
    int e = nums.size() - 1;
    int m = s + (e - s) / 2;

    if (nums.size() == 1)
    {
      if (nums[0] == target)
      {
        return 0;
      }
      else if (nums[0] > target)
      {
        return 0;
      }
      else if (nums[0] < target)
      {
        return 1;
      }
    }

    while (s < e)
    {
      if (nums[m] == target)
      {
        return m;
      }
      else if (nums[m] > target)
      {
        e = m - 1;
      }
      else if (nums[m] < target)
      {
        s = m + 1;
      }

      m = s + (e - s) / 2;
    }

    if (nums[m] >= target)
    {
      return m;
    }
    else
    {
      return m + 1;
    }
  }
};