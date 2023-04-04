// https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/

class Solution
{
public:
  vector<int> findDisappearedNumbers(vector<int> &nums)
  {
    set<int> elems;
    for (int i : nums)
    {
      elems.insert(i);
    }

    vector<int> ans;
    for (int i = 1; i <= nums.size(); i++)
    {
      if (!(elems.count(i)))
      {
        ans.push_back(i);
      }
    }

    return ans;
  }
};