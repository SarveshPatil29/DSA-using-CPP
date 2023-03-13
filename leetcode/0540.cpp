// https://leetcode.com/problems/single-element-in-a-sorted-array/

class Solution
{
public:
  int singleNonDuplicate(vector<int> &nums)
  {
    int left = 0;
    int right = nums.size() - 1;
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