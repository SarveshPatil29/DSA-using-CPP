// https://leetcode.com/problems/subarray-sum-equals-k/

class Solution
{
public:
  int subarraySum(vector<int> &nums, int k)
  {
    int count = 0;
    int i = 0;
    int currSum = 0;

    unordered_map<int, int> map;

    while (i < nums.size())
    {
      currSum += nums[i];

      if (currSum == k)
      {
        count++;
      }

      if (map.find(currSum - k) != map.end())
      {
        count += map[currSum - k];
      }

      map[currSum] += 1;
      i++;
    }

    return count;
  }
};