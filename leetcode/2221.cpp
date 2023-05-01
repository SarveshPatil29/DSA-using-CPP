// https://leetcode.com/problems/find-triangular-sum-of-an-array/

class Solution
{
public:
  int triangularSum(vector<int> &nums)
  {
    int size = nums.size();

    while (size != 1)
    {
      for (int j = 0; j < size - 1; j++)
      {
        nums[j] = (nums[j] + nums[j + 1]) % 10;
      }
      size--;
    }

    return nums[0];
  }
};