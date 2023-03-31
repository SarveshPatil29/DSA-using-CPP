// https://leetcode.com/problems/running-sum-of-1d-array/

class Solution
{
public:
  int numIdenticalPairs(vector<int> &nums)
  {
    int ans = 0;
    unordered_map<int, int> freq;
    for (int i = 0; i < nums.size(); i++)
    {
      freq[nums[i]]++;
    }

    for (auto item : freq)
    {
      int count = item.second;
      ans += count * (count - 1) / 2;
    }

    return ans;
  }
};
// class Solution
// {
// public:
//   vector<int> runningSum(vector<int> &nums)
//   {
//     for (int i = 1; i < nums.size(); i++)
//     {
//       nums[i] += nums[i - 1];
//     }

//     return nums;
//   }
// };