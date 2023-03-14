// https://leetcode.com/problems/goal-parser-interpretation

class Solution
{
public:
  string interpret(string command)
  {
    string ans = "";
    for (int i = 0; i < command.length(); i++)
    {
      if (command[i] == 'G')
      {
        ans.push_back('G');
      }
      else if (command[i] == '(' && command[i + 1] == ')')
      {
        ans.push_back('o');
        i++;
      }
      else
      {
        ans += "al";
        i += 3;
      }
    }

    return ans;
  }
};