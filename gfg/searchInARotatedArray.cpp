// https://practice.geeksforgeeks.org/problems/search-in-a-rotated-array4618/1

class Solution
{
public:
  int search(int nums[], int l, int h, int target)
  {
    int s = l;
    int e = h;
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