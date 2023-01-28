// https://leetcode.com/problems/remove-element/

class Solution
{
public:
  int removeElement(vector<int> &nums, int val)
  {
    sort(nums.begin(), nums.end());

    int i = 0;
    int count = 0;
    int j = 0;
    while (i < nums.size())
    {
      if (nums[i] != val)
      {
        i++;
      }
      else
      {
        count++;
        i++;
        j = i;
      }
    }

    while (j < nums.size())
    {
      nums[j - count] = nums[j];
      j++;
    }

    return nums.size() - count;
  }
};