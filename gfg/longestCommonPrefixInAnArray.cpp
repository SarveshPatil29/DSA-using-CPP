// https://practice.geeksforgeeks.org/problems/longest-common-prefix-in-an-array5129/1

class Solution
{
public:
  string longestCommonPrefix(string strs[], int N)
  {
    bool toBreak = false;
    string ans = "";
    for (int i = 0; i < strs[0].length(); i++)
    {
      char c = strs[0][i];
      ans += c;

      for (int j = 1; j < N; j++)
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

    return ans.length() == 0 ? "-1" : ans;
  }
};