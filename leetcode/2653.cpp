// https://leetcode.com/problems/sliding-subarray-beauty/

class Solution
{
public:
  int findXthElement(map<int, int> &mp, int &x)
  {
    int count = 0;
    int xthElement = 0;

    for (auto it : mp)
    {
      count += it.second;
      if (count >= x)
      {
        xthElement = it.first;
        break;
      }
    }

    return xthElement;
  }

  vector<int> getSubarrayBeauty(vector<int> &nums, int k, int x)
  {
    int size = nums.size();
    int i = 0;
    int j = 0;

    map<int, int> mp;
    vector<int> ans;

    while (j < size)
    {
      if (nums[j] < 0)
      {
        mp[nums[j]]++;
      }

      if (j - i + 1 < k)
      {
        j++;
      }
      else if (j - i + 1 == k)
      {
        int xthElement = findXthElement(mp, x);
        ans.push_back(xthElement);

        mp[nums[i]]--;
        if (mp[nums[i]] == 0)
        {
          mp.erase(nums[i]);
        }
        i++;
        j++;
      }
    }

    return ans;
  }
};