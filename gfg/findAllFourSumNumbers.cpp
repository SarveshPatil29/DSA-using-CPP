// https://practice.geeksforgeeks.org/problems/find-all-four-sum-numbers1732/1

class Solution
{
public:
  // arr[] : int input array of integers
  // k : the quadruple sum required
  vector<vector<int>> fourSum(vector<int> &nums, int target)
  {
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;

    for (int i = 0; i < nums.size(); i++)
    {
      for (int j = i + 1; j < nums.size(); j++)
      {
        int low = j + 1;
        int high = nums.size() - 1;
        long long sum = 1LL * target - 1LL * (nums[i] + nums[j]);

        while (low < high)
        {
          if (nums[low] + nums[high] == sum)
          {
            vector<int> temp{nums[i], nums[j], nums[low], nums[high]};
            ans.push_back(temp);

            while (low < high && nums[low] == nums[low + 1])
            {
              low++;
            }
            while (low < high && nums[high] == nums[high - 1])
            {
              high--;
            }
            low++;
            high--;
          }
          else if (nums[low] + nums[high] < sum)
          {
            low++;
          }
          else
          {
            high--;
          }
        }

        while (j + 1 < nums.size() && nums[j + 1] == nums[j])
        {
          j++;
        }
      }
      while (i + 1 < nums.size() && nums[i + 1] == nums[i])
      {
        i++;
      }
    }
    return ans;
  }
};