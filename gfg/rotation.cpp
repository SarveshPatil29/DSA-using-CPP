// https://practice.geeksforgeeks.org/problems/rotation4723/1

class Solution
{
public:
  int findKRotation(int nums[], int n)
  {
    int low = 0;
    int high = n - 1;
    int mid = low + (high - low) / 2;
    int mini = INT_MAX;
    int index = 0;

    while (low <= high)
    {
      if (nums[low] <= nums[mid])
      {
        if (mini > nums[low])
        {
          index = low;
          mini = nums[low];
        }
        low = mid + 1;
      }
      else
      {
        if (mini > nums[mid])
        {
          index = mid;
          mini = nums[mid];
        }
        high = mid - 1;
      }
      mid = low + (high - low) / 2;
    }
    return index;
  }
};