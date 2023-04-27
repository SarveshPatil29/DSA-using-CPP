// https://leetcode.com/problems/arithmetic-subarrays/

class Solution
{
public:
  vector<bool> checkArithmeticSubarrays(vector<int> &nums, vector<int> &l, vector<int> &r)
  {
    int times = l.size();
    vector<bool> ans(times, true);

    for (int i = 0; i < times; i++)
    {
      vector<int> temp;
      for (int j = l[i]; j <= r[i]; j++)
      {
        temp.push_back(nums[j]);
      }

      sort(temp.begin(), temp.end());
      int size = temp.size();

      int diff = temp[0] - temp[1];
      for (int k = 1; k < size - 1; k++)
      {
        if (temp[k] - temp[k + 1] != diff)
        {
          ans[i] = false;
          break;
        }
      }
    }

    return ans;
  }
};