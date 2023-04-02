// https://leetcode.com/problems/find-the-longest-balanced-substring-of-a-binary-string/

class Solution
{
public:
  int findTheLongestBalancedSubstring(string s)
  {
    int ans = 0;
    int zeroCount = 0;
    int oneCount = 0;

    int i = 0;
    while (i < s.length())
    {
      while (s[i] == '0' && i < s.length())
      {
        zeroCount++;
        i++;
      }
      while (s[i] == '1' && i < s.length())
      {
        oneCount++;
        i++;
      }

      ans = max(ans, 2 * min(zeroCount, oneCount));
      zeroCount = 0;
      oneCount = 0;
    }

    return ans;
  }
};