// https://practice.geeksforgeeks.org/problems/outermost-parentheses/1

class Solution
{
public:
  string removeOuter(string &s)
  {
    int start = 0;
    string ans = "";
    int openBrackets = 0;
    int closeBrackets = 0;

    for (int i = 0; i < s.length(); i++)
    {
      if (s[i] == '(')
      {
        openBrackets++;
        if (openBrackets != 1)
        {
          ans.push_back('(');
        }
      }
      else
      {
        closeBrackets++;
        if (closeBrackets == openBrackets)
        {
          openBrackets = 0;
          closeBrackets = 0;
        }
        else
        {
          ans.push_back(')');
        }
      }
    }
    return ans;
  }
};