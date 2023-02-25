// https://leetcode.com/problems/3sum/

class Solution
{
public:
  vector<vector<int>> threeSum(vector<int> &nums)
  {
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); i++)
    {
      if (i == 0 || i > 0 && nums[i] != nums[i - 1])
      {
        int j = i + 1;
        int k = nums.size() - 1;
        int sum = 0 - nums[i];

        while (j < k)
        {
          if (nums[j] + nums[k] == sum)
          {
            vector<int> temp;
            temp.push_back(nums[i]);
            temp.push_back(nums[j]);
            temp.push_back(nums[k]);
            ans.push_back(temp);
            while (j < k && nums[j] == nums[j + 1])
            {
              j++;
            }

            while (j < k && nums[k] == nums[k - 1])
            {
              k--;
            }

            j++;
            k--;
          }
          else if (nums[j] + nums[k] < sum)
          {
            j++;
          }
          else
          {
            k--;
          }
        }
      }
    }

    return ans;
  }
};