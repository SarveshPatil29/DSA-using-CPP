// https://leetcode.com/problems/valid-parentheses/

class Solution
{
public:
  bool isValid(string s)
  {
    vector<char> v;
    for (int i = 0; i < s.length(); i++)
    {
      if (s[i] == '(' || s[i] == '{' || s[i] == '[')
      {
        v.push_back(s[i]);
        cout << "Pushed"
             << " ";
      }
      else if (s[i] == ')')
      {
        if (v.size() == 0)
        {
          return false;
        }
        if (v.back() == '(')
        {
          v.pop_back();
        }
        else
        {
          return false;
        }
      }
      else if (s[i] == '}')
      {
        if (v.size() == 0)
        {
          return false;
        }
        if (v.back() == '{')
        {
          v.pop_back();
        }
        else
        {
          return false;
        }
      }
      else if (s[i] == ']')
      {
        if (v.size() == 0)
        {
          return false;
        }
        if (v.back() == '[')
        {
          v.pop_back();
          cout << "POPED"
               << " ";
        }
        else
        {
          cout << "False"
               << " ";
          return false;
        }
      }
    }
    if (v.size() == 0)
    {
      return true;
    }
    return false;
  }
};