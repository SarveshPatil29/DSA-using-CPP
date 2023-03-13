// https://practice.geeksforgeeks.org/problems/find-the-element-that-appears-once-in-sorted-array0624/1

class Solution
{
public:
  int findOnce(int nums[], int n)
  {
    int left = 0;
    int right = n - 1;
    int mid = left + (right - left) / 2;

    while (left < right)
    {
      if ((mid % 2 == 0 && nums[mid] == nums[mid + 1]) || (mid % 2 == 1 && nums[mid] == nums[mid - 1]))
        left = mid + 1;
      else
        right = mid;
      mid = (left + right) / 2;
    }
    return nums[left];
  }
};