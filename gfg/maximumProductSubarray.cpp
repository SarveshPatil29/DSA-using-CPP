// https://practice.geeksforgeeks.org/problems/maximum-product-subarray3604/0

class Solution
{
public:
  // Function to find maximum product subarray
  long long maxProduct(vector<int> nums, int n)
  {
    long long ans = nums[0];
    long long ma = nums[0];
    long long mi = nums[0];

    for (int i = 1; i < nums.size(); i++)
    {
      if (nums[i] < 0)
      {
        swap(ma, mi);
      }
      ma = max((long long)nums[i], ma * nums[i]);
      mi = min((long long)nums[i], mi * nums[i]);
      ans = max(ans, ma);
    }
    return ans;
  }
};