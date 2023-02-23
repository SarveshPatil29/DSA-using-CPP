// https://leetcode.com/problems/longest-consecutive-sequence/

class Solution
{
public:
  int longestConsecutive(vector<int> &nums)
  {
    set<int> mySet;

    for (int i = 0; i < nums.size(); i++)
    {
      mySet.insert(nums[i]);
    }

    int longestStreak = 0;

    for (int i = 0; i < nums.size(); i++)
    {
      if (!mySet.count(nums[i] - 1))
      {
        int currentStreak = 0;
        int num = nums[i];
        while (mySet.count(num))
        {
          currentStreak++;
          num++;
        }

        longestStreak = max(longestStreak, currentStreak);
      }
    }

    return longestStreak;
  }
};