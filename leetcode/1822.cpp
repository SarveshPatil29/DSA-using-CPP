// https://leetcode.com/problems/sign-of-the-product-of-an-array/

class Solution
{
public:
  int arraySign(vector<int> &nums)
  {
    int sum = 1;
    int size = nums.size();

    for (int i = 0; i < size; i++)
    {
      if (nums[i] < 0)
      {
        sum *= -1;
      }
      else if (nums[i] == 0)
      {
        sum = 0;
        break;
      }
    }

    if (sum > 0)
    {
      return 1;
    }
    else if (sum == 0)
    {
      return 0;
    }
    else
    {
      return -1;
    }
  }
};