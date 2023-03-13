// https://practice.geeksforgeeks.org/problems/minimum-element-in-a-sorted-and-rotated-array3611/1

class Solution
{
public:
  int findMin(int nums[], int n)
  {
    int low = 0;
    int high = n - 1;
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