// https://leetcode.com/problems/minimize-maximum-pair-sum-in-array/

class Solution
{
public:
  int minPairSum(vector<int> &nums)
  {
    sort(nums.begin(), nums.end());
    int pairSum = INT_MIN;
    int low = 0;
    int high = nums.size() - 1;

    while (low < high)
    {
      pairSum = max(pairSum, nums[low] + nums[high]);
      low++;
      high--;
    }

    return pairSum;
  }
};