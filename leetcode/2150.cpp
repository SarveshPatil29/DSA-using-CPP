// https://leetcode.com/problems/find-all-lonely-numbers-in-the-array/

class Solution
{
public:
  vector<int> findLonely(vector<int> &nums)
  {
    unordered_map<int, int> freq;
    for (int i = 0; i < nums.size(); i++)
    {
      freq[nums[i]]++;
    }

    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
      if (freq[nums[i]] == 1)
      {
        if ((freq.find(nums[i] - 1) == freq.end()) && (freq.find(nums[i] + 1) == freq.end()))
        {
          ans.push_back(nums[i]);
        }
      }
    }

    return ans;
  }
};