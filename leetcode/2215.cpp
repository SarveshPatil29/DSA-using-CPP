// https://leetcode.com/problems/find-the-difference-of-two-arrays/

class Solution
{
public:
  vector<vector<int>> findDifference(vector<int> &nums1, vector<int> &nums2)
  {
    vector<vector<int>> ans{{}, {}};
    set<int> st1;
    set<int> st2;

    for (int i = 0; i < nums1.size(); i++)
    {
      st1.insert(nums1[i]);
    }

    for (int i = 0; i < nums2.size(); i++)
    {
      st2.insert(nums2[i]);
    }

    for (int item : st1)
    {
      if (!st2.count(item))
      {
        ans[0].push_back(item);
      }
    }

    for (int item : st2)
    {
      if (!st1.count(item))
      {
        ans[1].push_back(item);
      }
    }

    return ans;
  }
};