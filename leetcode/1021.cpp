// https://leetcode.com/problems/remove-outermost-parentheses/

class Solution
{
public:
  string removeOuterParentheses(string s)
  {
    int start = 0;
    string ans = "";
    vector<int> stack;

    for (int i = 0; i < s.length(); i++)
    {
      if (s[i] == '(')
      {
        stack.push_back('(');
      }
      else
      {
        stack.pop_back();
        if (stack.size() == 0)
        {
          for (int j = start + 1; j < i; j++)
          {
            ans.push_back(s[j]);
          }
          start = i + 1;
        }
      }
    }
    return ans;
  }
};