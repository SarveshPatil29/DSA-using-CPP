// https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/

class Solution
{
public:
  int maxDepth(string s)
  {
    int ans = 0;
    vector<char> stack;
    int temp = 0;
    int length = s.length();

    for (int i = 0; i < length; i++)
    {
      if (s[i] == '(')
      {
        stack.push_back('(');
        temp++;
      }
      else if (s[i] == ')')
      {
        stack.pop_back();
        ans = max(ans, temp);
        temp--;
      }
    }

    return ans;
  }
};