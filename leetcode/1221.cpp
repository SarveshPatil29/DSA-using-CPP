// https://leetcode.com/problems/split-a-string-in-balanced-strings/

class Solution
{
public:
  int balancedStringSplit(string s)
  {
    int rCount = 0;
    int lCount = 0;
    int ans = 0;

    for (int i = 0; i < s.length(); i++)
    {
      if (s[i] == 'R')
      {
        rCount++;
      }
      else
      {
        lCount++;
      }

      if (rCount == lCount)
      {
        ans++;
      }
    }

    return ans;
  }
};