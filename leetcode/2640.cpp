// https://leetcode.com/problems/find-the-score-of-all-prefixes-of-an-array/

class Solution
{
public:
  vector<long long> findPrefixScore(vector<int> &nums)
  {
    long long conver = 0;
    int maxi = INT_MIN;
    long long sum = 0;
    int size = nums.size();
    vector<long long> ans(size, 0);

    for (int i = 0; i < size; i++)
    {
      maxi = max(maxi, nums[i]);
      conver = nums[i] + maxi;
      sum += conver;
      ans[i] = sum;
    }

    return ans;
  }
};