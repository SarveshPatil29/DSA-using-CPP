// https://leetcode.com/problems/sum-of-subarray-ranges/

class Solution
{
public:
  long long subArrayRanges(vector<int> &nums)
  {
    long long ans = 0;
    int size = nums.size();

    for (int i = 0; i < size; i++)
    {
      int smallest = nums[i];
      int largest = nums[i];

      for (int j = i; j < size; j++)
      {
        smallest = min(smallest, nums[j]);
        largest = max(largest, nums[j]);
        ans += (largest - smallest);
      }
    }

    return ans;
  }
};