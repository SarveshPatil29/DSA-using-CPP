// https://leetcode.com/problems/simplify-path/

class Solution
{
public:
  string simplifyPath(string path)
  {

    vector<string> stack;
    string temp = "";

    for (int i = 0; i < path.length(); i++)
    {
      if (path[i] == '/')
      {
        if (temp == "..")
        {
          if (stack.size())
          {
            stack.pop_back();
          }
        }
        else if (temp != "" && temp != ".")
        {
          stack.push_back(temp);
        }
        temp = "";
      }
      else
      {
        temp.push_back(path[i]);
      }
    }
    if (temp == "..")
    {
      if (stack.size())
      {
        stack.pop_back();
      }
    }
    else if (temp != "" && temp != ".")
    {
      stack.push_back(temp);
    }

    string ans = "/";

    for (int i = 0; i < stack.size(); i++)
    {
      ans.append(stack[i]);
      ans.push_back('/');
    }

    if (ans.length() > 1)
    {
      ans.pop_back();
    }

    return ans;
  }
};