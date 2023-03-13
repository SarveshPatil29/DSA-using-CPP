// https://leetcode.com/problems/search-in-rotated-sorted-array/

class Solution
{
public:
  int search(vector<int> &nums, int target)
  {
    int s = 0;
    int e = nums.size() - 1;
    int m = s + (e - s) / 2;

    while (s <= e)
    {
      if (nums[m] == target)
      {
        return m;
      }
      else if (nums[s] <= nums[m])
      {
        if (nums[s] <= target && target <= nums[m])
        {
          e = m - 1;
        }
        else
        {
          s = m + 1;
        }
      }
      else
      {
        if (nums[m] <= target && target <= nums[e])
        {
          s = m + 1;
        }
        else
        {
          e = m - 1;
        }
      }
      m = s + (e - s) / 2;
    }

    return -1;
  }
};