// https://leetcode.com/problems/difference-between-element-sum-and-digit-sum-of-an-array/

class Solution
{
public:
  int differenceOfSum(vector<int> &nums)
  {
    int sum = 0;
    int digitSum = 0;

    for (int i = 0; i < nums.size(); i++)
    {
      sum += nums[i];
      while (nums[i])
      {
        digitSum += nums[i] % 10;
        nums[i] /= 10;
      }
    }

    return abs(sum - digitSum);
  }
};