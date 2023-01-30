// https://leetcode.com/problems/longest-common-prefix/

class Solution
{
public:
  string longestCommonPrefix(vector<string> &strs)
  {
    bool toBreak = false;
    string ans = "";
    for (int i = 0; i < strs[0].length(); i++)
    {
      char c = strs[0][i];
      ans += c;

      for (int j = 1; j < strs.size(); j++)
      {
        if (strs[j][i] == c)
        {
        }
        else
        {
          ans.pop_back();
          toBreak = true;
          break;
        }
      }

      if (toBreak)
      {
        break;
      }
    }

    return ans;
  }
};