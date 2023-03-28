// https://leetcode.com/problems/minimum-value-to-get-positive-step-by-step-sum/

class Solution
{
public:
  int minStartValue(vector<int> &nums)
  {
    int minVal = INT_MAX;
    int sum = 1;

    for (int i = 0; i < nums.size(); i++)
    {
      sum += nums[i];
      if (sum < 1)
      {
        minVal = min(minVal, sum);
      }
    }

    return minVal == INT_MAX ? 1 : abs(minVal) + 2;
  }
};