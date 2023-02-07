// https://leetcode.com/problems/max-consecutive-ones/

class Solution
{
public:
  int findMaxConsecutiveOnes(vector<int> &nums)
  {
    int count = 0;
    int tempCount = 0;

    for (int i = 0; i < nums.size(); i++)
    {
      if (nums[i] == 1)
      {
        tempCount++;
      }
      else
      {
        tempCount = 0;
      }
      count = max(count, tempCount);
    }

    return count;
  }
};