// https://leetcode.com/problems/product-of-array-except-self/

class Solution
{
public:
  vector<int> productExceptSelf(vector<int> &nums)
  {
    int prod = 1;
    int zeroCount = 0;
    for (int i = 0; i < nums.size(); i++)
    {
      if (nums[i] == 0)
      {
        zeroCount++;
      }
      else
      {
        prod *= nums[i];
      }
    }

    if (zeroCount > 1)
    {
      fill(nums.begin(), nums.end(), 0);
      return nums;
    }

    for (int i = 0; i < nums.size(); i++)
    {
      if (nums[i] != 0 && zeroCount == 0)
      {
        nums[i] = prod / nums[i];
      }
      else if (nums[i] != 0 && zeroCount == 1)
      {
        nums[i] = 0;
      }
      else
      {
        nums[i] = prod;
      }
    }

    return nums;
  }
};