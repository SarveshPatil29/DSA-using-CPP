// https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/

class Solution
{
public:
  int findMin(vector<int> &nums)
  {
    int low = 0;
    int high = nums.size() - 1;
    int mid = low + (high - low) / 2;
    int mini = INT_MAX;

    while (low <= high)
    {
      if (nums[low] <= nums[mid])
      {
        mini = min(mini, nums[low]);
        low = mid + 1;
      }
      else
      {
        mini = min(mini, nums[mid]);
        high = mid - 1;
      }
      mid = low + (high - low) / 2;
    }
    return mini;
  }
};