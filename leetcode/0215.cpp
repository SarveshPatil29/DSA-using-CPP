// https://leetcode.com/problems/kth-largest-element-in-an-array/

class Solution
{
public:
  int quickSelect(vector<int> &nums, int k, int left, int right)
  {
    int pivot = nums[right];
    int ptr = left;

    for (int i = left; i < right; i++)
    {
      if (nums[i] <= pivot)
      {
        swap(nums[i], nums[ptr]);
        ptr++;
      }
    }
    swap(nums[right], nums[ptr]);

    if (k > ptr)
    {
      return quickSelect(nums, k, ptr + 1, right);
    }
    else if (k < ptr)
    {
      return quickSelect(nums, k, left, ptr - 1);
    }
    else
    {
      return nums[ptr];
    }
  }

  int findKthLargest(vector<int> &nums, int k)
  {
    k = nums.size() - k;
    return quickSelect(nums, k, 0, nums.size() - 1);
  }
};